/* Provide Declarations */
#include <stdarg.h>
#include <setjmp.h>
#include <limits.h>
#ifdef NEED_CBEAPINT
#include <autopilot_cbe.h>
#else
#define aesl_fopen fopen
#define aesl_freopen freopen
#define aesl_tmpfile tmpfile
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#ifdef __STRICT_ANSI__
#define inline __inline__
#define typeof __typeof__ 
#endif
#define __isoc99_fscanf fscanf
#define __isoc99_sscanf sscanf
#undef ferror
#undef feof
/* get a declaration for alloca */
#if defined(__CYGWIN__) || defined(__MINGW32__)
#define  alloca(x) __builtin_alloca((x))
#define _alloca(x) __builtin_alloca((x))
#elif defined(__APPLE__)
extern void *__builtin_alloca(unsigned long);
#define alloca(x) __builtin_alloca(x)
#define longjmp _longjmp
#define setjmp _setjmp
#elif defined(__sun__)
#if defined(__sparcv9)
extern void *__builtin_alloca(unsigned long);
#else
extern void *__builtin_alloca(unsigned int);
#endif
#define alloca(x) __builtin_alloca(x)
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__arm__)
#define alloca(x) __builtin_alloca(x)
#elif defined(_MSC_VER)
#define inline _inline
#define alloca(x) _alloca(x)
#else
#include <alloca.h>
#endif

#ifndef __GNUC__  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __EXTERNAL_WEAK__ __attribute__((weak_import))
#elif defined(__GNUC__)
#define __EXTERNAL_WEAK__ __attribute__((weak))
#else
#define __EXTERNAL_WEAK__
#endif

#if defined(__GNUC__) && (defined(__APPLE_CC__) || defined(__CYGWIN__) || defined(__MINGW32__))
#define __ATTRIBUTE_WEAK__
#elif defined(__GNUC__)
#define __ATTRIBUTE_WEAK__ __attribute__((weak))
#else
#define __ATTRIBUTE_WEAK__
#endif

#if defined(__GNUC__)
#define __HIDDEN__ __attribute__((visibility("hidden")))
#endif

#ifdef __GNUC__
#define LLVM_NAN(NanStr)   __builtin_nan(NanStr)   /* Double */
#define LLVM_NANF(NanStr)  __builtin_nanf(NanStr)  /* Float */
#define LLVM_NANS(NanStr)  __builtin_nans(NanStr)  /* Double */
#define LLVM_NANSF(NanStr) __builtin_nansf(NanStr) /* Float */
#define LLVM_INF           __builtin_inf()         /* Double */
#define LLVM_INFF          __builtin_inff()        /* Float */
#define LLVM_PREFETCH(addr,rw,locality) __builtin_prefetch(addr,rw,locality)
#define __ATTRIBUTE_CTOR__ __attribute__((constructor))
#define __ATTRIBUTE_DTOR__ __attribute__((destructor))
#define LLVM_ASM           __asm__
#else
#define LLVM_NAN(NanStr)   ((double)0.0)           /* Double */
#define LLVM_NANF(NanStr)  0.0F                    /* Float */
#define LLVM_NANS(NanStr)  ((double)0.0)           /* Double */
#define LLVM_NANSF(NanStr) 0.0F                    /* Float */
#define LLVM_INF           ((double)0.0)           /* Double */
#define LLVM_INFF          0.0F                    /* Float */
#define LLVM_PREFETCH(addr,rw,locality)            /* PREFETCH */
#define __ATTRIBUTE_CTOR__
#define __ATTRIBUTE_DTOR__
#define LLVM_ASM(X)
#endif

#if __GNUC__ < 4 /* Old GCC's, or compilers not GCC */ 
#define __builtin_stack_save() 0   /* not implemented */
#define __builtin_stack_restore(X) /* noop */
#endif

#if __GNUC__ && __LP64__ /* 128-bit integer types */
typedef int __attribute__((mode(TI))) llvmInt128;
typedef unsigned __attribute__((mode(TI))) llvmUInt128;
#endif

#define CODE_FOR_MAIN() /* Any target-specific code for main()*/

#ifndef __cplusplus
typedef unsigned char bool;
#endif


/* Support for floating point constants */
typedef unsigned long long ConstantDoubleTy;
typedef unsigned int        ConstantFloatTy;
typedef struct { unsigned long long f1; unsigned short f2; unsigned short pad[3]; } ConstantFP80Ty;
typedef struct { unsigned long long f1; unsigned long long f2; } ConstantFP128Ty;


/* Global Declarations */
/* Helper union for bitcasts */
typedef union {
  unsigned int Int32;
  unsigned long long Int64;
  float Float;
  double Double;
} llvmBitCastUnion;

/* External Global Variable Declarations */

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void fir(signed int *llvm_cbe_y,  char llvm_cbe_x);


/* Global Variable Definitions and Initialization */
static  char aesl_internal_fir_OC_shift_reg[8];


/* Function Bodies */
static inline int llvm_fcmp_ord(double X, double Y) { return X == X && Y == Y; }
static inline int llvm_fcmp_uno(double X, double Y) { return X != X || Y != Y; }
static inline int llvm_fcmp_ueq(double X, double Y) { return X == Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_une(double X, double Y) { return X != Y; }
static inline int llvm_fcmp_ult(double X, double Y) { return X <  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ugt(double X, double Y) { return X >  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ule(double X, double Y) { return X <= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_uge(double X, double Y) { return X >= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_oeq(double X, double Y) { return X == Y ; }
static inline int llvm_fcmp_one(double X, double Y) { return X != Y && llvm_fcmp_ord(X, Y); }
static inline int llvm_fcmp_olt(double X, double Y) { return X <  Y ; }
static inline int llvm_fcmp_ogt(double X, double Y) { return X >  Y ; }
static inline int llvm_fcmp_ole(double X, double Y) { return X <= Y ; }
static inline int llvm_fcmp_oge(double X, double Y) { return X >= Y ; }

void fir(signed int *llvm_cbe_y,  char llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  unsigned char llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  unsigned short llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  unsigned short llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  unsigned char llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  unsigned short llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  unsigned short llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  unsigned short llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  unsigned short llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  unsigned short llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  unsigned char llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  unsigned short llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  unsigned short llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  unsigned short llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  unsigned short llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  unsigned short llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  unsigned char llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  unsigned short llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  unsigned short llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  unsigned short llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  unsigned short llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  unsigned short llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  unsigned char llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  unsigned short llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  unsigned short llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  unsigned short llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  unsigned short llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  unsigned short llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  unsigned char llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  unsigned short llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  unsigned short llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  unsigned int llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  unsigned int llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  unsigned int llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  unsigned char llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  unsigned short llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  unsigned short llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  unsigned int llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  unsigned int llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  unsigned int llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  unsigned int llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  unsigned int llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  unsigned int llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @fir\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = load i8* getelementptr inbounds ([8 x i8]* @aesl_internal_fir.shift_reg, i64 0, i64 6), align 1, !dbg !4 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_6_count);
  llvm_cbe_tmp__1 = (unsigned char )*((&aesl_internal_fir_OC_shift_reg[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%1, i8* getelementptr inbounds ([8 x i8]* @aesl_internal_fir.shift_reg, i64 0, i64 7), align 1, !dbg !4 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_7_count);
  *((&aesl_internal_fir_OC_shift_reg[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])) = llvm_cbe_tmp__1;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = zext i8 %%1 to i12, !dbg !4 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_10_count);
  llvm_cbe_tmp__2 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__1&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = shl nuw nsw i12 %%2, 3, !dbg !4 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_11_count);
  llvm_cbe_tmp__3 = (unsigned short )llvm_cbe_tmp__2 << ((unsigned short )3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load i8* getelementptr inbounds ([8 x i8]* @aesl_internal_fir.shift_reg, i64 0, i64 5), align 1, !dbg !5 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_14_count);
  llvm_cbe_tmp__4 = (unsigned char )*((&aesl_internal_fir_OC_shift_reg[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%4, i8* getelementptr inbounds ([8 x i8]* @aesl_internal_fir.shift_reg, i64 0, i64 6), align 1, !dbg !5 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_15_count);
  *((&aesl_internal_fir_OC_shift_reg[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])) = llvm_cbe_tmp__4;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = zext i8 %%4 to i12, !dbg !5 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_18_count);
  llvm_cbe_tmp__5 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__4&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = mul i12 %%5, 7, !dbg !5 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_19_count);
  llvm_cbe_tmp__6 = (unsigned short )((unsigned short )(llvm_cbe_tmp__5&4095ull)) * ((unsigned short )(((unsigned short )7)&4095ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__6&4095ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = zext i12 %%3 to i13, !dbg !5 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_21_count);
  llvm_cbe_tmp__7 = (unsigned short )((unsigned short )(unsigned short )llvm_cbe_tmp__3&4095U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = zext i12 %%6 to i13, !dbg !5 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_23_count);
  llvm_cbe_tmp__8 = (unsigned short )((unsigned short )(unsigned short )llvm_cbe_tmp__6&4095U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = add i13 %%8, %%7, !dbg !5 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_24_count);
  llvm_cbe_tmp__9 = (unsigned short )((unsigned short )(llvm_cbe_tmp__8&8191ull)) + ((unsigned short )(llvm_cbe_tmp__7&8191ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__9&8191ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i8* getelementptr inbounds ([8 x i8]* @aesl_internal_fir.shift_reg, i64 0, i64 4), align 1, !dbg !6 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_27_count);
  llvm_cbe_tmp__10 = (unsigned char )*((&aesl_internal_fir_OC_shift_reg[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%10, i8* getelementptr inbounds ([8 x i8]* @aesl_internal_fir.shift_reg, i64 0, i64 5), align 1, !dbg !6 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_28_count);
  *((&aesl_internal_fir_OC_shift_reg[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])) = llvm_cbe_tmp__10;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = zext i8 %%10 to i12, !dbg !6 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_31_count);
  llvm_cbe_tmp__11 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__10&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = mul i12 %%11, 6, !dbg !6 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_32_count);
  llvm_cbe_tmp__12 = (unsigned short )((unsigned short )(llvm_cbe_tmp__11&4095ull)) * ((unsigned short )(((unsigned short )6)&4095ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__12&4095ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = zext i13 %%9 to i14, !dbg !6 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_34_count);
  llvm_cbe_tmp__13 = (unsigned short )((unsigned short )(unsigned short )llvm_cbe_tmp__9&8191U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = zext i12 %%12 to i14, !dbg !6 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_36_count);
  llvm_cbe_tmp__14 = (unsigned short )((unsigned short )(unsigned short )llvm_cbe_tmp__12&4095U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__14);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = add i14 %%13, %%14, !dbg !6 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_37_count);
  llvm_cbe_tmp__15 = (unsigned short )((unsigned short )(llvm_cbe_tmp__13&16383ull)) + ((unsigned short )(llvm_cbe_tmp__14&16383ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__15&16383ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load i8* getelementptr inbounds ([8 x i8]* @aesl_internal_fir.shift_reg, i64 0, i64 3), align 1, !dbg !7 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_40_count);
  llvm_cbe_tmp__16 = (unsigned char )*((&aesl_internal_fir_OC_shift_reg[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%16, i8* getelementptr inbounds ([8 x i8]* @aesl_internal_fir.shift_reg, i64 0, i64 4), align 1, !dbg !7 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_41_count);
  *((&aesl_internal_fir_OC_shift_reg[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])) = llvm_cbe_tmp__16;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = zext i8 %%16 to i12, !dbg !7 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_44_count);
  llvm_cbe_tmp__17 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__16&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = mul i12 %%17, 5, !dbg !7 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_45_count);
  llvm_cbe_tmp__18 = (unsigned short )((unsigned short )(llvm_cbe_tmp__17&4095ull)) * ((unsigned short )(((unsigned short )5)&4095ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__18&4095ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = zext i14 %%15 to i15, !dbg !7 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_47_count);
  llvm_cbe_tmp__19 = (unsigned short )((unsigned short )(unsigned short )llvm_cbe_tmp__15&16383U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = zext i12 %%18 to i15, !dbg !7 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_49_count);
  llvm_cbe_tmp__20 = (unsigned short )((unsigned short )(unsigned short )llvm_cbe_tmp__18&4095U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = add i15 %%19, %%20, !dbg !7 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_50_count);
  llvm_cbe_tmp__21 = (unsigned short )((unsigned short )(llvm_cbe_tmp__19&32767ull)) + ((unsigned short )(llvm_cbe_tmp__20&32767ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__21&32767ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load i8* getelementptr inbounds ([8 x i8]* @aesl_internal_fir.shift_reg, i64 0, i64 2), align 1, !dbg !7 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_53_count);
  llvm_cbe_tmp__22 = (unsigned char )*((&aesl_internal_fir_OC_shift_reg[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%22, i8* getelementptr inbounds ([8 x i8]* @aesl_internal_fir.shift_reg, i64 0, i64 3), align 1, !dbg !7 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_54_count);
  *((&aesl_internal_fir_OC_shift_reg[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])) = llvm_cbe_tmp__22;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = zext i8 %%22 to i12, !dbg !8 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_57_count);
  llvm_cbe_tmp__23 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__22&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = shl nuw nsw i12 %%23, 2, !dbg !8 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_58_count);
  llvm_cbe_tmp__24 = (unsigned short )llvm_cbe_tmp__23 << ((unsigned short )2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = zext i15 %%21 to i16, !dbg !7 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_60_count);
  llvm_cbe_tmp__25 = (unsigned short )((unsigned short )(unsigned short )llvm_cbe_tmp__21&32767U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = zext i12 %%24 to i16, !dbg !7 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_62_count);
  llvm_cbe_tmp__26 = (unsigned short )((unsigned short )(unsigned short )llvm_cbe_tmp__24&4095U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = add i16 %%25, %%26, !dbg !7 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_63_count);
  llvm_cbe_tmp__27 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__25&65535ull)) + ((unsigned short )(llvm_cbe_tmp__26&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__27&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = load i8* getelementptr inbounds ([8 x i8]* @aesl_internal_fir.shift_reg, i64 0, i64 1), align 1, !dbg !8 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_66_count);
  llvm_cbe_tmp__28 = (unsigned char )*((&aesl_internal_fir_OC_shift_reg[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%28, i8* getelementptr inbounds ([8 x i8]* @aesl_internal_fir.shift_reg, i64 0, i64 2), align 1, !dbg !8 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_67_count);
  *((&aesl_internal_fir_OC_shift_reg[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])) = llvm_cbe_tmp__28;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = zext i8 %%28 to i12, !dbg !8 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_70_count);
  llvm_cbe_tmp__29 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__28&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = mul i12 %%29, 3, !dbg !8 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_71_count);
  llvm_cbe_tmp__30 = (unsigned short )((unsigned short )(llvm_cbe_tmp__29&4095ull)) * ((unsigned short )(((unsigned short )3)&4095ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__30&4095ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = zext i16 %%27 to i17, !dbg !8 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_73_count);
  llvm_cbe_tmp__31 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__27&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = zext i12 %%30 to i17, !dbg !8 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_75_count);
  llvm_cbe_tmp__32 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__30&4095U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = add i17 %%31, %%32, !dbg !8 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_76_count);
  llvm_cbe_tmp__33 = (unsigned int )((unsigned int )(llvm_cbe_tmp__31&131071ull)) + ((unsigned int )(llvm_cbe_tmp__32&131071ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__33&131071ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = load i8* getelementptr inbounds ([8 x i8]* @aesl_internal_fir.shift_reg, i64 0, i64 0), align 1, !dbg !9 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_79_count);
  llvm_cbe_tmp__34 = (unsigned char )*((&aesl_internal_fir_OC_shift_reg[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%34, i8* getelementptr inbounds ([8 x i8]* @aesl_internal_fir.shift_reg, i64 0, i64 1), align 1, !dbg !9 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_80_count);
  *((&aesl_internal_fir_OC_shift_reg[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])) = llvm_cbe_tmp__34;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = zext i8 %%34 to i12, !dbg !9 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_83_count);
  llvm_cbe_tmp__35 = (unsigned short )((unsigned short )(unsigned char )llvm_cbe_tmp__34&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = shl nuw nsw i12 %%35, 1, !dbg !9 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_84_count);
  llvm_cbe_tmp__36 = (unsigned short )llvm_cbe_tmp__35 << ((unsigned short )1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = zext i17 %%33 to i18, !dbg !9 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_86_count);
  llvm_cbe_tmp__37 = (unsigned int )((unsigned int )(unsigned int )llvm_cbe_tmp__33&131071U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = zext i12 %%36 to i18, !dbg !9 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_88_count);
  llvm_cbe_tmp__38 = (unsigned int )((unsigned int )(unsigned short )llvm_cbe_tmp__36&4095U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = add i18 %%37, %%38, !dbg !9 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_89_count);
  llvm_cbe_tmp__39 = (unsigned int )((unsigned int )(llvm_cbe_tmp__37&262143ull)) + ((unsigned int )(llvm_cbe_tmp__38&262143ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__39&262143ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i8 %%x, i8* getelementptr inbounds ([8 x i8]* @aesl_internal_fir.shift_reg, i64 0, i64 0), align 1, !dbg !4 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_92_count);
  *((&aesl_internal_fir_OC_shift_reg[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 8
#endif
])) = llvm_cbe_x;
if (AESL_DEBUG_TRACE)
printf("\nx = 0x%X\n", llvm_cbe_x);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = zext i18 %%39 to i19, !dbg !10 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_95_count);
  llvm_cbe_tmp__40 = (unsigned int )((unsigned int )(unsigned int )llvm_cbe_tmp__39&262143U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = zext i8 %%x to i19, !dbg !10 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_97_count);
  llvm_cbe_tmp__41 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_x&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = add i19 %%40, %%41, !dbg !10 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_98_count);
  llvm_cbe_tmp__42 = (unsigned int )((unsigned int )(llvm_cbe_tmp__40&524287ull)) + ((unsigned int )(llvm_cbe_tmp__41&524287ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__42&524287ull)));
if (AESL_DEBUG_TRACE)
printf("\n  store i19 %%42, i19* %%y, align 4, !dbg !3 for 0x%I64xth hint within @fir  --> \n", ++aesl_llvm_cbe_101_count);
  *llvm_cbe_y = ((llvm_cbe_tmp__42) & 524287ull);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__42);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @fir}\n");
  return;
}

