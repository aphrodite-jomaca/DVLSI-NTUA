# 1 "svm_top.cpp"
# 1 "svm_top.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 152 "<built-in>" 3
# 1 "<command line>" 1







# 1 "C:/Xilinx/Vivado/2018.2/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
# 157 "C:/Xilinx/Vivado/2018.2/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
extern "C" {






    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));


    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));




    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));

    void _ssdm_op_Return(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));

    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));

    void __xilinx_ip_top(...) __attribute__ ((nothrow));


}
# 9 "<command line>" 2
# 1 "<built-in>" 2
# 1 "svm_top.cpp" 2
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 1 3
# 37 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 3
# 37 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 3

# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 1 3
# 275 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/os_defines.h" 1 3
# 276 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 2 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/cpu_defines.h" 1 3
# 279 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 2 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 1 3
# 38 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
# 38 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3

# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 1 3
# 37 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 3
# 37 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 3

# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 1 3
# 38 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 3
# 38 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 1 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 3



namespace std {

  template<typename _Alloc>
    class allocator;







  template<class _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_string;

  template<> struct char_traits<char>;

  typedef basic_string<char> string;


  template<> struct char_traits<wchar_t>;

  typedef basic_string<wchar_t> wstring;
# 82 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 3
}
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 1 3
# 40 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
# 40 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3

# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 1 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 31 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;
# 44 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3




namespace std {

  using ::ptrdiff_t;
  using ::size_t;

}
# 44 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 2 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 1 3








# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 10 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 1 3
# 10 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 277 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 1 3
# 13 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 674 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_directx.h" 1 3
# 674 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3

# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3
# 675 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 13 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {





  typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 99 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
}


#pragma pack(pop)
# 277 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 370 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long size_t;
# 380 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ssize_t;
# 392 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long intptr_t;
# 405 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long uintptr_t;
# 418 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ptrdiff_t;
# 436 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
# 456 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;







typedef __time64_t time_t;
# 607 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;
} threadlocinfo;



extern "C" {



const char *__mingw_get_crt_info (void);


}


#pragma pack(pop)
# 9 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 27 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
  };
  typedef struct _iobuf FILE;





  __attribute__ ((__dllimport__)) FILE * __iob_func(void);
# 66 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  typedef unsigned long _fsize_t;




  struct _wfinddata32_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    _fsize_t size;
    wchar_t name[260];
  };

  struct _wfinddata32i64_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    __extension__ long long size;
    wchar_t name[260];
  };

  struct _wfinddata64i32_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    _fsize_t size;
    wchar_t name[260];
  };

  struct _wfinddata64_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    __extension__ long long size;
    wchar_t name[260];
  };
# 164 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  extern unsigned short ** __imp__pctype;
# 178 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  extern unsigned short ** __imp__wctype;
# 193 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  extern unsigned short ** __imp__pwctype;
# 217 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  int iswalpha(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswalpha_l(wint_t _C,_locale_t _Locale);
  int iswupper(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswupper_l(wint_t _C,_locale_t _Locale);
  int iswlower(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswlower_l(wint_t _C,_locale_t _Locale);
  int iswdigit(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswdigit_l(wint_t _C,_locale_t _Locale);
  int iswxdigit(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswxdigit_l(wint_t _C,_locale_t _Locale);
  int iswspace(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswspace_l(wint_t _C,_locale_t _Locale);
  int iswpunct(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswpunct_l(wint_t _C,_locale_t _Locale);
  int iswalnum(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswalnum_l(wint_t _C,_locale_t _Locale);
  int iswprint(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswprint_l(wint_t _C,_locale_t _Locale);
  int iswgraph(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswgraph_l(wint_t _C,_locale_t _Locale);
  int iswcntrl(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswcntrl_l(wint_t _C,_locale_t _Locale);
  int iswascii(wint_t _C);
  int isleadbyte(int _C);
  __attribute__ ((__dllimport__)) int _isleadbyte_l(int _C,_locale_t _Locale);
  wint_t towupper(wint_t _C);
  __attribute__ ((__dllimport__)) wint_t _towupper_l(wint_t _C,_locale_t _Locale);
  wint_t towlower(wint_t _C);
  __attribute__ ((__dllimport__)) wint_t _towlower_l(wint_t _C,_locale_t _Locale);
  int iswctype(wint_t _C,wctype_t _Type);
  __attribute__ ((__dllimport__)) int _iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __iswcsymf(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswcsymf_l(wint_t _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __iswcsym(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswcsym_l(wint_t _C,_locale_t _Locale);
  int is_wctype(wint_t _C,wctype_t _Type);


  int iswblank(wint_t _C);







  __attribute__ ((__dllimport__)) wchar_t * _wgetcwd(wchar_t *_DstBuf,int _SizeInWords);
  __attribute__ ((__dllimport__)) wchar_t * _wgetdcwd(int _Drive,wchar_t *_DstBuf,int _SizeInWords);
  wchar_t * _wgetdcwd_nolock(int _Drive,wchar_t *_DstBuf,int _SizeInWords);
  __attribute__ ((__dllimport__)) int _wchdir(const wchar_t *_Path);
  __attribute__ ((__dllimport__)) int _wmkdir(const wchar_t *_Path);
  __attribute__ ((__dllimport__)) int _wrmdir(const wchar_t *_Path);





  __attribute__ ((__dllimport__)) int _waccess(const wchar_t *_Filename,int _AccessMode);
  __attribute__ ((__dllimport__)) int _wchmod(const wchar_t *_Filename,int _Mode);
  __attribute__ ((__dllimport__)) int _wcreat(const wchar_t *_Filename,int _PermissionMode) ;
  __attribute__ ((__dllimport__)) intptr_t _wfindfirst32(const wchar_t *_Filename,struct _wfinddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int _wfindnext32(intptr_t _FindHandle,struct _wfinddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int _wunlink(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) int _wrename(const wchar_t *_NewFilename,const wchar_t *_OldFilename);
  __attribute__ ((__dllimport__)) wchar_t * _wmktemp(wchar_t *_TemplateName) ;
  __attribute__ ((__dllimport__)) intptr_t _wfindfirst32i64(const wchar_t *_Filename,struct _wfinddata32i64_t *_FindData);
  intptr_t _wfindfirst64i32(const wchar_t *_Filename,struct _wfinddata64i32_t *_FindData);
  __attribute__ ((__dllimport__)) intptr_t _wfindfirst64(const wchar_t *_Filename,struct _wfinddata64_t *_FindData);
  __attribute__ ((__dllimport__)) int _wfindnext32i64(intptr_t _FindHandle,struct _wfinddata32i64_t *_FindData);
  int _wfindnext64i32(intptr_t _FindHandle,struct _wfinddata64i32_t *_FindData);
  __attribute__ ((__dllimport__)) int _wfindnext64(intptr_t _FindHandle,struct _wfinddata64_t *_FindData);
  __attribute__ ((__dllimport__)) errno_t _wsopen_s(int *_FileHandle,const wchar_t *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionFlag);
  __attribute__ ((__dllimport__)) int _wopen(const wchar_t *_Filename,int _OpenFlag,...) ;
  __attribute__ ((__dllimport__)) int _wsopen(const wchar_t *_Filename,int _OpenFlag,int _ShareFlag,...) ;




  __attribute__ ((__dllimport__)) wchar_t * _wsetlocale(int _Category,const wchar_t *_Locale);





  __attribute__ ((__dllimport__)) intptr_t _wexecl(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexecle(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexeclp(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexeclpe(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexecv(const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wexecve(const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _wexecvp(const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wexecvpe(const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _wspawnl(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnle(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnlp(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnlpe(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnv(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wspawnve(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _wspawnvp(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wspawnvpe(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);


  __attribute__ ((__dllimport__)) int _wsystem(const wchar_t *_Command);
# 360 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  typedef unsigned short _ino_t;

  typedef unsigned short ino_t;





  typedef unsigned int _dev_t;

  typedef unsigned int dev_t;







  typedef long _off_t;

  typedef long off_t;






  __extension__ typedef long long _off64_t;

  __extension__ typedef long long off64_t;
# 412 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  struct _stat32 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    __time32_t st_atime;
    __time32_t st_mtime;
    __time32_t st_ctime;
  };


  struct stat {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    time_t st_atime;
    time_t st_mtime;
    time_t st_ctime;
  };


  struct _stat32i64 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    __extension__ long long st_size;
    __time32_t st_atime;
    __time32_t st_mtime;
    __time32_t st_ctime;
  };

  struct _stat64i32 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
  };

  struct _stat64 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    __extension__ long long st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
  };
# 493 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) int _wstat32(const wchar_t *_Name,struct _stat32 *_Stat);
  __attribute__ ((__dllimport__)) int _wstat32i64(const wchar_t *_Name,struct _stat32i64 *_Stat);
  int _wstat64i32(const wchar_t *_Name,struct _stat64i32 *_Stat);
  __attribute__ ((__dllimport__)) int _wstat64(const wchar_t *_Name,struct _stat64 *_Stat);
# 507 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) wchar_t *_cgetws(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wint_t _getwch(void);
  __attribute__ ((__dllimport__)) wint_t _getwche(void);
  __attribute__ ((__dllimport__)) wint_t _putwch(wchar_t _WCh);
  __attribute__ ((__dllimport__)) wint_t _ungetwch(wint_t _WCh);
  __attribute__ ((__dllimport__)) int _cputws(const wchar_t *_String);
  __attribute__ ((__dllimport__)) int _cwprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _cwscanf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _cwscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vcwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _cwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vcwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);

  __attribute__ ((__dllimport__)) int _cwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vcwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _cwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vcwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  wint_t _putwch_nolock(wchar_t _WCh);
  wint_t _getwch_nolock(void);
  wint_t _getwche_nolock(void);
  wint_t _ungetwch_nolock(wint_t _WCh);
# 540 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) FILE * _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fgetwchar(void);
  wint_t fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwchar(wchar_t _Ch);
  wint_t getwc(FILE *_File);
  wint_t getwchar(void);
  wint_t putwc(wchar_t _Ch,FILE *_File);
  wint_t putwchar(wchar_t _Ch);
  wint_t ungetwc(wint_t _Ch,FILE *_File);
  wchar_t * fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t * _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int _putws(const wchar_t *_Str);
  int fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  int wprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _scwprintf(const wchar_t * __restrict__ _Format,...);
  int vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  int vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...) ;
  __attribute__ ((__dllimport__)) int _swprintf_l(wchar_t * __restrict__ ,size_t _SizeInWords,const wchar_t * __restrict__ _Format,_locale_t _Locale,... ) ;
  __attribute__ ((__dllimport__)) int vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list) ;
  __attribute__ ((__dllimport__)) int _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;

  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
  int vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);






  int vwscanf (const wchar_t * __restrict__ , va_list);
  int vfwscanf (FILE * __restrict__ ,const wchar_t * __restrict__ ,va_list);
  int vswscanf (const wchar_t * __restrict__ ,const wchar_t * __restrict__ ,va_list);

  __attribute__ ((__dllimport__)) int _fwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _wprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _wprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _wprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _fwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _fwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vfwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _swprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vswprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _scwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vsnwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
  __attribute__ ((__dllimport__)) int __swprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,...) ;
  __attribute__ ((__dllimport__)) int _vswprintf_l(wchar_t * __restrict__ _Dest,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int __vswprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,va_list _Args) ;
# 621 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) wchar_t * _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vscwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  int fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _fwscanf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  int swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _swscanf_l(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) int _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _snwscanf_l(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  int wscanf(const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _wscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) FILE * _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE * _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE * _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;



  __attribute__ ((__dllimport__)) void _wperror(const wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) FILE * _wpopen(const wchar_t *_Command,const wchar_t *_Mode);



  __attribute__ ((__dllimport__)) int _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t * _wtmpnam(wchar_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _ungetwc_nolock(wint_t _Ch,FILE *_File);
# 669 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) wchar_t * _itow(int _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t * _ltow(long _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t * _ultow(unsigned long _Value,wchar_t *_Dest,int _Radix) ;
  double wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  __attribute__ ((__dllimport__)) double _wcstod_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,_locale_t _Locale);
  float wcstof( const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);

  float wcstof (const wchar_t * __restrict__, wchar_t ** __restrict__);
  long double wcstold (const wchar_t * __restrict__, wchar_t ** __restrict__);

  long wcstol(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long _wcstol_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long wcstoul(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long _wcstoul_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wgetenv(const wchar_t *_VarName) ;




  __attribute__ ((__dllimport__)) double _wtof(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) double _wtof_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wtoi(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) int _wtoi_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) long _wtol(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) long _wtol_l(const wchar_t *_Str,_locale_t _Locale);

  __extension__ __attribute__ ((__dllimport__)) wchar_t * _i64tow(long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) wchar_t * _ui64tow(unsigned long long _Val,wchar_t *_DstBuf,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long _wtoi64(const wchar_t *_Str);
  __extension__ __attribute__ ((__dllimport__)) long long _wtoi64_l(const wchar_t *_Str,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long _wcstoi64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long _wcstoi64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _wcstoui64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _wcstoui64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);





  __attribute__ ((__dllimport__)) wchar_t * _wfullpath(wchar_t *_FullPath,const wchar_t *_Path,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) void _wmakepath(wchar_t *_ResultPath,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);




  __attribute__ ((__dllimport__)) int _wputenv(const wchar_t *_EnvString);
  __attribute__ ((__dllimport__)) void _wsearchenv(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath) ;
  __attribute__ ((__dllimport__)) void _wsplitpath(const wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext) ;





  __attribute__ ((__dllimport__)) wchar_t * _wcsdup(const wchar_t *_Str);
  wchar_t * wcscat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
                wchar_t * wcschr(const wchar_t *_Str,wchar_t _Ch);
  int wcscmp(const wchar_t *_Str1,const wchar_t *_Str2);
  wchar_t * wcscpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
  size_t wcscspn(const wchar_t *_Str,const wchar_t *_Control);
  size_t wcslen(const wchar_t *_Str);
  size_t wcsnlen(const wchar_t *_Src,size_t _MaxCount);
  wchar_t * wcsncat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  int wcsncmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  wchar_t * wcsncpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  wchar_t * _wcsncpy_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count,_locale_t _Locale) ;
                wchar_t * wcspbrk(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t * wcsrchr(const wchar_t *_Str,wchar_t _Ch);
  size_t wcsspn(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t * wcsstr(const wchar_t *_Str,const wchar_t *_SubStr);
  wchar_t * wcstok(wchar_t * __restrict__ _Str,const wchar_t * __restrict__ _Delim) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcserror(int _ErrNum) ;
  __attribute__ ((__dllimport__)) wchar_t * __wcserror(const wchar_t *_Str) ;
  __attribute__ ((__dllimport__)) int _wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcsicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsnicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcsrev(wchar_t *_Str);
  __attribute__ ((__dllimport__)) wchar_t * _wcsset(wchar_t *_Str,wchar_t _Val) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcslwr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcslwr_l(wchar_t *_String,_locale_t _Locale) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcsupr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcsupr_l(wchar_t *_String,_locale_t _Locale) ;
  size_t wcsxfrm(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _wcsxfrm_l(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);
  int wcscoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcscoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcsicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsncoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsncoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsnicoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsnicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);


  wchar_t * wcsdup(const wchar_t *_Str) ;

  int wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2) ;
  int wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount) ;
  wchar_t * wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  wchar_t * wcsrev(wchar_t *_Str) ;
  wchar_t * wcsset(wchar_t *_Str,wchar_t _Val) ;
  wchar_t * wcslwr(wchar_t *_Str) ;
  wchar_t * wcsupr(wchar_t *_Str) ;
  int wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2) ;





  struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
  };





  __attribute__ ((__dllimport__)) wchar_t * _wasctime(const struct tm *_Tm);
  wchar_t * _wctime32(const __time32_t *_Time) ;
  size_t wcsftime(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm);
  __attribute__ ((__dllimport__)) size_t _wcsftime_l(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wstrdate(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wchar_t * _wstrtime(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wchar_t * _wctime64(const __time64_t *_Time) ;



  wchar_t * _wctime(const time_t *_Time) ;
# 816 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  typedef int mbstate_t;
  typedef wchar_t _Wint_t;

  wint_t btowc(int);
  size_t mbrlen(const char * __restrict__ _Ch,size_t _SizeInBytes,mbstate_t * __restrict__ _State);
  size_t mbrtowc(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SizeInBytes,mbstate_t * __restrict__ _State);
  size_t mbsrtowcs(wchar_t * __restrict__ _Dest,const char ** __restrict__ _PSrc,size_t _Count,mbstate_t * __restrict__ _State) ;
  size_t wcrtomb(char * __restrict__ _Dest,wchar_t _Source,mbstate_t * __restrict__ _State) ;
  size_t wcsrtombs(char * __restrict__ _Dest,const wchar_t ** __restrict__ _PSource,size_t _Count,mbstate_t * __restrict__ _State) ;
  int wctob(wint_t _WCh);


  wchar_t * wmemset(wchar_t *s, wchar_t c, size_t n);
                wchar_t * wmemchr(const wchar_t *s, wchar_t c, size_t n);
  int wmemcmp(const wchar_t *s1, const wchar_t *s2,size_t n);
  wchar_t * wmemcpy(wchar_t * __restrict__ s1,const wchar_t * __restrict__ s2,size_t n) ;
  wchar_t * wmemmove(wchar_t *s1, const wchar_t *s2, size_t n) ;
  int fwide(FILE *stream,int mode);
  int mbsinit(const mbstate_t *ps);
  __extension__ long long wcstoll(const wchar_t * __restrict__ nptr,wchar_t ** __restrict__ endptr, int base);
  __extension__ unsigned long long wcstoull(const wchar_t * __restrict__ nptr,wchar_t ** __restrict__ endptr, int base);


  void * memmove(void *_Dst,const void *_Src,size_t _MaxCount);
  void * memcpy(void * __restrict__ _Dst,const void * __restrict__ _Src,size_t _MaxCount) ;
# 876 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
}


#pragma pack(pop)


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/wchar_s.h" 1 3








# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 1 3
# 9 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/wchar_s.h" 2 3
# 881 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 2 3
# 47 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 2 3
# 64 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
namespace std {

  using ::mbstate_t;

}
# 138 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
namespace std {

  using ::wint_t;

  using ::btowc;
  using ::fgetwc;
  using ::fgetws;
  using ::fputwc;
  using ::fputws;
  using ::fwide;
  using ::fwprintf;
  using ::fwscanf;
  using ::getwc;
  using ::getwchar;
  using ::mbrlen;
  using ::mbrtowc;
  using ::mbsinit;
  using ::mbsrtowcs;
  using ::putwc;
  using ::putwchar;



  using ::swscanf;
  using ::ungetwc;
  using ::vfwprintf;

  using ::vfwscanf;





  using ::vswscanf;

  using ::vwprintf;

  using ::vwscanf;

  using ::wcrtomb;
  using ::wcscat;
  using ::wcscmp;
  using ::wcscoll;
  using ::wcscpy;
  using ::wcscspn;
  using ::wcsftime;
  using ::wcslen;
  using ::wcsncat;
  using ::wcsncmp;
  using ::wcsncpy;
  using ::wcsrtombs;
  using ::wcsspn;
  using ::wcstod;

  using ::wcstof;

  using ::wcstok;
  using ::wcstol;
  using ::wcstoul;
  using ::wcsxfrm;
  using ::wctob;
  using ::wmemcmp;
  using ::wmemcpy;
  using ::wmemmove;
  using ::wmemset;
  using ::wprintf;
  using ::wscanf;
  using ::wcschr;
  using ::wcspbrk;
  using ::wcsrchr;
  using ::wcsstr;
  using ::wmemchr;


  inline wchar_t*
  wcschr(wchar_t* __p, wchar_t __c)
  { return wcschr(const_cast<const wchar_t*>(__p), __c); }

  inline wchar_t*
  wcspbrk(wchar_t* __s1, const wchar_t* __s2)
  { return wcspbrk(const_cast<const wchar_t*>(__s1), __s2); }

  inline wchar_t*
  wcsrchr(wchar_t* __p, wchar_t __c)
  { return wcsrchr(const_cast<const wchar_t*>(__p), __c); }

  inline wchar_t*
  wcsstr(wchar_t* __s1, const wchar_t* __s2)
  { return wcsstr(const_cast<const wchar_t*>(__s1), __s2); }

  inline wchar_t*
  wmemchr(wchar_t* __p, wchar_t __c, size_t __n)
  { return wmemchr(const_cast<const wchar_t*>(__p), __c, __n); }


}







namespace __gnu_cxx {






  using ::wcstold;
# 257 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
  using ::wcstoll;
  using ::wcstoull;


}

namespace std {

  using ::__gnu_cxx::wcstold;
  using ::__gnu_cxx::wcstoll;
  using ::__gnu_cxx::wcstoull;

}
# 42 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 2 3
# 69 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
namespace std {
# 89 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
  typedef long long streamoff;







  typedef ptrdiff_t streamsize;
# 110 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
  template<typename _StateT>
    class fpos
    {
    private:
      streamoff _M_off;
      _StateT _M_state;

    public:




      fpos()
      : _M_off(0), _M_state() { }
# 132 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
      fpos(streamoff __off)
      : _M_off(__off), _M_state() { }


      operator streamoff() const { return _M_off; }


      void
      state(_StateT __st)
      { _M_state = __st; }


      _StateT
      state() const
      { return _M_state; }





      fpos&
      operator+=(streamoff __off)
      {
 _M_off += __off;
 return *this;
      }





      fpos&
      operator-=(streamoff __off)
      {
 _M_off -= __off;
 return *this;
      }







      fpos
      operator+(streamoff __off) const
      {
 fpos __pos(*this);
 __pos += __off;
 return __pos;
      }







      fpos
      operator-(streamoff __off) const
      {
 fpos __pos(*this);
 __pos -= __off;
 return __pos;
      }






      streamoff
      operator-(const fpos& __other) const
      { return _M_off - __other._M_off; }
    };






  template<typename _StateT>
    inline bool
    operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) == streamoff(__rhs); }

  template<typename _StateT>
    inline bool
    operator!=(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) != streamoff(__rhs); }





  typedef fpos<mbstate_t> streampos;

  typedef fpos<mbstate_t> wstreampos;
# 238 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
}
# 42 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 2 3

namespace std {
# 73 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 3
  class ios_base;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ios;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_streambuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_istream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_iostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
     typename _Alloc = allocator<_CharT> >
    class basic_stringbuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_istringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_ostringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_stringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_filebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ofstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_fstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class ostreambuf_iterator;




  typedef basic_ios<char> ios;
  typedef basic_streambuf<char> streambuf;
  typedef basic_istream<char> istream;
  typedef basic_ostream<char> ostream;
  typedef basic_iostream<char> iostream;
  typedef basic_stringbuf<char> stringbuf;
  typedef basic_istringstream<char> istringstream;
  typedef basic_ostringstream<char> ostringstream;
  typedef basic_stringstream<char> stringstream;
  typedef basic_filebuf<char> filebuf;
  typedef basic_ifstream<char> ifstream;
  typedef basic_ofstream<char> ofstream;
  typedef basic_fstream<char> fstream;


  typedef basic_ios<wchar_t> wios;
  typedef basic_streambuf<wchar_t> wstreambuf;
  typedef basic_istream<wchar_t> wistream;
  typedef basic_ostream<wchar_t> wostream;
  typedef basic_iostream<wchar_t> wiostream;
  typedef basic_stringbuf<wchar_t> wstringbuf;
  typedef basic_istringstream<wchar_t> wistringstream;
  typedef basic_ostringstream<wchar_t> wostringstream;
  typedef basic_stringstream<wchar_t> wstringstream;
  typedef basic_filebuf<wchar_t> wfilebuf;
  typedef basic_ifstream<wchar_t> wifstream;
  typedef basic_ofstream<wchar_t> wofstream;
  typedef basic_fstream<wchar_t> wfstream;



}
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 1 3
# 35 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
# 35 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3

#pragma GCC visibility push(default)



extern "C++" {

namespace std
{
# 60 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
  class exception
  {
  public:
    exception() throw() { }
    virtual ~exception() throw();



    virtual const char* what() const throw();
  };



  class bad_exception : public exception
  {
  public:
    bad_exception() throw() { }



    virtual ~bad_exception() throw();


    virtual const char* what() const throw();
  };


  typedef void (*terminate_handler) ();


  typedef void (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_handler) throw();



  void terminate() throw() __attribute__ ((__noreturn__));


  unexpected_handler set_unexpected(unexpected_handler) throw();



  void unexpected() __attribute__ ((__noreturn__));
# 117 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
  bool uncaught_exception() throw() __attribute__ ((__pure__));


}

namespace __gnu_cxx {
# 140 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
  void __verbose_terminate_handler();

}

}

#pragma GCC visibility pop
# 40 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 1 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3

# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 1 3
# 61 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 62 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 1 3
# 37 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception_defines.h" 1 3
# 38 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 2 3

namespace std {


  void
  __throw_bad_exception(void) __attribute__((__noreturn__));


  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));


  void
  __throw_bad_cast(void) __attribute__((__noreturn__));

  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));


  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));

  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));

  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));

  void
  __throw_length_error(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));

  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));

  void
  __throw_range_error(const char*) __attribute__((__noreturn__));

  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));

  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));


  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));

  void
  __throw_system_error(int) __attribute__((__noreturn__));

  void
  __throw_future_error(int) __attribute__((__noreturn__));


  void
  __throw_bad_function_call() __attribute__((__noreturn__));

}
# 63 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 1 3
# 36 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
# 36 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
# 68 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
namespace __gnu_cxx {

  template<typename _Iterator, typename _Container>
    class __normal_iterator;

}

namespace std {

  struct __true_type { };
  struct __false_type { };

  template<bool>
    struct __truth_type
    { typedef __false_type __type; };

  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };



  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };


  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };




  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
# 193 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };


  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_normal_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Iterator, typename _Container>
    struct __is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator,
             _Container> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };




  template<typename _Tp>
    struct __is_fundamental
    : public __traitor<__is_void<_Tp>, __is_arithmetic<_Tp> >
    { };




  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };




  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
# 416 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
  template<typename _Tp>
    class __is_iterator_helper
    {
      typedef char __one;
      typedef struct { char __arr[2]; } __two;

      template<typename _Up>
        struct _Wrap_type
 { };

      template<typename _Up>
        static __one __test(_Wrap_type<typename _Up::iterator_category>*);

      template<typename _Up>
        static __two __test(...);

    public:
      static const bool __value = (sizeof(__test<_Tp>(0)) == 1
       || __is_pointer<_Tp>::__value);
    };

  template<typename _Tp>
    struct __is_iterator
    {
      enum { __value = __is_iterator_helper<_Tp>::__value };
      typedef typename __truth_type<__value>::__type __type;
    };

}
# 64 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 1 3
# 32 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 3
# 32 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 3




namespace __gnu_cxx {


  template<bool, typename>
    struct __enable_if
    { };

  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };



  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };

  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };



  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };


  template<>
    struct __add_unsigned<bool>;

  template<>
    struct __add_unsigned<wchar_t>;



  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };

  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };

  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };

  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };


  template<>
    struct __remove_unsigned<bool>;

  template<>
    struct __remove_unsigned<wchar_t>;



  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }

  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }



  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };

  template<typename _Tp>
    struct __promote<_Tp, false>
    { typedef _Tp __type; };

  template<typename _Tp, typename _Up>
    struct __promote_2
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;

    public:
      typedef __typeof__(__type1() + __type2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp>
    struct __promote_3
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;

    public:
      typedef __typeof__(__type1() + __type2() + __type3()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp, typename _Wp>
    struct __promote_4
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;
      typedef typename __promote<_Wp>::__type __type4;

    public:
      typedef __typeof__(__type1() + __type2() + __type3() + __type4()) __type;
    };

}
# 65 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 1 3
# 32 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
# 32 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3




namespace __gnu_cxx {
# 51 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_integer
    {

      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);



      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
    };

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;

  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;
# 96 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_floating
    {

      static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 3010 / 10000);


      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18);
      static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932);
    };

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;

  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;

  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
    __numeric_traits_integer<_Value>,
    __numeric_traits_floating<_Value> >::__type
    { };

}
# 66 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 1 3
# 60 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 1 3
# 34 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 35 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 1 3
# 33 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 3
# 33 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 3
# 36 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 2 3
# 95 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 3
namespace std {
# 104 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 3
  template<typename _Tp>
    inline void
    swap(_Tp& __a, _Tp& __b)
    {



      _Tp __tmp = (__a);
      __a = (__b);
      __b = (__tmp);
    }



  template<typename _Tp, size_t _Nm>
    inline void
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    {
      for (size_t __n = 0; __n < _Nm; ++__n)
 swap(__a[__n], __b[__n]);
    }

}
# 61 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 2 3






namespace std {


  template<class _T1, class _T2>
    struct pair
    {
      typedef _T1 first_type;
      typedef _T2 second_type;

      _T1 first;
      _T2 second;





      pair()
      : first(), second() { }


      pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }
# 113 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
      template<class _U1, class _U2>
        pair(const pair<_U1, _U2>& __p)
 : first(__p.first),
   second(__p.second) { }
# 149 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
    };


  template<class _T1, class _T2>
    inline bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }


  template<class _T1, class _T2>
    inline bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }


  template<class _T1, class _T2>
    inline bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }


  template<class _T1, class _T2>
    inline bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }


  template<class _T1, class _T2>
    inline bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }


  template<class _T1, class _T2>
    inline bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }
# 211 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
  template<class _T1, class _T2>
    inline pair<_T1, _T2>
    make_pair(_T1 __x, _T2 __y)
    { return pair<_T1, _T2>(__x, __y); }
# 257 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
}
# 67 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 1 3
# 63 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
# 63 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 66 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 2 3

namespace std {
# 84 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
  struct input_iterator_tag { };


  struct output_iterator_tag { };


  struct forward_iterator_tag : public input_iterator_tag { };



  struct bidirectional_iterator_tag : public forward_iterator_tag { };



  struct random_access_iterator_tag : public bidirectional_iterator_tag { };
# 111 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {

      typedef _Category iterator_category;

      typedef _Tp value_type;

      typedef _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Reference reference;
    };
# 135 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
  template<typename _Iterator>
    struct iterator_traits
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };


  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };


  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };





  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }



}
# 68 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 1 3
# 63 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3
# 63 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3



namespace std {

  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {



      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }

  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {



      return __last - __first;
    }
# 108 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {

      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }

  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {


      while (__n--)
 ++__i;
    }

  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
       bidirectional_iterator_tag)
    {



      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }

  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {



      __i += __n;
    }
# 166 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {

      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }

}
# 69 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 1 3
# 68 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
namespace std {
# 94 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::pointer pointer;
      typedef typename __traits_type::reference reference;







      reverse_iterator() : current() { }




      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }




      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }





      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }




      iterator_type
      base() const
      { return current; }






      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }






      pointer
      operator->() const
      { return &(operator*()); }






      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }






      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }






      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }






      reverse_iterator
      operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }






      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }






      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }






      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }






      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }






      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };
# 281 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }

  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>
    inline typename reverse_iterator<_Iterator>::difference_type
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() - __x.base(); }

  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }



  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  template<typename _IteratorL, typename _IteratorR>







    inline typename reverse_iterator<_IteratorL>::difference_type
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)

    { return __y.base() - __x.base(); }
# 393 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit
      back_insert_iterator(_Container& __x) : container(&__x) { }
# 420 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      back_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_back(__value);
 return *this;
      }
# 443 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      back_insert_iterator&
      operator*()
      { return *this; }


      back_insert_iterator&
      operator++()
      { return *this; }


      back_insert_iterator
      operator++(int)
      { return *this; }
    };
# 469 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }
# 484 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit front_insert_iterator(_Container& __x) : container(&__x) { }
# 510 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      front_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_front(__value);
 return *this;
      }
# 533 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      front_insert_iterator&
      operator*()
      { return *this; }


      front_insert_iterator&
      operator++()
      { return *this; }


      front_insert_iterator
      operator++(int)
      { return *this; }
    };
# 559 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }
# 578 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;

    public:

      typedef _Container container_type;





      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(&__x), iter(__i) {}
# 621 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }
# 647 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      insert_iterator&
      operator*()
      { return *this; }


      insert_iterator&
      operator++()
      { return *this; }


      insert_iterator&
      operator++(int)
      { return *this; }
    };
# 673 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }



}

namespace __gnu_cxx {
# 694 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type value_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::reference reference;
      typedef typename __traits_type::pointer pointer;

      __normal_iterator() : _M_current(_Iterator()) { }

      explicit
      __normal_iterator(const _Iterator& __i) : _M_current(__i) { }


      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
     typename __enable_if<
              (std::__are_same<_Iter, typename _Container::pointer>::__value),
        _Container>::__type>& __i)
        : _M_current(__i.base()) { }


      reference
      operator*() const
      { return *_M_current; }

      pointer
      operator->() const
      { return _M_current; }

      __normal_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }

      __normal_iterator
      operator++(int)
      { return __normal_iterator(_M_current++); }


      __normal_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }

      __normal_iterator
      operator--(int)
      { return __normal_iterator(_M_current--); }


      reference
      operator[](const difference_type& __n) const
      { return _M_current[__n]; }

      __normal_iterator&
      operator+=(const difference_type& __n)
      { _M_current += __n; return *this; }

      __normal_iterator
      operator+(const difference_type& __n) const
      { return __normal_iterator(_M_current + __n); }

      __normal_iterator&
      operator-=(const difference_type& __n)
      { _M_current -= __n; return *this; }

      __normal_iterator
      operator-(const difference_type& __n) const
      { return __normal_iterator(_M_current - __n); }

      const _Iterator&
      base() const
      { return _M_current; }
    };
# 792 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }


  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }





  template<typename _IteratorL, typename _IteratorR, typename _Container>







    inline typename __normal_iterator<_IteratorL, _Container>::difference_type
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)

    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }

}
# 70 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3

# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\debug/debug.h" 1 3
# 47 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\debug/debug.h" 3
namespace std
{
  namespace __debug { }
}




namespace __gnu_debug
{
  using namespace std::__debug;
}
# 72 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3


namespace std {




  template<bool _BoolType>
    struct __iter_swap
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          typedef typename iterator_traits<_ForwardIterator1>::value_type
            _ValueType1;
          _ValueType1 __tmp = (*__a);
          *__a = (*__b);
          *__b = (__tmp);
 }
    };

  template<>
    struct __iter_swap<true>
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          swap(*__a, *__b);
        }
    };
# 115 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {
      typedef typename iterator_traits<_ForwardIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator2>::value_type
 _ValueType2;
# 134 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
      typedef typename iterator_traits<_ForwardIterator1>::reference
 _ReferenceType1;
      typedef typename iterator_traits<_ForwardIterator2>::reference
 _ReferenceType2;
      std::__iter_swap<__are_same<_ValueType1, _ValueType2>::__value
 && __are_same<_ValueType1&, _ReferenceType1>::__value
 && __are_same<_ValueType2&, _ReferenceType2>::__value>::
 iter_swap(__a, __b);
    }
# 156 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {





                                                       ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }
# 184 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _Tp>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {



      if (__b < __a)
 return __b;
      return __a;
    }
# 207 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _Tp>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {



      if (__a < __b)
 return __b;
      return __a;
    }
# 230 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__b, __a))
 return __b;
      return __a;
    }
# 251 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__a, __b))
 return __b;
      return __a;
    }




  template<typename _Iterator, bool _HasBase>
    struct _Iter_base
    {
      typedef _Iterator iterator_type;
      static iterator_type
      _S_base(_Iterator __it)
      { return __it; }
    };

  template<typename _Iterator>
    struct _Iter_base<_Iterator, true>
    {
      typedef typename _Iterator::iterator_type iterator_type;
      static iterator_type
      _S_base(_Iterator __it)
      { return __it.base(); }
    };



  template<typename _Iterator>
    struct _Niter_base
    : _Iter_base<_Iterator, __is_normal_iterator<_Iterator>::__value>
    { };

  template<typename _Iterator>
    inline typename _Niter_base<_Iterator>::iterator_type
    __niter_base(_Iterator __it)
    { return std::_Niter_base<_Iterator>::_S_base(__it); }


  template<typename _Iterator>
    struct _Miter_base
    : _Iter_base<_Iterator, __is_move_iterator<_Iterator>::__value>
    { };

  template<typename _Iterator>
    inline typename _Miter_base<_Iterator>::iterator_type
    __miter_base(_Iterator __it)
    { return std::_Miter_base<_Iterator>::_S_base(__it); }







  template<bool, bool, typename>
    struct __copy_move
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, ++__first)
     *__result = *__first;
   return __result;
 }
    };
# 339 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = *__first;
       ++__first;
       ++__result;
     }
   return __result;
 }
    };
# 377 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result, __first, sizeof(_Tp) * _Num);
   return __result + _Num;
 }
    };

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueTypeI)
                      && __is_pointer<_II>::__value
                      && __is_pointer<_OI>::__value
        && __are_same<_ValueTypeI, _ValueTypeO>::__value);

      return std::__copy_move<_IsMove, __simple,
                       _Category>::__copy_m(__first, __last, __result);
    }



  template<typename _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
     istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return _OI(std::__copy_move_a<_IsMove>(std::__niter_base(__first),
          std::__niter_base(__last),
          std::__niter_base(__result)));
    }
# 462 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {




                                                     ;

      return (std::__copy_move_a2<__is_move_iterator<_II>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
# 514 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = *--__last;
   return __result;
 }
    };
# 542 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = *--__last;
   return __result;
 }
    };
# 572 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
   return __result - _Num;
 }
    };

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueType1)
                      && __is_pointer<_BI1>::__value
                      && __is_pointer<_BI2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__copy_move_backward<_IsMove, __simple,
                                _Category>::__copy_move_b(__first,
         __last,
         __result);
    }

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return _BI2(std::__copy_move_backward_a<_IsMove>
    (std::__niter_base(__first), std::__niter_base(__last),
     std::__niter_base(__result)));
    }
# 631 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {






                                                     ;

      return (std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
# 689 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
       const _Tp& __value)
    {
      for (; __first != __last; ++__first)
 *__first = __value;
    }

  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
 *__first = __tmp;
    }


  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      __builtin_memset(__first, static_cast<unsigned char>(__tmp),
         __last - __first);
    }
# 733 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {



                                                     ;

      std::__fill_a(std::__niter_base(__first), std::__niter_base(__last),
      __value);
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (; __n > 0; --__n, ++__first)
 *__first = __value;
      return __first;
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __n > 0; --__n, ++__first)
 *__first = __tmp;
      return __first;
    }

  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }
# 791 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {



      return _OI(std::__fill_n_a(std::__niter_base(__first), __n, __value));
    }

  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
        static bool
        equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {
   for (; __first1 != __last1; ++__first1, ++__first2)
     if (!(*__first1 == *__first2))
       return false;
   return true;
 }
    };

  template<>
    struct __equal<true>
    {
      template<typename _Tp>
        static bool
        equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
        {
   return !__builtin_memcmp(__first1, __first2, sizeof(_Tp)
       * (__last1 - __first1));
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = (__is_integer<_ValueType1>::__value
                      && __is_pointer<_II1>::__value
                      && __is_pointer<_II2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }


  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
        static _II1
        __newlast1(_II1, _II1 __last1, _II2, _II2)
        { return __last1; }

      template<typename _II>
        static bool
        __cnd2(_II __first, _II __last)
        { return __first != __last; }
    };

  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
        static _RAI1
        __newlast1(_RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2)
        {
   const typename iterator_traits<_RAI1>::difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits<_RAI2>::difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }

      template<typename _RAI>
        static bool
        __cnd2(_RAI, _RAI)
        { return true; }
    };

  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
        static bool __lc(_II1, _II1, _II2, _II2);
    };

  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
 typedef typename iterator_traits<_II1>::iterator_category _Category1;
 typedef typename iterator_traits<_II2>::iterator_category _Category2;
 typedef std::__lc_rai<_Category1, _Category2> __rai_type;

 __last1 = __rai_type::__newlast1(__first1, __last1,
      __first2, __last2);
 for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
      ++__first1, ++__first2)
   {
     if (*__first1 < *__first2)
       return true;
     if (*__first2 < *__first1)
       return false;
   }
 return __first1 == __last1 && __first2 != __last2;
      }

  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
        static bool
        __lc(const _Tp* __first1, const _Tp* __last1,
      const _Up* __first2, const _Up* __last2)
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   const int __result = __builtin_memcmp(__first1, __first2,
      std::min(__len1, __len2));
   return __result != 0 ? __result < 0 : __len1 < __len2;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
 (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
  && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
  && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
  && __is_pointer<_II1>::__value
  && __is_pointer<_II2>::__value);

      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
           __first2, __last2);
    }
# 952 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;




                                                                  ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;

      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (*__middle < __val)
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }



  template<typename _Size>
    inline _Size
    __lg(_Size __n)
    {
      _Size __k;
      for (__k = 0; __n != 0; __n >>= 1)
 ++__k;
      return __k - 1;
    }

  inline int
  __lg(int __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }

  inline long
  __lg(long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline long long
  __lg(long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }

}

namespace std {
# 1028 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {






                                                       ;

      return std::__equal_aux(std::__niter_base(__first1),
         std::__niter_base(__last1),
         std::__niter_base(__first2));
    }
# 1060 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred)
    {



                                                       ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return true;
    }
# 1091 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2)
    {

      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;




                                                       ;
                                                       ;

      return std::__lexicographical_compare_aux(std::__niter_base(__first1),
      std::__niter_base(__last1),
      std::__niter_base(__first2),
      std::__niter_base(__last2));
    }
# 1125 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _II1, typename _II2, typename _Compare>
    bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> __rai_type;




                                                       ;
                                                       ;

      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
    ++__first1, ++__first2)
 {
   if (__comp(*__first1, *__first2))
     return true;
   if (__comp(*__first2, *__first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }
# 1165 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {






                                                       ;

      while (__first1 != __last1 && *__first1 == *__first2)
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
# 1202 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {



                                                       ;

      while (__first1 != __last1 && bool(__binary_pred(*__first1, *__first2)))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }

}
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 2 3

# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 1 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 44 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 2 3
# 43 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 2 3








namespace __gnu_cxx {
# 63 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
  template<typename _CharT>
    struct _Char_types
    {
      typedef unsigned long int_type;
      typedef std::streampos pos_type;
      typedef std::streamoff off_type;
      typedef std::mbstate_t state_type;
    };
# 88 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
  template<typename _CharT>
    struct char_traits
    {
      typedef _CharT char_type;
      typedef typename _Char_types<_CharT>::int_type int_type;
      typedef typename _Char_types<_CharT>::pos_type pos_type;
      typedef typename _Char_types<_CharT>::off_type off_type;
      typedef typename _Char_types<_CharT>::state_type state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, std::size_t __n);

      static std::size_t
      length(const char_type* __s);

      static const char_type*
      find(const char_type* __s, std::size_t __n, const char_type& __a);

      static char_type*
      move(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      copy(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      assign(char_type* __s, std::size_t __n, char_type __a);

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return !eq_int_type(__c, eof()) ? __c : to_int_type(char_type()); }
    };

  template<typename _CharT>
    int
    char_traits<_CharT>::
    compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
 if (lt(__s1[__i], __s2[__i]))
   return -1;
 else if (lt(__s2[__i], __s1[__i]))
   return 1;
      return 0;
    }

  template<typename _CharT>
    std::size_t
    char_traits<_CharT>::
    length(const char_type* __p)
    {
      std::size_t __i = 0;
      while (!eq(__p[__i], char_type()))
        ++__i;
      return __i;
    }

  template<typename _CharT>
    const typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    find(const char_type* __s, std::size_t __n, const char_type& __a)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
        if (eq(__s[__i], __a))
          return __s + __i;
      return 0;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    move(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      return static_cast<_CharT*>(__builtin_memmove(__s1, __s2,
          __n * sizeof(char_type)));
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    copy(char_type* __s1, const char_type* __s2, std::size_t __n)
    {

      std::copy(__s2, __s2 + __n, __s1);
      return __s1;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    assign(char_type* __s, std::size_t __n, char_type __a)
    {

      std::fill_n(__s, __n, __a);
      return __s;
    }

}

namespace std {
# 229 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
  template<class _CharT>
    struct char_traits : public __gnu_cxx::char_traits<_CharT>
    { };



  template<>
    struct char_traits<char>
    {
      typedef char char_type;
      typedef int int_type;
      typedef streampos pos_type;
      typedef streamoff off_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return __builtin_memcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return __builtin_strlen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return static_cast<const char_type*>(__builtin_memchr(__s, __a, __n)); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memmove(__s1, __s2, __n)); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memcpy(__s1, __s2, __n)); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return static_cast<char_type*>(__builtin_memset(__s, __a, __n)); }

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }



      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(static_cast<unsigned char>(__c)); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return (__c == eof()) ? 0 : __c; }
  };




  template<>
    struct char_traits<wchar_t>
    {
      typedef wchar_t char_type;
      typedef wint_t int_type;
      typedef streamoff off_type;
      typedef wstreampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return wcslen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return wmemchr(__s, __a, __n); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemmove(__s1, __s2, __n); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcpy(__s1, __s2, __n); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return wmemset(__s, __a, __n); }

      static char_type
      to_char_type(const int_type& __c)
      { return char_type(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return int_type(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((wint_t)(0xFFFF)); }

      static int_type
      not_eof(const int_type& __c)
      { return eq_int_type(__c, eof()) ? 0 : __c; }
  };


}
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 1 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 1 3
# 40 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 3
# 40 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 3

# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 1 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 1 3








# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 3
  struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
  };
# 75 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 3
  int _configthreadlocale(int _Flag);
  char * setlocale(int _Category,const char *_Locale);
  __attribute__ ((__dllimport__)) struct lconv * localeconv(void);
  _locale_t _get_current_locale(void);
  _locale_t _create_locale(int _Category,const char *_Locale);
  void _free_locale(_locale_t _Locale);
  _locale_t __get_current_locale(void);
  _locale_t __create_locale(int _Category,const char *_Locale);
  void __free_locale(_locale_t _Locale);







}


#pragma pack(pop)
# 44 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 2 3








namespace std {

  using ::lconv;
  using ::setlocale;
  using ::localeconv;

}
# 42 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 43 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 2 3



namespace std {

  typedef int* __c_locale;





  inline int
  __convert_from_v(const __c_locale&, char* __out,
     const int __size __attribute__((__unused__)),
     const char* __fmt, ...)
  {
    char* __old = std::setlocale(4, __null);
    char* __sav = __null;
    if (__builtin_strcmp(__old, "C"))
      {
 const size_t __len = __builtin_strlen(__old) + 1;
 __sav = new char[__len];
 __builtin_memcpy(__sav, __old, __len);
 std::setlocale(4, "C");
      }

    __builtin_va_list __args;
    __builtin_va_start(__args, __fmt);


    const int __ret = __builtin_vsnprintf(__out, __size, __fmt, __args);




    __builtin_va_end(__args);

    if (__sav)
      {
 std::setlocale(4, __sav);
 delete [] __sav;
      }
    return __ret;
  }

}
# 42 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 2 3

# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 1 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 1 3








# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 2 3



extern "C" {
# 72 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
  extern const unsigned char __newclmap[];
  extern const unsigned char __newcumap[];
  extern pthreadlocinfo __ptlocinfo;
  extern pthreadmbcinfo __ptmbcinfo;
  extern int __globallocalestatus;
  extern int __locale_changed;
  extern struct threadlocaleinfostruct __initiallocinfo;
  extern _locale_tstruct __initiallocalestructinfo;
  pthreadlocinfo __updatetlocinfo(void);
  pthreadmbcinfo __updatetmbcinfo(void);
# 100 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
  __attribute__ ((__dllimport__)) int _isctype(int _C,int _Type);
  __attribute__ ((__dllimport__)) int _isctype_l(int _C,int _Type,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isalpha(int _C);
  __attribute__ ((__dllimport__)) int _isalpha_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isupper(int _C);
  __attribute__ ((__dllimport__)) int _isupper_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int islower(int _C);
  __attribute__ ((__dllimport__)) int _islower_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isdigit(int _C);
  __attribute__ ((__dllimport__)) int _isdigit_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isxdigit(int _C);
  __attribute__ ((__dllimport__)) int _isxdigit_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isspace(int _C);
  __attribute__ ((__dllimport__)) int _isspace_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int ispunct(int _C);
  __attribute__ ((__dllimport__)) int _ispunct_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isalnum(int _C);
  __attribute__ ((__dllimport__)) int _isalnum_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isprint(int _C);
  __attribute__ ((__dllimport__)) int _isprint_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isgraph(int _C);
  __attribute__ ((__dllimport__)) int _isgraph_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int iscntrl(int _C);
  __attribute__ ((__dllimport__)) int _iscntrl_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int toupper(int _C);
  __attribute__ ((__dllimport__)) int tolower(int _C);
  __attribute__ ((__dllimport__)) int _tolower(int _C);
  __attribute__ ((__dllimport__)) int _tolower_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _toupper(int _C);
  __attribute__ ((__dllimport__)) int _toupper_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __isascii(int _C);
  __attribute__ ((__dllimport__)) int __toascii(int _C);
  __attribute__ ((__dllimport__)) int __iscsymf(int _C);
  __attribute__ ((__dllimport__)) int __iscsym(int _C);


int isblank(int _C);
# 193 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
  extern int * __imp___mb_cur_max;
# 275 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
}
# 44 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 2 3
# 63 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
namespace std {

  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;

}
# 44 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 2 3

namespace std {
# 54 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 3
  class locale;

  template<typename _Facet>
    bool
    has_facet(const locale&) throw();

  template<typename _Facet>
    const _Facet&
    use_facet(const locale&);


  template<typename _CharT>
    bool
    isspace(_CharT, const locale&);

  template<typename _CharT>
    bool
    isprint(_CharT, const locale&);

  template<typename _CharT>
    bool
    iscntrl(_CharT, const locale&);

  template<typename _CharT>
    bool
    isupper(_CharT, const locale&);

  template<typename _CharT>
    bool
    islower(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalpha(_CharT, const locale&);

  template<typename _CharT>
    bool
    isdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    ispunct(_CharT, const locale&);

  template<typename _CharT>
    bool
    isxdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalnum(_CharT, const locale&);

  template<typename _CharT>
    bool
    isgraph(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    toupper(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    tolower(_CharT, const locale&);


  class ctype_base;
  template<typename _CharT>
    class ctype;
  template<> class ctype<char>;

  template<> class ctype<wchar_t>;

  template<typename _CharT>
    class ctype_byname;


  class codecvt_base;
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt;
  template<> class codecvt<char, char, mbstate_t>;

  template<> class codecvt<wchar_t, char, mbstate_t>;

  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt_byname;



  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class num_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class num_put;

  template<typename _CharT> class numpunct;
  template<typename _CharT> class numpunct_byname;


  template<typename _CharT>
    class collate;
  template<typename _CharT> class
    collate_byname;


  class time_base;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get_byname;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put_byname;


  class money_base;

  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class money_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class money_put;

  template<typename _CharT, bool _Intl = false>
    class moneypunct;
  template<typename _CharT, bool _Intl = false>
    class moneypunct_byname;


  class messages_base;
  template<typename _CharT>
    class messages;
  template<typename _CharT>
    class messages_byname;

}
# 42 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 1 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3

# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 1 3
# 34 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 1 3
# 30 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 3
#pragma GCC visibility push(default)
# 162 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 1 3
# 70 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\errno.h" 1 3








# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\errno.h" 2 3



extern "C" {




__attribute__ ((__dllimport__)) extern int * _errno(void);


errno_t _set_errno(int _Value);
errno_t _get_errno(int *_Value);
# 74 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\errno.h" 3
}
# 71 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 2 3

# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 73 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 2 3
# 340 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
extern "C" {


typedef unsigned long __gthread_key_t;

typedef struct {
  int done;
  long started;
} __gthread_once_t;

typedef struct {
  long counter;
  void *sema;
} __gthread_mutex_t;

typedef struct {
  long counter;
  long depth;
  unsigned long owner;
  void *sema;
} __gthread_recursive_mutex_t;
# 374 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
extern int _CRT_MT;
extern int __mingwthr_key_dtor (unsigned long, void (*) (void *));
# 401 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
static inline int
__gthread_active_p (void)
{

  return _CRT_MT;



}







extern int __gthr_win32_once (__gthread_once_t *, void (*) (void));
extern int __gthr_win32_key_create (__gthread_key_t *, void (*) (void*));
extern int __gthr_win32_key_delete (__gthread_key_t);
extern void * __gthr_win32_getspecific (__gthread_key_t);
extern int __gthr_win32_setspecific (__gthread_key_t, const void *);
extern void __gthr_win32_mutex_init_function (__gthread_mutex_t *);
extern int __gthr_win32_mutex_lock (__gthread_mutex_t *);
extern int __gthr_win32_mutex_trylock (__gthread_mutex_t *);
extern int __gthr_win32_mutex_unlock (__gthread_mutex_t *);
extern void
  __gthr_win32_recursive_mutex_init_function (__gthread_recursive_mutex_t *);
extern int __gthr_win32_recursive_mutex_lock (__gthread_recursive_mutex_t *);
extern int
  __gthr_win32_recursive_mutex_trylock (__gthread_recursive_mutex_t *);
extern int __gthr_win32_recursive_mutex_unlock (__gthread_recursive_mutex_t *);
extern void __gthr_win32_mutex_destroy (__gthread_mutex_t *);

static inline int
__gthread_once (__gthread_once_t *__once, void (*__func) (void))
{
  if (__gthread_active_p ())
    return __gthr_win32_once (__once, __func);
  else
    return -1;
}

static inline int
__gthread_key_create (__gthread_key_t *__key, void (*__dtor) (void *))
{
  return __gthr_win32_key_create (__key, __dtor);
}

static inline int
__gthread_key_delete (__gthread_key_t __key)
{
  return __gthr_win32_key_delete (__key);
}

static inline void *
__gthread_getspecific (__gthread_key_t __key)
{
  return __gthr_win32_getspecific (__key);
}

static inline int
__gthread_setspecific (__gthread_key_t __key, const void *__ptr)
{
  return __gthr_win32_setspecific (__key, __ptr);
}

static inline void
__gthread_mutex_init_function (__gthread_mutex_t *__mutex)
{
  __gthr_win32_mutex_init_function (__mutex);
}

static inline void
__gthread_mutex_destroy (__gthread_mutex_t *__mutex)
{
  __gthr_win32_mutex_destroy (__mutex);
}

static inline int
__gthread_mutex_lock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_trylock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_trylock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_unlock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_unlock (__mutex);
  else
    return 0;
}

static inline void
__gthread_recursive_mutex_init_function (__gthread_recursive_mutex_t *__mutex)
{
   __gthr_win32_recursive_mutex_init_function (__mutex);
}

static inline int
__gthread_recursive_mutex_lock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_recursive_mutex_trylock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_trylock (__mutex);
  else
    return 0;
}

static inline int
__gthread_recursive_mutex_unlock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_unlock (__mutex);
  else
    return 0;
}
# 767 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
}
# 163 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 2 3







#pragma GCC visibility pop
# 35 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/atomic_word.h" 1 3
# 32 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/atomic_word.h" 3
typedef int _Atomic_word;
# 36 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 2 3

namespace __gnu_cxx {






  static inline _Atomic_word
  __exchange_and_add(volatile _Atomic_word* __mem, int __val)
  { return __sync_fetch_and_add(__mem, __val); }

  static inline void
  __atomic_add(volatile _Atomic_word* __mem, int __val)
  { __sync_fetch_and_add(__mem, __val); }
# 61 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 3
  static inline _Atomic_word
  __exchange_and_add_single(_Atomic_word* __mem, int __val)
  {
    _Atomic_word __result = *__mem;
    *__mem += __val;
    return __result;
  }

  static inline void
  __atomic_add_single(_Atomic_word* __mem, int __val)
  { *__mem += __val; }

  static inline _Atomic_word
  __attribute__ ((__unused__))
  __exchange_and_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      return __exchange_and_add(__mem, __val);
    else
      return __exchange_and_add_single(__mem, __val);



  }

  static inline void
  __attribute__ ((__unused__))
  __atomic_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      __atomic_add(__mem, __val);
    else
      __atomic_add_single(__mem, __val);



  }

}
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 2 3

# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 1 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 1 3
# 38 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 3
# 38 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 3




# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 1 3
# 48 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++allocator.h" 1 3
# 34 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++allocator.h" 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 1 3
# 33 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 1 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 3

# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 2 3


#pragma GCC visibility push(default)

extern "C++" {

namespace std
{






  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }



    virtual ~bad_alloc() throw();


    virtual const char* what() const throw();
  };

  struct nothrow_t { };

  extern const nothrow_t nothrow;



  typedef void (*new_handler)();



  new_handler set_new_handler(new_handler) throw();
}
# 92 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 3
void* operator new(std::size_t) throw (std::bad_alloc);
void* operator new[](std::size_t) throw (std::bad_alloc);
void operator delete(void*) throw();
void operator delete[](void*) throw();
void* operator new(std::size_t, const std::nothrow_t&) throw();
void* operator new[](std::size_t, const std::nothrow_t&) throw();
void operator delete(void*, const std::nothrow_t&) throw();
void operator delete[](void*, const std::nothrow_t&) throw();


inline void* operator new(std::size_t, void* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { return __p; }


inline void operator delete (void*, void*) throw() { }
inline void operator delete[](void*, void*) throw() { }

}

#pragma GCC visibility pop
# 34 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 2 3



namespace __gnu_cxx {

  using std::size_t;
  using std::ptrdiff_t;
# 50 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 3
  template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef new_allocator<_Tp1> other; };

      new_allocator() throw() { }

      new_allocator(const new_allocator&) throw() { }

      template<typename _Tp1>
        new_allocator(const new_allocator<_Tp1>&) throw() { }

      ~new_allocator() throw() { }

      pointer
      address(reference __x) const { return &__x; }

      const_pointer
      address(const_reference __x) const { return &__x; }



      pointer
      allocate(size_type __n, const void* = 0)
      {
 if (__n > this->max_size())
   std::__throw_bad_alloc();

 return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
      }


      void
      deallocate(pointer __p, size_type)
      { ::operator delete(__p); }

      size_type
      max_size() const throw()
      { return size_t(-1) / sizeof(_Tp); }



      void
      construct(pointer __p, const _Tp& __val)
      { ::new((void *)__p) _Tp(__val); }
# 114 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 3
      void
      destroy(pointer __p) { __p->~_Tp(); }
    };

  template<typename _Tp>
    inline bool
    operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return false; }

}
# 35 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++allocator.h" 2 3
# 49 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 2 3

namespace std {
# 59 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
  template<typename _Tp>
    class allocator;


  template<>
    class allocator<void>
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef void* pointer;
      typedef const void* const_pointer;
      typedef void value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };
    };
# 85 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
  template<typename _Tp>
    class allocator: public __gnu_cxx::new_allocator<_Tp>
    {
   public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };

      allocator() throw() { }

      allocator(const allocator& __a) throw()
      : __gnu_cxx::new_allocator<_Tp>(__a) { }

      template<typename _Tp1>
        allocator(const allocator<_Tp1>&) throw() { }

      ~allocator() throw() { }


    };

  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator==(const allocator<_Tp>&, const allocator<_Tp>&)
    { return true; }

  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    { return false; }

  template<typename _Tp>
    inline bool
    operator!=(const allocator<_Tp>&, const allocator<_Tp>&)
    { return false; }





  extern template class allocator<char>;
  extern template class allocator<wchar_t>;






  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_swap
    { static void _S_do_it(_Alloc&, _Alloc&) { } };

  template<typename _Alloc>
    struct __alloc_swap<_Alloc, false>
    {
      static void
      _S_do_it(_Alloc& __one, _Alloc& __two)
      {

 if (__one != __two)
   swap(__one, __two);
      }
    };


  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_neq
    {
      static bool
      _S_do_it(const _Alloc&, const _Alloc&)
      { return false; }
    };

  template<typename _Alloc>
    struct __alloc_neq<_Alloc, false>
    {
      static bool
      _S_do_it(const _Alloc& __one, const _Alloc& __two)
      { return __one != __two; }
    };
# 204 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
}
# 43 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 1 3
# 33 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 3
# 33 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cxxabi-forced.h" 1 3
# 33 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cxxabi-forced.h" 3
# 33 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cxxabi-forced.h" 3

#pragma GCC visibility push(default)


namespace __cxxabiv1
{







  class __forced_unwind
  {
    virtual ~__forced_unwind() throw();


    virtual void __pure_dummy() = 0;
  };
}


#pragma GCC visibility pop
# 36 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 2 3

namespace std {

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_write(basic_ostream<_CharT, _Traits>& __out,
      const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const streamsize __put = __out.rdbuf()->sputn(__s, __n);
      if (__put != __n)
 __out.setstate(__ios_base::badbit);
    }

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_fill(basic_ostream<_CharT, _Traits>& __out, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const _CharT __c = __out.fill();
      for (; __n > 0; --__n)
 {
   const typename _Traits::int_type __put = __out.rdbuf()->sputc(__c);
   if (_Traits::eq_int_type(__put, _Traits::eof()))
     {
       __out.setstate(__ios_base::badbit);
       break;
     }
 }
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    __ostream_insert(basic_ostream<_CharT, _Traits>& __out,
       const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      typename __ostream_type::sentry __cerb(__out);
      if (__cerb)
 {
   if (true)
     {
       const streamsize __w = __out.width();
       if (__w > __n)
  {
    const bool __left = ((__out.flags()
     & __ios_base::adjustfield)
           == __ios_base::left);
    if (!__left)
      __ostream_fill(__out, __w - __n);
    if (__out.good())
      __ostream_write(__out, __s, __n);
    if (__left && __out.good())
      __ostream_fill(__out, __w - __n);
  }
       else
  __ostream_write(__out, __s, __n);
       __out.width(0);
     }
   if (false)
     {
       __out._M_setstate(__ios_base::badbit);
                              ;
     }
   if (false)
     { __out._M_setstate(__ios_base::badbit); }
 }
      return __out;
    }





  extern template ostream& __ostream_insert(ostream&, const char*, streamsize);


  extern template wostream& __ostream_insert(wostream&, const wchar_t*,
          streamsize);



}
# 46 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3



# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 1 3
# 60 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
namespace std {
# 99 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    struct unary_function
    {
      typedef _Arg argument_type;


      typedef _Result result_type;
    };




  template<typename _Arg1, typename _Arg2, typename _Result>
    struct binary_function
    {
      typedef _Arg1 first_argument_type;


      typedef _Arg2 second_argument_type;
      typedef _Result result_type;
    };
# 134 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Tp>
    struct plus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x + __y; }
    };


  template<typename _Tp>
    struct minus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x - __y; }
    };


  template<typename _Tp>
    struct multiplies : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x * __y; }
    };


  template<typename _Tp>
    struct divides : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x / __y; }
    };


  template<typename _Tp>
    struct modulus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x % __y; }
    };


  template<typename _Tp>
    struct negate : public unary_function<_Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x) const
      { return -__x; }
    };
# 198 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Tp>
    struct equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x == __y; }
    };


  template<typename _Tp>
    struct not_equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x != __y; }
    };


  template<typename _Tp>
    struct greater : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x > __y; }
    };


  template<typename _Tp>
    struct less : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x < __y; }
    };


  template<typename _Tp>
    struct greater_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x >= __y; }
    };


  template<typename _Tp>
    struct less_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x <= __y; }
    };
# 262 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Tp>
    struct logical_and : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x && __y; }
    };


  template<typename _Tp>
    struct logical_or : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x || __y; }
    };


  template<typename _Tp>
    struct logical_not : public unary_function<_Tp, bool>
    {
      bool
      operator()(const _Tp& __x) const
      { return !__x; }
    };




  template<typename _Tp>
    struct bit_and : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x & __y; }
    };

  template<typename _Tp>
    struct bit_or : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x | __y; }
    };

  template<typename _Tp>
    struct bit_xor : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x ^ __y; }
    };
# 345 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Predicate>
    class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      explicit
      unary_negate(const _Predicate& __x) : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::argument_type& __x) const
      { return !_M_pred(__x); }
    };


  template<typename _Predicate>
    inline unary_negate<_Predicate>
    not1(const _Predicate& __pred)
    { return unary_negate<_Predicate>(__pred); }


  template<typename _Predicate>
    class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
        typename _Predicate::second_argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      explicit
      binary_negate(const _Predicate& __x) : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::first_argument_type& __x,
   const typename _Predicate::second_argument_type& __y) const
      { return !_M_pred(__x, __y); }
    };


  template<typename _Predicate>
    inline binary_negate<_Predicate>
    not2(const _Predicate& __pred)
    { return binary_negate<_Predicate>(__pred); }
# 416 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    class pointer_to_unary_function : public unary_function<_Arg, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg);

    public:
      pointer_to_unary_function() { }

      explicit
      pointer_to_unary_function(_Result (*__x)(_Arg))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg __x) const
      { return _M_ptr(__x); }
    };


  template<typename _Arg, typename _Result>
    inline pointer_to_unary_function<_Arg, _Result>
    ptr_fun(_Result (*__x)(_Arg))
    { return pointer_to_unary_function<_Arg, _Result>(__x); }


  template<typename _Arg1, typename _Arg2, typename _Result>
    class pointer_to_binary_function
    : public binary_function<_Arg1, _Arg2, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg1, _Arg2);

    public:
      pointer_to_binary_function() { }

      explicit
      pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg1 __x, _Arg2 __y) const
      { return _M_ptr(__x, __y); }
    };


  template<typename _Arg1, typename _Arg2, typename _Result>
    inline pointer_to_binary_function<_Arg1, _Arg2, _Result>
    ptr_fun(_Result (*__x)(_Arg1, _Arg2))
    { return pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x); }


  template<typename _Tp>
    struct _Identity : public unary_function<_Tp,_Tp>
    {
      _Tp&
      operator()(_Tp& __x) const
      { return __x; }

      const _Tp&
      operator()(const _Tp& __x) const
      { return __x; }
    };

  template<typename _Pair>
    struct _Select1st : public unary_function<_Pair,
           typename _Pair::first_type>
    {
      typename _Pair::first_type&
      operator()(_Pair& __x) const
      { return __x.first; }

      const typename _Pair::first_type&
      operator()(const _Pair& __x) const
      { return __x.first; }
    };

  template<typename _Pair>
    struct _Select2nd : public unary_function<_Pair,
           typename _Pair::second_type>
    {
      typename _Pair::second_type&
      operator()(_Pair& __x) const
      { return __x.second; }

      const typename _Pair::second_type&
      operator()(const _Pair& __x) const
      { return __x.second; }
    };
# 523 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Ret, typename _Tp>
    class mem_fun_t : public unary_function<_Tp*, _Ret>
    {
    public:
      explicit
      mem_fun_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
    };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_t : public unary_function<const _Tp*, _Ret>
    {
    public:
      explicit
      const_mem_fun_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp>
    class mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      mem_fun_ref_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
  };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_t : public binary_function<_Tp*, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_t : public binary_function<const _Tp*, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp>
    inline mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)())
    { return mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)())
    { return mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }



}



# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\backward/binders.h" 1 3
# 60 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\backward/binders.h" 3
namespace std {
# 97 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\backward/binders.h" 3
  template<typename _Operation>
    class binder1st
    : public unary_function<typename _Operation::second_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::first_argument_type value;

    public:
      binder1st(const _Operation& __x,
  const typename _Operation::first_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }



      typename _Operation::result_type
      operator()(typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder1st<_Operation>
    bind1st(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::first_argument_type _Arg1_type;
      return binder1st<_Operation>(__fn, _Arg1_type(__x));
    }


  template<typename _Operation>
    class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::second_argument_type value;

    public:
      binder2nd(const _Operation& __x,
  const typename _Operation::second_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }



      typename _Operation::result_type
      operator()(typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    }


}
# 713 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 2 3
# 50 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 1 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3



# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\initializer_list" 1 3
# 33 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\initializer_list" 3
# 33 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\initializer_list" 3
# 43 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 2 3

namespace std {
# 103 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_string
    {
      typedef typename _Alloc::template rebind<_CharT>::other _CharT_alloc_type;


    public:
      typedef _Traits traits_type;
      typedef typename _Traits::char_type value_type;
      typedef _Alloc allocator_type;
      typedef typename _CharT_alloc_type::size_type size_type;
      typedef typename _CharT_alloc_type::difference_type difference_type;
      typedef typename _CharT_alloc_type::reference reference;
      typedef typename _CharT_alloc_type::const_reference const_reference;
      typedef typename _CharT_alloc_type::pointer pointer;
      typedef typename _CharT_alloc_type::const_pointer const_pointer;
      typedef __gnu_cxx::__normal_iterator<pointer, basic_string> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, basic_string>
                                                            const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;

    private:
# 140 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      struct _Rep_base
      {
 size_type _M_length;
 size_type _M_capacity;
 _Atomic_word _M_refcount;
      };

      struct _Rep : _Rep_base
      {

 typedef typename _Alloc::template rebind<char>::other _Raw_bytes_alloc;
# 165 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 static const size_type _S_max_size;
 static const _CharT _S_terminal;



        static size_type _S_empty_rep_storage[];

        static _Rep&
        _S_empty_rep()
        {



   void* __p = reinterpret_cast<void*>(&_S_empty_rep_storage);
   return *reinterpret_cast<_Rep*>(__p);
 }

        bool
 _M_is_leaked() const
        { return this->_M_refcount < 0; }

        bool
 _M_is_shared() const
        { return this->_M_refcount > 0; }

        void
 _M_set_leaked()
        { this->_M_refcount = -1; }

        void
 _M_set_sharable()
        { this->_M_refcount = 0; }

 void
 _M_set_length_and_sharable(size_type __n)
 {



     {
       this->_M_set_sharable();
       this->_M_length = __n;
       traits_type::assign(this->_M_refdata()[__n], _S_terminal);


     }
 }

 _CharT*
 _M_refdata() throw()
 { return reinterpret_cast<_CharT*>(this + 1); }

 _CharT*
 _M_grab(const _Alloc& __alloc1, const _Alloc& __alloc2)
 {
   return (!_M_is_leaked() && __alloc1 == __alloc2)
           ? _M_refcopy() : _M_clone(__alloc1);
 }


 static _Rep*
 _S_create(size_type, size_type, const _Alloc&);

 void
 _M_dispose(const _Alloc& __a)
 {



     if (__gnu_cxx::__exchange_and_add_dispatch(&this->_M_refcount,
             -1) <= 0)
       _M_destroy(__a);
 }

 void
 _M_destroy(const _Alloc&) throw();

 _CharT*
 _M_refcopy() throw()
 {



            __gnu_cxx::__atomic_add_dispatch(&this->_M_refcount, 1);
   return _M_refdata();
 }

 _CharT*
 _M_clone(const _Alloc&, size_type __res = 0);
      };


      struct _Alloc_hider : _Alloc
      {
 _Alloc_hider(_CharT* __dat, const _Alloc& __a)
 : _Alloc(__a), _M_p(__dat) { }

 _CharT* _M_p;
      };

    public:




      static const size_type npos = static_cast<size_type>(-1);

    private:

      mutable _Alloc_hider _M_dataplus;

      _CharT*
      _M_data() const
      { return _M_dataplus._M_p; }

      _CharT*
      _M_data(_CharT* __p)
      { return (_M_dataplus._M_p = __p); }

      _Rep*
      _M_rep() const
      { return &((reinterpret_cast<_Rep*> (_M_data()))[-1]); }



      iterator
      _M_ibegin() const
      { return iterator(_M_data()); }

      iterator
      _M_iend() const
      { return iterator(_M_data() + this->size()); }

      void
      _M_leak()
      {
 if (!_M_rep()->_M_is_leaked())
   _M_leak_hard();
      }

      size_type
      _M_check(size_type __pos, const char* __s) const
      {
 if (__pos > this->size())
   __throw_out_of_range((__s));
 return __pos;
      }

      void
      _M_check_length(size_type __n1, size_type __n2, const char* __s) const
      {
 if (this->max_size() - (this->size() - __n1) < __n2)
   __throw_length_error((__s));
      }


      size_type
      _M_limit(size_type __pos, size_type __off) const
      {
 const bool __testoff = __off < this->size() - __pos;
 return __testoff ? __off : this->size() - __pos;
      }


      bool
      _M_disjunct(const _CharT* __s) const
      {
 return (less<const _CharT*>()(__s, _M_data())
  || less<const _CharT*>()(_M_data() + this->size(), __s));
      }



      static void
      _M_copy(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::copy(__d, __s, __n);
      }

      static void
      _M_move(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::move(__d, __s, __n);
      }

      static void
      _M_assign(_CharT* __d, size_type __n, _CharT __c)
      {
 if (__n == 1)
   traits_type::assign(*__d, __c);
 else
   traits_type::assign(__d, __n, __c);
      }



      template<class _Iterator>
        static void
        _S_copy_chars(_CharT* __p, _Iterator __k1, _Iterator __k2)
        {
   for (; __k1 != __k2; ++__k1, ++__p)
     traits_type::assign(*__p, *__k1);
 }

      static void
      _S_copy_chars(_CharT* __p, iterator __k1, iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, const_iterator __k1, const_iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, _CharT* __k1, _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }

      static void
      _S_copy_chars(_CharT* __p, const _CharT* __k1, const _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }

      static int
      _S_compare(size_type __n1, size_type __n2)
      {
 const difference_type __d = difference_type(__n1 - __n2);

 if (__d > __gnu_cxx::__numeric_traits<int>::__max)
   return __gnu_cxx::__numeric_traits<int>::__max;
 else if (__d < __gnu_cxx::__numeric_traits<int>::__min)
   return __gnu_cxx::__numeric_traits<int>::__min;
 else
   return int(__d);
      }

      void
      _M_mutate(size_type __pos, size_type __len1, size_type __len2);

      void
      _M_leak_hard();

      static _Rep&
      _S_empty_rep()
      { return _Rep::_S_empty_rep(); }

    public:







      basic_string()



      : _M_dataplus(_S_construct(size_type(), _CharT(), _Alloc()), _Alloc()){ }





      explicit
      basic_string(const _Alloc& __a);






      basic_string(const basic_string& __str);






      basic_string(const basic_string& __str, size_type __pos,
     size_type __n = npos);







      basic_string(const basic_string& __str, size_type __pos,
     size_type __n, const _Alloc& __a);
# 468 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string(const _CharT* __s, size_type __n,
     const _Alloc& __a = _Alloc());





      basic_string(const _CharT* __s, const _Alloc& __a = _Alloc());






      basic_string(size_type __n, _CharT __c, const _Alloc& __a = _Alloc());
# 516 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string(_InputIterator __beg, _InputIterator __end,
       const _Alloc& __a = _Alloc());




      ~basic_string()
      { _M_rep()->_M_dispose(this->get_allocator()); }





      basic_string&
      operator=(const basic_string& __str)
      { return this->assign(__str); }





      basic_string&
      operator=(const _CharT* __s)
      { return this->assign(__s); }
# 549 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      operator=(_CharT __c)
      {
 this->assign(1, __c);
 return *this;
      }
# 589 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      iterator
      begin()
      {
 _M_leak();
 return iterator(_M_data());
      }





      const_iterator
      begin() const
      { return const_iterator(_M_data()); }





      iterator
      end()
      {
 _M_leak();
 return iterator(_M_data() + this->size());
      }





      const_iterator
      end() const
      { return const_iterator(_M_data() + this->size()); }






      reverse_iterator
      rbegin()
      { return reverse_iterator(this->end()); }






      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(this->end()); }






      reverse_iterator
      rend()
      { return reverse_iterator(this->begin()); }






      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(this->begin()); }
# 695 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
    public:



      size_type
      size() const
      { return _M_rep()->_M_length; }



      size_type
      length() const
      { return _M_rep()->_M_length; }


      size_type
      max_size() const
      { return _Rep::_S_max_size; }
# 724 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      resize(size_type __n, _CharT __c);
# 737 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      resize(size_type __n)
      { this->resize(__n, _CharT()); }
# 757 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      capacity() const
      { return _M_rep()->_M_capacity; }
# 778 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      reserve(size_type __res_arg = 0);




      void
      clear()
      { _M_mutate(0, this->size(), 0); }





      bool
      empty() const
      { return this->size() == 0; }
# 807 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      const_reference
      operator[] (size_type __pos) const
      {
                                       ;
 return _M_data()[__pos];
      }
# 824 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      reference
      operator[](size_type __pos)
      {

                                       ;

                                         ;
 _M_leak();
 return _M_data()[__pos];
      }
# 845 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      const_reference
      at(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range(("basic_string::at"));
 return _M_data()[__n];
      }
# 864 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      reference
      at(size_type __n)
      {
 if (__n >= size())
   __throw_out_of_range(("basic_string::at"));
 _M_leak();
 return _M_data()[__n];
      }







      basic_string&
      operator+=(const basic_string& __str)
      { return this->append(__str); }






      basic_string&
      operator+=(const _CharT* __s)
      { return this->append(__s); }






      basic_string&
      operator+=(_CharT __c)
      {
 this->push_back(__c);
 return *this;
      }
# 920 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str);
# 935 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str, size_type __pos, size_type __n);







      basic_string&
      append(const _CharT* __s, size_type __n);






      basic_string&
      append(const _CharT* __s)
      {
                               ;
 return this->append(__s, traits_type::length(__s));
      }
# 967 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      append(size_type __n, _CharT __c);
# 989 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        append(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_iend(), _M_iend(), __first, __last); }





      void
      push_back(_CharT __c)
      {
 const size_type __len = 1 + this->size();
 if (__len > this->capacity() || _M_rep()->_M_is_shared())
   this->reserve(__len);
 traits_type::assign(_M_data()[this->size()], __c);
 _M_rep()->_M_set_length_and_sharable(__len);
      }






      basic_string&
      assign(const basic_string& __str);
# 1045 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      assign(const basic_string& __str, size_type __pos, size_type __n)
      { return this->assign(__str._M_data()
       + __str._M_check(__pos, "basic_string::assign"),
       __str._M_limit(__pos, __n)); }
# 1061 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s, size_type __n);
# 1073 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s)
      {
                               ;
 return this->assign(__s, traits_type::length(__s));
      }
# 1089 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      assign(size_type __n, _CharT __c)
      { return _M_replace_aux(size_type(0), this->size(), __n, __c); }
# 1101 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        assign(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_ibegin(), _M_iend(), __first, __last); }
# 1129 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      insert(iterator __p, size_type __n, _CharT __c)
      { this->replace(__p, __p, __n, __c); }
# 1144 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        void
        insert(iterator __p, _InputIterator __beg, _InputIterator __end)
        { this->replace(__p, __p, __beg, __end); }
# 1175 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str)
      { return this->insert(__pos1, __str, size_type(0), __str.size()); }
# 1197 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str,
      size_type __pos2, size_type __n)
      { return this->insert(__pos1, __str._M_data()
       + __str._M_check(__pos2, "basic_string::insert"),
       __str._M_limit(__pos2, __n)); }
# 1220 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s, size_type __n);
# 1238 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s)
      {
                               ;
 return this->insert(__pos, __s, traits_type::length(__s));
      }
# 1261 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, size_type __n, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::insert"),
         size_type(0), __n, __c); }
# 1278 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      iterator
      insert(iterator __p, _CharT __c)
      {
                                                                 ;
 const size_type __pos = __p - _M_ibegin();
 _M_replace_aux(__pos, size_type(0), size_type(1), __c);
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1302 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      erase(size_type __pos = 0, size_type __n = npos)
      {
 _M_mutate(_M_check(__pos, "basic_string::erase"),
    _M_limit(__pos, __n), size_type(0));
 return *this;
      }
# 1318 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      iterator
      erase(iterator __position)
      {

                               ;
 const size_type __pos = __position - _M_ibegin();
 _M_mutate(__pos, size_type(1), size_type(0));
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1338 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      iterator
      erase(iterator __first, iterator __last);
# 1357 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n, const basic_string& __str)
      { return this->replace(__pos, __n, __str._M_data(), __str.size()); }
# 1379 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2)
      { return this->replace(__pos1, __n1, __str._M_data()
        + __str._M_check(__pos2, "basic_string::replace"),
        __str._M_limit(__pos2, __n2)); }
# 1403 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2);
# 1422 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s)
      {
                               ;
 return this->replace(__pos, __n1, __s, traits_type::length(__s));
      }
# 1445 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::replace"),
         _M_limit(__pos, __n1), __n2, __c); }
# 1463 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const basic_string& __str)
      { return this->replace(__i1, __i2, __str._M_data(), __str.size()); }
# 1481 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s, size_type __n)
      {

                          ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1, __s, __n);
      }
# 1502 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s)
      {
                               ;
 return this->replace(__i1, __i2, __s, traits_type::length(__s));
      }
# 1523 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, size_type __n, _CharT __c)
      {

                          ;
 return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __c);
      }
# 1545 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        replace(iterator __i1, iterator __i2,
  _InputIterator __k1, _InputIterator __k2)
        {

                            ;
                                             ;
   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   return _M_replace_dispatch(__i1, __i2, __k1, __k2, _Integral());
 }



      basic_string&
      replace(iterator __i1, iterator __i2, _CharT* __k1, _CharT* __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2,
       const _CharT* __k1, const _CharT* __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2, iterator __k1, iterator __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2,
       const_iterator __k1, const_iterator __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }
# 1620 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
    private:
      template<class _Integer>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _Integer __n,
       _Integer __val, __true_type)
        { return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __val); }

      template<class _InputIterator>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
       _InputIterator __k2, __false_type);

      basic_string&
      _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
       _CharT __c);

      basic_string&
      _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
        size_type __n2);



      template<class _InIterator>
        static _CharT*
        _S_construct_aux(_InIterator __beg, _InIterator __end,
    const _Alloc& __a, __false_type)
 {
          typedef typename iterator_traits<_InIterator>::iterator_category _Tag;
          return _S_construct(__beg, __end, __a, _Tag());
 }



      template<class _Integer>
        static _CharT*
        _S_construct_aux(_Integer __beg, _Integer __end,
    const _Alloc& __a, __true_type)
        { return _S_construct_aux_2(static_cast<size_type>(__beg),
        __end, __a); }

      static _CharT*
      _S_construct_aux_2(size_type __req, _CharT __c, const _Alloc& __a)
      { return _S_construct(__req, __c, __a); }

      template<class _InIterator>
        static _CharT*
        _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a)
 {
   typedef typename std::__is_integer<_InIterator>::__type _Integral;
   return _S_construct_aux(__beg, __end, __a, _Integral());
        }


      template<class _InIterator>
        static _CharT*
         _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
        input_iterator_tag);



      template<class _FwdIterator>
        static _CharT*
        _S_construct(_FwdIterator __beg, _FwdIterator __end, const _Alloc& __a,
       forward_iterator_tag);

      static _CharT*
      _S_construct(size_type __req, _CharT __c, const _Alloc& __a);

    public:
# 1701 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      copy(_CharT* __s, size_type __n, size_type __pos = 0) const;
# 1711 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      swap(basic_string& __s);
# 1721 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      const _CharT*
      c_str() const
      { return _M_data(); }







      const _CharT*
      data() const
      { return _M_data(); }




      allocator_type
      get_allocator() const
      { return _M_dataplus; }
# 1753 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos, size_type __n) const;
# 1766 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find(const basic_string& __str, size_type __pos = 0) const
      { return this->find(__str.data(), __pos, __str.size()); }
# 1780 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find(__s, __pos, traits_type::length(__s));
      }
# 1797 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find(_CharT __c, size_type __pos = 0) const;
# 1810 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      rfind(const basic_string& __str, size_type __pos = npos) const
      { return this->rfind(__str.data(), __pos, __str.size()); }
# 1825 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos, size_type __n) const;
# 1838 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->rfind(__s, __pos, traits_type::length(__s));
      }
# 1855 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      rfind(_CharT __c, size_type __pos = npos) const;
# 1868 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_of(__str.data(), __pos, __str.size()); }
# 1883 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 1896 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find_first_of(__s, __pos, traits_type::length(__s));
      }
# 1915 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_of(_CharT __c, size_type __pos = 0) const
      { return this->find(__c, __pos); }
# 1929 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_of(__str.data(), __pos, __str.size()); }
# 1944 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 1957 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->find_last_of(__s, __pos, traits_type::length(__s));
      }
# 1976 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_of(_CharT __c, size_type __pos = npos) const
      { return this->rfind(__c, __pos); }
# 1990 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_not_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_not_of(__str.data(), __pos, __str.size()); }
# 2005 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos,
   size_type __n) const;
# 2019 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find_first_not_of(__s, __pos, traits_type::length(__s));
      }
# 2036 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_not_of(_CharT __c, size_type __pos = 0) const;
# 2049 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_not_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_not_of(__str.data(), __pos, __str.size()); }
# 2065 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos,
         size_type __n) const;
# 2078 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->find_last_not_of(__s, __pos, traits_type::length(__s));
      }
# 2095 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_not_of(_CharT __c, size_type __pos = npos) const;
# 2110 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string
      substr(size_type __pos = 0, size_type __n = npos) const
      { return basic_string(*this,
       _M_check(__pos, "basic_string::substr"), __n); }
# 2128 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(const basic_string& __str) const
      {
 const size_type __size = this->size();
 const size_type __osize = __str.size();
 const size_type __len = std::min(__size, __osize);

 int __r = traits_type::compare(_M_data(), __str.data(), __len);
 if (!__r)
   __r = _S_compare(__size, __osize);
 return __r;
      }
# 2158 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n, const basic_string& __str) const;
# 2182 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2) const;
# 2200 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(const _CharT* __s) const;
# 2223 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s) const;
# 2248 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2) const;
  };
# 2260 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
      const _CharT* __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str(__lhs);
      __str.append(__size_type(1), __rhs);
      return __str;
    }
# 2331 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) == 0; }

  template<typename _CharT>
    inline
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, bool>::__type
    operator==(const basic_string<_CharT>& __lhs,
        const basic_string<_CharT>& __rhs)
    { return (__lhs.size() == __rhs.size()
       && !std::char_traits<_CharT>::compare(__lhs.data(), __rhs.data(),
          __lhs.size())); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) == 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) == 0; }
# 2377 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return !(__lhs == __rhs); }
# 2414 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) > 0; }
# 2451 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) < 0; }
# 2488 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) >= 0; }
# 2525 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const _CharT* __lhs,
      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) <= 0; }
# 2562 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline void
    swap(basic_string<_CharT, _Traits, _Alloc>& __lhs,
  basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { __lhs.swap(__rhs); }
# 2579 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT, _Traits, _Alloc>& __str);

  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __is, basic_string<char>& __str);
# 2597 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __os,
        const basic_string<_CharT, _Traits, _Alloc>& __str)
    {


      return __ostream_insert(__os, __str.data(), __str.size());
    }
# 2620 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim);
# 2638 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str)
    { return getline(__is, __str, __is.widen('\n')); }

  template<>
    basic_istream<char>&
    getline(basic_istream<char>& __in, basic_string<char>& __str,
     char __delim);


  template<>
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>& __in, basic_string<wchar_t>& __str,
     wchar_t __delim);


}
# 53 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 1 3
# 42 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3
# 42 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3



namespace std {

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_max_size = (((npos - sizeof(_Rep_base))/sizeof(_CharT)) - 1) / 4;

  template<typename _CharT, typename _Traits, typename _Alloc>
    const _CharT
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_terminal = _CharT();

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::npos;



  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_empty_rep_storage[
    (sizeof(_Rep_base) + sizeof(_CharT) + sizeof(size_type) - 1) /
      sizeof(size_type)];





  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     input_iterator_tag)
      {





 _CharT __buf[128];
 size_type __len = 0;
 while (__beg != __end && __len < sizeof(__buf) / sizeof(_CharT))
   {
     __buf[__len++] = *__beg;
     ++__beg;
   }
 _Rep* __r = _Rep::_S_create(__len, size_type(0), __a);
 _M_copy(__r->_M_refdata(), __buf, __len);
 if (true)
   {
     while (__beg != __end)
       {
  if (__len == __r->_M_capacity)
    {

      _Rep* __another = _Rep::_S_create(__len + 1, __len, __a);
      _M_copy(__another->_M_refdata(), __r->_M_refdata(), __len);
      __r->_M_destroy(__a);
      __r = __another;
    }
  __r->_M_refdata()[__len++] = *__beg;
  ++__beg;
       }
   }
 if (false)
   {
     __r->_M_destroy(__a);
                            ;
   }
 __r->_M_set_length_and_sharable(__len);
 return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template <typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     forward_iterator_tag)
      {





 if (__gnu_cxx::__is_null_pointer(__beg) && __beg != __end)
   __throw_logic_error(("basic_string::_S_construct NULL not valid"));

 const size_type __dnew = static_cast<size_type>(std::distance(__beg,
              __end));

 _Rep* __r = _Rep::_S_create(__dnew, size_type(0), __a);
 if (true)
   { _S_copy_chars(__r->_M_refdata(), __beg, __end); }
 if (false)
   {
     __r->_M_destroy(__a);
                            ;
   }
 __r->_M_set_length_and_sharable(__dnew);
 return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::
    _S_construct(size_type __n, _CharT __c, const _Alloc& __a)
    {





      _Rep* __r = _Rep::_S_create(__n, size_type(0), __a);
      if (__n)
 _M_assign(__r->_M_refdata(), __n, __c);

      __r->_M_set_length_and_sharable(__n);
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str)
    : _M_dataplus(__str._M_rep()->_M_grab(_Alloc(__str.get_allocator()),
       __str.get_allocator()),
    __str.get_allocator())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _Alloc& __a)
    : _M_dataplus(_S_construct(size_type(), _CharT(), __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos, size_type __n)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, _Alloc()), _Alloc())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos,
   size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s + __n, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s ? __s + traits_type::length(__s) :
          __s + npos, __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(size_type __n, _CharT __c, const _Alloc& __a)
    : _M_dataplus(_S_construct(__n, __c, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(_InputIterator __beg, _InputIterator __end, const _Alloc& __a)
    : _M_dataplus(_S_construct(__beg, __end, __a), __a)
    { }
# 239 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const basic_string& __str)
    {
      if (_M_rep() != __str._M_rep())
 {

   const allocator_type __a = this->get_allocator();
   _CharT* __tmp = __str._M_rep()->_M_grab(__a, __str.get_allocator());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const _CharT* __s, size_type __n)
    {
                                             ;
      _M_check_length(this->size(), __n, "basic_string::assign");
      if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
 return _M_replace_safe(size_type(0), this->size(), __s, __n);
      else
 {

   const size_type __pos = __s - _M_data();
   if (__pos >= __n)
     _M_copy(_M_data(), __s, __n);
   else if (__pos)
     _M_move(_M_data(), __s, __n);
   _M_rep()->_M_set_length_and_sharable(__n);
   return *this;
 }
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(size_type __n, _CharT __c)
    {
      if (__n)
 {
   _M_check_length(size_type(0), __n, "basic_string::append");
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_assign(_M_data() + this->size(), __n, __c);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const _CharT* __s, size_type __n)
    {
                                             ;
      if (__n)
 {
   _M_check_length(size_type(0), __n, "basic_string::append");
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     {
       if (_M_disjunct(__s))
  this->reserve(__len);
       else
  {
    const size_type __off = __s - _M_data();
    this->reserve(__len);
    __s = _M_data() + __off;
  }
     }
   _M_copy(_M_data() + this->size(), __s, __n);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str)
    {
      const size_type __size = __str.size();
      if (__size)
 {
   const size_type __len = __size + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_copy(_M_data() + this->size(), __str._M_data(), __size);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str, size_type __pos, size_type __n)
    {
      __str._M_check(__pos, "basic_string::append");
      __n = __str._M_limit(__pos, __n);
      if (__n)
 {
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_copy(_M_data() + this->size(), __str._M_data() + __pos, __n);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     insert(size_type __pos, const _CharT* __s, size_type __n)
     {
                                              ;
       _M_check(__pos, "basic_string::insert");
       _M_check_length(size_type(0), __n, "basic_string::insert");
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, size_type(0), __s, __n);
       else
         {

           const size_type __off = __s - _M_data();
           _M_mutate(__pos, 0, __n);
           __s = _M_data() + __off;
           _CharT* __p = _M_data() + __pos;
           if (__s + __n <= __p)
             _M_copy(__p, __s, __n);
           else if (__s >= __p)
             _M_copy(__p, __s + __n, __n);
           else
             {
        const size_type __nleft = __p - __s;
               _M_copy(__p, __s, __nleft);
               _M_copy(__p + __nleft, __p + __n, __n - __nleft);
             }
           return *this;
         }
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     typename basic_string<_CharT, _Traits, _Alloc>::iterator
     basic_string<_CharT, _Traits, _Alloc>::
     erase(iterator __first, iterator __last)
     {

                           ;




       const size_type __size = __last - __first;
       if (__size)
  {
    const size_type __pos = __first - _M_ibegin();
    _M_mutate(__pos, __size, size_type(0));
    _M_rep()->_M_set_leaked();
    return iterator(_M_data() + __pos);
  }
       else
  return __first;
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     replace(size_type __pos, size_type __n1, const _CharT* __s,
      size_type __n2)
     {
                                               ;
       _M_check(__pos, "basic_string::replace");
       __n1 = _M_limit(__pos, __n1);
       _M_check_length(__n1, __n2, "basic_string::replace");
       bool __left;
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, __n1, __s, __n2);
       else if ((__left = __s + __n2 <= _M_data() + __pos)
  || _M_data() + __pos + __n1 <= __s)
  {

    size_type __off = __s - _M_data();
    __left ? __off : (__off += __n2 - __n1);
    _M_mutate(__pos, __n1, __n2);
    _M_copy(_M_data() + __pos, _M_data() + __off, __n2);
    return *this;
  }
       else
  {

    const basic_string __tmp(__s, __n2);
    return _M_replace_safe(__pos, __n1, __tmp._M_data(), __n2);
  }
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_destroy(const _Alloc& __a) throw ()
    {
      const size_type __size = sizeof(_Rep_base) +
                        (this->_M_capacity + 1) * sizeof(_CharT);
      _Raw_bytes_alloc(__a).deallocate(reinterpret_cast<char*>(this), __size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_leak_hard()
    {




      if (_M_rep()->_M_is_shared())
 _M_mutate(0, 0, 0);
      _M_rep()->_M_set_leaked();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_mutate(size_type __pos, size_type __len1, size_type __len2)
    {
      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __len2 - __len1;
      const size_type __how_much = __old_size - __pos - __len1;

      if (__new_size > this->capacity() || _M_rep()->_M_is_shared())
 {

   const allocator_type __a = get_allocator();
   _Rep* __r = _Rep::_S_create(__new_size, this->capacity(), __a);

   if (__pos)
     _M_copy(__r->_M_refdata(), _M_data(), __pos);
   if (__how_much)
     _M_copy(__r->_M_refdata() + __pos + __len2,
      _M_data() + __pos + __len1, __how_much);

   _M_rep()->_M_dispose(__a);
   _M_data(__r->_M_refdata());
 }
      else if (__how_much && __len1 != __len2)
 {

   _M_move(_M_data() + __pos + __len2,
    _M_data() + __pos + __len1, __how_much);
 }
      _M_rep()->_M_set_length_and_sharable(__new_size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    reserve(size_type __res)
    {
      if (__res != this->capacity() || _M_rep()->_M_is_shared())
        {

   if (__res < this->size())
     __res = this->size();
   const allocator_type __a = get_allocator();
   _CharT* __tmp = _M_rep()->_M_clone(__a, __res - this->size());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
        }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    swap(basic_string& __s)
    {
      if (_M_rep()->_M_is_leaked())
 _M_rep()->_M_set_sharable();
      if (__s._M_rep()->_M_is_leaked())
 __s._M_rep()->_M_set_sharable();
      if (this->get_allocator() == __s.get_allocator())
 {
   _CharT* __tmp = _M_data();
   _M_data(__s._M_data());
   __s._M_data(__tmp);
 }

      else
 {
   const basic_string __tmp1(_M_ibegin(), _M_iend(),
        __s.get_allocator());
   const basic_string __tmp2(__s._M_ibegin(), __s._M_iend(),
        this->get_allocator());
   *this = __tmp2;
   __s = __tmp1;
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::_Rep*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _S_create(size_type __capacity, size_type __old_capacity,
       const _Alloc& __alloc)
    {


      if (__capacity > _S_max_size)
 __throw_length_error(("basic_string::_S_create"));
# 576 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3
      const size_type __pagesize = 4096;
      const size_type __malloc_header_size = 4 * sizeof(void*);







      if (__capacity > __old_capacity && __capacity < 2 * __old_capacity)
 __capacity = 2 * __old_capacity;




      size_type __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);

      const size_type __adj_size = __size + __malloc_header_size;
      if (__adj_size > __pagesize && __capacity > __old_capacity)
 {
   const size_type __extra = __pagesize - __adj_size % __pagesize;
   __capacity += __extra / sizeof(_CharT);

   if (__capacity > _S_max_size)
     __capacity = _S_max_size;
   __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);
 }



      void* __place = _Raw_bytes_alloc(__alloc).allocate(__size);
      _Rep *__p = new (__place) _Rep;
      __p->_M_capacity = __capacity;







      __p->_M_set_sharable();
      return __p;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_clone(const _Alloc& __alloc, size_type __res)
    {

      const size_type __requested_cap = this->_M_length + __res;
      _Rep* __r = _Rep::_S_create(__requested_cap, this->_M_capacity,
      __alloc);
      if (this->_M_length)
 _M_copy(__r->_M_refdata(), _M_refdata(), this->_M_length);

      __r->_M_set_length_and_sharable(this->_M_length);
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    resize(size_type __n, _CharT __c)
    {
      const size_type __size = this->size();
      _M_check_length(__size, __n, "basic_string::resize");
      if (__size < __n)
 this->append(__n - __size, __c);
      else if (__n < __size)
 this->erase(__n);

    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
      basic_string<_CharT, _Traits, _Alloc>&
      basic_string<_CharT, _Traits, _Alloc>::
      _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
     _InputIterator __k2, __false_type)
      {
 const basic_string __s(__k1, __k2);
 const size_type __n1 = __i2 - __i1;
 _M_check_length(__n1, __s.size(), "basic_string::_M_replace_dispatch");
 return _M_replace_safe(__i1 - _M_ibegin(), __n1, __s._M_data(),
          __s.size());
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
     _CharT __c)
    {
      _M_check_length(__n1, __n2, "basic_string::_M_replace_aux");
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
 _M_assign(_M_data() + __pos1, __n2, __c);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
      size_type __n2)
    {
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
 _M_copy(_M_data() + __pos1, __s, __n2);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
                                      ;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      const __size_type __len = _Traits::length(__lhs);
      __string_type __str;
      __str.reserve(__len + __rhs.size());
      __str.append(__lhs, __len);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str;
      const __size_type __len = __rhs.size();
      __str.reserve(__len + 1);
      __str.append(__size_type(1), __lhs);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    copy(_CharT* __s, size_type __n, size_type __pos) const
    {
      _M_check(__pos, "basic_string::copy");
      __n = _M_limit(__pos, __n);
                                             ;
      if (__n)
 _M_copy(__s, _M_data() + __pos, __n);

      return __n;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      const size_type __size = this->size();
      const _CharT* __data = _M_data();

      if (__n == 0)
 return __pos <= __size ? __pos : npos;

      if (__n <= __size)
 {
   for (; __pos <= __size - __n; ++__pos)
     if (traits_type::eq(__data[__pos], __s[0])
  && traits_type::compare(__data + __pos + 1,
     __s + 1, __n - 1) == 0)
       return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(_CharT __c, size_type __pos) const
    {
      size_type __ret = npos;
      const size_type __size = this->size();
      if (__pos < __size)
 {
   const _CharT* __data = _M_data();
   const size_type __n = __size - __pos;
   const _CharT* __p = traits_type::find(__data + __pos, __n, __c);
   if (__p)
     __ret = __p - __data;
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      const size_type __size = this->size();
      if (__n <= __size)
 {
   __pos = std::min(size_type(__size - __n), __pos);
   const _CharT* __data = _M_data();
   do
     {
       if (traits_type::compare(__data + __pos, __s, __n) == 0)
  return __pos;
     }
   while (__pos-- > 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   for (++__size; __size-- > 0; )
     if (traits_type::eq(_M_data()[__size], __c))
       return __size;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      for (; __n && __pos < this->size(); ++__pos)
 {
   const _CharT* __p = traits_type::find(__s, __n, _M_data()[__pos]);
   if (__p)
     return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      size_type __size = this->size();
      if (__size && __n)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size-- != 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::find(__s, __n, _M_data()[__pos]))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(_CharT __c, size_type __pos) const
    {
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::eq(_M_data()[__pos], __c))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::eq(_M_data()[__size], __c))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n, const basic_string& __str) const
    {
      _M_check(__pos, "basic_string::compare");
      __n = _M_limit(__pos, __n);
      const size_type __osize = __str.size();
      const size_type __len = std::min(__n, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __str.data(), __len);
      if (!__r)
 __r = _S_compare(__n, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos1, size_type __n1, const basic_string& __str,
     size_type __pos2, size_type __n2) const
    {
      _M_check(__pos1, "basic_string::compare");
      __str._M_check(__pos2, "basic_string::compare");
      __n1 = _M_limit(__pos1, __n1);
      __n2 = __str._M_limit(__pos2, __n2);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos1,
         __str.data() + __pos2, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(const _CharT* __s) const
    {
                                    ;
      const size_type __size = this->size();
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__size, __osize);
      int __r = traits_type::compare(_M_data(), __s, __len);
      if (!__r)
 __r = _S_compare(__size, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s) const
    {
                                    ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__n1, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s,
     size_type __n2) const
    {
                                              ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in,
        basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;
      typedef ctype<_CharT> __ctype_type;
      typedef typename __ctype_type::ctype_base __ctype_base;

      __size_type __extracted = 0;
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   if (true)
     {

       __str.erase();
       _CharT __buf[128];
       __size_type __len = 0;
       const streamsize __w = __in.width();
       const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
                                : __str.max_size();
       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(__ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    if (__len == sizeof(__buf) / sizeof(_CharT))
      {
        __str.append(__buf, sizeof(__buf) / sizeof(_CharT));
        __len = 0;
      }
    __buf[__len++] = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }
       __str.append(__buf, __len);

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       __in.width(0);
     }
   if (false)
     {
       __in._M_setstate(__ios_base::badbit);
                              ;
     }
   if (false)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }

      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __in,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;

      __size_type __extracted = 0;
      const __size_type __n = __str.max_size();
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, true);
      if (__cerb)
 {
   if (true)
     {
       __str.erase();
       const __int_type __idelim = _Traits::to_int_type(__delim);
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !_Traits::eq_int_type(__c, __idelim))
  {
    __str += _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       else if (_Traits::eq_int_type(__c, __idelim))
  {
    ++__extracted;
    __in.rdbuf()->sbumpc();
  }
       else
  __err |= __ios_base::failbit;
     }
   if (false)
     {
       __in._M_setstate(__ios_base::badbit);
                              ;
     }
   if (false)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }
      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }





  extern template class basic_string<char>;
  extern template
    basic_istream<char>&
    operator>>(basic_istream<char>&, string&);
  extern template
    basic_ostream<char>&
    operator<<(basic_ostream<char>&, const string&);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&, char);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&);


  extern template class basic_string<wchar_t>;
  extern template
    basic_istream<wchar_t>&
    operator>>(basic_istream<wchar_t>&, wstring&);
  extern template
    basic_ostream<wchar_t>&
    operator<<(basic_ostream<wchar_t>&, const wstring&);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&, wchar_t);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&);



}
# 56 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3
# 42 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 2 3


namespace std {
# 61 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  class locale
  {
  public:


    typedef int category;


    class facet;
    class id;
    class _Impl;

    friend class facet;
    friend class _Impl;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;
# 97 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    static const category none = 0;
    static const category ctype = 1L << 0;
    static const category numeric = 1L << 1;
    static const category collate = 1L << 2;
    static const category time = 1L << 3;
    static const category monetary = 1L << 4;
    static const category messages = 1L << 5;
    static const category all = (ctype | numeric | collate |
        time | monetary | messages);
# 116 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    locale() throw();
# 125 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    locale(const locale& __other) throw();
# 135 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    explicit
    locale(const char* __s);
# 150 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    locale(const locale& __base, const char* __s, category __cat);
# 163 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    locale(const locale& __base, const locale& __add, category __cat);
# 175 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    template<typename _Facet>
      locale(const locale& __other, _Facet* __f);


    ~locale() throw();
# 189 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    const locale&
    operator=(const locale& __other) throw();
# 204 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    template<typename _Facet>
      locale
      combine(const locale& __other) const;






    string
    name() const;
# 223 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    bool
    operator==(const locale& __other) const throw();







    bool
    operator!=(const locale& __other) const throw()
    { return !(this->operator==(__other)); }
# 251 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    template<typename _Char, typename _Traits, typename _Alloc>
      bool
      operator()(const basic_string<_Char, _Traits, _Alloc>& __s1,
   const basic_string<_Char, _Traits, _Alloc>& __s2) const;
# 267 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    static locale
    global(const locale&);




    static const locale&
    classic();

  private:

    _Impl* _M_impl;


    static _Impl* _S_classic;


    static _Impl* _S_global;





    static const char* const* const _S_categories;
# 302 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    enum { _S_categories_size = 6 + 0 };


    static __gthread_once_t _S_once;


    explicit
    locale(_Impl*) throw();

    static void
    _S_initialize();

    static void
    _S_initialize_once() throw();

    static category
    _S_normalize_category(category);

    void
    _M_coalesce(const locale& __base, const locale& __add, category __cat);
  };
# 336 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  class locale::facet
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    mutable _Atomic_word _M_refcount;


    static __c_locale _S_c_locale;


    static const char _S_c_name[2];


    static __gthread_once_t _S_once;


    static void
    _S_initialize_once();

  protected:
# 367 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    explicit
    facet(size_t __refs = 0) throw() : _M_refcount(__refs ? 1 : 0)
    { }


    virtual
    ~facet();

    static void
    _S_create_c_locale(__c_locale& __cloc, const char* __s,
         __c_locale __old = 0);

    static __c_locale
    _S_clone_c_locale(__c_locale& __cloc) throw();

    static void
    _S_destroy_c_locale(__c_locale& __cloc);

    static __c_locale
    _S_lc_ctype_c_locale(__c_locale __cloc, const char* __s);



    static __c_locale
    _S_get_c_locale();

    __attribute__ ((__const__)) static const char*
    _S_get_c_name() throw();

  private:
    void
    _M_add_reference() const throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() const throw()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
   if (true)
     { delete this; }
   if (false)
     { }
 }
    }

    facet(const facet&);

    facet&
    operator=(const facet&);
  };
# 431 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  class locale::id
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();




    mutable size_t _M_index;


    static _Atomic_word _S_refcount;

    void
    operator=(const id&);

    id(const id&);

  public:



    id() { }

    size_t
    _M_id() const throw();
  };



  class locale::_Impl
  {
  public:

    friend class locale;
    friend class locale::facet;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;

  private:

    _Atomic_word _M_refcount;
    const facet** _M_facets;
    size_t _M_facets_size;
    const facet** _M_caches;
    char** _M_names;
    static const locale::id* const _S_id_ctype[];
    static const locale::id* const _S_id_numeric[];
    static const locale::id* const _S_id_collate[];
    static const locale::id* const _S_id_time[];
    static const locale::id* const _S_id_monetary[];
    static const locale::id* const _S_id_messages[];
    static const locale::id* const* const _S_facet_categories[];

    void
    _M_add_reference() throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() throw()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
   if (true)
     { delete this; }
   if (false)
     { }
 }
    }

    _Impl(const _Impl&, size_t);
    _Impl(const char*, size_t);
    _Impl(size_t) throw();

   ~_Impl() throw();

    _Impl(const _Impl&);

    void
    operator=(const _Impl&);

    bool
    _M_check_same_name()
    {
      bool __ret = true;
      if (_M_names[1])

 for (size_t __i = 0; __ret && __i < _S_categories_size - 1; ++__i)
   __ret = __builtin_strcmp(_M_names[__i], _M_names[__i + 1]) == 0;
      return __ret;
    }

    void
    _M_replace_categories(const _Impl*, category);

    void
    _M_replace_category(const _Impl*, const locale::id* const*);

    void
    _M_replace_facet(const _Impl*, const locale::id*);

    void
    _M_install_facet(const locale::id*, const facet*);

    template<typename _Facet>
      void
      _M_init_facet(_Facet* __facet)
      { _M_install_facet(&_Facet::id, __facet); }

    void
    _M_install_cache(const facet*, size_t);
  };
# 574 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw();
# 591 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc);
# 608 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  template<typename _CharT>
    class collate : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


    protected:


      __c_locale _M_c_locale_collate;

    public:

      static locale::id id;
# 635 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      explicit
      collate(size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_get_c_locale())
      { }
# 649 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      explicit
      collate(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_clone_c_locale(__cloc))
      { }
# 666 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      int
      compare(const _CharT* __lo1, const _CharT* __hi1,
       const _CharT* __lo2, const _CharT* __hi2) const
      { return this->do_compare(__lo1, __hi1, __lo2, __hi2); }
# 685 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      string_type
      transform(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_transform(__lo, __hi); }
# 699 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      long
      hash(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_hash(__lo, __hi); }


      int
      _M_compare(const _CharT*, const _CharT*) const throw();

      size_t
      _M_transform(_CharT*, const _CharT*, size_t) const throw();

  protected:

      virtual
      ~collate()
      { _S_destroy_c_locale(_M_c_locale_collate); }
# 728 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      virtual int
      do_compare(const _CharT* __lo1, const _CharT* __hi1,
   const _CharT* __lo2, const _CharT* __hi2) const;
# 744 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      virtual string_type
      do_transform(const _CharT* __lo, const _CharT* __hi) const;
# 757 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      virtual long
      do_hash(const _CharT* __lo, const _CharT* __hi) const;
    };

  template<typename _CharT>
    locale::id collate<_CharT>::id;


  template<>
    int
    collate<char>::_M_compare(const char*, const char*) const throw();

  template<>
    size_t
    collate<char>::_M_transform(char*, const char*, size_t) const throw();


  template<>
    int
    collate<wchar_t>::_M_compare(const wchar_t*, const wchar_t*) const throw();

  template<>
    size_t
    collate<wchar_t>::_M_transform(wchar_t*, const wchar_t*, size_t) const throw();



  template<typename _CharT>
    class collate_byname : public collate<_CharT>
    {
    public:


      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


      explicit
      collate_byname(const char* __s, size_t __refs = 0)
      : collate<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     this->_S_destroy_c_locale(this->_M_c_locale_collate);
     this->_S_create_c_locale(this->_M_c_locale_collate, __s);
   }
      }

    protected:
      virtual
      ~collate_byname() { }
    };

}



# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.tcc" 1 3
# 37 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.tcc" 3
# 37 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.tcc" 3

namespace std {

  template<typename _Facet>
    locale::
    locale(const locale& __other, _Facet* __f)
    {
      _M_impl = new _Impl(*__other._M_impl, 1);

      if (true)
 { _M_impl->_M_install_facet(&_Facet::id, __f); }
      if (false)
 {
   _M_impl->_M_remove_reference();
                          ;
 }
      delete [] _M_impl->_M_names[0];
      _M_impl->_M_names[0] = 0;
    }

  template<typename _Facet>
    locale
    locale::
    combine(const locale& __other) const
    {
      _Impl* __tmp = new _Impl(*_M_impl, 1);
      if (true)
 {
   __tmp->_M_replace_facet(__other._M_impl, &_Facet::id);
 }
      if (false)
 {
   __tmp->_M_remove_reference();
                          ;
 }
      return locale(__tmp);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    bool
    locale::
    operator()(const basic_string<_CharT, _Traits, _Alloc>& __s1,
        const basic_string<_CharT, _Traits, _Alloc>& __s2) const
    {
      typedef std::collate<_CharT> __collate_type;
      const __collate_type& __collate = use_facet<__collate_type>(*this);
      return (__collate.compare(__s1.data(), __s1.data() + __s1.length(),
    __s2.data(), __s2.data() + __s2.length()) < 0);
    }


  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw()
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      return (__i < __loc._M_impl->_M_facets_size

       && dynamic_cast<const _Facet*>(__facets[__i]));



    }

  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc)
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      if (__i >= __loc._M_impl->_M_facets_size || !__facets[__i])
        __throw_bad_cast();

      return dynamic_cast<const _Facet&>(*__facets[__i]);



    }



  template<typename _CharT>
    int
    collate<_CharT>::_M_compare(const _CharT*, const _CharT*) const throw ()
    { return 0; }


  template<typename _CharT>
    size_t
    collate<_CharT>::_M_transform(_CharT*, const _CharT*, size_t) const throw ()
    { return 0; }

  template<typename _CharT>
    int
    collate<_CharT>::
    do_compare(const _CharT* __lo1, const _CharT* __hi1,
        const _CharT* __lo2, const _CharT* __hi2) const
    {


      const string_type __one(__lo1, __hi1);
      const string_type __two(__lo2, __hi2);

      const _CharT* __p = __one.c_str();
      const _CharT* __pend = __one.data() + __one.length();
      const _CharT* __q = __two.c_str();
      const _CharT* __qend = __two.data() + __two.length();




      for (;;)
 {
   const int __res = _M_compare(__p, __q);
   if (__res)
     return __res;

   __p += char_traits<_CharT>::length(__p);
   __q += char_traits<_CharT>::length(__q);
   if (__p == __pend && __q == __qend)
     return 0;
   else if (__p == __pend)
     return -1;
   else if (__q == __qend)
     return 1;

   __p++;
   __q++;
 }
    }

  template<typename _CharT>
    typename collate<_CharT>::string_type
    collate<_CharT>::
    do_transform(const _CharT* __lo, const _CharT* __hi) const
    {
      string_type __ret;


      const string_type __str(__lo, __hi);

      const _CharT* __p = __str.c_str();
      const _CharT* __pend = __str.data() + __str.length();

      size_t __len = (__hi - __lo) * 2;

      _CharT* __c = new _CharT[__len];

      if (true)
 {



   for (;;)
     {

       size_t __res = _M_transform(__c, __p, __len);


       if (__res >= __len)
  {
    __len = __res + 1;
    delete [] __c, __c = 0;
    __c = new _CharT[__len];
    __res = _M_transform(__c, __p, __len);
  }

       __ret.append(__c, __res);
       __p += char_traits<_CharT>::length(__p);
       if (__p == __pend)
  break;

       __p++;
       __ret.push_back(_CharT());
     }
 }
      if (false)
 {
   delete [] __c;
                          ;
 }

      delete [] __c;

      return __ret;
    }

  template<typename _CharT>
    long
    collate<_CharT>::
    do_hash(const _CharT* __lo, const _CharT* __hi) const
    {
      unsigned long __val = 0;
      for (; __lo < __hi; ++__lo)
 __val =
   *__lo + ((__val << 7)
     | (__val >> (__gnu_cxx::__numeric_traits<unsigned long>::
    __digits - 7)));
      return static_cast<long>(__val);
    }





  extern template class collate<char>;
  extern template class collate_byname<char>;

  extern template
    const collate<char>&
    use_facet<collate<char> >(const locale&);

  extern template
    bool
    has_facet<collate<char> >(const locale&);


  extern template class collate<wchar_t>;
  extern template class collate_byname<wchar_t>;

  extern template
    const collate<wchar_t>&
    use_facet<collate<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<collate<wchar_t> >(const locale&);



}
# 815 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 2 3
# 43 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 2 3
# 53 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
namespace std {





  enum _Ios_Fmtflags
    {
      _S_boolalpha = 1L << 0,
      _S_dec = 1L << 1,
      _S_fixed = 1L << 2,
      _S_hex = 1L << 3,
      _S_internal = 1L << 4,
      _S_left = 1L << 5,
      _S_oct = 1L << 6,
      _S_right = 1L << 7,
      _S_scientific = 1L << 8,
      _S_showbase = 1L << 9,
      _S_showpoint = 1L << 10,
      _S_showpos = 1L << 11,
      _S_skipws = 1L << 12,
      _S_unitbuf = 1L << 13,
      _S_uppercase = 1L << 14,
      _S_adjustfield = _S_left | _S_right | _S_internal,
      _S_basefield = _S_dec | _S_oct | _S_hex,
      _S_floatfield = _S_scientific | _S_fixed,
      _S_ios_fmtflags_end = 1L << 16
    };

  inline _Ios_Fmtflags
  operator&(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator|(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator^(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Fmtflags&
  operator|=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a | __b; }

  inline _Ios_Fmtflags&
  operator&=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a & __b; }

  inline _Ios_Fmtflags&
  operator^=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a ^ __b; }

  inline _Ios_Fmtflags
  operator~(_Ios_Fmtflags __a)
  { return _Ios_Fmtflags(~static_cast<int>(__a)); }


  enum _Ios_Openmode
    {
      _S_app = 1L << 0,
      _S_ate = 1L << 1,
      _S_bin = 1L << 2,
      _S_in = 1L << 3,
      _S_out = 1L << 4,
      _S_trunc = 1L << 5,
      _S_ios_openmode_end = 1L << 16
    };

  inline _Ios_Openmode
  operator&(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator|(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator^(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Openmode&
  operator|=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a | __b; }

  inline _Ios_Openmode&
  operator&=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a & __b; }

  inline _Ios_Openmode&
  operator^=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a ^ __b; }

  inline _Ios_Openmode
  operator~(_Ios_Openmode __a)
  { return _Ios_Openmode(~static_cast<int>(__a)); }


  enum _Ios_Iostate
    {
      _S_goodbit = 0,
      _S_badbit = 1L << 0,
      _S_eofbit = 1L << 1,
      _S_failbit = 1L << 2,
      _S_ios_iostate_end = 1L << 16
    };

  inline _Ios_Iostate
  operator&(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator|(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator^(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Iostate&
  operator|=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a | __b; }

  inline _Ios_Iostate&
  operator&=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a & __b; }

  inline _Ios_Iostate&
  operator^=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a ^ __b; }

  inline _Ios_Iostate
  operator~(_Ios_Iostate __a)
  { return _Ios_Iostate(~static_cast<int>(__a)); }

  enum _Ios_Seekdir
    {
      _S_beg = 0,
      _S_cur = 1,
      _S_end = 2,
      _S_ios_seekdir_end = 1L << 16
    };
# 206 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
  class ios_base
  {
  public:







    class failure : public exception
    {
    public:


      explicit
      failure(const string& __str) throw();



      virtual
      ~failure() throw();

      virtual const char*
      what() const throw();

    private:
      string _M_msg;
    };
# 262 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef _Ios_Fmtflags fmtflags;


    static const fmtflags boolalpha = _S_boolalpha;


    static const fmtflags dec = _S_dec;


    static const fmtflags fixed = _S_fixed;


    static const fmtflags hex = _S_hex;




    static const fmtflags internal = _S_internal;



    static const fmtflags left = _S_left;


    static const fmtflags oct = _S_oct;



    static const fmtflags right = _S_right;


    static const fmtflags scientific = _S_scientific;



    static const fmtflags showbase = _S_showbase;



    static const fmtflags showpoint = _S_showpoint;


    static const fmtflags showpos = _S_showpos;


    static const fmtflags skipws = _S_skipws;


    static const fmtflags unitbuf = _S_unitbuf;



    static const fmtflags uppercase = _S_uppercase;


    static const fmtflags adjustfield = _S_adjustfield;


    static const fmtflags basefield = _S_basefield;


    static const fmtflags floatfield = _S_floatfield;
# 337 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef _Ios_Iostate iostate;



    static const iostate badbit = _S_badbit;


    static const iostate eofbit = _S_eofbit;




    static const iostate failbit = _S_failbit;


    static const iostate goodbit = _S_goodbit;
# 368 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef _Ios_Openmode openmode;


    static const openmode app = _S_app;


    static const openmode ate = _S_ate;




    static const openmode binary = _S_bin;


    static const openmode in = _S_in;


    static const openmode out = _S_out;


    static const openmode trunc = _S_trunc;
# 400 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef _Ios_Seekdir seekdir;


    static const seekdir beg = _S_beg;


    static const seekdir cur = _S_cur;


    static const seekdir end = _S_end;


    typedef int io_state;
    typedef int open_mode;
    typedef int seek_dir;

    typedef std::streampos streampos;
    typedef std::streamoff streamoff;
# 426 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    enum event
    {
      erase_event,
      imbue_event,
      copyfmt_event
    };
# 443 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef void (*event_callback) (event, ios_base&, int);
# 455 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    void
    register_callback(event_callback __fn, int __index);

  protected:
    streamsize _M_precision;
    streamsize _M_width;
    fmtflags _M_flags;
    iostate _M_exception;
    iostate _M_streambuf_state;



    struct _Callback_list
    {

      _Callback_list* _M_next;
      ios_base::event_callback _M_fn;
      int _M_index;
      _Atomic_word _M_refcount;

      _Callback_list(ios_base::event_callback __fn, int __index,
       _Callback_list* __cb)
      : _M_next(__cb), _M_fn(__fn), _M_index(__index), _M_refcount(0) { }

      void
      _M_add_reference() { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }


      int
      _M_remove_reference()
      { return __gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1); }
    };

     _Callback_list* _M_callbacks;

    void
    _M_call_callbacks(event __ev) throw();

    void
    _M_dispose_callbacks(void) throw();


    struct _Words
    {
      void* _M_pword;
      long _M_iword;
      _Words() : _M_pword(0), _M_iword(0) { }
    };


    _Words _M_word_zero;



    enum { _S_local_word_size = 8 };
    _Words _M_local_word[_S_local_word_size];


    int _M_word_size;
    _Words* _M_word;

    _Words&
    _M_grow_words(int __index, bool __iword);


    locale _M_ios_locale;

    void
    _M_init() throw();

  public:





    class Init
    {
      friend class ios_base;
    public:
      Init();
      ~Init();

    private:
      static _Atomic_word _S_refcount;
      static bool _S_synced_with_stdio;
    };






    fmtflags
    flags() const
    { return _M_flags; }
# 559 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    fmtflags
    flags(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags = __fmtfl;
      return __old;
    }
# 575 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    fmtflags
    setf(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags |= __fmtfl;
      return __old;
    }
# 592 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    fmtflags
    setf(fmtflags __fmtfl, fmtflags __mask)
    {
      fmtflags __old = _M_flags;
      _M_flags &= ~__mask;
      _M_flags |= (__fmtfl & __mask);
      return __old;
    }







    void
    unsetf(fmtflags __mask)
    { _M_flags &= ~__mask; }
# 618 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    streamsize
    precision() const
    { return _M_precision; }






    streamsize
    precision(streamsize __prec)
    {
      streamsize __old = _M_precision;
      _M_precision = __prec;
      return __old;
    }







    streamsize
    width() const
    { return _M_width; }






    streamsize
    width(streamsize __wide)
    {
      streamsize __old = _M_width;
      _M_width = __wide;
      return __old;
    }
# 669 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    static bool
    sync_with_stdio(bool __sync = true);
# 681 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    locale
    imbue(const locale& __loc) throw();
# 692 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    locale
    getloc() const
    { return _M_ios_locale; }
# 703 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    const locale&
    _M_getloc() const
    { return _M_ios_locale; }
# 722 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    static int
    xalloc() throw();
# 738 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    long&
    iword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, true);
      return __word._M_iword;
    }
# 759 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    void*&
    pword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, false);
      return __word._M_pword;
    }
# 776 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    virtual ~ios_base();

  protected:
    ios_base() throw ();



  private:
    ios_base(const ios_base&);

    ios_base&
    operator=(const ios_base&);
  };



  inline ios_base&
  boolalpha(ios_base& __base)
  {
    __base.setf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  noboolalpha(ios_base& __base)
  {
    __base.unsetf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  showbase(ios_base& __base)
  {
    __base.setf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  noshowbase(ios_base& __base)
  {
    __base.unsetf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  showpoint(ios_base& __base)
  {
    __base.setf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  noshowpoint(ios_base& __base)
  {
    __base.unsetf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  showpos(ios_base& __base)
  {
    __base.setf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  noshowpos(ios_base& __base)
  {
    __base.unsetf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  skipws(ios_base& __base)
  {
    __base.setf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  noskipws(ios_base& __base)
  {
    __base.unsetf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  uppercase(ios_base& __base)
  {
    __base.setf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  nouppercase(ios_base& __base)
  {
    __base.unsetf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  unitbuf(ios_base& __base)
  {
     __base.setf(ios_base::unitbuf);
     return __base;
  }


  inline ios_base&
  nounitbuf(ios_base& __base)
  {
     __base.unsetf(ios_base::unitbuf);
     return __base;
  }



  inline ios_base&
  internal(ios_base& __base)
  {
     __base.setf(ios_base::internal, ios_base::adjustfield);
     return __base;
  }


  inline ios_base&
  left(ios_base& __base)
  {
    __base.setf(ios_base::left, ios_base::adjustfield);
    return __base;
  }


  inline ios_base&
  right(ios_base& __base)
  {
    __base.setf(ios_base::right, ios_base::adjustfield);
    return __base;
  }



  inline ios_base&
  dec(ios_base& __base)
  {
    __base.setf(ios_base::dec, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  hex(ios_base& __base)
  {
    __base.setf(ios_base::hex, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  oct(ios_base& __base)
  {
    __base.setf(ios_base::oct, ios_base::basefield);
    return __base;
  }



  inline ios_base&
  fixed(ios_base& __base)
  {
    __base.setf(ios_base::fixed, ios_base::floatfield);
    return __base;
  }


  inline ios_base&
  scientific(ios_base& __base)
  {
    __base.setf(ios_base::scientific, ios_base::floatfield);
    return __base;
  }

}
# 43 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 1 3
# 37 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
# 37 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3








namespace std {

  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>*,
     basic_streambuf<_CharT, _Traits>*, bool&);
# 113 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
  template<typename _CharT, typename _Traits>
    class basic_streambuf
    {
    public:






      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;




      typedef basic_streambuf<char_type, traits_type> __streambuf_type;


      friend class basic_ios<char_type, traits_type>;
      friend class basic_istream<char_type, traits_type>;
      friend class basic_ostream<char_type, traits_type>;
      friend class istreambuf_iterator<char_type, traits_type>;
      friend class ostreambuf_iterator<char_type, traits_type>;

      friend streamsize
      __copy_streambufs_eof<>(__streambuf_type*, __streambuf_type*, bool&);

      template<bool _IsMove, typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
        __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
      istreambuf_iterator<_CharT2> >::__type
        find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);

      template<typename _CharT2, typename _Traits2>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&, _CharT2*);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&,
     basic_string<_CharT2, _Traits2, _Alloc>&);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        getline(basic_istream<_CharT2, _Traits2>&,
  basic_string<_CharT2, _Traits2, _Alloc>&, _CharT2);

    protected:
# 179 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      char_type* _M_in_beg;
      char_type* _M_in_cur;
      char_type* _M_in_end;
      char_type* _M_out_beg;
      char_type* _M_out_cur;
      char_type* _M_out_end;


      locale _M_buf_locale;

  public:

      virtual
      ~basic_streambuf()
      { }
# 203 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      locale
      pubimbue(const locale &__loc)
      {
 locale __tmp(this->getloc());
 this->imbue(__loc);
 _M_buf_locale = __loc;
 return __tmp;
      }
# 220 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      locale
      getloc() const
      { return _M_buf_locale; }
# 233 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      __streambuf_type*
      pubsetbuf(char_type* __s, streamsize __n)
      { return this->setbuf(__s, __n); }

      pos_type
      pubseekoff(off_type __off, ios_base::seekdir __way,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekoff(__off, __way, __mode); }

      pos_type
      pubseekpos(pos_type __sp,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekpos(__sp, __mode); }

      int
      pubsync() { return this->sync(); }
# 260 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      streamsize
      in_avail()
      {
 const streamsize __ret = this->egptr() - this->gptr();
 return __ret ? __ret : this->showmanyc();
      }
# 274 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      snextc()
      {
 int_type __ret = traits_type::eof();
 if (__builtin_expect(!traits_type::eq_int_type(this->sbumpc(),
             __ret), true))
   __ret = this->sgetc();
 return __ret;
      }
# 292 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sbumpc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 else
   __ret = this->uflow();
 return __ret;
      }
# 314 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sgetc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   __ret = traits_type::to_int_type(*this->gptr());
 else
   __ret = this->underflow();
 return __ret;
      }
# 333 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      streamsize
      sgetn(char_type* __s, streamsize __n)
      { return this->xsgetn(__s, __n); }
# 348 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sputbackc(char_type __c)
      {
 int_type __ret;
 const bool __testpos = this->eback() < this->gptr();
 if (__builtin_expect(!__testpos ||
        !traits_type::eq(__c, this->gptr()[-1]), false))
   __ret = this->pbackfail(traits_type::to_int_type(__c));
 else
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 return __ret;
      }
# 373 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sungetc()
      {
 int_type __ret;
 if (__builtin_expect(this->eback() < this->gptr(), true))
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 else
   __ret = this->pbackfail();
 return __ret;
      }
# 400 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sputc(char_type __c)
      {
 int_type __ret;
 if (__builtin_expect(this->pptr() < this->epptr(), true))
   {
     *this->pptr() = __c;
     this->pbump(1);
     __ret = traits_type::to_int_type(__c);
   }
 else
   __ret = this->overflow(traits_type::to_int_type(__c));
 return __ret;
      }
# 426 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      streamsize
      sputn(const char_type* __s, streamsize __n)
      { return this->xsputn(__s, __n); }

    protected:
# 440 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      basic_streambuf()
      : _M_in_beg(0), _M_in_cur(0), _M_in_end(0),
      _M_out_beg(0), _M_out_cur(0), _M_out_end(0),
      _M_buf_locale(locale())
      { }
# 458 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      char_type*
      eback() const { return _M_in_beg; }

      char_type*
      gptr() const { return _M_in_cur; }

      char_type*
      egptr() const { return _M_in_end; }
# 474 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      gbump(int __n) { _M_in_cur += __n; }
# 485 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      setg(char_type* __gbeg, char_type* __gnext, char_type* __gend)
      {
 _M_in_beg = __gbeg;
 _M_in_cur = __gnext;
 _M_in_end = __gend;
      }
# 505 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      char_type*
      pbase() const { return _M_out_beg; }

      char_type*
      pptr() const { return _M_out_cur; }

      char_type*
      epptr() const { return _M_out_end; }
# 521 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      pbump(int __n) { _M_out_cur += __n; }
# 531 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      setp(char_type* __pbeg, char_type* __pend)
      {
 _M_out_beg = _M_out_cur = __pbeg;
 _M_out_end = __pend;
      }
# 552 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual void
      imbue(const locale&)
      { }
# 567 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual basic_streambuf<char_type,_Traits>*
      setbuf(char_type*, streamsize)
      { return this; }
# 578 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual pos_type
      seekoff(off_type, ios_base::seekdir,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
# 590 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual pos_type
      seekpos(pos_type,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
# 603 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int
      sync() { return 0; }
# 625 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual streamsize
      showmanyc() { return 0; }
# 641 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual streamsize
      xsgetn(char_type* __s, streamsize __n);
# 663 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int_type
      underflow()
      { return traits_type::eof(); }
# 676 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int_type
      uflow()
      {
 int_type __ret = traits_type::eof();
 const bool __testeof = traits_type::eq_int_type(this->underflow(),
       __ret);
 if (!__testeof)
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 return __ret;
      }
# 700 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int_type
      pbackfail(int_type = traits_type::eof())
      { return traits_type::eof(); }
# 718 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual streamsize
      xsputn(const char_type* __s, streamsize __n);
# 744 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int_type
      overflow(int_type = traits_type::eof())
      { return traits_type::eof(); }



    public:
# 759 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      stossc()
      {
 if (this->gptr() < this->egptr())
   this->gbump(1);
 else
   this->uflow();
      }


    private:


      basic_streambuf(const __streambuf_type& __sb)
      : _M_in_beg(__sb._M_in_beg), _M_in_cur(__sb._M_in_cur),
      _M_in_end(__sb._M_in_end), _M_out_beg(__sb._M_out_beg),
      _M_out_cur(__sb._M_out_cur), _M_out_end(__sb._M_out_cur),
      _M_buf_locale(__sb._M_buf_locale)
      { }

      __streambuf_type&
      operator=(const __streambuf_type&) { return *this; };
    };


  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>* __sbin,
     basic_streambuf<char>* __sbout, bool& __ineof);

  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>* __sbin,
     basic_streambuf<wchar_t>* __sbout, bool& __ineof);


}



# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf.tcc" 1 3
# 38 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf.tcc" 3
# 38 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf.tcc" 3

namespace std {

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsgetn(char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->egptr() - this->gptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(__s, this->gptr(), __len);
       __ret += __len;
       __s += __len;
       this->gbump(__len);
     }

   if (__ret < __n)
     {
       const int_type __c = this->uflow();
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    traits_type::assign(*__s++, traits_type::to_char_type(__c));
    ++__ret;
  }
       else
  break;
     }
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsputn(const char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->epptr() - this->pptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(this->pptr(), __s, __len);
       __ret += __len;
       __s += __len;
       this->pbump(__len);
     }

   if (__ret < __n)
     {
       int_type __c = this->overflow(traits_type::to_int_type(*__s));
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    ++__ret;
    ++__s;
  }
       else
  break;
     }
 }
      return __ret;
    }




  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>* __sbin,
     basic_streambuf<_CharT, _Traits>* __sbout,
     bool& __ineof)
    {
      streamsize __ret = 0;
      __ineof = true;
      typename _Traits::int_type __c = __sbin->sgetc();
      while (!_Traits::eq_int_type(__c, _Traits::eof()))
 {
   __c = __sbout->sputc(_Traits::to_char_type(__c));
   if (_Traits::eq_int_type(__c, _Traits::eof()))
     {
       __ineof = false;
       break;
     }
   ++__ret;
   __c = __sbin->snextc();
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    inline streamsize
    __copy_streambufs(basic_streambuf<_CharT, _Traits>* __sbin,
        basic_streambuf<_CharT, _Traits>* __sbout)
    {
      bool __ineof;
      return __copy_streambufs_eof(__sbin, __sbout, __ineof);
    }





  extern template class basic_streambuf<char>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<char>*,
        basic_streambuf<char>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>*,
     basic_streambuf<char>*, bool&);


  extern template class basic_streambuf<wchar_t>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<wchar_t>*,
        basic_streambuf<wchar_t>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>*,
     basic_streambuf<wchar_t>*, bool&);



}
# 799 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 2 3
# 44 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 1 3
# 35 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
# 35 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3



# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 1 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3

# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 1 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 3




# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 1 3
# 13 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 13 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 166 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 3
  typedef wchar_t wctrans_t;
  wint_t towctrans(wint_t,wctrans_t);
  wctrans_t wctrans(const char *);
  wctype_t wctype(const char *);


}


#pragma pack(pop)
# 46 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 2 3
# 75 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 3
namespace std {

  using ::wctrans_t;
  using ::wctype_t;
  using ::wint_t;

  using ::iswalnum;
  using ::iswalpha;

  using ::iswblank;

  using ::iswcntrl;
  using ::iswctype;
  using ::iswdigit;
  using ::iswgraph;
  using ::iswlower;
  using ::iswprint;
  using ::iswpunct;
  using ::iswspace;
  using ::iswupper;
  using ::iswxdigit;
  using ::towctrans;
  using ::towlower;
  using ::towupper;
  using ::wctrans;
  using ::wctype;

}
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 1 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
# 42 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_base.h" 1 3
# 37 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_base.h" 3
namespace std {


  struct ctype_base
  {

    typedef const int* __to_type;



    typedef unsigned short mask;
    static const mask upper = 1 << 0;
    static const mask lower = 1 << 1;
    static const mask alpha = 1 << 2;
    static const mask digit = 1 << 3;
    static const mask xdigit = 1 << 4;
    static const mask space = 1 << 5;
    static const mask print = 1 << 6;
    static const mask graph = (1 << 2) | (1 << 3) | (1 << 9);
    static const mask cntrl = 1 << 8;
    static const mask punct = 1 << 9;
    static const mask alnum = (1 << 2) | (1 << 3);
  };

}
# 43 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3






# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 1 3
# 35 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 3
# 35 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 3




namespace std {
# 48 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 3
  template<typename _CharT, typename _Traits>
    class istreambuf_iterator
    : public iterator<input_iterator_tag, _CharT, typename _Traits::off_type,
        _CharT*, _CharT&>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename _Traits::int_type int_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_istream<_CharT, _Traits> istream_type;


      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);

      template<bool _IsMove, typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
 __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
               istreambuf_iterator<_CharT2> >::__type
 find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);

    private:







      mutable streambuf_type* _M_sbuf;
      mutable int_type _M_c;

    public:

      istreambuf_iterator() throw()
      : _M_sbuf(0), _M_c(traits_type::eof()) { }


      istreambuf_iterator(istream_type& __s) throw()
      : _M_sbuf(__s.rdbuf()), _M_c(traits_type::eof()) { }


      istreambuf_iterator(streambuf_type* __s) throw()
      : _M_sbuf(__s), _M_c(traits_type::eof()) { }




      char_type
      operator*() const
      {







 return traits_type::to_char_type(_M_get());
      }


      istreambuf_iterator&
      operator++()
      {


                        ;
 if (_M_sbuf)
   {
     _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return *this;
      }


      istreambuf_iterator
      operator++(int)
      {


                        ;

 istreambuf_iterator __old = *this;
 if (_M_sbuf)
   {
     __old._M_c = _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return __old;
      }





      bool
      equal(const istreambuf_iterator& __b) const
      { return _M_at_eof() == __b._M_at_eof(); }

    private:
      int_type
      _M_get() const
      {
 const int_type __eof = traits_type::eof();
 int_type __ret = __eof;
 if (_M_sbuf)
   {
     if (!traits_type::eq_int_type(_M_c, __eof))
       __ret = _M_c;
     else if (!traits_type::eq_int_type((__ret = _M_sbuf->sgetc()),
            __eof))
       _M_c = __ret;
     else
       _M_sbuf = 0;
   }
 return __ret;
      }

      bool
      _M_at_eof() const
      {
 const int_type __eof = traits_type::eof();
 return traits_type::eq_int_type(_M_get(), __eof);
      }
    };

  template<typename _CharT, typename _Traits>
    inline bool
    operator==(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return __a.equal(__b); }

  template<typename _CharT, typename _Traits>
    inline bool
    operator!=(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return !__a.equal(__b); }


  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_ostream<_CharT, _Traits> ostream_type;


      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);

    private:
      streambuf_type* _M_sbuf;
      bool _M_failed;

    public:

      ostreambuf_iterator(ostream_type& __s) throw ()
      : _M_sbuf(__s.rdbuf()), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator(streambuf_type* __s) throw ()
      : _M_sbuf(__s), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator&
      operator=(_CharT __c)
      {
 if (!_M_failed &&
     _Traits::eq_int_type(_M_sbuf->sputc(__c), _Traits::eof()))
   _M_failed = true;
 return *this;
      }


      ostreambuf_iterator&
      operator*()
      { return *this; }


      ostreambuf_iterator&
      operator++(int)
      { return *this; }


      ostreambuf_iterator&
      operator++()
      { return *this; }


      bool
      failed() const throw()
      { return _M_failed; }

      ostreambuf_iterator&
      _M_put(const _CharT* __ws, streamsize __len)
      {
 if (__builtin_expect(!_M_failed, true)
     && __builtin_expect(this->_M_sbuf->sputn(__ws, __len) != __len,
    false))
   _M_failed = true;
 return *this;
      }
    };


  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
                           ostreambuf_iterator<_CharT> >::__type
    copy(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last,
  ostreambuf_iterator<_CharT> __result)
    {
      if (__first._M_sbuf && !__last._M_sbuf && !__result._M_failed)
 {
   bool __ineof;
   __copy_streambufs_eof(__first._M_sbuf, __result._M_sbuf, __ineof);
   if (!__ineof)
     __result._M_failed = true;
 }
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(_CharT* __first, _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(const _CharT* __first, const _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT> __first,
     istreambuf_iterator<_CharT> __last, _CharT* __result)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
 {
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof()))
     {
       const streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    traits_type::copy(__result, __sb->gptr(), __n);
    __sb->gbump(__n);
    __result += __n;
    __c = __sb->underflow();
  }
       else
  {
    *__result++ = traits_type::to_char_type(__c);
    __c = __sb->snextc();
  }
     }
 }
      return __result;
    }

  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
          istreambuf_iterator<_CharT> >::__type
    find(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last, const _CharT& __val)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
 {
   const int_type __ival = traits_type::to_int_type(__val);
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof())
   && !traits_type::eq_int_type(__c, __ival))
     {
       streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    const _CharT* __p = traits_type::find(__sb->gptr(),
       __n, __val);
    if (__p)
      __n = __p - __sb->gptr();
    __sb->gbump(__n);
    __c = __sb->sgetc();
  }
       else
  __c = __sb->snextc();
     }

   if (!traits_type::eq_int_type(__c, traits_type::eof()))
     __first._M_c = __c;
   else
     __first._M_sbuf = 0;
 }
      return __first;
    }



}
# 50 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3

namespace std {
# 63 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _Tp>
    void
    __convert_to_v(const char*, _Tp&, ios_base::iostate&,
     const __c_locale&) throw();


  template<>
    void
    __convert_to_v(const char*, float&, ios_base::iostate&,
     const __c_locale&) throw();

  template<>
    void
    __convert_to_v(const char*, double&, ios_base::iostate&,
     const __c_locale&) throw();

  template<>
    void
    __convert_to_v(const char*, long double&, ios_base::iostate&,
     const __c_locale&) throw();



  template<typename _CharT, typename _Traits>
    struct __pad
    {
      static void
      _S_pad(ios_base& __io, _CharT __fill, _CharT* __news,
      const _CharT* __olds, streamsize __newlen, streamsize __oldlen);
    };






  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last);




  template<typename _CharT>
    inline
    ostreambuf_iterator<_CharT>
    __write(ostreambuf_iterator<_CharT> __s, const _CharT* __ws, int __len)
    {
      __s._M_put(__ws, __len);
      return __s;
    }


  template<typename _CharT, typename _OutIter>
    inline
    _OutIter
    __write(_OutIter __s, const _CharT* __ws, int __len)
    {
      for (int __j = 0; __j < __len; __j++, ++__s)
 *__s = __ws[__j];
      return __s;
    }
# 141 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT>
    class __ctype_abstract_base : public locale::facet, public ctype_base
    {
    public:


      typedef _CharT char_type;
# 159 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      bool
      is(mask __m, char_type __c) const
      { return this->do_is(__m, __c); }
# 176 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      is(const char_type *__lo, const char_type *__hi, mask *__vec) const
      { return this->do_is(__lo, __hi, __vec); }
# 192 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      scan_is(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_is(__m, __lo, __hi); }
# 208 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      scan_not(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_not(__m, __lo, __hi); }
# 222 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
# 237 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
# 251 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
# 266 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
# 283 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      widen(char __c) const
      { return this->do_widen(__c); }
# 302 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      { return this->do_widen(__lo, __hi, __to); }
# 321 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char
      narrow(char_type __c, char __dfault) const
      { return this->do_narrow(__c, __dfault); }
# 343 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
       char __dfault, char *__to) const
      { return this->do_narrow(__lo, __hi, __dfault, __to); }

    protected:
      explicit
      __ctype_abstract_base(size_t __refs = 0): facet(__refs) { }

      virtual
      ~__ctype_abstract_base() { }
# 368 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual bool
      do_is(mask __m, char_type __c) const = 0;
# 387 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi,
     mask* __vec) const = 0;
# 406 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo,
   const char_type* __hi) const = 0;
# 425 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const = 0;
# 443 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const = 0;
# 460 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const = 0;
# 476 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const = 0;
# 493 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const = 0;
# 512 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_widen(char) const = 0;
# 533 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi,
        char_type* __dest) const = 0;
# 555 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type, char __dfault) const = 0;
# 579 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const = 0;
    };
# 602 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT>
    class ctype : public __ctype_abstract_base<_CharT>
    {
    public:

      typedef _CharT char_type;
      typedef typename __ctype_abstract_base<_CharT>::mask mask;


      static locale::id id;

      explicit
      ctype(size_t __refs = 0) : __ctype_abstract_base<_CharT>(__refs) { }

   protected:
      virtual
      ~ctype();

      virtual bool
      do_is(mask __m, char_type __c) const;

      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;

      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;

      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;

      virtual char_type
      do_toupper(char_type __c) const;

      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_tolower(char_type __c) const;

      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_widen(char __c) const;

      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;

      virtual char
      do_narrow(char_type, char __dfault) const;

      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;
    };

  template<typename _CharT>
    locale::id ctype<_CharT>::id;
# 671 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<>
    class ctype<char> : public locale::facet, public ctype_base
    {
    public:


      typedef char char_type;

    protected:

      __c_locale _M_c_locale_ctype;
      bool _M_del;
      __to_type _M_toupper;
      __to_type _M_tolower;
      const mask* _M_table;
      mutable char _M_widen_ok;
      mutable char _M_widen[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow_ok;


    public:

      static locale::id id;

      static const size_t table_size = 1 + static_cast<unsigned char>(-1);
# 708 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      ctype(const mask* __table = 0, bool __del = false, size_t __refs = 0);
# 721 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      ctype(__c_locale __cloc, const mask* __table = 0, bool __del = false,
     size_t __refs = 0);
# 734 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      inline bool
      is(mask __m, char __c) const;
# 749 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      inline const char*
      is(const char* __lo, const char* __hi, mask* __vec) const;
# 763 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      inline const char*
      scan_is(mask __m, const char* __lo, const char* __hi) const;
# 777 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      inline const char*
      scan_not(mask __m, const char* __lo, const char* __hi) const;
# 792 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
# 809 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
# 825 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
# 842 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
# 862 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      widen(char __c) const
      {
 if (_M_widen_ok)
   return _M_widen[static_cast<unsigned char>(__c)];
 this->_M_widen_init();
 return this->do_widen(__c);
      }
# 889 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      {
 if (_M_widen_ok == 1)
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_widen_ok)
   _M_widen_init();
 return this->do_widen(__lo, __hi, __to);
      }
# 920 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char
      narrow(char_type __c, char __dfault) const
      {
 if (_M_narrow[static_cast<unsigned char>(__c)])
   return _M_narrow[static_cast<unsigned char>(__c)];
 const char __t = do_narrow(__c, __dfault);
 if (__t != __dfault)
   _M_narrow[static_cast<unsigned char>(__c)] = __t;
 return __t;
      }
# 953 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
      char __dfault, char *__to) const
      {
 if (__builtin_expect(_M_narrow_ok == 1, true))
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_narrow_ok)
   _M_narrow_init();
 return this->do_narrow(__lo, __hi, __dfault, __to);
      }





      const mask*
      table() const throw()
      { return _M_table; }


      static const mask*
      classic_table() throw();
    protected:







      virtual
      ~ctype();
# 1002 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const;
# 1019 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
# 1035 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const;
# 1052 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
# 1072 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_widen(char __c) const
      { return __c; }
# 1095 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const
      {
 __builtin_memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }
# 1121 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type __c, char) const
      { return __c; }
# 1147 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char, char* __dest) const
      {
 __builtin_memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }

    private:
      void _M_narrow_init() const;
      void _M_widen_init() const;
    };
# 1172 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<>
    class ctype<wchar_t> : public __ctype_abstract_base<wchar_t>
    {
    public:


      typedef wchar_t char_type;
      typedef wctype_t __wmask_type;

    protected:
      __c_locale _M_c_locale_ctype;


      bool _M_narrow_ok;
      char _M_narrow[128];
      wint_t _M_widen[1 + static_cast<unsigned char>(-1)];


      mask _M_bit[16];
      __wmask_type _M_wmask[16];

    public:


      static locale::id id;
# 1205 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      ctype(size_t __refs = 0);
# 1216 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      ctype(__c_locale __cloc, size_t __refs = 0);

    protected:
      __wmask_type
      _M_convert_to_wmask(const mask __m) const throw();


      virtual
      ~ctype();
# 1240 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual bool
      do_is(mask __m, char_type __c) const;
# 1259 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;
# 1277 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;
# 1295 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;
# 1312 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const;
# 1329 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
# 1345 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const;
# 1362 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
# 1382 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_widen(char) const;
# 1404 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;
# 1427 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type, char __dfault) const;
# 1453 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;


      void
      _M_initialize_ctype() throw();
    };



  template<typename _CharT>
    class ctype_byname : public ctype<_CharT>
    {
    public:
      typedef typename ctype<_CharT>::mask mask;

      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname() { };
    };


  template<>
    class ctype_byname<char> : public ctype<char>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname();
    };


  template<>
    class ctype_byname<wchar_t> : public ctype<wchar_t>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname();
    };


}



# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_inline.h" 1 3
# 37 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_inline.h" 3
namespace std {

  bool
  ctype<char>::
  is(mask __m, char __c) const
  { return (_M_table[static_cast<unsigned char>(__c) ] & __m); }


  const char*
  ctype<char>::
  is(const char* __low, const char* __high, mask* __vec) const
  {
    while (__low < __high)
      *__vec++ = _M_table[static_cast<unsigned char>(*__low++)];
    return __high;
  }

  const char*
  ctype<char>::
  scan_is(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high && !this->is(__m, *__low))
      ++__low;
    return __low;
  }

  const char*
  ctype<char>::
  scan_not(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high && this->is(__m, *__low) != 0)
      ++__low;
    return __low;
  }

}
# 1509 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3

namespace std {


  class __num_base
  {
  public:


    enum
      {
        _S_ominus,
        _S_oplus,
        _S_ox,
        _S_oX,
        _S_odigits,
        _S_odigits_end = _S_odigits + 16,
        _S_oudigits = _S_odigits_end,
        _S_oudigits_end = _S_oudigits + 16,
        _S_oe = _S_odigits + 14,
        _S_oE = _S_oudigits + 14,
 _S_oend = _S_oudigits_end
      };






    static const char* _S_atoms_out;



    static const char* _S_atoms_in;

    enum
    {
      _S_iminus,
      _S_iplus,
      _S_ix,
      _S_iX,
      _S_izero,
      _S_ie = _S_izero + 14,
      _S_iE = _S_izero + 20,
      _S_iend = 26
    };



    static void
    _S_format_float(const ios_base& __io, char* __fptr, char __mod) throw();
  };

  template<typename _CharT>
    struct __numpunct_cache : public locale::facet
    {
      const char* _M_grouping;
      size_t _M_grouping_size;
      bool _M_use_grouping;
      const _CharT* _M_truename;
      size_t _M_truename_size;
      const _CharT* _M_falsename;
      size_t _M_falsename_size;
      _CharT _M_decimal_point;
      _CharT _M_thousands_sep;





      _CharT _M_atoms_out[__num_base::_S_oend];





      _CharT _M_atoms_in[__num_base::_S_iend];

      bool _M_allocated;

      __numpunct_cache(size_t __refs = 0) : facet(__refs),
      _M_grouping(__null), _M_grouping_size(0), _M_use_grouping(false),
      _M_truename(__null), _M_truename_size(0), _M_falsename(__null),
      _M_falsename_size(0), _M_decimal_point(_CharT()),
      _M_thousands_sep(_CharT()), _M_allocated(false)
      { }

      ~__numpunct_cache();

      void
      _M_cache(const locale& __loc);

    private:
      __numpunct_cache&
      operator=(const __numpunct_cache&);

      explicit
      __numpunct_cache(const __numpunct_cache&);
    };

  template<typename _CharT>
    __numpunct_cache<_CharT>::~__numpunct_cache()
    {
      if (_M_allocated)
 {
   delete [] _M_grouping;
   delete [] _M_truename;
   delete [] _M_falsename;
 }
    }
# 1634 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT>
    class numpunct : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      typedef __numpunct_cache<_CharT> __cache_type;

    protected:
      __cache_type* _M_data;

    public:

      static locale::id id;






      explicit
      numpunct(size_t __refs = 0) : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(); }
# 1671 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      numpunct(__cache_type* __cache, size_t __refs = 0)
      : facet(__refs), _M_data(__cache)
      { _M_initialize_numpunct(); }
# 1685 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      numpunct(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(__cloc); }
# 1699 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      decimal_point() const
      { return this->do_decimal_point(); }
# 1712 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      thousands_sep() const
      { return this->do_thousands_sep(); }
# 1743 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      string
      grouping() const
      { return this->do_grouping(); }
# 1756 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      string_type
      truename() const
      { return this->do_truename(); }
# 1769 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      string_type
      falsename() const
      { return this->do_falsename(); }

    protected:

      virtual
      ~numpunct();
# 1786 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_decimal_point() const
      { return _M_data->_M_decimal_point; }
# 1798 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_thousands_sep() const
      { return _M_data->_M_thousands_sep; }
# 1811 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual string
      do_grouping() const
      { return _M_data->_M_grouping; }
# 1824 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual string_type
      do_truename() const
      { return _M_data->_M_truename; }
# 1837 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual string_type
      do_falsename() const
      { return _M_data->_M_falsename; }


      void
      _M_initialize_numpunct(__c_locale __cloc = __null);
    };

  template<typename _CharT>
    locale::id numpunct<_CharT>::id;

  template<>
    numpunct<char>::~numpunct();

  template<>
    void
    numpunct<char>::_M_initialize_numpunct(__c_locale __cloc);


  template<>
    numpunct<wchar_t>::~numpunct();

  template<>
    void
    numpunct<wchar_t>::_M_initialize_numpunct(__c_locale __cloc);



  template<typename _CharT>
    class numpunct_byname : public numpunct<_CharT>
    {
    public:
      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      explicit
      numpunct_byname(const char* __s, size_t __refs = 0)
      : numpunct<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     __c_locale __tmp;
     this->_S_create_c_locale(__tmp, __s);
     this->_M_initialize_numpunct(__tmp);
     this->_S_destroy_c_locale(__tmp);
   }
      }

    protected:
      virtual
      ~numpunct_byname() { }
    };
# 1907 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT, typename _InIter>
    class num_get : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _InIter iter_type;



      static locale::id id;
# 1928 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      num_get(size_t __refs = 0) : facet(__refs) { }
# 1954 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, bool& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 1990 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned short& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned int& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }


      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2049 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, float& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2091 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, void*& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

    protected:

      virtual ~num_get() { }

      iter_type
      _M_extract_float(iter_type, iter_type, ios_base&, ios_base::iostate&,
         string&) const;

      template<typename _ValueT>
        iter_type
        _M_extract_int(iter_type, iter_type, ios_base&, ios_base::iostate&,
         _ValueT&) const;

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value, int>::__type
        _M_find(const _CharT2*, size_t __len, _CharT2 __c) const
        {
   int __ret = -1;
   if (__len <= 10)
     {
       if (__c >= _CharT2('0') && __c < _CharT2(_CharT2('0') + __len))
  __ret = __c - _CharT2('0');
     }
   else
     {
       if (__c >= _CharT2('0') && __c <= _CharT2('9'))
  __ret = __c - _CharT2('0');
       else if (__c >= _CharT2('a') && __c <= _CharT2('f'))
  __ret = 10 + (__c - _CharT2('a'));
       else if (__c >= _CharT2('A') && __c <= _CharT2('F'))
  __ret = 10 + (__c - _CharT2('A'));
     }
   return __ret;
 }

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<!__is_char<_CharT2>::__value,
          int>::__type
        _M_find(const _CharT2* __zero, size_t __len, _CharT2 __c) const
        {
   int __ret = -1;
   const char_type* __q = char_traits<_CharT2>::find(__zero, __len, __c);
   if (__q)
     {
       __ret = __q - __zero;
       if (__ret > 15)
  __ret -= 6;
     }
   return __ret;
 }
# 2162 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate&, bool&) const;

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned short& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned int& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }


      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      float&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      double&) const;







      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      long double&) const;


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      void*&) const;
# 2227 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
    };

  template<typename _CharT, typename _InIter>
    locale::id num_get<_CharT, _InIter>::id;
# 2245 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT, typename _OutIter>
    class num_put : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _OutIter iter_type;



      static locale::id id;
# 2266 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      num_put(size_t __refs = 0) : facet(__refs) { }
# 2284 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, bool __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2326 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long __v) const
      { return this->do_put(__s, __f, __fill, __v); }


      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2389 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, double __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   long double __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2414 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   const void* __v) const
      { return this->do_put(__s, __f, __fill, __v); }

    protected:
      template<typename _ValueT>
        iter_type
        _M_insert_float(iter_type, ios_base& __io, char_type __fill,
   char __mod, _ValueT __v) const;

      void
      _M_group_float(const char* __grouping, size_t __grouping_size,
       char_type __sep, const char_type* __p, char_type* __new,
       char_type* __cs, int& __len) const;

      template<typename _ValueT>
        iter_type
        _M_insert_int(iter_type, ios_base& __io, char_type __fill,
        _ValueT __v) const;

      void
      _M_group_int(const char* __grouping, size_t __grouping_size,
     char_type __sep, ios_base& __io, char_type* __new,
     char_type* __cs, int& __len) const;

      void
      _M_pad(char_type __fill, streamsize __w, ios_base& __io,
      char_type* __new, const char_type* __cs, int& __len) const;


      virtual
      ~num_put() { };
# 2462 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, bool __v) const;

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill, long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      unsigned long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }


      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      unsigned long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, double __v) const;






      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, long double __v) const;


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, const void* __v) const;







    };

  template <typename _CharT, typename _OutIter>
    locale::id num_put<_CharT, _OutIter>::id;
# 2520 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT>
    inline bool
    isspace(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::space, __c); }


  template<typename _CharT>
    inline bool
    isprint(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::print, __c); }


  template<typename _CharT>
    inline bool
    iscntrl(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::cntrl, __c); }


  template<typename _CharT>
    inline bool
    isupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::upper, __c); }


  template<typename _CharT>
    inline bool
    islower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::lower, __c); }


  template<typename _CharT>
    inline bool
    isalpha(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alpha, __c); }


  template<typename _CharT>
    inline bool
    isdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::digit, __c); }


  template<typename _CharT>
    inline bool
    ispunct(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::punct, __c); }


  template<typename _CharT>
    inline bool
    isxdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::xdigit, __c); }


  template<typename _CharT>
    inline bool
    isalnum(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alnum, __c); }


  template<typename _CharT>
    inline bool
    isgraph(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::graph, __c); }


  template<typename _CharT>
    inline _CharT
    toupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).toupper(__c); }


  template<typename _CharT>
    inline _CharT
    tolower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).tolower(__c); }

}



# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 1 3
# 35 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
# 35 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3

namespace std {



  template<typename _Facet>
    struct __use_cache
    {
      const _Facet*
      operator() (const locale& __loc) const;
    };


  template<typename _CharT>
    struct __use_cache<__numpunct_cache<_CharT> >
    {
      const __numpunct_cache<_CharT>*
      operator() (const locale& __loc) const
      {
 const size_t __i = numpunct<_CharT>::id._M_id();
 const locale::facet** __caches = __loc._M_impl->_M_caches;
 if (!__caches[__i])
   {
     __numpunct_cache<_CharT>* __tmp = __null;
     if (true)
       {
  __tmp = new __numpunct_cache<_CharT>;
  __tmp->_M_cache(__loc);
       }
     if (false)
       {
  delete __tmp;
                         ;
       }
     __loc._M_impl->_M_install_cache(__tmp, __i);
   }
 return static_cast<const __numpunct_cache<_CharT>*>(__caches[__i]);
      }
    };

  template<typename _CharT>
    void
    __numpunct_cache<_CharT>::_M_cache(const locale& __loc)
    {
      _M_allocated = true;

      const numpunct<_CharT>& __np = use_facet<numpunct<_CharT> >(__loc);

      char* __grouping = 0;
      _CharT* __truename = 0;
      _CharT* __falsename = 0;
      if (true)
 {
   _M_grouping_size = __np.grouping().size();
   __grouping = new char[_M_grouping_size];
   __np.grouping().copy(__grouping, _M_grouping_size);
   _M_grouping = __grouping;
   _M_use_grouping = (_M_grouping_size
        && static_cast<signed char>(_M_grouping[0]) > 0
        && (_M_grouping[0]
     != __gnu_cxx::__numeric_traits<char>::__max));

   _M_truename_size = __np.truename().size();
   __truename = new _CharT[_M_truename_size];
   __np.truename().copy(__truename, _M_truename_size);
   _M_truename = __truename;

   _M_falsename_size = __np.falsename().size();
   __falsename = new _CharT[_M_falsename_size];
   __np.falsename().copy(__falsename, _M_falsename_size);
   _M_falsename = __falsename;

   _M_decimal_point = __np.decimal_point();
   _M_thousands_sep = __np.thousands_sep();

   const ctype<_CharT>& __ct = use_facet<ctype<_CharT> >(__loc);
   __ct.widen(__num_base::_S_atoms_out,
       __num_base::_S_atoms_out
       + __num_base::_S_oend, _M_atoms_out);
   __ct.widen(__num_base::_S_atoms_in,
       __num_base::_S_atoms_in
       + __num_base::_S_iend, _M_atoms_in);
 }
      if (false)
 {
   delete [] __grouping;
   delete [] __truename;
   delete [] __falsename;
                          ;
 }
    }
# 135 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  __attribute__ ((__pure__)) bool
  __verify_grouping(const char* __grouping, size_t __grouping_size,
      const string& __grouping_tmp) throw ();



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    _M_extract_float(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, string& __xtrc) const
    {
      typedef char_traits<_CharT> __traits_type;
      typedef __numpunct_cache<_CharT> __cache_type;
      __use_cache<__cache_type> __uc;
      const locale& __loc = __io._M_getloc();
      const __cache_type* __lc = __uc(__loc);
      const _CharT* __lit = __lc->_M_atoms_in;
      char_type __c = char_type();


      bool __testeof = __beg == __end;


      if (!__testeof)
 {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
     {
       __xtrc += __plus ? '+' : '-';
       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 }


      bool __found_mantissa = false;
      int __sep_pos = 0;
      while (!__testeof)
 {
   if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       || __c == __lc->_M_decimal_point)
     break;
   else if (__c == __lit[__num_base::_S_izero])
     {
       if (!__found_mantissa)
  {
    __xtrc += '0';
    __found_mantissa = true;
  }
       ++__sep_pos;

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
   else
     break;
 }


      bool __found_dec = false;
      bool __found_sci = false;
      string __found_grouping;
      if (__lc->_M_use_grouping)
 __found_grouping.reserve(32);
      const char_type* __lit_zero = __lit + __num_base::_S_izero;

      if (!__lc->_M_allocated)

 while (!__testeof)
   {
     const int __digit = _M_find(__lit_zero, 10, __c);
     if (__digit != -1)
       {
  __xtrc += '0' + __digit;
  __found_mantissa = true;
       }
     else if (__c == __lc->_M_decimal_point
       && !__found_dec && !__found_sci)
       {
  __xtrc += '.';
  __found_dec = true;
       }
     else if ((__c == __lit[__num_base::_S_ie]
        || __c == __lit[__num_base::_S_iE])
       && !__found_sci && __found_mantissa)
       {

  __xtrc += 'e';
  __found_sci = true;


  if (++__beg != __end)
    {
      __c = *__beg;
      const bool __plus = __c == __lit[__num_base::_S_iplus];
      if (__plus || __c == __lit[__num_base::_S_iminus])
        __xtrc += __plus ? '+' : '-';
      else
        continue;
    }
  else
    {
      __testeof = true;
      break;
    }
       }
     else
       break;

     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }
      else
 while (!__testeof)
   {


     if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       {
  if (!__found_dec && !__found_sci)
    {


      if (__sep_pos)
        {
   __found_grouping += static_cast<char>(__sep_pos);
   __sep_pos = 0;
        }
      else
        {


   __xtrc.clear();
   break;
        }
    }
  else
    break;
       }
     else if (__c == __lc->_M_decimal_point)
       {
  if (!__found_dec && !__found_sci)
    {



      if (__found_grouping.size())
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += '.';
      __found_dec = true;
    }
  else
    break;
       }
     else
       {
  const char_type* __q =
    __traits_type::find(__lit_zero, 10, __c);
  if (__q)
    {
      __xtrc += '0' + (__q - __lit_zero);
      __found_mantissa = true;
      ++__sep_pos;
    }
  else if ((__c == __lit[__num_base::_S_ie]
     || __c == __lit[__num_base::_S_iE])
    && !__found_sci && __found_mantissa)
    {

      if (__found_grouping.size() && !__found_dec)
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += 'e';
      __found_sci = true;


      if (++__beg != __end)
        {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping
     && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
        __xtrc += __plus ? '+' : '-';
   else
     continue;
        }
      else
        {
   __testeof = true;
   break;
        }
    }
  else
    break;
       }

     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }



      if (__found_grouping.size())
        {

   if (!__found_dec && !__found_sci)
     __found_grouping += static_cast<char>(__sep_pos);

          if (!std::__verify_grouping(__lc->_M_grouping,
          __lc->_M_grouping_size,
          __found_grouping))
     __err = ios_base::failbit;
        }

      return __beg;
    }

  template<typename _CharT, typename _InIter>
    template<typename _ValueT>
      _InIter
      num_get<_CharT, _InIter>::
      _M_extract_int(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, _ValueT& __v) const
      {
        typedef char_traits<_CharT> __traits_type;
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_in;
 char_type __c = char_type();


 const ios_base::fmtflags __basefield = __io.flags()
                                        & ios_base::basefield;
 const bool __oct = __basefield == ios_base::oct;
 int __base = __oct ? 8 : (__basefield == ios_base::hex ? 16 : 10);


 bool __testeof = __beg == __end;


 bool __negative = false;
 if (!__testeof)
   {
     __c = *__beg;
     __negative = __c == __lit[__num_base::_S_iminus];
     if ((__negative || __c == __lit[__num_base::_S_iplus])
  && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  && !(__c == __lc->_M_decimal_point))
       {
  if (++__beg != __end)
    __c = *__beg;
  else
    __testeof = true;
       }
   }



 bool __found_zero = false;
 int __sep_pos = 0;
 while (!__testeof)
   {
     if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  || __c == __lc->_M_decimal_point)
       break;
     else if (__c == __lit[__num_base::_S_izero]
       && (!__found_zero || __base == 10))
       {
  __found_zero = true;
  ++__sep_pos;
  if (__basefield == 0)
    __base = 8;
  if (__base == 8)
    __sep_pos = 0;
       }
     else if (__found_zero
       && (__c == __lit[__num_base::_S_ix]
    || __c == __lit[__num_base::_S_iX]))
       {
  if (__basefield == 0)
    __base = 16;
  if (__base == 16)
    {
      __found_zero = false;
      __sep_pos = 0;
    }
  else
    break;
       }
     else
       break;

     if (++__beg != __end)
       {
  __c = *__beg;
  if (!__found_zero)
    break;
       }
     else
       __testeof = true;
   }



 const size_t __len = (__base == 16 ? __num_base::_S_iend
         - __num_base::_S_izero : __base);


 string __found_grouping;
 if (__lc->_M_use_grouping)
   __found_grouping.reserve(32);
 bool __testfail = false;
 bool __testoverflow = false;
 const __unsigned_type __max =
   (__negative && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
   ? -__gnu_cxx::__numeric_traits<_ValueT>::__min
   : __gnu_cxx::__numeric_traits<_ValueT>::__max;
 const __unsigned_type __smax = __max / __base;
 __unsigned_type __result = 0;
 int __digit = 0;
 const char_type* __lit_zero = __lit + __num_base::_S_izero;

 if (!__lc->_M_allocated)

   while (!__testeof)
     {
       __digit = _M_find(__lit_zero, __len, __c);
       if (__digit == -1)
  break;

       if (__result > __smax)
  __testoverflow = true;
       else
  {
    __result *= __base;
    __testoverflow |= __result > __max - __digit;
    __result += __digit;
    ++__sep_pos;
  }

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 else
   while (!__testeof)
     {


       if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  {


    if (__sep_pos)
      {
        __found_grouping += static_cast<char>(__sep_pos);
        __sep_pos = 0;
      }
    else
      {
        __testfail = true;
        break;
      }
  }
       else if (__c == __lc->_M_decimal_point)
  break;
       else
  {
    const char_type* __q =
      __traits_type::find(__lit_zero, __len, __c);
    if (!__q)
      break;

    __digit = __q - __lit_zero;
    if (__digit > 15)
      __digit -= 6;
    if (__result > __smax)
      __testoverflow = true;
    else
      {
        __result *= __base;
        __testoverflow |= __result > __max - __digit;
        __result += __digit;
        ++__sep_pos;
      }
  }

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }



 if (__found_grouping.size())
   {

     __found_grouping += static_cast<char>(__sep_pos);

     if (!std::__verify_grouping(__lc->_M_grouping,
     __lc->_M_grouping_size,
     __found_grouping))
       __err = ios_base::failbit;
   }



 if ((!__sep_pos && !__found_zero && !__found_grouping.size())
     || __testfail)
   {
     __v = 0;
     __err = ios_base::failbit;
   }
 else if (__testoverflow)
   {
     if (__negative
  && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
       __v = __gnu_cxx::__numeric_traits<_ValueT>::__min;
     else
       __v = __gnu_cxx::__numeric_traits<_ValueT>::__max;
     __err = ios_base::failbit;
   }
 else
   __v = __negative ? -__result : __result;

 if (__testeof)
   __err |= ios_base::eofbit;
 return __beg;
      }



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, bool& __v) const
    {
      if (!(__io.flags() & ios_base::boolalpha))
        {



   long __l = -1;
          __beg = _M_extract_int(__beg, __end, __io, __err, __l);
   if (__l == 0 || __l == 1)
     __v = bool(__l);
   else
     {


       __v = true;
       __err = ios_base::failbit;
       if (__beg == __end)
  __err |= ios_base::eofbit;
     }
        }
      else
        {

   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   bool __testf = true;
   bool __testt = true;
   bool __donef = __lc->_M_falsename_size == 0;
   bool __donet = __lc->_M_truename_size == 0;
   bool __testeof = false;
   size_t __n = 0;
   while (!__donef || !__donet)
     {
       if (__beg == __end)
  {
    __testeof = true;
    break;
  }

       const char_type __c = *__beg;

       if (!__donef)
  __testf = __c == __lc->_M_falsename[__n];

       if (!__testf && __donet)
  break;

       if (!__donet)
  __testt = __c == __lc->_M_truename[__n];

       if (!__testt && __donef)
  break;

       if (!__testt && !__testf)
  break;

       ++__n;
       ++__beg;

       __donef = !__testf || __n >= __lc->_M_falsename_size;
       __donet = !__testt || __n >= __lc->_M_truename_size;
     }
   if (__testf && __n == __lc->_M_falsename_size && __n)
     {
       __v = false;
       if (__testt && __n == __lc->_M_truename_size)
  __err = ios_base::failbit;
       else
  __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
     }
   else if (__testt && __n == __lc->_M_truename_size && __n)
     {
       __v = true;
       __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
     }
   else
     {


       __v = false;
       __err = ios_base::failbit;
       if (__testeof)
  __err |= ios_base::eofbit;
     }
 }
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
    ios_base::iostate& __err, float& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }
# 729 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, long double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, void*& __v) const
    {

      typedef ios_base::fmtflags fmtflags;
      const fmtflags __fmt = __io.flags();
      __io.flags((__fmt & ~ios_base::basefield) | ios_base::hex);

      typedef __gnu_cxx::__conditional_type<(sizeof(void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;

      _UIntPtrType __ul;
      __beg = _M_extract_int(__beg, __end, __io, __err, __ul);


      __io.flags(__fmt);

      __v = reinterpret_cast<void*>(__ul);
      return __beg;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_pad(_CharT __fill, streamsize __w, ios_base& __io,
    _CharT* __new, const _CharT* __cs, int& __len) const
    {


      __pad<_CharT, char_traits<_CharT> >::_S_pad(__io, __fill, __new,
        __cs, __w, __len);
      __len = static_cast<int>(__w);
    }



  template<typename _CharT, typename _ValueT>
    int
    __int_to_char(_CharT* __bufend, _ValueT __v, const _CharT* __lit,
    ios_base::fmtflags __flags, bool __dec)
    {
      _CharT* __buf = __bufend;
      if (__builtin_expect(__dec, true))
 {

   do
     {
       *--__buf = __lit[(__v % 10) + __num_base::_S_odigits];
       __v /= 10;
     }
   while (__v != 0);
 }
      else if ((__flags & ios_base::basefield) == ios_base::oct)
 {

   do
     {
       *--__buf = __lit[(__v & 0x7) + __num_base::_S_odigits];
       __v >>= 3;
     }
   while (__v != 0);
 }
      else
 {

   const bool __uppercase = __flags & ios_base::uppercase;
   const int __case_offset = __uppercase ? __num_base::_S_oudigits
                                         : __num_base::_S_odigits;
   do
     {
       *--__buf = __lit[(__v & 0xf) + __case_offset];
       __v >>= 4;
     }
   while (__v != 0);
 }
      return __bufend - __buf;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_int(const char* __grouping, size_t __grouping_size, _CharT __sep,
   ios_base&, _CharT* __new, _CharT* __cs, int& __len) const
    {
      _CharT* __p = std::__add_grouping(__new, __sep, __grouping,
     __grouping_size, __cs, __cs + __len);
      __len = __p - __new;
    }

  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_int(_OutIter __s, ios_base& __io, _CharT __fill,
      _ValueT __v) const
      {
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_out;
 const ios_base::fmtflags __flags = __io.flags();


 const int __ilen = 5 * sizeof(_ValueT);
 _CharT* __cs = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __ilen));



 const ios_base::fmtflags __basefield = __flags & ios_base::basefield;
 const bool __dec = (__basefield != ios_base::oct
       && __basefield != ios_base::hex);
 const __unsigned_type __u = ((__v > 0 || !__dec)
         ? __unsigned_type(__v)
         : -__unsigned_type(__v));
  int __len = __int_to_char(__cs + __ilen, __u, __lit, __flags, __dec);
 __cs += __ilen - __len;


 if (__lc->_M_use_grouping)
   {


     _CharT* __cs2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * (__len + 1)
          * 2));
     _M_group_int(__lc->_M_grouping, __lc->_M_grouping_size,
    __lc->_M_thousands_sep, __io, __cs2 + 2, __cs, __len);
     __cs = __cs2 + 2;
   }


 if (__builtin_expect(__dec, true))
   {

     if (__v >= 0)
       {
  if (bool(__flags & ios_base::showpos)
      && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
    *--__cs = __lit[__num_base::_S_oplus], ++__len;
       }
     else
       *--__cs = __lit[__num_base::_S_ominus], ++__len;
   }
 else if (bool(__flags & ios_base::showbase) && __v)
   {
     if (__basefield == ios_base::oct)
       *--__cs = __lit[__num_base::_S_odigits], ++__len;
     else
       {

  const bool __uppercase = __flags & ios_base::uppercase;
  *--__cs = __lit[__num_base::_S_ox + __uppercase];

  *--__cs = __lit[__num_base::_S_odigits];
  __len += 2;
       }
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __cs3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __cs3, __cs, __len);
     __cs = __cs3;
   }
 __io.width(0);



 return std::__write(__s, __cs, __len);
      }

  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_float(const char* __grouping, size_t __grouping_size,
     _CharT __sep, const _CharT* __p, _CharT* __new,
     _CharT* __cs, int& __len) const
    {



      const int __declen = __p ? __p - __cs : __len;
      _CharT* __p2 = std::__add_grouping(__new, __sep, __grouping,
      __grouping_size,
      __cs, __cs + __declen);


      int __newlen = __p2 - __new;
      if (__p)
 {
   char_traits<_CharT>::copy(__p2, __p, __len - __declen);
   __newlen += __len - __declen;
 }
      __len = __newlen;
    }
# 965 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_float(_OutIter __s, ios_base& __io, _CharT __fill, char __mod,
         _ValueT __v) const
      {
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);


 const streamsize __prec = __io.precision() < 0 ? 6 : __io.precision();

 const int __max_digits =
   __gnu_cxx::__numeric_traits<_ValueT>::__digits10;


 int __len;

 char __fbuf[16];
 __num_base::_S_format_float(__io, __fbuf, __mod);




 int __cs_size = __max_digits * 3;
 char* __cs = static_cast<char*>(__builtin_alloca(__cs_size));
 __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
          __fbuf, __prec, __v);


 if (__len >= __cs_size)
   {
     __cs_size = __len + 1;
     __cs = static_cast<char*>(__builtin_alloca(__cs_size));
     __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
       __fbuf, __prec, __v);
   }
# 1026 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
 const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

 _CharT* __ws = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __len));
 __ctype.widen(__cs, __cs + __len, __ws);


 _CharT* __wp = 0;
 const char* __p = char_traits<char>::find(__cs, __len, '.');
 if (__p)
   {
     __wp = __ws + (__p - __cs);
     *__wp = __lc->_M_decimal_point;
   }




 if (__lc->_M_use_grouping
     && (__wp || __len < 3 || (__cs[1] <= '9' && __cs[2] <= '9'
          && __cs[1] >= '0' && __cs[2] >= '0')))
   {


     _CharT* __ws2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __len * 2));

     streamsize __off = 0;
     if (__cs[0] == '-' || __cs[0] == '+')
       {
  __off = 1;
  __ws2[0] = __ws[0];
  __len -= 1;
       }

     _M_group_float(__lc->_M_grouping, __lc->_M_grouping_size,
      __lc->_M_thousands_sep, __wp, __ws2 + __off,
      __ws + __off, __len);
     __len += __off;

     __ws = __ws2;
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __ws3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __ws3, __ws, __len);
     __ws = __ws3;
   }
 __io.width(0);



 return std::__write(__s, __ws, __len);
      }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, bool __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      if ((__flags & ios_base::boolalpha) == 0)
        {
          const long __l = __v;
          __s = _M_insert_int(__s, __io, __fill, __l);
        }
      else
        {
   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   const _CharT* __name = __v ? __lc->_M_truename
                              : __lc->_M_falsename;
   int __len = __v ? __lc->_M_truename_size
                   : __lc->_M_falsename_size;

   const streamsize __w = __io.width();
   if (__w > static_cast<streamsize>(__len))
     {
       const streamsize __plen = __w - __len;
       _CharT* __ps
  = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
       * __plen));

       char_traits<_CharT>::assign(__ps, __plen, __fill);
       __io.width(0);

       if ((__flags & ios_base::adjustfield) == ios_base::left)
  {
    __s = std::__write(__s, __name, __len);
    __s = std::__write(__s, __ps, __plen);
  }
       else
  {
    __s = std::__write(__s, __ps, __plen);
    __s = std::__write(__s, __name, __len);
  }
       return __s;
     }
   __io.width(0);
   __s = std::__write(__s, __name, __len);
 }
      return __s;
    }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, double __v) const
    { return _M_insert_float(__s, __io, __fill, char(), __v); }
# 1151 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
    long double __v) const
    { return _M_insert_float(__s, __io, __fill, 'L', __v); }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
           const void* __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      const ios_base::fmtflags __fmt = ~(ios_base::basefield
      | ios_base::uppercase);
      __io.flags((__flags & __fmt) | (ios_base::hex | ios_base::showbase));

      typedef __gnu_cxx::__conditional_type<(sizeof(const void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;

      __s = _M_insert_int(__s, __io, __fill,
     reinterpret_cast<_UIntPtrType>(__v));
      __io.flags(__flags);
      return __s;
    }
# 1188 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  template<typename _CharT, typename _Traits>
    void
    __pad<_CharT, _Traits>::_S_pad(ios_base& __io, _CharT __fill,
       _CharT* __news, const _CharT* __olds,
       streamsize __newlen, streamsize __oldlen)
    {
      const size_t __plen = static_cast<size_t>(__newlen - __oldlen);
      const ios_base::fmtflags __adjust = __io.flags() & ios_base::adjustfield;


      if (__adjust == ios_base::left)
 {
   _Traits::copy(__news, __olds, __oldlen);
   _Traits::assign(__news + __oldlen, __plen, __fill);
   return;
 }

      size_t __mod = 0;
      if (__adjust == ios_base::internal)
 {



          const locale& __loc = __io._M_getloc();
   const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

   if (__ctype.widen('-') == __olds[0]
       || __ctype.widen('+') == __olds[0])
     {
       __news[0] = __olds[0];
       __mod = 1;
       ++__news;
     }
   else if (__ctype.widen('0') == __olds[0]
     && __oldlen > 1
     && (__ctype.widen('x') == __olds[1]
         || __ctype.widen('X') == __olds[1]))
     {
       __news[0] = __olds[0];
       __news[1] = __olds[1];
       __mod = 2;
       __news += 2;
     }

 }
      _Traits::assign(__news, __plen, __fill);
      _Traits::copy(__news + __plen, __olds + __mod, __oldlen - __mod);
    }

  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last)
    {
      size_t __idx = 0;
      size_t __ctr = 0;

      while (__last - __first > __gbeg[__idx]
      && static_cast<signed char>(__gbeg[__idx]) > 0
      && __gbeg[__idx] != __gnu_cxx::__numeric_traits<char>::__max)
 {
   __last -= __gbeg[__idx];
   __idx < __gsize - 1 ? ++__idx : ++__ctr;
 }

      while (__first != __last)
 *__s++ = *__first++;

      while (__ctr--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }

      while (__idx--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }

      return __s;
    }





  extern template class numpunct<char>;
  extern template class numpunct_byname<char>;
  extern template class num_get<char>;
  extern template class num_put<char>;
  extern template class ctype_byname<char>;

  extern template
    const ctype<char>&
    use_facet<ctype<char> >(const locale&);

  extern template
    const numpunct<char>&
    use_facet<numpunct<char> >(const locale&);

  extern template
    const num_put<char>&
    use_facet<num_put<char> >(const locale&);

  extern template
    const num_get<char>&
    use_facet<num_get<char> >(const locale&);

  extern template
    bool
    has_facet<ctype<char> >(const locale&);

  extern template
    bool
    has_facet<numpunct<char> >(const locale&);

  extern template
    bool
    has_facet<num_put<char> >(const locale&);

  extern template
    bool
    has_facet<num_get<char> >(const locale&);


  extern template class numpunct<wchar_t>;
  extern template class numpunct_byname<wchar_t>;
  extern template class num_get<wchar_t>;
  extern template class num_put<wchar_t>;
  extern template class ctype_byname<wchar_t>;

  extern template
    const ctype<wchar_t>&
    use_facet<ctype<wchar_t> >(const locale&);

  extern template
    const numpunct<wchar_t>&
    use_facet<numpunct<wchar_t> >(const locale&);

  extern template
    const num_put<wchar_t>&
    use_facet<num_put<wchar_t> >(const locale&);

  extern template
    const num_get<wchar_t>&
    use_facet<num_get<wchar_t> >(const locale&);

 extern template
    bool
    has_facet<ctype<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<numpunct<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_put<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_get<wchar_t> >(const locale&);



}
# 2601 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 2 3


namespace std {

  template<typename _Facet>
    inline const _Facet&
    __check_facet(const _Facet* __f)
    {
      if (!__f)
 __throw_bad_cast();
      return *__f;
    }
# 60 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
  template<typename _CharT, typename _Traits>
    class basic_ios : public ios_base
    {
    public:






      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;






      typedef ctype<_CharT> __ctype_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
           __num_put_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
           __num_get_type;



    protected:
      basic_ostream<_CharT, _Traits>* _M_tie;
      mutable char_type _M_fill;
      mutable bool _M_fill_init;
      basic_streambuf<_CharT, _Traits>* _M_streambuf;


      const __ctype_type* _M_ctype;

      const __num_put_type* _M_num_put;

      const __num_get_type* _M_num_get;

    public:







      operator void*() const
      { return this->fail() ? 0 : const_cast<basic_ios*>(this); }

      bool
      operator!() const
      { return this->fail(); }
# 125 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      iostate
      rdstate() const
      { return _M_streambuf_state; }
# 136 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      void
      clear(iostate __state = goodbit);







      void
      setstate(iostate __state)
      { this->clear(this->rdstate() | __state); }




      void
      _M_setstate(iostate __state)
      {


 _M_streambuf_state |= __state;
 if (this->exceptions() & __state)
                          ;
      }







      bool
      good() const
      { return this->rdstate() == 0; }







      bool
      eof() const
      { return (this->rdstate() & eofbit) != 0; }
# 189 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      bool
      fail() const
      { return (this->rdstate() & (badbit | failbit)) != 0; }







      bool
      bad() const
      { return (this->rdstate() & badbit) != 0; }
# 210 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      iostate
      exceptions() const
      { return _M_exception; }
# 245 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      void
      exceptions(iostate __except)
      {
        _M_exception = __except;
        this->clear(_M_streambuf_state);
      }







      explicit
      basic_ios(basic_streambuf<_CharT, _Traits>* __sb)
      : ios_base(), _M_tie(0), _M_fill(), _M_fill_init(false), _M_streambuf(0),
 _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { this->init(__sb); }







      virtual
      ~basic_ios() { }
# 283 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      basic_ostream<_CharT, _Traits>*
      tie() const
      { return _M_tie; }
# 295 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      basic_ostream<_CharT, _Traits>*
      tie(basic_ostream<_CharT, _Traits>* __tiestr)
      {
        basic_ostream<_CharT, _Traits>* __old = _M_tie;
        _M_tie = __tiestr;
        return __old;
      }







      basic_streambuf<_CharT, _Traits>*
      rdbuf() const
      { return _M_streambuf; }
# 335 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      basic_streambuf<_CharT, _Traits>*
      rdbuf(basic_streambuf<_CharT, _Traits>* __sb);
# 349 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      basic_ios&
      copyfmt(const basic_ios& __rhs);







      char_type
      fill() const
      {
 if (!_M_fill_init)
   {
     _M_fill = this->widen(' ');
     _M_fill_init = true;
   }
 return _M_fill;
      }
# 378 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      char_type
      fill(char_type __ch)
      {
 char_type __old = this->fill();
 _M_fill = __ch;
 return __old;
      }
# 398 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      locale
      imbue(const locale& __loc);
# 418 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      char
      narrow(char_type __c, char __dfault) const
      { return __check_facet(_M_ctype).narrow(__c, __dfault); }
# 437 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      char_type
      widen(char __c) const
      { return __check_facet(_M_ctype).widen(__c); }

    protected:







      basic_ios()
      : ios_base(), _M_tie(0), _M_fill(char_type()), _M_fill_init(false),
 _M_streambuf(0), _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { }







      void
      init(basic_streambuf<_CharT, _Traits>* __sb);

      void
      _M_cache_locale(const locale& __loc);
    };

}



# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 1 3
# 34 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 3
# 34 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 3

namespace std {

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::clear(iostate __state)
    {
      if (this->rdbuf())
 _M_streambuf_state = __state;
      else
   _M_streambuf_state = __state | badbit;
      if (this->exceptions() & this->rdstate())
 __throw_ios_failure(("basic_ios::clear"));
    }

  template<typename _CharT, typename _Traits>
    basic_streambuf<_CharT, _Traits>*
    basic_ios<_CharT, _Traits>::rdbuf(basic_streambuf<_CharT, _Traits>* __sb)
    {
      basic_streambuf<_CharT, _Traits>* __old = _M_streambuf;
      _M_streambuf = __sb;
      this->clear();
      return __old;
    }

  template<typename _CharT, typename _Traits>
    basic_ios<_CharT, _Traits>&
    basic_ios<_CharT, _Traits>::copyfmt(const basic_ios& __rhs)
    {


      if (this != &__rhs)
 {




   _Words* __words = (__rhs._M_word_size <= _S_local_word_size) ?
                      _M_local_word : new _Words[__rhs._M_word_size];


   _Callback_list* __cb = __rhs._M_callbacks;
   if (__cb)
     __cb->_M_add_reference();
   _M_call_callbacks(erase_event);
   if (_M_word != _M_local_word)
     {
       delete [] _M_word;
       _M_word = 0;
     }
   _M_dispose_callbacks();


   _M_callbacks = __cb;
   for (int __i = 0; __i < __rhs._M_word_size; ++__i)
     __words[__i] = __rhs._M_word[__i];
   _M_word = __words;
   _M_word_size = __rhs._M_word_size;

   this->flags(__rhs.flags());
   this->width(__rhs.width());
   this->precision(__rhs.precision());
   this->tie(__rhs.tie());
   this->fill(__rhs.fill());
   _M_ios_locale = __rhs.getloc();
   _M_cache_locale(_M_ios_locale);

   _M_call_callbacks(copyfmt_event);


   this->exceptions(__rhs.exceptions());
 }
      return *this;
    }


  template<typename _CharT, typename _Traits>
    locale
    basic_ios<_CharT, _Traits>::imbue(const locale& __loc)
    {
      locale __old(this->getloc());
      ios_base::imbue(__loc);
      _M_cache_locale(__loc);
      if (this->rdbuf() != 0)
 this->rdbuf()->pubimbue(__loc);
      return __old;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::init(basic_streambuf<_CharT, _Traits>* __sb)
    {

      ios_base::_M_init();


      _M_cache_locale(_M_ios_locale);
# 144 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 3
      _M_fill = _CharT();
      _M_fill_init = false;

      _M_tie = 0;
      _M_exception = goodbit;
      _M_streambuf = __sb;
      _M_streambuf_state = __sb ? goodbit : badbit;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::_M_cache_locale(const locale& __loc)
    {
      if (__builtin_expect(has_facet<__ctype_type>(__loc), true))
 _M_ctype = &use_facet<__ctype_type>(__loc);
      else
 _M_ctype = 0;

      if (__builtin_expect(has_facet<__num_put_type>(__loc), true))
 _M_num_put = &use_facet<__num_put_type>(__loc);
      else
 _M_num_put = 0;

      if (__builtin_expect(has_facet<__num_get_type>(__loc), true))
 _M_num_get = &use_facet<__num_get_type>(__loc);
      else
 _M_num_get = 0;
    }





  extern template class basic_ios<char>;


  extern template class basic_ios<wchar_t>;



}
# 471 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 2 3
# 45 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 40 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 2 3


namespace std {
# 53 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template<typename _CharT, typename _Traits>
    class basic_ostream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
             __num_put_type;
      typedef ctype<_CharT> __ctype_type;
# 80 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      explicit
      basic_ostream(__streambuf_type* __sb)
      { this->init(__sb); }






      virtual
      ~basic_ostream() { }


      class sentry;
      friend class sentry;
# 106 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      operator<<(__ostream_type& (*__pf)(__ostream_type&))
      {



 return __pf(*this);
      }

      __ostream_type&
      operator<<(__ios_type& (*__pf)(__ios_type&))
      {



 __pf(*this);
 return *this;
      }

      __ostream_type&
      operator<<(ios_base& (*__pf) (ios_base&))
      {



 __pf(*this);
 return *this;
      }
# 163 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      operator<<(long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(bool __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(short __n);

      __ostream_type&
      operator<<(unsigned short __n)
      {


 return _M_insert(static_cast<unsigned long>(__n));
      }

      __ostream_type&
      operator<<(int __n);

      __ostream_type&
      operator<<(unsigned int __n)
      {


 return _M_insert(static_cast<unsigned long>(__n));
      }


      __ostream_type&
      operator<<(long long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long long __n)
      { return _M_insert(__n); }


      __ostream_type&
      operator<<(double __f)
      { return _M_insert(__f); }

      __ostream_type&
      operator<<(float __f)
      {


 return _M_insert(static_cast<double>(__f));
      }

      __ostream_type&
      operator<<(long double __f)
      { return _M_insert(__f); }

      __ostream_type&
      operator<<(const void* __p)
      { return _M_insert(__p); }
# 248 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      operator<<(__streambuf_type* __sb);
# 281 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      put(char_type __c);


      void
      _M_write(const char_type* __s, streamsize __n)
      {
 const streamsize __put = this->rdbuf()->sputn(__s, __n);
 if (__put != __n)
   this->setstate(ios_base::badbit);
      }
# 309 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      write(const char_type* __s, streamsize __n);
# 322 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      flush();
# 333 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      pos_type
      tellp();
# 344 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      seekp(pos_type);
# 356 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
       __ostream_type&
      seekp(off_type, ios_base::seekdir);

    protected:
      basic_ostream()
      { this->init(0); }

      template<typename _ValueT>
        __ostream_type&
        _M_insert(_ValueT __v);
    };
# 375 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template <typename _CharT, typename _Traits>
    class basic_ostream<_CharT, _Traits>::sentry
    {

      bool _M_ok;
      basic_ostream<_CharT, _Traits>& _M_os;

    public:
# 394 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      explicit
      sentry(basic_ostream<_CharT, _Traits>& __os);
# 404 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      ~sentry()
      {

 if (bool(_M_os.flags() & ios_base::unitbuf) && !uncaught_exception())
   {

     if (_M_os.rdbuf() && _M_os.rdbuf()->pubsync() == -1)
       _M_os.setstate(ios_base::badbit);
   }
      }
# 425 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      operator bool() const
      { return _M_ok; }
    };
# 446 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
    { return __ostream_insert(__out, &__c, 1); }

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
    { return (__out << __out.widen(__c)); }


  template <class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, char __c)
    { return __ostream_insert(__out, &__c, 1); }


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
    { return (__out << static_cast<char>(__c)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
    { return (__out << static_cast<char>(__c)); }
# 488 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits> &
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s);


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const signed char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits> &
    operator<<(basic_ostream<char, _Traits>& __out, const unsigned char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }
# 538 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    endl(basic_ostream<_CharT, _Traits>& __os)
    { return flush(__os.put(__os.widen('\n'))); }







  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    ends(basic_ostream<_CharT, _Traits>& __os)
    { return __os.put(_CharT()); }






  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    flush(basic_ostream<_CharT, _Traits>& __os)
    { return __os.flush(); }
# 582 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
}



# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream.tcc" 1 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream.tcc" 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream.tcc" 3



namespace std {

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>::sentry::
    sentry(basic_ostream<_CharT, _Traits>& __os)
    : _M_ok(false), _M_os(__os)
    {

      if (__os.tie() && __os.good())
 __os.tie()->flush();

      if (__os.good())
 _M_ok = true;
      else
 __os.setstate(ios_base::failbit);
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_ostream<_CharT, _Traits>&
      basic_ostream<_CharT, _Traits>::
      _M_insert(_ValueT __v)
      {
 sentry __cerb(*this);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::goodbit;
     if (true)
       {
  const __num_put_type& __np = __check_facet(this->_M_num_put);
  if (__np.put(*this, *this, this->fill(), __v).failed())
    __err |= ios_base::badbit;
       }
     if (false)
       {
  this->_M_setstate(ios_base::badbit);
                         ;
       }
     if (false)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(short __n)
    {


      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned short>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(int __n)
    {


      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned int>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(__streambuf_type* __sbin)
    {
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this);
      if (__cerb && __sbin)
 {
   if (true)
     {
       if (!__copy_streambufs(__sbin, this->rdbuf()))
  __err |= ios_base::failbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbin)
 __err |= ios_base::badbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    put(char_type __c)
    {






      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __put = this->rdbuf()->sputc(__c);
       if (traits_type::eq_int_type(__put, traits_type::eof()))
  __err |= ios_base::badbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    write(const _CharT* __s, streamsize __n)
    {







      sentry __cerb(*this);
      if (__cerb)
 {
   if (true)
     { _M_write(__s, __n); }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    flush()
    {



      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (this->rdbuf() && this->rdbuf()->pubsync() == -1)
     __err |= ios_base::badbit;
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_ostream<_CharT, _Traits>::pos_type
    basic_ostream<_CharT, _Traits>::
    tellp()
    {
      pos_type __ret = pos_type(-1);
      if (true)
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur, ios_base::out);
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(pos_type __pos)
    {
      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(off_type __off, ios_base::seekdir __dir)
    {
      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 {


   const size_t __clen = char_traits<char>::length(__s);
   if (true)
     {
       struct __ptr_guard
       {
  _CharT *__p;
  __ptr_guard (_CharT *__ip): __p(__ip) { }
  ~__ptr_guard() { delete[] __p; }
  _CharT* __get() { return __p; }
       } __pg (new _CharT[__clen]);

       _CharT *__ws = __pg.__get();
       for (size_t __i = 0; __i < __clen; ++__i)
  __ws[__i] = __out.widen(__s[__i]);
       __ostream_insert(__out, __ws, __clen);
     }
   if (false)
     {
       __out._M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { __out._M_setstate(ios_base::badbit); }
 }
      return __out;
    }





  extern template class basic_ostream<char>;
  extern template ostream& endl(ostream&);
  extern template ostream& ends(ostream&);
  extern template ostream& flush(ostream&);
  extern template ostream& operator<<(ostream&, char);
  extern template ostream& operator<<(ostream&, unsigned char);
  extern template ostream& operator<<(ostream&, signed char);
  extern template ostream& operator<<(ostream&, const char*);
  extern template ostream& operator<<(ostream&, const unsigned char*);
  extern template ostream& operator<<(ostream&, const signed char*);

  extern template ostream& ostream::_M_insert(long);
  extern template ostream& ostream::_M_insert(unsigned long);
  extern template ostream& ostream::_M_insert(bool);

  extern template ostream& ostream::_M_insert(long long);
  extern template ostream& ostream::_M_insert(unsigned long long);

  extern template ostream& ostream::_M_insert(double);
  extern template ostream& ostream::_M_insert(long double);
  extern template ostream& ostream::_M_insert(const void*);


  extern template class basic_ostream<wchar_t>;
  extern template wostream& endl(wostream&);
  extern template wostream& ends(wostream&);
  extern template wostream& flush(wostream&);
  extern template wostream& operator<<(wostream&, wchar_t);
  extern template wostream& operator<<(wostream&, char);
  extern template wostream& operator<<(wostream&, const wchar_t*);
  extern template wostream& operator<<(wostream&, const char*);

  extern template wostream& wostream::_M_insert(long);
  extern template wostream& wostream::_M_insert(unsigned long);
  extern template wostream& wostream::_M_insert(bool);

  extern template wostream& wostream::_M_insert(long long);
  extern template wostream& wostream::_M_insert(unsigned long long);

  extern template wostream& wostream::_M_insert(double);
  extern template wostream& wostream::_M_insert(long double);
  extern template wostream& wostream::_M_insert(const void*);



}
# 586 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 2 3
# 40 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 2 3
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 1 3
# 38 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
# 38 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3




namespace std {
# 53 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    class basic_istream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
        __num_get_type;
      typedef ctype<_CharT> __ctype_type;

    protected:





      streamsize _M_gcount;

    public:
# 89 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      explicit
      basic_istream(__streambuf_type* __sb)
      : _M_gcount(streamsize(0))
      { this->init(__sb); }






      virtual
      ~basic_istream()
      { _M_gcount = streamsize(0); }


      class sentry;
      friend class sentry;
# 118 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      operator>>(__istream_type& (*__pf)(__istream_type&))
      { return __pf(*this); }

      __istream_type&
      operator>>(__ios_type& (*__pf)(__ios_type&))
      {
 __pf(*this);
 return *this;
      }

      __istream_type&
      operator>>(ios_base& (*__pf)(ios_base&))
      {
 __pf(*this);
 return *this;
      }
# 165 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      operator>>(bool& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(short& __n);

      __istream_type&
      operator>>(unsigned short& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(int& __n);

      __istream_type&
      operator>>(unsigned int& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long& __n)
      { return _M_extract(__n); }


      __istream_type&
      operator>>(long long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long long& __n)
      { return _M_extract(__n); }


      __istream_type&
      operator>>(float& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(double& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(long double& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(void*& __p)
      { return _M_extract(__p); }
# 237 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      operator>>(__streambuf_type* __sb);
# 247 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      streamsize
      gcount() const
      { return _M_gcount; }
# 279 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      int_type
      get();
# 293 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(char_type& __c);
# 320 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(char_type* __s, streamsize __n, char_type __delim);
# 331 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(char_type* __s, streamsize __n)
      { return this->get(__s, __n, this->widen('\n')); }
# 354 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(__streambuf_type& __sb, char_type __delim);
# 364 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(__streambuf_type& __sb)
      { return this->get(__sb, this->widen('\n')); }
# 393 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      getline(char_type* __s, streamsize __n, char_type __delim);
# 404 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      getline(char_type* __s, streamsize __n)
      { return this->getline(__s, __n, this->widen('\n')); }
# 428 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      ignore();

      __istream_type&
      ignore(streamsize __n);

      __istream_type&
      ignore(streamsize __n, int_type __delim);
# 445 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      int_type
      peek();
# 463 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      read(char_type* __s, streamsize __n);
# 482 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      streamsize
      readsome(char_type* __s, streamsize __n);
# 498 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      putback(char_type __c);
# 513 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      unget();
# 531 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      int
      sync();
# 545 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      pos_type
      tellg();
# 560 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      seekg(pos_type);
# 576 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      seekg(off_type, ios_base::seekdir);


    protected:
      basic_istream()
      : _M_gcount(streamsize(0))
      { this->init(0); }

      template<typename _ValueT>
        __istream_type&
        _M_extract(_ValueT& __v);
    };


  template<>
    basic_istream<char>&
    basic_istream<char>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n, int_type __delim);


  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n, int_type __delim);
# 631 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    class basic_istream<_CharT, _Traits>::sentry
    {

      bool _M_ok;

    public:

      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::__ctype_type __ctype_type;
      typedef typename _Traits::int_type __int_type;
# 667 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      explicit
      sentry(basic_istream<_CharT, _Traits>& __is, bool __noskipws = false);
# 680 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      operator bool() const
      { return _M_ok; }
    };
# 697 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }
# 739 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s);


  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __in, char* __s);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }
# 767 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    class basic_iostream
    : public basic_istream<_CharT, _Traits>,
      public basic_ostream<_CharT, _Traits>
    {
    public:



      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;







      explicit
      basic_iostream(basic_streambuf<_CharT, _Traits>* __sb)
      : __istream_type(__sb), __ostream_type(__sb) { }




      virtual
      ~basic_iostream() { }

    protected:
      basic_iostream()
      : __istream_type(), __ostream_type() { }
    };
# 828 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __is);
# 850 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
}



# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 1 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 3
# 39 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 3



namespace std {

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>::sentry::
    sentry(basic_istream<_CharT, _Traits>& __in, bool __noskip) : _M_ok(false)
    {
      ios_base::iostate __err = ios_base::goodbit;
      if (__in.good())
 {
   if (__in.tie())
     __in.tie()->flush();
   if (!__noskip && bool(__in.flags() & ios_base::skipws))
     {
       const __int_type __eof = traits_type::eof();
       __streambuf_type* __sb = __in.rdbuf();
       __int_type __c = __sb->sgetc();

       const __ctype_type& __ct = __check_facet(__in._M_ctype);
       while (!traits_type::eq_int_type(__c, __eof)
       && __ct.is(ctype_base::space,
    traits_type::to_char_type(__c)))
  __c = __sb->snextc();




       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
 }

      if (__in.good() && __err == ios_base::goodbit)
 _M_ok = true;
      else
 {
   __err |= ios_base::failbit;
   __in.setstate(__err);
 }
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_istream<_CharT, _Traits>&
      basic_istream<_CharT, _Traits>::
      _M_extract(_ValueT& __v)
      {
 sentry __cerb(*this, false);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::goodbit;
     if (true)
       {
  const __num_get_type& __ng = __check_facet(this->_M_num_get);
  __ng.get(*this, 0, *this, __err, __v);
       }
     if (false)
       {
  this->_M_setstate(ios_base::badbit);
                         ;
       }
     if (false)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(short& __n)
    {


      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       long __l;
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __l);



       if (__l < __gnu_cxx::__numeric_traits<short>::__min)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<short>::__min;
  }
       else if (__l > __gnu_cxx::__numeric_traits<short>::__max)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<short>::__max;
  }
       else
  __n = short(__l);
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(int& __n)
    {


      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       long __l;
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __l);



       if (__l < __gnu_cxx::__numeric_traits<int>::__min)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<int>::__min;
  }
       else if (__l > __gnu_cxx::__numeric_traits<int>::__max)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<int>::__max;
  }
       else
  __n = int(__l);
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(__streambuf_type* __sbout)
    {
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, false);
      if (__cerb && __sbout)
 {
   if (true)
     {
       bool __ineof;
       if (!__copy_streambufs_eof(this->rdbuf(), __sbout, __ineof))
  __err |= ios_base::failbit;
       if (__ineof)
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::failbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbout)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    get(void)
    {
      const int_type __eof = traits_type::eof();
      int_type __c = __eof;
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       __c = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__c, __eof))
  _M_gcount = 1;
       else
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type& __c)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       const int_type __cb = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__cb, traits_type::eof()))
  {
    _M_gcount = 1;
    __c = traits_type::to_char_type(__cb);
  }
       else
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       int_type __c = __sb->sgetc();

       while (_M_gcount + 1 < __n
       && !traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim))
  {
    *__s++ = traits_type::to_char_type(__c);
    ++_M_gcount;
    __c = __sb->snextc();
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }


      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(__streambuf_type& __sb, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __this_sb = this->rdbuf();
       int_type __c = __this_sb->sgetc();
       char_type __c2 = traits_type::to_char_type(__c);

       while (!traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim)
       && !traits_type::eq_int_type(__sb.sputc(__c2), __eof))
  {
    ++_M_gcount;
    __c = __this_sb->snextc();
    __c2 = traits_type::to_char_type(__c);
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    getline(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
        {
          if (true)
            {
              const int_type __idelim = traits_type::to_int_type(__delim);
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();

              while (_M_gcount + 1 < __n
                     && !traits_type::eq_int_type(__c, __eof)
                     && !traits_type::eq_int_type(__c, __idelim))
                {
                  *__s++ = traits_type::to_char_type(__c);
                  __c = __sb->snextc();
                  ++_M_gcount;
                }
              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
              else
                {
                  if (traits_type::eq_int_type(__c, __idelim))
                    {
                      __sb->sbumpc();
                      ++_M_gcount;
                    }
                  else
                    __err |= ios_base::failbit;
                }
            }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
          if (false)
            { this->_M_setstate(ios_base::badbit); }
        }


      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
        __err |= ios_base::failbit;
      if (__err)
        this->setstate(__err);
      return *this;
    }




  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(void)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();

       if (traits_type::eq_int_type(__sb->sbumpc(), __eof))
  __err |= ios_base::eofbit;
       else
  _M_gcount = 1;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::goodbit;
          if (true)
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();
# 512 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 3
       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }

       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

       if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
            }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
          if (false)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n, int_type __delim)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::goodbit;
          if (true)
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();


       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof)
    && !traits_type::eq_int_type(__c, __delim))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof)
        && !traits_type::eq_int_type(__c, __delim))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }

       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
       else if (traits_type::eq_int_type(__c, __delim))
  {
    if (_M_gcount
        < __gnu_cxx::__numeric_traits<streamsize>::__max)
      ++_M_gcount;
    __sb->sbumpc();
  }
            }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
          if (false)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    peek(void)
    {
      int_type __c = traits_type::eof();
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       __c = this->rdbuf()->sgetc();
       if (traits_type::eq_int_type(__c, traits_type::eof()))
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    read(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       _M_gcount = this->rdbuf()->sgetn(__s, __n);
       if (_M_gcount != __n)
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_istream<_CharT, _Traits>::
    readsome(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {

       const streamsize __num = this->rdbuf()->in_avail();
       if (__num > 0)
  _M_gcount = this->rdbuf()->sgetn(__s, std::min(__num, __n));
       else if (__num == -1)
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return _M_gcount;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    putback(char_type __c)
    {


      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sputbackc(__c), __eof))
  __err |= ios_base::badbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    unget(void)
    {


      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sungetc(), __eof))
  __err |= ios_base::badbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    int
    basic_istream<_CharT, _Traits>::
    sync(void)
    {


      int __ret = -1;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       __streambuf_type* __sb = this->rdbuf();
       if (__sb)
  {
    if (__sb->pubsync() == -1)
      __err |= ios_base::badbit;
    else
      __ret = 0;
  }
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::pos_type
    basic_istream<_CharT, _Traits>::
    tellg(void)
    {


      pos_type __ret = pos_type(-1);
      if (true)
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur,
           ios_base::in);
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(pos_type __pos)
    {


      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {

       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::in);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(off_type __off, ios_base::seekdir __dir)
    {


      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {

       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::in);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::int_type __int_type;

      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const __int_type __cb = __in.rdbuf()->sbumpc();
       if (!_Traits::eq_int_type(__cb, _Traits::eof()))
  __c = _Traits::to_char_type(__cb);
       else
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   if (false)
     {
       __in._M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { __in._M_setstate(ios_base::badbit); }
   if (__err)
     __in.setstate(__err);
 }
      return __in;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename _Traits::int_type int_type;
      typedef _CharT char_type;
      typedef ctype<_CharT> __ctype_type;

      streamsize __extracted = 0;
      ios_base::iostate __err = ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   if (true)
     {

       streamsize __num = __in.width();
       if (__num <= 0)
  __num = __gnu_cxx::__numeric_traits<streamsize>::__max;

       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());

       const int_type __eof = _Traits::eof();
       __streambuf_type* __sb = __in.rdbuf();
       int_type __c = __sb->sgetc();

       while (__extracted < __num - 1
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    *__s++ = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __sb->snextc();
  }
       if (_Traits::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;



       *__s = char_type();
       __in.width(0);
     }
   if (false)
     {
       __in._M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { __in._M_setstate(ios_base::badbit); }
 }
      if (!__extracted)
 __err |= ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __in)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename __istream_type::int_type __int_type;
      typedef ctype<_CharT> __ctype_type;

      const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
      const __int_type __eof = _Traits::eof();
      __streambuf_type* __sb = __in.rdbuf();
      __int_type __c = __sb->sgetc();

      while (!_Traits::eq_int_type(__c, __eof)
      && __ct.is(ctype_base::space, _Traits::to_char_type(__c)))
 __c = __sb->snextc();

       if (_Traits::eq_int_type(__c, __eof))
  __in.setstate(ios_base::eofbit);
      return __in;
    }





  extern template class basic_istream<char>;
  extern template istream& ws(istream&);
  extern template istream& operator>>(istream&, char&);
  extern template istream& operator>>(istream&, char*);
  extern template istream& operator>>(istream&, unsigned char&);
  extern template istream& operator>>(istream&, signed char&);
  extern template istream& operator>>(istream&, unsigned char*);
  extern template istream& operator>>(istream&, signed char*);

  extern template istream& istream::_M_extract(unsigned short&);
  extern template istream& istream::_M_extract(unsigned int&);
  extern template istream& istream::_M_extract(long&);
  extern template istream& istream::_M_extract(unsigned long&);
  extern template istream& istream::_M_extract(bool&);

  extern template istream& istream::_M_extract(long long&);
  extern template istream& istream::_M_extract(unsigned long long&);

  extern template istream& istream::_M_extract(float&);
  extern template istream& istream::_M_extract(double&);
  extern template istream& istream::_M_extract(long double&);
  extern template istream& istream::_M_extract(void*&);

  extern template class basic_iostream<char>;


  extern template class basic_istream<wchar_t>;
  extern template wistream& ws(wistream&);
  extern template wistream& operator>>(wistream&, wchar_t&);
  extern template wistream& operator>>(wistream&, wchar_t*);

  extern template wistream& wistream::_M_extract(unsigned short&);
  extern template wistream& wistream::_M_extract(unsigned int&);
  extern template wistream& wistream::_M_extract(long&);
  extern template wistream& wistream::_M_extract(unsigned long&);
  extern template wistream& wistream::_M_extract(bool&);

  extern template wistream& wistream::_M_extract(long long&);
  extern template wistream& wistream::_M_extract(unsigned long long&);

  extern template wistream& wistream::_M_extract(float&);
  extern template wistream& wistream::_M_extract(double&);
  extern template wistream& wistream::_M_extract(long double&);
  extern template wistream& wistream::_M_extract(void*&);

  extern template class basic_iostream<wchar_t>;



}
# 854 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 2 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 2 3

namespace std {
# 58 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 3
  extern istream cin;
  extern ostream cout;
  extern ostream cerr;
  extern ostream clog;


  extern wistream wcin;
  extern wostream wcout;
  extern wostream wcerr;
  extern wostream wclog;




  static ios_base::Init __ioinit;

}
# 2 "svm_top.cpp" 2
# 1 "./svm.h" 1








static const float b = 2.8180;
static const float g = -8.0;
# 21 "./svm.h"
typedef float input_t;
typedef short output_t;
typedef float coeff_t;
typedef float vector_t;
typedef float norm_t;
typedef float diff_t;





static vector_t SupVec[1222][18]= {0.452850,0.487946,0.492073,0.631207,0.395360,0.588323,0.573465,0.443829,0.422434,0.506414,0.476933,0.476176,0.461296,0.437082,0.433737,0.466892,0.446525,0.519262,0.444988,0.451570,0.475561,0.480033,0.771133,0.482265,0.583350,0.435514,0.480441,0.472192,0.473229,0.421233,0.481198,0.477826,0.331387,0.524343,0.465033,0.545622,0.454004,0.445572,0.422711,0.447300,0.445382,0.410372,0.530995,0.540034,0.375275,0.524109,0.427222,0.443096,0.477453,0.452952,0.464640,0.451317,0.453627,0.442647,0.450407,0.500515,0.489821,0.462476,0.431305,0.459849,0.515168,0.432933,0.421433,0.437717,0.515290,0.494094,0.503236,0.450683,0.554461,0.445590,0.451888,0.393503,0.448474,0.464104,0.486084,0.439474,0.415343,0.488554,0.504032,0.449992,0.499396,0.438459,0.404907,0.474709,0.606205,0.452185,0.421052,0.319470,0.479508,0.516323,0.532369,0.366939,0.436003,0.462926,0.416571,0.457300,0.351674,0.422535,0.492674,0.462464,0.495140,0.696467,0.440494,0.456096,0.421096,0.502944,0.462046,0.457182,0.449407,0.349226,0.418856,0.383132,0.470378,0.500527,0.417789,0.524030,0.421896,0.468255,0.591965,0.446550,0.432929,0.400963,0.438255,0.449598,0.400722,0.352649,0.493193,0.499721,0.433155,0.346674,0.449097,0.472454,0.457335,0.293184,0.546209,0.453888,0.566842,0.453238,0.452670,0.503478,0.468055,0.418973,0.393344,0.494981,0.454129,0.540595,0.367476,0.444941,0.483286,0.354152,0.461832,0.387967,0.467422,0.482984,0.474405,0.381132,0.472467,0.403240,0.508180,0.470803,0.506585,0.468367,0.510150,0.513336,0.454338,0.437615,0.438009,0.493089,0.427416,0.498115,0.484342,0.555922,0.404948,0.461579,0.412239,0.413161,0.451675,0.498441,0.462884,0.379440,0.471075,0.406278,0.475156,0.492170,0.498160,0.407923,0.469220,0.735920,0.448797,0.447576,0.475026,0.447516,0.461182,0.503710,0.411708,0.404939,0.448478,0.375246,0.269356,0.444059,0.400146,0.404775,0.474596,0.498092,0.404900,0.259018,0.451527,0.483672,0.510611,0.470782,0.459557,0.438913,0.449328,0.599019,0.468439,0.453802,0.437654,0.698685,0.462913,0.554501,0.457374,0.478828,0.486094,0.527047,0.610014,0.429886,0.431734,0.444855,0.475447,0.443685,0.449027,0.445386,0.463187,0.416030,0.464488,0.442640,0.442214,0.440329,0.480631,0.518292,0.451977,0.530211,0.601622,0.463509,0.428107,0.423815,0.467087,0.523608,0.445030,0.523042,0.467788,0.120570,0.452611,0.404972,0.653491,0.346928,0.459853,0.460352,0.484326,0.442284,0.301261,0.516010,0.425103,0.531534,0.456510,0.466835,0.475217,0.490009,0.491519,0.441989,0.446093,0.513143,0.499055,0.454649,0.443937,0.402232,0.437656,0.448512,0.481456,0.508193,0.387824,0.515254,0.526037,0.462064,0.454862,0.449631,0.556616,0.460792,0.409354,0.537228,0.318625,0.450997,0.453669,0.454711,0.485436,0.455880,0.485566,0.461645,0.522690,0.449746,0.404711,0.442021,0.647419,0.458486,0.393382,0.421154,0.368733,0.478394,0.400523,0.494138,0.618398,0.455146,0.418545,0.452790,0.470344,0.435165,0.462358,0.420327,0.457188,0.463594,0.476556,0.348010,0.328555,0.421272,0.480419,0.526206,0.471840,0.464772,0.376966,0.398459,0.449897,0.420385,0.467519,0.501226,0.440666,0.512494,0.502010,0.456518,0.290883,0.458492,0.456661,0.528628,0.557954,0.430498,0.531921,0.450649,0.461035,0.417485,0.272801,0.513570,0.483152,0.404178,0.391230,0.378535,0.438859,0.434511,0.305759,0.422006,0.459113,0.460878,0.505122,0.109721,0.187979,0.520356,0.456769,0.442298,0.421889,0.437122,0.411897,0.232878,0.454311,0.457732,0.434537,0.460472,0.454651,0.440445,0.448135,0.473009,0.456041,0.404573,0.461641,0.458718,0.506403,0.444233,0.450206,0.497120,0.507342,0.506939,0.448269,0.463519,0.441861,0.663562,0.432108,0.663080,0.454505,0.503585,0.432170,0.405678,0.450024,0.626341,0.452153,0.459519,0.497582,0.472636,0.441161,0.482827,0.424455,0.454292,0.459671,0.424795,0.464640,0.348966,0.619800,0.479559,0.460529,0.499531,0.455830,0.440491,0.421009,0.466902,0.446961,0.466162,0.438112,0.584220,0.490939,0.452644,0.455313,0.432118,0.611978,0.440523,0.447114,0.443955,0.354920,0.440026,0.483043,0.480981,0.463369,0.432747,0.149978,0.457447,0.501184,0.442131,0.457728,0.451912,0.452269,0.437619,0.358724,0.460321,0.481701,0.461046,0.461403,0.427070,0.503152,0.737427,0.384874,0.462605,0.436551,0.440449,0.483022,0.525967,0.441093,0.460622,0.461094,0.482609,0.533242,0.424284,0.542991,0.470689,0.419965,0.494107,0.525146,0.503125,0.476834,0.392292,0.442373,0.566637,0.430535,0.429623,0.560664,0.483930,0.492711,0.453026,0.456030,0.574462,0.418610,0.453523,0.459700,0.405885,0.343356,0.483957,0.388827,0.536801,0.481215,0.565816,0.451078,0.469007,0.419852,0.360020,0.474065,0.492957,0.462688,0.598247,0.439913,0.461330,0.369270,0.455877,0.421665,0.488251,0.411561,0.469286,0.514739,0.481209,0.518433,0.432647,0.444596,0.432271,0.620579,0.483463,0.369888,0.408708,0.527253,0.349439,0.464668,0.417591,0.465775,0.557859,0.416262,0.494090,0.454392,0.439269,0.456785,0.455227,0.476184,0.481292,0.431983,0.444399,0.455398,0.485588,0.490425,0.449155,0.425956,0.540621,0.615790,0.486293,0.449953,0.556700,0.436737,0.470585,0.753783,0.469969,0.469961,0.738102,0.460596,0.451509,0.521205,0.416808,0.449239,0.446630,0.569790,0.529038,0.453084,0.444549,0.429673,0.415271,0.433121,0.470016,0.433973,0.445897,0.496168,0.420442,0.379013,0.472571,0.477615,0.458310,0.464020,0.534473,0.478164,0.431238,0.599965,0.390698,0.548121,0.359585,0.454250,0.363346,0.459987,0.486122,0.366841,0.446877,0.571023,0.513939,0.509082,0.603492,0.459090,0.453383,0.431500,0.447456,0.413250,0.443228,0.488435,0.450889,0.406698,0.499426,0.457678,0.510937,0.438137,0.513018,0.502269,0.460551,0.474819,0.540347,0.719254,0.499577,0.478517,0.437731,0.430223,0.458036,0.444965,0.447025,0.478768,0.305081,0.384617,0.553579,0.598440,0.411961,0.406087,0.468409,0.493462,0.459038,0.474087,0.439707,0.460408,0.490862,0.460362,0.641654,0.459417,0.508805,0.498254,0.508585,0.437706,0.439641,0.553876,0.493306,0.446884,0.402977,0.475027,0.416864,0.426669,0.469402,0.477590,0.490648,0.318657,0.530768,0.369253,0.456760,0.687315,0.479061,0.413398,0.449226,0.456161,0.481498,0.686466,0.426687,0.438033,0.445188,0.439313,0.642399,0.468494,0.428497,0.477276,0.448416,0.477964,0.466124,0.454807,0.479445,0.503375,0.382973,0.473714,0.473063,0.439665,0.410189,0.420042,0.553444,0.699962,0.456516,0.440285,0.475092,0.476525,0.424406,0.430164,0.502056,0.491583,0.349779,0.516177,0.498196,0.496270,0.488419,0.487515,0.450994,0.442043,0.450328,0.469532,0.476441,0.398839,0.520269,0.321834,0.459406,0.421832,0.440195,0.438266,0.504252,0.563769,0.446263,0.413791,0.424378,0.430071,0.476101,0.448545,0.512704,0.467926,0.457968,0.454122,0.387647,0.492389,0.440077,0.427541,0.466530,0.452786,0.458985,0.465817,0.402337,0.449303,0.475334,0.412429,0.469602,0.504875,0.472551,0.450525,0.479797,0.406118,0.497082,0.628300,0.619485,0.473525,0.463213,0.442043,0.389499,0.436357,0.360575,0.489722,0.424475,0.557628,0.410957,0.461182,0.439500,0.443122,0.366245,0.427842,0.451390,0.418472,0.471844,0.461953,0.453597,0.495352,0.475044,0.460926,0.435103,0.453734,0.450781,0.456700,0.445510,0.474071,0.318168,0.474234,0.427475,0.442300,0.519031,0.438234,0.542947,0.598417,0.441127,0.478682,0.520414,0.467054,0.433008,0.487899,0.456186,0.472814,0.554913,0.431852,0.434335,0.485753,0.498447,0.483022,0.414988,0.503165,0.447914,0.476080,0.465024,0.638704,0.358566,0.554358,0.484043,0.457506,0.416566,0.698478,0.388227,0.512597,0.461084,0.568983,0.427527,0.470022,0.462358,0.473089,0.143142,0.520474,0.461065,0.535567,0.526763,0.486457,0.450191,0.474970,0.468394,0.465242,0.515831,0.418604,0.456133,0.499025,0.461287,0.426136,0.407807,0.451045,0.443003,0.491035,0.468204,0.459090,0.457610,0.429494,0.534613,0.479230,0.466443,0.400275,0.411450,0.492474,0.542098,0.504320,0.457386,0.497375,0.406453,0.450810,0.477548,0.443079,0.486431,0.462963,0.469745,0.492857,0.463243,0.438149,0.492981,0.417140,0.523705,0.512448,0.417063,0.452596,0.454276,0.450354,0.412695,0.486658,0.424564,0.447937,0.444538,0.532973,0.465233,0.388128,0.511860,0.496473,0.446930,0.428815,0.431953,0.441202,0.717046,0.569766,0.443978,0.490026,0.469366,0.592995,0.574443,0.471801,0.268526,0.491198,0.420596,0.394767,0.409067,0.584991,0.526534,0.456987,0.499393,0.404180,0.470589,0.483956,0.559812,0.457159,0.437590,0.434446,0.415516,0.497084,0.462113,0.436980,0.476680,0.403608,0.489973,0.445241,0.420723,0.505358,0.441342,0.520142,0.465621,0.453203,0.463061,0.360020,0.475941,0.406183,0.410120,0.369686,0.408291,0.429384,0.426353,0.466970,0.453665,0.227982,0.393427,0.445282,0.484281,0.760733,0.446842,0.436481,0.390028,0.413786,0.426663,0.458404,0.448942,0.457551,0.491319,0.457468,0.464360,0.565816,0.468941,0.418667,0.457307,0.397221,0.454987,0.498924,0.416779,0.500515,0.496350,0.408165,0.488396,0.474689,0.469481,0.452210,0.536463,0.538312,0.424234,0.427205,0.463718,0.427813,0.525152,0.459688,0.455208,0.412431,0.466535,0.420825,0.480096,0.493690,0.404826,0.529636,0.424497,0.409325,0.309932,0.485694,0.461141,0.414076,0.513747,0.443353,0.538103,0.467271,0.492454,0.590288,0.494774,0.465664,0.480099,0.454205,0.464311,0.456013,0.293184,0.470227,0.444790,0.361136,0.389671,0.486213,0.467464,0.336129,0.403956,0.419388,0.316273,0.417591,0.478192,0.455465,0.697926,0.422959,0.665830,0.500482,0.495803,0.396840,0.482880,0.444952,0.479135,0.481700,0.493098,0.439860,0.426701,0.472167,0.367056,0.485752,0.455812,0.451362,0.497126,0.423187,0.451500,0.643389,0.480051,0.463248,0.479142,0.497833,0.450292,0.446349,0.505391,0.538629,0.531037,0.458601,0.492922,0.451762,0.460110,0.400038,0.423040,0.459062,0.468931,0.453661,0.442278,0.458314,0.496032,0.468926,0.446310,0.424006,0.928750,0.508103,0.333746,0.487881,0.476078,0.411037,0.509052,0.406233,0.455649,0.446096,0.470160,0.607520,0.435430,0.453866,0.472651,0.504875,0.468340,0.441278,0.464430,0.452169,0.494146,0.456576,0.481611,0.373134,0.511173,0.107774,0.562921,0.562099,0.332618,0.503334,0.432820,0.404481,0.432543,0.481225,0.409988,0.437201,0.478848,0.436200,0.346735,0.440262,0.462743,0.444552,0.458316,0.549056,0.498666,0.616424,0.460467,0.467570,0.463790,0.436768,0.438344,0.430440,0.520480,0.422341,0.451495,0.517359,0.588737,0.418581,0.370769,0.431250,0.431557,0.431188,0.463901,0.480109,0.456246,0.465817,0.452244,0.534484,0.673951,0.397832,0.416086,0.444941,0.539928,0.478524,0.370593,0.443087,0.408585,0.402683,0.527906,0.591244,0.702228,0.486979,0.411324,0.437470,0.468573,0.466380,0.443373,0.283655,0.432604,0.506280,0.509712,0.507347,0.448191,0.440953,0.502750,0.484814,0.393564,0.457429,0.475031,0.463309,0.466091,0.378566,0.436840,0.372261,0.478552,0.563733,0.480417,0.492981,0.409572,0.481445,0.482638,0.434838,0.486604,0.376557,0.517603,0.360928,0.443612,0.488524,0.398887,0.458342,0.484762,0.476901,0.420292,0.393385,0.433151,0.490756,0.436616,0.465154,0.566063,0.523366,0.437926,0.485133,0.463237,0.551226,0.488166,0.556616,0.482955,0.448649,0.450595,0.472806,0.463353,0.487526,0.469429,0.407782,0.523301,0.412367,0.454698,0.458153,0.417237,0.443553,0.457828,0.476033,0.451621,0.466542,0.420927,0.456815,0.442577,0.509961,0.425493,0.454106,0.424562,0.458232,0.453330,0.413494,0.465904,0.449033,0.470125,0.467085,0.431097,
  0.441109,0.475564,0.479586,0.614401,0.386459,0.567761,0.559111,0.433054,0.410787,0.501271,0.466732,0.462300,0.450527,0.426407,0.424563,0.455067,0.435398,0.507605,0.436375,0.440828,0.463593,0.468265,0.741076,0.470812,0.560537,0.426331,0.469527,0.461544,0.461113,0.416149,0.469912,0.465609,0.320889,0.524417,0.453517,0.531085,0.442912,0.435452,0.409347,0.437448,0.434303,0.403327,0.517992,0.523527,0.366926,0.489611,0.413063,0.432657,0.461975,0.442830,0.452769,0.440746,0.441401,0.431204,0.438991,0.481922,0.474394,0.451268,0.420707,0.448706,0.502983,0.421651,0.412415,0.427221,0.500157,0.481394,0.490674,0.439121,0.540361,0.434426,0.441024,0.385176,0.438472,0.452991,0.475990,0.429639,0.405688,0.472458,0.490806,0.438598,0.486387,0.428076,0.394965,0.462610,0.575879,0.440646,0.411463,0.311410,0.467319,0.502936,0.519350,0.357162,0.425558,0.451528,0.406799,0.446111,0.343663,0.413378,0.480118,0.452330,0.482112,0.677375,0.430279,0.445053,0.411288,0.491760,0.450595,0.445230,0.437861,0.339959,0.409235,0.374040,0.458351,0.487875,0.407694,0.514360,0.411794,0.455511,0.575134,0.435858,0.421266,0.392227,0.426584,0.435662,0.388969,0.358869,0.482552,0.468000,0.422362,0.341967,0.438208,0.459431,0.446162,0.292300,0.530541,0.443343,0.548931,0.442407,0.441642,0.490832,0.453663,0.409342,0.384634,0.481808,0.443517,0.526769,0.359094,0.437128,0.471410,0.348062,0.445973,0.379455,0.455739,0.467170,0.463534,0.380949,0.458647,0.393288,0.495307,0.455704,0.493545,0.455617,0.495164,0.503138,0.440982,0.427453,0.427845,0.481190,0.416919,0.483366,0.473147,0.540644,0.395379,0.448713,0.403623,0.406071,0.441172,0.479754,0.451354,0.369161,0.459876,0.396999,0.463432,0.479601,0.485370,0.399124,0.456618,0.713106,0.439586,0.436923,0.462899,0.435260,0.450248,0.481680,0.403240,0.395740,0.436133,0.366890,0.267048,0.433616,0.389637,0.397730,0.462191,0.486839,0.396554,0.259039,0.440388,0.471008,0.495844,0.459102,0.447754,0.426943,0.433305,0.581416,0.457594,0.440950,0.427317,0.651178,0.451723,0.536574,0.446526,0.465244,0.474133,0.511992,0.583683,0.419999,0.411174,0.434327,0.457764,0.433230,0.438128,0.435100,0.451499,0.406532,0.448018,0.433239,0.431236,0.426974,0.473262,0.500512,0.440945,0.514806,0.609689,0.449079,0.417928,0.432445,0.454759,0.510242,0.435138,0.510417,0.450182,0.113361,0.442212,0.396278,0.622916,0.342582,0.447854,0.448838,0.472269,0.431920,0.297111,0.504354,0.381735,0.517245,0.445495,0.454932,0.463071,0.477761,0.477245,0.431797,0.435127,0.498442,0.485082,0.443648,0.433791,0.391775,0.427376,0.437652,0.469596,0.492701,0.380511,0.499070,0.518418,0.450396,0.442344,0.438946,0.541341,0.449977,0.400082,0.522310,0.310539,0.436823,0.442938,0.443767,0.473775,0.444424,0.480264,0.450057,0.510830,0.441084,0.394145,0.430245,0.652019,0.446831,0.384697,0.411977,0.360819,0.468186,0.389620,0.482683,0.600803,0.442725,0.408656,0.442016,0.458307,0.427802,0.450637,0.411427,0.438191,0.453562,0.464065,0.341329,0.321330,0.411791,0.447605,0.513572,0.459232,0.454310,0.369572,0.389074,0.440328,0.411056,0.455972,0.486776,0.430036,0.500568,0.485780,0.444968,0.293979,0.446376,0.445241,0.516129,0.544713,0.417207,0.512077,0.440260,0.448735,0.409645,0.270066,0.503328,0.471455,0.391090,0.382595,0.372388,0.428234,0.426922,0.300539,0.412250,0.447769,0.449474,0.489875,0.128034,0.191719,0.505972,0.445742,0.429191,0.412184,0.425663,0.401526,0.234240,0.443912,0.444805,0.426125,0.454083,0.443779,0.431801,0.437266,0.461165,0.445753,0.395752,0.449166,0.447309,0.492643,0.433501,0.439570,0.482528,0.493290,0.488142,0.437346,0.452195,0.428984,0.642403,0.421283,0.643722,0.441050,0.494805,0.418236,0.393071,0.435978,0.623573,0.441672,0.448740,0.484256,0.460212,0.429956,0.471213,0.414727,0.442295,0.446552,0.412020,0.453229,0.341359,0.606610,0.465139,0.449325,0.486941,0.444767,0.430351,0.416606,0.452873,0.438108,0.456181,0.428006,0.564430,0.477462,0.441287,0.442816,0.423029,0.593261,0.428837,0.436145,0.432822,0.348783,0.429822,0.502648,0.468993,0.452408,0.422735,0.145980,0.447321,0.487217,0.431261,0.446296,0.440872,0.441584,0.427474,0.358931,0.448804,0.471295,0.449902,0.450116,0.416138,0.482949,0.721532,0.372197,0.451705,0.427819,0.431117,0.465165,0.505014,0.430187,0.450119,0.438517,0.467412,0.520651,0.417209,0.529151,0.455242,0.410250,0.479377,0.512821,0.489684,0.464418,0.382067,0.431794,0.549085,0.420999,0.414448,0.566385,0.472699,0.479955,0.440326,0.444442,0.559551,0.409656,0.442434,0.448411,0.400792,0.335613,0.471038,0.380252,0.521876,0.468622,0.551315,0.440070,0.456836,0.410812,0.351922,0.452409,0.479917,0.449889,0.581526,0.431504,0.449766,0.362710,0.443700,0.411362,0.475654,0.403807,0.457752,0.499225,0.469358,0.506749,0.422314,0.433399,0.423933,0.607694,0.471042,0.363542,0.400109,0.513062,0.343389,0.453262,0.405996,0.455036,0.581514,0.409230,0.481723,0.443031,0.428824,0.445932,0.444069,0.464703,0.488813,0.422750,0.433746,0.444067,0.473470,0.476576,0.438552,0.416148,0.527600,0.586888,0.473160,0.438738,0.540750,0.430082,0.458790,0.739469,0.458137,0.457783,0.723791,0.449149,0.440780,0.507776,0.406665,0.437544,0.435724,0.553967,0.513387,0.440535,0.432519,0.415769,0.405783,0.423259,0.458757,0.422946,0.435104,0.484719,0.409899,0.372352,0.460456,0.465337,0.446850,0.452603,0.541607,0.467306,0.423185,0.599532,0.382159,0.535454,0.356538,0.443458,0.357139,0.447956,0.473572,0.366056,0.436637,0.554824,0.499319,0.496523,0.581871,0.447457,0.441355,0.426088,0.436311,0.399262,0.438544,0.475796,0.439887,0.397568,0.487922,0.444494,0.497287,0.427868,0.501570,0.488853,0.450448,0.462096,0.528370,0.701599,0.479397,0.468332,0.427332,0.419801,0.446862,0.434246,0.435220,0.463292,0.299854,0.374616,0.555116,0.584650,0.403097,0.395929,0.457610,0.481313,0.448070,0.463069,0.426905,0.449384,0.477878,0.448463,0.623423,0.448512,0.496330,0.484937,0.497543,0.426582,0.429011,0.536477,0.480101,0.438190,0.394113,0.462451,0.408213,0.415907,0.458675,0.465861,0.477505,0.322666,0.517766,0.360693,0.445643,0.667855,0.466116,0.404242,0.439164,0.441246,0.467569,0.680563,0.416133,0.426591,0.431099,0.430370,0.654987,0.457785,0.418395,0.465846,0.436978,0.466711,0.454067,0.443862,0.465611,0.491979,0.385233,0.461204,0.461288,0.427713,0.400135,0.408410,0.536334,0.703909,0.445237,0.429659,0.463411,0.464691,0.414580,0.420469,0.496344,0.478234,0.342318,0.502975,0.484290,0.481835,0.475843,0.471982,0.441158,0.428797,0.439462,0.456836,0.464570,0.388293,0.508571,0.316375,0.451309,0.412272,0.429141,0.425448,0.492343,0.555142,0.431410,0.404328,0.414008,0.419487,0.463238,0.437846,0.499896,0.452787,0.447073,0.441721,0.379863,0.471087,0.430138,0.417355,0.456614,0.439078,0.445453,0.453241,0.394119,0.439229,0.462942,0.401402,0.457467,0.492129,0.460352,0.438319,0.469307,0.396483,0.484158,0.618951,0.599995,0.461870,0.453116,0.428797,0.385081,0.425258,0.355251,0.475177,0.414665,0.533881,0.401821,0.448821,0.431139,0.432456,0.359683,0.417358,0.441639,0.409070,0.460057,0.446456,0.442099,0.483175,0.462022,0.449404,0.425144,0.442160,0.439648,0.445565,0.434687,0.461551,0.289056,0.464103,0.418992,0.430902,0.506066,0.426750,0.531588,0.583467,0.429755,0.470099,0.504866,0.455516,0.423776,0.472181,0.439995,0.460600,0.539072,0.421436,0.423536,0.473000,0.485823,0.465165,0.405125,0.523897,0.436926,0.463449,0.452288,0.623832,0.349396,0.542296,0.466634,0.446288,0.406207,0.705221,0.379847,0.502723,0.450682,0.548249,0.412443,0.457972,0.451162,0.460202,0.141635,0.509722,0.450673,0.513409,0.532859,0.472610,0.439713,0.462828,0.456951,0.452888,0.503613,0.406216,0.445735,0.485769,0.450542,0.413747,0.398327,0.439665,0.429840,0.478313,0.453711,0.447770,0.445060,0.418946,0.525832,0.467393,0.459817,0.391760,0.402275,0.479798,0.526732,0.490719,0.447328,0.484634,0.394414,0.439904,0.465877,0.431855,0.476658,0.451478,0.454629,0.478500,0.451330,0.428147,0.479538,0.407220,0.490162,0.497769,0.408121,0.439266,0.443011,0.440034,0.401051,0.473499,0.414824,0.423116,0.433391,0.519344,0.453107,0.383488,0.496876,0.483793,0.434233,0.416687,0.421894,0.430969,0.700845,0.557254,0.414558,0.468514,0.459635,0.576303,0.549472,0.459693,0.266624,0.477093,0.409003,0.385505,0.400559,0.564160,0.511384,0.446126,0.485450,0.394989,0.459824,0.469980,0.538275,0.445350,0.426765,0.425211,0.406367,0.483733,0.450992,0.426578,0.464341,0.394615,0.473933,0.434458,0.411235,0.492331,0.429953,0.505673,0.453904,0.441563,0.451713,0.351922,0.464957,0.398613,0.400293,0.360625,0.398017,0.419814,0.415570,0.453342,0.442285,0.224963,0.384504,0.434432,0.471316,0.741559,0.435901,0.424947,0.374046,0.405836,0.416778,0.447265,0.438267,0.445605,0.479439,0.446002,0.452776,0.551315,0.456753,0.412862,0.445212,0.387558,0.443751,0.487798,0.408718,0.481922,0.483760,0.399309,0.475208,0.472233,0.457396,0.441377,0.521539,0.516390,0.417266,0.417058,0.452714,0.415838,0.510791,0.448242,0.443911,0.401714,0.455787,0.411672,0.468141,0.479755,0.393716,0.514144,0.411719,0.400250,0.289051,0.471575,0.446010,0.404309,0.501555,0.432855,0.521737,0.455485,0.479279,0.591292,0.485157,0.453252,0.466845,0.444193,0.452023,0.444802,0.292300,0.457946,0.436384,0.352999,0.360439,0.477899,0.453988,0.334916,0.395733,0.409400,0.314746,0.405996,0.464458,0.444712,0.693624,0.413318,0.643447,0.485362,0.481471,0.387367,0.470746,0.436519,0.465144,0.469057,0.480274,0.429930,0.416941,0.456793,0.359859,0.473705,0.444448,0.438319,0.486850,0.409327,0.440147,0.645118,0.467030,0.450592,0.467214,0.484583,0.439575,0.434004,0.491659,0.526505,0.518960,0.449726,0.471226,0.440554,0.448552,0.391071,0.402024,0.447497,0.456973,0.442883,0.433252,0.446793,0.482237,0.457691,0.433846,0.414280,0.917851,0.495246,0.329803,0.474707,0.464971,0.401952,0.518679,0.394466,0.444268,0.432979,0.458917,0.590388,0.428034,0.442855,0.460598,0.492129,0.449224,0.431851,0.452727,0.441250,0.482587,0.440437,0.469599,0.364076,0.496161,0.110538,0.565640,0.537474,0.324100,0.488528,0.421970,0.395382,0.421248,0.469053,0.401463,0.424404,0.469969,0.423652,0.338267,0.430076,0.450128,0.434114,0.443772,0.533633,0.488186,0.598734,0.448369,0.455415,0.452319,0.426167,0.426917,0.419737,0.506625,0.413005,0.443251,0.505172,0.570228,0.409305,0.363579,0.420537,0.421729,0.421352,0.452539,0.464730,0.444436,0.455136,0.441142,0.519735,0.649012,0.386312,0.406938,0.434217,0.528222,0.466765,0.363874,0.432660,0.399580,0.393766,0.512160,0.594502,0.667953,0.472823,0.402843,0.426270,0.456243,0.458277,0.432908,0.279887,0.422625,0.492260,0.496393,0.494850,0.435667,0.430885,0.489680,0.472397,0.385651,0.445543,0.464324,0.451756,0.456704,0.369217,0.428874,0.359813,0.466199,0.548007,0.466347,0.479538,0.399992,0.470640,0.469892,0.424991,0.476555,0.358635,0.503657,0.349401,0.432977,0.474937,0.396505,0.414665,0.470295,0.464505,0.410928,0.384411,0.422357,0.479004,0.426281,0.452658,0.548404,0.509749,0.427751,0.471778,0.452501,0.537265,0.476698,0.541341,0.471037,0.437819,0.437419,0.460074,0.451596,0.474344,0.456905,0.399180,0.508946,0.402801,0.444202,0.445261,0.408141,0.431683,0.446640,0.463677,0.441467,0.447876,0.408045,0.445443,0.431813,0.496006,0.415250,0.442578,0.413964,0.446818,0.442417,0.404911,0.454541,0.438467,0.464845,0.455441,0.419767,
  0.502158,0.536014,0.537611,0.729792,0.428986,0.698919,0.645585,0.494858,0.536080,0.537475,0.531278,0.632844,0.506140,0.497146,0.491820,0.527439,0.506245,0.645781,0.490539,0.533472,0.529435,0.534885,0.503700,0.564226,0.551414,0.447590,0.478615,0.534761,0.536753,0.492082,0.557670,0.527743,0.437797,0.541869,0.519876,0.513906,0.518143,0.500105,0.457740,0.493225,0.510883,0.486181,0.534284,0.544865,0.415218,0.679061,0.590775,0.503175,0.642958,0.509818,0.519386,0.505383,0.544642,0.491341,0.510248,0.553615,0.536619,0.523329,0.466621,0.503662,0.563162,0.501857,0.465587,0.495120,0.629237,0.528189,0.547132,0.514832,0.589998,0.507329,0.517452,0.427139,0.519820,0.522428,0.535813,0.488533,0.446924,0.522540,0.548052,0.500819,0.521929,0.491289,0.470529,0.526756,0.466810,0.518125,0.481729,0.483458,0.536387,0.547194,0.535752,0.472005,0.487651,0.517802,0.458454,0.509291,0.467530,0.477014,0.548559,0.542451,0.536125,0.679139,0.504376,0.512956,0.477921,0.640542,0.495963,0.487738,0.499140,0.409506,0.463982,0.428724,0.520099,0.529693,0.504703,0.547170,0.469607,0.529535,0.643396,0.502357,0.510791,0.431622,0.497035,0.551785,0.443382,0.503195,0.574277,0.671272,0.470684,0.323683,0.498440,0.559921,0.499958,0.265854,0.528245,0.505481,0.577697,0.502175,0.508054,0.423605,0.636740,0.449530,0.503770,0.550353,0.503691,0.628559,0.434749,0.522673,0.543414,0.380095,0.591652,0.456390,0.516416,0.626357,0.530870,0.487971,0.645055,0.426848,0.483651,0.559900,0.580349,0.537224,0.653479,0.508436,0.613780,0.493580,0.508190,0.540452,0.483411,0.644939,0.556829,0.633272,0.465628,0.535533,0.445587,0.494622,0.504781,0.573184,0.515423,0.483013,0.523961,0.432517,0.540537,0.517408,0.541883,0.470541,0.518683,0.839934,0.516570,0.502922,0.531129,0.491418,0.514967,0.622043,0.467993,0.485569,0.490037,0.300629,0.448185,0.501493,0.440335,0.462172,0.523581,0.523347,0.458425,0.260694,0.510123,0.530635,0.585415,0.558008,0.520931,0.434932,0.604491,0.653597,0.525096,0.543727,0.492466,0.462706,0.521236,0.686133,0.512196,0.541220,0.555509,0.614654,0.587518,0.493764,0.482998,0.502178,0.514031,0.486319,0.502736,0.507548,0.507159,0.461557,0.406973,0.510075,0.504208,0.605045,0.523549,0.677973,0.508630,0.646832,0.639944,0.623268,0.485407,0.591198,0.517269,0.513277,0.504546,0.582661,0.556873,0.391516,0.511949,0.419472,0.805573,0.420865,0.530175,0.524379,0.544527,0.484096,0.353473,0.589814,0.407504,0.564225,0.510630,0.558693,0.513578,0.545999,0.533213,0.477242,0.502693,0.584843,0.590665,0.528797,0.497385,0.494116,0.486932,0.507091,0.535726,0.669838,0.448967,0.587859,0.512447,0.520802,0.531328,0.477815,0.628598,0.526244,0.444939,0.519532,0.424127,0.503084,0.511087,0.495050,0.543870,0.508775,0.607965,0.525747,0.520561,0.547250,0.464113,0.509427,0.659931,0.511810,0.408689,0.466622,0.397051,0.549319,0.522569,0.564594,0.556752,0.518086,0.486698,0.504767,0.514538,0.483009,0.530764,0.456931,0.400667,0.564712,0.518990,0.387460,0.356635,0.464380,0.780918,0.590788,0.516011,0.526937,0.414512,0.446755,0.503858,0.471965,0.524109,0.551123,0.489000,0.555324,0.638062,0.512210,0.387914,0.510424,0.507546,0.662059,0.652604,0.481203,0.549699,0.507434,0.695559,0.580604,0.212648,0.558120,0.576786,0.502577,0.408183,0.408943,0.477295,0.518678,0.338622,0.487648,0.514605,0.515250,0.536577,0.549929,0.208857,0.597653,0.514495,0.482218,0.473189,0.504937,0.434713,0.231494,0.498784,0.535152,0.486152,0.319076,0.500847,0.502723,0.501886,0.533133,0.524031,0.439378,0.533198,0.516039,0.508993,0.506744,0.511976,0.527963,0.525958,0.528144,0.500348,0.517976,0.601533,0.722176,0.489688,0.474792,0.608346,0.534452,0.596567,0.567073,0.612036,0.550258,0.508896,0.564114,0.548263,0.528169,0.501460,0.546247,0.479848,0.556521,0.510026,0.586052,0.518330,0.426415,0.624487,0.639825,0.514061,0.545745,0.512241,0.496272,0.454039,0.617456,0.509474,0.521852,0.482194,0.510123,0.593451,0.524097,0.517463,0.515678,0.671999,0.553805,0.508114,0.515564,0.380454,0.456851,0.681413,0.525412,0.521880,0.479342,0.330378,0.510350,0.610492,0.492226,0.521690,0.502694,0.551987,0.492848,0.457912,0.468777,0.567627,0.514650,0.510795,0.475308,0.568746,0.512349,0.465981,0.507604,0.499433,0.495683,0.484210,0.450188,0.486534,0.519122,0.593435,0.649537,0.582102,0.505646,0.535722,0.638779,0.438498,0.598500,0.551742,0.497991,0.521614,0.568302,0.516976,0.645204,0.498452,0.578194,0.558236,0.520429,0.543495,0.514708,0.505455,0.590965,0.469083,0.484291,0.508931,0.424784,0.432290,0.540221,0.447238,0.621591,0.517149,0.675749,0.506647,0.535839,0.470427,0.327468,0.473756,0.543961,0.550717,0.652520,0.486723,0.513124,0.401853,0.486056,0.474551,0.538733,0.476613,0.506254,0.529838,0.534019,0.544356,0.505442,0.505574,0.480324,0.823366,0.533829,0.485699,0.455168,0.680739,0.408646,0.505070,0.507309,0.515483,0.536928,0.477620,0.542887,0.507641,0.491551,0.498755,0.568378,0.532024,0.577414,0.537945,0.481700,0.498311,0.517330,0.546847,0.503490,0.493495,0.662734,0.456237,0.550168,0.510024,0.478171,0.530325,0.520756,0.656225,0.530380,0.517118,0.791768,0.518147,0.503841,0.540861,0.465242,0.509999,0.501123,0.635083,0.527886,0.491099,0.480082,0.584277,0.459705,0.480033,0.611434,0.496215,0.506849,0.501428,0.456269,0.425193,0.528667,0.560006,0.516412,0.512028,0.791940,0.521536,0.500644,0.548625,0.471800,0.571664,0.493666,0.521772,0.433414,0.535153,0.533956,0.528723,0.501665,0.626812,0.617548,0.540264,0.789810,0.493303,0.484996,0.503918,0.499888,0.555569,0.515626,0.536032,0.501201,0.455848,0.545675,0.505700,0.584813,0.481772,0.538784,0.544328,0.520881,0.571277,0.618401,0.506277,0.424664,0.553828,0.492694,0.493877,0.503839,0.501032,0.515295,0.649598,0.410520,0.412772,0.532048,0.572032,0.466413,0.498324,0.526424,0.564885,0.511576,0.540627,0.510659,0.516401,0.537809,0.501721,0.605376,0.517374,0.656267,0.552759,0.570820,0.491522,0.502606,0.660342,0.543485,0.510453,0.446903,0.524196,0.458842,0.489750,0.534805,0.494100,0.545507,0.474425,0.528556,0.426334,0.498570,0.917332,0.519728,0.462987,0.488371,0.617715,0.638816,0.569863,0.474513,0.458070,0.520137,0.491746,0.728253,0.531548,0.471133,0.527831,0.500877,0.538379,0.536491,0.507171,0.574236,0.543822,0.442783,0.530549,0.514349,0.515724,0.463834,0.413300,0.645388,0.574211,0.511325,0.503026,0.542321,0.516569,0.469305,0.481046,0.644782,0.552794,0.388532,0.519883,0.573030,0.610408,0.527735,0.651966,0.508797,0.561749,0.502628,0.508809,0.464814,0.437261,0.570600,0.438247,0.520179,0.479076,0.502409,0.521860,0.512127,0.562473,0.619119,0.479675,0.482884,0.490006,0.542326,0.505083,0.572846,0.629193,0.516009,0.506222,0.440608,0.655672,0.492468,0.505920,0.519850,0.527260,0.543764,0.515883,0.451328,0.513978,0.548235,0.504251,0.521026,0.513366,0.534044,0.513498,0.510158,0.464021,0.568836,0.714321,0.441817,0.547888,0.518539,0.561749,0.431514,0.499278,0.515934,0.648881,0.478419,0.426548,0.467081,0.552184,0.540423,0.493188,0.421689,0.491397,0.496212,0.459708,0.521508,0.619558,0.540395,0.569624,0.533969,0.515638,0.484688,0.516239,0.503523,0.491001,0.501580,0.494254,0.631316,0.568476,0.472714,0.470719,0.572633,0.474269,0.568001,0.473953,0.506312,0.477460,0.664172,0.484803,0.478311,0.526685,0.542004,0.575228,0.677156,0.489590,0.510473,0.498367,0.545971,0.484210,0.512312,0.488057,0.505156,0.547180,0.522690,0.666660,0.431246,0.656867,0.481082,0.507916,0.476012,0.800313,0.422230,0.551963,0.503477,0.413634,0.609442,0.524673,0.508574,0.522639,0.332588,0.469700,0.520770,0.383147,0.548384,0.539976,0.516267,0.492377,0.532963,0.529612,0.516381,0.570869,0.524579,0.510195,0.521750,0.567040,0.463028,0.501135,0.571784,0.543051,0.609667,0.511979,0.511414,0.493274,0.896498,0.535097,0.539380,0.437161,0.453524,0.639909,0.631614,0.553261,0.552966,0.577861,0.552616,0.502422,0.596158,0.501706,0.541301,0.512422,0.493391,0.543191,0.515486,0.484360,0.513640,0.457171,0.939141,0.521193,0.452102,0.538374,0.502838,0.480299,0.572625,0.518573,0.490810,0.542841,0.483912,0.560418,0.520679,0.575701,0.656339,0.558365,0.535223,0.458836,0.463808,0.497419,0.501030,0.455336,0.597222,0.660824,0.528844,0.532085,0.462441,0.532599,0.441277,0.583525,0.555355,0.367191,0.444736,0.645340,0.546911,0.493053,0.581050,0.445284,0.495814,0.551010,0.555405,0.515685,0.506735,0.490662,0.455512,0.527276,0.514903,0.487722,0.529452,0.449072,0.506680,0.503402,0.469283,0.575491,0.503551,0.591049,0.519593,0.507527,0.517548,0.327468,0.525322,0.456839,0.456151,0.429276,0.461901,0.479237,0.493287,0.515467,0.518518,0.431508,0.463718,0.491020,0.532857,0.665560,0.531776,0.518260,0.575284,0.473096,0.480532,0.511096,0.495433,0.517114,0.562198,0.510984,0.522923,0.675749,0.556525,0.430739,0.515293,0.452596,0.508128,0.513067,0.438207,0.553615,0.554501,0.457563,0.579531,0.526959,0.516439,0.492349,0.622689,0.922676,0.503626,0.483909,0.520430,0.581853,0.611779,0.516715,0.500955,0.516998,0.522256,0.466607,0.533289,0.561911,0.499067,0.620819,0.521564,0.455003,0.490294,0.561801,0.533495,0.471569,0.519392,0.493150,0.636234,0.524066,0.562643,0.860998,0.520732,0.540381,0.517455,0.511014,0.549482,0.509942,0.265854,0.519661,0.523062,0.396285,0.570765,0.557531,0.551266,0.480967,0.444070,0.490782,0.244538,0.507309,0.613741,0.519069,0.581036,0.476058,0.479297,0.535104,0.589726,0.527975,0.543122,0.461089,0.512228,0.533007,0.525959,0.493845,0.480397,0.627314,0.432080,0.491009,0.511022,0.522425,0.543464,0.582779,0.507808,0.508073,0.526013,0.520443,0.529410,0.562923,0.504434,0.534511,0.647138,0.561696,0.567515,0.476802,0.576762,0.509669,0.517242,0.454270,0.514387,0.521088,0.520339,0.505246,0.514352,0.513505,0.582327,0.523481,0.550536,0.475461,0.537063,0.562794,0.338437,0.527111,0.525140,0.455714,0.721891,0.573338,0.510436,0.514411,0.528809,0.672819,0.487443,0.501787,0.514677,0.513366,0.669207,0.501562,0.503148,0.504287,0.564029,0.525581,0.535167,0.465830,0.673931,0.306794,0.793477,0.446337,0.412486,0.559966,0.484146,0.452297,0.504724,0.535660,0.418232,0.527367,0.553406,0.495016,0.347592,0.497495,0.638359,0.507817,0.612751,0.609405,0.572666,0.679411,0.473487,0.539292,0.518548,0.480177,0.514427,0.462444,0.514424,0.458550,0.511254,0.580262,0.687850,0.459958,0.408568,0.493030,0.480997,0.499982,0.550132,0.638135,0.512430,0.509323,0.504140,0.597357,0.383299,0.555852,0.467846,0.505249,0.562559,0.545447,0.399916,0.494467,0.446467,0.448636,0.648804,0.462473,0.496257,0.498452,0.465897,0.502239,0.532778,0.517166,0.518890,0.445119,0.486242,0.657767,0.556782,0.547792,0.531182,0.497636,0.574984,0.539502,0.439076,0.507429,0.518481,0.508662,0.550659,0.426091,0.502600,0.550036,0.527401,0.516473,0.583544,0.513640,0.465553,0.526407,0.632940,0.506603,0.402068,0.458738,0.553597,0.420400,0.494753,0.630871,0.468560,0.771482,0.650324,0.528824,0.453187,0.426848,0.505114,0.571293,0.483856,0.535617,0.678066,0.569204,0.494899,0.654781,0.494148,0.580345,0.552620,0.628598,0.527510,0.508970,0.602617,0.522581,0.516649,0.561743,0.504965,0.447157,0.582053,0.458216,0.510210,0.400072,0.473384,0.512811,0.514405,0.530865,0.497249,0.515241,0.589705,0.516707,0.501257,0.574396,0.495150,0.541481,0.502241,0.511499,0.505848,0.454796,0.514400,0.505751,0.517378,0.519439,0.497782,
  0.473330,0.488415,0.487152,0.572702,0.449115,0.741905,0.529813,0.461960,0.487962,0.469995,0.466997,0.582703,0.468190,0.474584,0.455306,0.493869,0.475519,0.541728,0.470461,0.505439,0.493467,0.501881,0.405540,0.472209,0.500482,0.409874,0.421936,0.483014,0.510896,0.494430,0.509072,0.482411,0.468148,0.453401,0.481733,0.445361,0.492306,0.467964,0.492066,0.465194,0.489003,0.492780,0.459885,0.454916,0.431547,0.553115,0.590950,0.472117,0.597636,0.471298,0.482365,0.471349,0.514989,0.468401,0.471469,0.509368,0.497089,0.507020,0.456188,0.468025,0.479426,0.488940,0.422101,0.471461,0.600024,0.475768,0.483440,0.482670,0.512679,0.476344,0.484899,0.443349,0.504824,0.491758,0.507087,0.457366,0.422506,0.517247,0.531855,0.471466,0.454404,0.459782,0.481777,0.500817,0.438757,0.493133,0.445571,0.498817,0.470903,0.469728,0.464506,0.504763,0.462001,0.483224,0.417416,0.482097,0.493312,0.450714,0.506455,0.442675,0.477338,0.441551,0.472295,0.476427,0.456853,0.540513,0.449223,0.453115,0.470217,0.475034,0.441567,0.445903,0.472546,0.483613,0.538149,0.468506,0.436462,0.491956,0.564691,0.469362,0.520291,0.439940,0.468306,0.528401,0.438813,0.473958,0.525604,0.507366,0.436022,0.263719,0.467665,0.470058,0.460475,0.260610,0.464595,0.460195,0.471009,0.460412,0.497193,0.307098,0.603298,0.430008,0.504506,0.508599,0.474920,0.548348,0.487158,0.481017,0.502761,0.343409,0.588634,0.455054,0.485209,0.592799,0.499545,0.473473,0.599547,0.421159,0.448032,0.454663,0.480008,0.530992,0.577599,0.438158,0.575743,0.464818,0.470577,0.499815,0.454062,0.574941,0.511057,0.541269,0.473865,0.501450,0.411619,0.451099,0.468510,0.480600,0.480089,0.506072,0.484618,0.418778,0.481126,0.462707,0.503200,0.445613,0.484386,0.759487,0.477537,0.473482,0.496044,0.477540,0.456405,0.658107,0.442332,0.470402,0.456922,0.344195,0.489353,0.470571,0.424710,0.428190,0.491516,0.472197,0.429723,0.499905,0.465220,0.482313,0.530506,0.521890,0.485662,0.397186,0.560774,0.574905,0.518627,0.523784,0.471304,0.460079,0.502793,0.611583,0.480280,0.505891,0.478132,0.554168,0.507047,0.489827,0.470500,0.476308,0.482651,0.435773,0.471394,0.475699,0.473168,0.458982,0.369703,0.477711,0.471591,0.583450,0.459292,0.678180,0.481999,0.584533,0.463172,0.593552,0.476288,0.440219,0.481407,0.456817,0.470645,0.516859,0.467855,0.489612,0.484398,0.378604,0.728540,0.392958,0.492604,0.487890,0.509868,0.461819,0.367895,0.486840,0.444728,0.493499,0.480391,0.513845,0.453075,0.495032,0.496806,0.349565,0.475533,0.541366,0.488488,0.482009,0.465143,0.478843,0.463808,0.476112,0.485683,0.607968,0.430038,0.541186,0.470889,0.488934,0.472640,0.487162,0.567907,0.495769,0.374372,0.444477,0.473316,0.499294,0.488380,0.448648,0.507246,0.474539,0.516955,0.498761,0.452902,0.536048,0.472979,0.508386,0.422364,0.482271,0.328827,0.438728,0.413596,0.510348,0.548086,0.523866,0.454161,0.486930,0.511959,0.465045,0.478401,0.468557,0.496848,0.413484,0.396940,0.506438,0.483754,0.415947,0.417848,0.440390,0.558761,0.477165,0.503964,0.468565,0.400576,0.455700,0.463239,0.449773,0.488455,0.491408,0.460095,0.463986,0.621764,0.489452,0.349184,0.479681,0.469005,0.584789,0.547140,0.465732,0.507313,0.480056,0.462838,0.581538,0.260004,0.544296,0.534117,0.507343,0.386152,0.365128,0.445646,0.478578,0.405000,0.488702,0.481266,0.476985,0.493401,0.479400,0.275868,0.529649,0.483877,0.440182,0.449351,0.472851,0.429686,0.274415,0.451919,0.510143,0.448988,1.000000,0.461794,0.467584,0.469761,0.500645,0.485556,0.418954,0.510758,0.482391,0.468709,0.475838,0.481659,0.488777,0.482755,0.443221,0.474319,0.490049,0.593084,0.642988,0.482362,0.424781,0.569953,0.448392,0.597425,0.616668,0.576927,0.000000,0.473817,0.494964,0.493962,0.502609,0.503433,0.485622,0.448862,0.464593,0.558344,0.565434,0.485489,0.440911,0.469668,0.586922,0.476509,0.505550,0.482909,0.472725,0.482108,0.568978,0.467616,0.481851,0.458156,0.461372,0.572161,0.490108,0.494777,0.481154,0.603818,0.611168,0.503756,0.490861,0.383075,0.448884,0.416611,0.476646,0.479200,0.442460,0.609676,0.498072,0.565797,0.475517,0.507160,0.481704,0.512294,0.466337,0.446559,0.434287,0.496302,0.481899,0.488665,0.469576,0.499783,0.405652,0.468643,0.454434,0.470841,0.479464,0.462699,0.434373,0.457603,0.514937,0.488088,0.595979,0.471926,0.388235,0.457494,0.606940,0.413235,0.579097,0.467873,0.440048,0.476400,0.606239,0.492311,0.571649,0.479023,0.586664,0.414689,0.461783,0.494273,0.508099,0.473091,0.495510,0.440288,0.458698,0.473051,0.379363,0.477027,0.503173,0.443426,0.548451,0.482311,0.534514,0.474435,0.491687,0.437103,0.161273,0.514856,0.495866,0.521457,0.563166,0.428031,0.482116,0.372852,0.458439,0.442836,0.494133,0.456125,0.480344,0.481322,0.506721,0.459178,0.522671,0.497036,0.442903,0.571167,0.489364,0.476662,0.428404,0.589738,0.395215,0.483944,0.470597,0.482106,0.450978,0.370949,0.496134,0.470108,0.457505,0.456180,0.514242,0.481050,0.431050,0.500034,0.427755,0.436700,0.469320,0.486514,0.469245,0.476146,0.557609,0.405729,0.518911,0.484137,0.431414,0.603374,0.480891,0.453950,0.504334,0.478168,0.624560,0.482389,0.467912,0.458510,0.480236,0.474054,0.469168,0.564748,0.466998,0.457989,0.466979,0.617728,0.441275,0.445978,0.558732,0.491484,0.474818,0.454903,0.452816,0.400490,0.490599,0.490544,0.488843,0.476868,0.421583,0.471062,0.486913,0.400847,0.468744,0.584840,0.467818,0.460920,0.425783,0.505939,0.484014,0.443702,0.464504,0.547281,0.575883,0.491977,0.718590,0.456793,0.456234,0.489467,0.470004,0.573751,0.463660,0.486035,0.465587,0.439527,0.477612,0.496340,0.537201,0.464959,0.471506,0.480496,0.483723,0.505017,0.494058,0.395210,0.390419,0.489328,0.461674,0.464111,0.465007,0.471320,0.421243,0.604219,0.454550,0.540482,0.431804,0.448386,0.437130,0.478201,0.490206,0.488426,0.474569,0.497717,0.499222,0.480585,0.503136,0.458725,0.498418,0.492106,0.583745,0.514719,0.472078,0.462756,0.482019,0.591528,0.499131,0.460365,0.389477,0.504412,0.406265,0.500819,0.445754,0.422455,0.502834,0.463780,0.459268,0.470627,0.460109,0.651897,0.469198,0.435305,0.440807,0.588995,0.562802,0.456398,0.466645,0.448166,0.472933,0.466882,0.399935,0.487467,0.470975,0.490483,0.470990,0.479389,0.478502,0.472712,0.583405,0.454049,0.505746,0.522314,0.472406,0.468603,0.445046,0.400380,0.573475,0.461138,0.476707,0.468589,0.493941,0.473749,0.448293,0.465853,0.549520,0.500090,0.372614,0.452832,0.517867,0.566023,0.487973,0.597504,0.470813,0.530150,0.465432,0.491128,0.485803,0.437417,0.471390,0.449054,0.479290,0.465048,0.491250,0.468422,0.457857,0.476098,0.624488,0.476458,0.462667,0.481663,0.518913,0.473857,0.486064,0.591290,0.479896,0.453926,0.455452,0.562276,0.466195,0.501594,0.506840,0.510957,0.550602,0.483627,0.429624,0.484507,0.520635,0.482672,0.486166,0.462053,0.492613,0.481504,0.425259,0.467990,0.541469,0.471924,0.460934,0.526532,0.476618,0.530150,0.397166,0.499919,0.493912,0.594908,0.457543,0.380502,0.450224,0.481487,0.506342,0.456513,0.411781,0.485412,0.463927,0.422522,0.475936,0.585859,0.476289,0.484289,0.505460,0.480102,0.462209,0.477953,0.494644,0.446563,0.461895,0.455495,0.624641,0.452511,0.440715,0.495008,0.485912,0.451232,0.466847,0.391714,0.519726,0.446654,0.584501,0.448876,0.440886,0.474257,0.493156,0.531991,0.636553,0.472235,0.537230,0.450088,0.502632,0.462699,0.480220,0.447728,0.474985,0.521201,0.481360,0.524239,0.467111,0.549134,0.464058,0.476501,0.459942,0.383171,0.429423,0.457139,0.475884,0.352042,0.580183,0.486641,0.470930,0.487352,0.471581,0.362427,0.477175,0.341706,0.432819,0.567176,0.474985,0.477663,0.493970,0.511649,0.453460,0.607059,0.484514,0.467564,0.481232,0.622076,0.495473,0.459692,0.556787,0.499532,0.611157,0.478483,0.474449,0.488444,0.369849,0.483953,0.492609,0.425513,0.408846,0.573024,0.554018,0.515784,0.465569,0.503093,0.567123,0.470592,0.522188,0.474875,0.457631,0.481207,0.453929,0.520461,0.484368,0.449238,0.455556,0.427075,0.484841,0.469191,0.411554,0.426428,0.466586,0.434279,0.600558,0.453350,0.495035,0.530742,0.453681,0.489488,0.485728,0.567216,0.582576,0.507183,0.495999,0.393777,0.423407,0.463682,0.382345,0.349346,0.422826,0.645521,0.458947,0.417853,0.384229,0.492654,0.420161,0.507684,0.508871,0.237587,0.420274,0.591675,0.486433,0.458344,0.530763,0.514711,0.594024,0.525629,0.466230,0.481908,0.485120,0.490886,0.416515,0.484085,0.487644,0.455449,0.496130,0.430116,0.457112,0.466368,0.457290,0.486762,0.496175,0.558674,0.488240,0.493062,0.476187,0.161273,0.476677,0.424739,0.440984,0.437140,0.449659,0.447240,0.475460,0.485141,0.496814,0.487186,0.356898,0.459193,0.499151,0.529839,0.507987,0.521344,0.509457,0.415694,0.454585,0.472773,0.462042,0.501925,0.467011,0.478709,0.475841,0.534514,0.514274,0.371086,0.478220,0.449397,0.473024,0.440148,0.381231,0.509368,0.507796,0.428324,0.504660,0.458888,0.484528,0.458071,0.608345,0.747928,0.505467,0.470588,0.475893,0.572356,0.578981,0.478256,0.466789,0.549038,0.500775,0.429706,0.479717,0.521025,0.518180,0.603906,0.462467,0.424661,0.664638,0.531298,0.509606,0.471908,0.460712,0.464342,0.623490,0.494762,0.520231,0.433800,0.463303,0.479410,0.475595,0.477775,0.526262,0.475506,0.260610,0.486022,0.445076,0.399241,0.474214,0.487209,0.488302,0.477204,0.416069,0.458392,0.222730,0.470597,0.541752,0.480874,0.456048,0.440582,0.403256,0.482856,0.494797,0.542980,0.501867,0.388598,0.472174,0.504027,0.496925,0.446184,0.450185,0.590219,0.423412,0.405385,0.476488,0.491418,0.463283,0.586907,0.477046,0.434871,0.482364,0.474481,0.487595,0.525704,0.471950,0.550608,0.560995,0.460624,0.469582,0.465788,0.474929,0.480073,0.539505,0.436779,0.496904,0.495537,0.480412,0.465941,0.476168,0.477883,0.492375,0.478464,0.564537,0.470438,0.370586,0.520767,0.300084,0.531717,0.484394,0.433282,0.403060,0.609232,0.483022,0.494229,0.487951,0.617076,0.480828,0.504763,0.474530,0.462053,0.532800,0.470281,0.475119,0.472143,0.461304,0.471395,0.485290,0.479701,0.657964,0.425766,0.430802,0.408612,0.403641,0.509461,0.468519,0.429948,0.522550,0.484343,0.383016,0.556803,0.444485,0.559358,0.332326,0.471322,0.603776,0.488858,0.589357,0.550767,0.476109,0.574839,0.583871,0.514006,0.482766,0.435727,0.530191,0.494464,0.455294,0.420723,0.484695,0.469736,0.644644,0.406911,0.399383,0.461213,0.452089,0.505676,0.511983,0.591469,0.473851,0.473253,0.470688,0.544674,0.383844,0.593932,0.457200,0.474928,0.464030,0.513063,0.373393,0.457378,0.418453,0.425761,0.582810,0.456486,0.435261,0.451221,0.435434,0.512318,0.510300,0.480319,0.463484,0.473578,0.462930,0.587206,0.519211,0.485391,0.543682,0.465210,0.501028,0.506554,0.409672,0.478595,0.458259,0.477731,0.466435,0.454950,0.480611,0.653051,0.485317,0.428269,0.560684,0.455556,0.452332,0.476960,0.580788,0.510456,0.422122,0.474603,0.502790,0.457548,0.466019,0.560614,0.444165,0.464097,0.591320,0.486592,0.396316,0.429725,0.495565,0.533798,0.453025,0.512798,0.668392,0.502346,0.463724,0.598377,0.480805,0.464504,0.455603,0.567907,0.481931,0.477279,0.575390,0.490127,0.484255,0.479785,0.463243,0.440771,0.539495,0.451837,0.470869,0.395690,0.446856,0.529799,0.476479,0.497203,0.453099,0.516168,0.592701,0.488201,0.475163,0.530155,0.486461,0.534962,0.516004,0.476399,0.472048,0.413612,0.478373,0.469251,0.481565,0.477192,0.481091,
  0.557875,0.564783,0.578740,0.576596,0.566746,0.942306,0.550488,0.549554,0.559947,0.504369,0.537815,0.596661,0.549992,0.576601,0.546350,0.574985,0.544526,0.552566,0.567095,0.627914,0.569140,0.623372,0.487058,0.538619,0.553235,0.515799,0.545562,0.569050,0.600332,0.540396,0.560478,0.555180,0.567475,0.632388,0.568236,0.535075,0.562661,0.558099,0.626643,0.548488,0.562042,0.585467,0.554966,0.537850,0.583767,0.486365,0.625468,0.556111,0.608446,0.575433,0.601108,0.543532,0.568578,0.551400,0.560382,0.585687,0.617377,0.606481,0.566340,0.575364,0.550478,0.575640,0.525980,0.560507,0.599391,0.544541,0.559475,0.553501,0.577119,0.546516,0.557074,0.563669,0.599433,0.615990,0.582442,0.545300,0.538699,0.600092,0.593266,0.560866,0.559572,0.550942,0.588120,0.599193,0.584625,0.575024,0.544971,0.583175,0.548401,0.552901,0.550959,0.693080,0.554982,0.569852,0.489324,0.570699,0.581904,0.544926,0.586888,0.469891,0.586441,0.445253,0.578239,0.568809,0.547188,0.556713,0.516787,0.545829,0.552465,0.675164,0.545444,0.567560,0.536874,0.566156,0.654803,0.545793,0.534556,0.612396,0.629444,0.555939,0.596531,0.582355,0.572786,0.581225,0.583887,0.629095,0.596628,0.497708,0.563457,0.356107,0.557287,0.527178,0.557235,0.463252,0.558783,0.556515,0.553855,0.554802,0.604975,0.421957,0.626703,0.552796,0.606219,0.599461,0.564152,0.593841,0.626527,0.569815,0.571022,0.399789,0.617849,0.614705,0.568842,0.615738,0.565212,0.610005,0.615314,0.544829,0.530511,0.575954,0.549270,0.617189,0.585712,0.524888,0.599287,0.545200,0.559196,0.573993,0.551467,0.592829,0.590328,0.586250,0.578981,0.575174,0.543736,0.554139,0.561209,0.580834,0.566510,0.607190,0.606248,0.538812,0.542845,0.538985,0.590891,0.537316,0.559577,0.818141,0.571050,0.556200,0.573536,0.581465,0.499209,0.680325,0.536572,0.558014,0.527296,0.488548,0.712837,0.554000,0.517029,0.482469,0.593211,0.552237,0.534696,0.698364,0.546728,0.572408,0.556072,0.574082,0.593990,0.492633,0.535001,0.611141,0.598762,0.586503,0.557821,0.573651,0.605935,0.596444,0.589569,0.576278,0.552639,0.605337,0.533875,0.608034,0.582614,0.557170,0.573532,0.504800,0.559000,0.558536,0.559287,0.526736,0.461090,0.573137,0.551893,0.607225,0.547410,0.660069,0.566575,0.587162,0.539145,0.611980,0.560694,0.553070,0.575289,0.556678,0.559315,0.562375,0.569511,0.655374,0.568731,0.448670,0.736062,0.487810,0.571572,0.549347,0.574757,0.554888,0.481592,0.576590,0.491169,0.569054,0.567174,0.519585,0.523027,0.573248,0.584415,0.372976,0.563256,0.597522,0.544392,0.559510,0.553241,0.569126,0.551520,0.577383,0.560801,0.613841,0.524134,0.675377,0.557541,0.608728,0.564997,0.607139,0.575682,0.596166,0.507965,0.542186,0.624454,0.571916,0.599502,0.532510,0.594090,0.568128,0.533942,0.561794,0.542556,0.607390,0.599919,0.541765,0.501841,0.575292,0.430602,0.529800,0.596717,0.560110,0.610467,0.590644,0.529186,0.553927,0.592473,0.561283,0.574908,0.557345,0.570192,0.558750,0.473225,0.540037,0.575236,0.610727,0.558160,0.533486,0.502444,0.545770,0.606404,0.537449,0.519512,0.587268,0.536413,0.538027,0.600168,0.574227,0.552172,0.545353,0.610276,0.563988,0.463424,0.566596,0.587387,0.597530,0.562797,0.556629,0.569503,0.566952,0.537572,0.605403,0.472225,0.595880,0.614827,0.589467,0.496896,0.527820,0.536176,0.564868,0.557670,0.637931,0.569608,0.557460,0.584485,0.601125,0.496855,0.547433,0.598109,0.531948,0.544240,0.555240,0.534444,0.409283,0.566931,0.570659,0.540117,0.892464,0.550274,0.568962,0.557109,0.593269,0.582642,0.537453,0.572193,0.564280,0.566941,0.607599,0.576071,0.567148,0.548063,0.539143,0.570647,0.613063,0.603570,0.702146,0.589363,0.555003,0.588219,0.538668,0.615660,0.648806,0.601477,0.000000,0.558720,0.578824,0.551573,0.580724,0.596247,0.544135,0.533508,0.604585,0.630587,0.600796,0.606986,0.602202,0.502421,0.593269,0.572656,0.599856,0.584534,0.566515,0.606631,0.592893,0.541445,0.561450,0.563073,0.581520,0.628478,0.581902,0.586165,0.602398,0.673411,0.743854,0.599377,0.575929,0.501910,0.551439,0.478983,0.578467,0.559574,0.527667,0.854218,0.597895,0.609706,0.574202,0.608530,0.565095,0.562588,0.558847,0.609690,0.506146,0.553736,0.599042,0.570443,0.575774,0.607285,0.491214,0.559383,0.526993,0.584419,0.584243,0.621121,0.594939,0.544675,0.599745,0.590979,0.597570,0.546812,0.477952,0.544771,0.623072,0.535778,0.634341,0.541955,0.528410,0.547297,0.637436,0.556635,0.579916,0.598851,0.612636,0.525627,0.558965,0.560839,0.580499,0.570836,0.581039,0.536342,0.550619,0.558875,0.546827,0.564675,0.578211,0.567526,0.594009,0.552970,0.526984,0.560873,0.547145,0.531748,0.302423,0.566747,0.578872,0.573474,0.612170,0.520684,0.568242,0.485902,0.550996,0.540480,0.567567,0.581231,0.571686,0.539229,0.593158,0.523262,0.691321,0.572367,0.525693,0.517086,0.561346,0.670028,0.526351,0.587324,0.529973,0.578259,0.579000,0.598473,0.548507,0.430557,0.569580,0.559899,0.543464,0.539992,0.573544,0.560870,0.535486,0.564736,0.495959,0.536890,0.558093,0.572904,0.558682,0.567944,0.565156,0.509013,0.591168,0.575071,0.535412,0.483232,0.557876,0.503342,0.608839,0.565001,0.733031,0.566418,0.556137,0.590157,0.560733,0.569439,0.555072,0.631339,0.568399,0.553317,0.528578,0.632005,0.560843,0.532740,0.574745,0.580677,0.557088,0.515036,0.547628,0.498959,0.575333,0.562446,0.585071,0.568905,0.488690,0.568176,0.572070,0.494753,0.561799,0.777709,0.564367,0.546674,0.526229,0.612068,0.559291,0.542301,0.550186,0.567080,0.630353,0.580134,0.769308,0.556886,0.554819,0.577593,0.554011,0.609848,0.573509,0.574513,0.555900,0.533698,0.554449,0.578737,0.638108,0.561028,0.563048,0.549207,0.563298,0.560336,0.528198,0.482291,0.534655,0.560120,0.543598,0.557034,0.552029,0.550195,0.447726,0.612231,0.606580,0.557417,0.539483,0.629105,0.529117,0.587409,0.579189,0.551817,0.561359,0.563960,0.579192,0.594991,0.594296,0.541809,0.577565,0.606537,0.584282,0.599594,0.538678,0.540166,0.580126,0.602484,0.576350,0.554315,0.456177,0.614126,0.537408,0.616915,0.550240,0.499260,0.593464,0.576641,0.545561,0.581733,0.542150,0.529159,0.544521,0.523201,0.528751,0.611783,0.564796,0.532486,0.566265,0.550718,0.536887,0.553236,0.476296,0.576742,0.636541,0.602135,0.554312,0.537368,0.561308,0.557717,0.691550,0.545057,0.494935,0.623546,0.557167,0.576357,0.531271,0.510722,0.495666,0.585325,0.577221,0.502658,0.571307,0.557436,0.583277,0.578645,0.579911,0.561457,0.528227,0.544284,0.571662,0.683945,0.563975,0.601953,0.559311,0.585590,0.555642,0.601570,0.578177,0.555003,0.543570,0.559625,0.554885,0.562629,0.590605,0.549574,0.552937,0.526990,0.633363,0.592446,0.570226,0.575940,0.612301,0.565054,0.552026,0.596089,0.561313,0.648680,0.564998,0.568552,0.555914,0.603617,0.599768,0.548270,0.604128,0.604635,0.559702,0.561468,0.614713,0.566268,0.569566,0.564924,0.551646,0.615860,0.468221,0.592329,0.598853,0.483986,0.580634,0.576014,0.556943,0.585590,0.510309,0.637056,0.579232,0.621725,0.568316,0.465357,0.566678,0.527634,0.542272,0.535957,0.520326,0.596148,0.510005,0.502553,0.557086,0.602137,0.538148,0.567470,0.572415,0.570650,0.551385,0.565452,0.471687,0.551689,0.546741,0.543982,0.692375,0.523381,0.522891,0.662220,0.521463,0.540887,0.544005,0.511705,0.623326,0.569118,0.599015,0.539390,0.531028,0.584279,0.580316,0.575404,0.721494,0.601529,0.582929,0.537511,0.600233,0.621121,0.532099,0.566860,0.554117,0.600212,0.563948,0.572998,0.566991,0.557634,0.557592,0.560983,0.569316,0.460276,0.565667,0.539428,0.560223,0.459690,0.629935,0.572418,0.551542,0.562541,0.628032,0.489151,0.559710,0.429621,0.521545,0.581826,0.572883,0.578971,0.572849,0.602620,0.545751,0.651119,0.564245,0.557315,0.568789,0.679610,0.611172,0.556718,0.588160,0.586130,0.617497,0.563886,0.565848,0.602334,0.484064,0.559874,0.570752,0.556410,0.493190,0.580058,0.589391,0.600449,0.606599,0.557099,0.697775,0.561249,0.560334,0.564104,0.535766,0.567520,0.493268,0.632168,0.534158,0.542074,0.542668,0.537810,0.458378,0.567496,0.490666,0.464441,0.560713,0.549338,0.621266,0.555905,0.620271,0.559566,0.541826,0.565774,0.574596,0.643069,0.595463,0.594828,0.541004,0.453809,0.522013,0.547494,0.526434,0.480934,0.515147,0.674401,0.556196,0.560822,0.488399,0.574739,0.564817,0.551916,0.553618,0.316285,0.529059,0.633941,0.557702,0.541059,0.587655,0.605493,0.571329,0.563610,0.543131,0.575244,0.575212,0.557113,0.505744,0.566306,0.607191,0.539347,0.583146,0.534012,0.537942,0.554128,0.578416,0.557021,0.587602,0.635832,0.558491,0.613787,0.567159,0.302423,0.561377,0.476329,0.559025,0.600450,0.572883,0.538139,0.566964,0.605899,0.583507,0.653718,0.396106,0.547253,0.582431,0.305370,0.568774,0.584184,0.566393,0.475890,0.541091,0.559329,0.555863,0.583468,0.539905,0.563010,0.560425,0.526984,0.600937,0.682699,0.565436,0.556811,0.556763,0.532545,0.460877,0.585687,0.588578,0.530712,0.540212,0.591443,0.572023,0.551340,0.555372,0.454068,0.560918,0.588415,0.569526,0.608310,0.577159,0.565467,0.561393,0.614402,0.479481,0.543770,0.561432,0.582476,0.586817,0.696702,0.586984,0.510243,0.695026,0.617982,0.543583,0.615027,0.549352,0.517956,0.661445,0.591746,0.585284,0.476959,0.672550,0.534260,0.553000,0.566144,0.552409,0.565910,0.463252,0.566833,0.565647,0.533236,0.535786,0.561702,0.538951,0.603380,0.519253,0.612322,0.363311,0.579000,0.560428,0.564399,0.533934,0.528006,0.552385,0.556706,0.539509,0.609367,0.608812,0.426732,0.574635,0.583348,0.575608,0.533875,0.538284,0.603623,0.567365,0.430626,0.557045,0.582566,0.548507,0.613993,0.566690,0.543768,0.563711,0.525872,0.570204,0.607303,0.564219,0.596994,0.577281,0.541493,0.549315,0.560599,0.577830,0.563588,0.562539,0.558296,0.520581,0.610018,0.565866,0.565101,0.572305,0.567080,0.547658,0.560055,0.567310,0.568799,0.460983,0.612101,0.425723,0.817090,0.563123,0.553840,0.500973,0.637993,0.567719,0.583354,0.565768,0.701585,0.556571,0.475676,0.560390,0.564924,0.507075,0.559064,0.557611,0.556802,0.505759,0.578016,0.569824,0.568460,0.676909,0.494983,0.482867,0.499310,0.539996,0.583139,0.579585,0.514581,0.640440,0.560725,0.503459,0.649075,0.557289,0.721125,0.469315,0.561132,0.615440,0.576856,0.616127,0.615179,0.548973,0.599548,0.604275,0.608279,0.573767,0.506298,0.626276,0.608408,0.545031,0.470815,0.595707,0.540170,0.696177,0.482779,0.510451,0.554083,0.565659,0.630597,0.572917,0.609320,0.547902,0.565242,0.554168,0.625935,0.491775,0.629504,0.578929,0.568492,0.542602,0.621593,0.472162,0.557137,0.530626,0.560640,0.612266,0.566906,0.516473,0.535630,0.534067,0.629883,0.607335,0.534208,0.577144,0.685567,0.563780,0.586633,0.605535,0.559486,0.623558,0.552346,0.560056,0.593028,0.492361,0.567412,0.568443,0.565283,0.536748,0.569057,0.562126,0.558018,0.566428,0.501541,0.557162,0.542668,0.575514,0.559698,0.597761,0.634542,0.549547,0.613808,0.567074,0.575778,0.554509,0.569265,0.532510,0.567933,0.593560,0.573216,0.476313,0.564138,0.573589,0.572640,0.542824,0.610018,0.677949,0.592067,0.551993,0.598588,0.582135,0.517992,0.534753,0.575682,0.565172,0.569753,0.611168,0.578831,0.570601,0.546788,0.542108,0.561170,0.635829,0.581200,0.558691,0.536120,0.550962,0.628985,0.559996,0.577230,0.531726,0.604699,0.610072,0.563958,0.559917,0.591124,0.568720,0.625524,0.596107,0.559994,0.553827,0.516898,0.575152,0.560221,0.579858,0.551417,0.568961,
  0.566145,0.544820,0.548234,0.541951,0.549888,0.998658,0.517018,0.531209,0.530559,0.441176,0.511911,0.522609,0.533499,0.585473,0.516694,0.563128,0.516411,0.503621,0.548670,0.607524,0.550538,0.586588,0.492149,0.511740,0.553702,0.541610,0.551131,0.539775,0.579177,0.503851,0.529530,0.539922,0.541785,0.655570,0.548753,0.528289,0.529473,0.547702,0.592436,0.538581,0.531578,0.568232,0.548197,0.501871,0.578853,0.468799,0.522730,0.542463,0.510465,0.551283,0.583044,0.538544,0.524628,0.555756,0.542535,0.535705,0.605285,0.545098,0.528211,0.563835,0.551412,0.549324,0.524571,0.565494,0.528719,0.514962,0.541370,0.530116,0.502027,0.525071,0.544209,0.543098,0.541863,0.567905,0.571375,0.560312,0.565729,0.550773,0.563593,0.545838,0.552990,0.531535,0.542766,0.545863,0.596492,0.535493,0.533028,0.560153,0.550483,0.552948,0.524663,0.730316,0.534744,0.565882,0.447050,0.534705,0.550490,0.514165,0.537268,0.466348,0.558821,0.368078,0.591036,0.551063,0.528383,0.509571,0.540738,0.521267,0.565398,0.663701,0.530092,0.559637,0.547477,0.542721,0.558493,0.510809,0.511365,0.586077,0.604259,0.540882,0.532734,0.563376,0.564754,0.523915,0.581517,0.711323,0.608585,0.478287,0.600211,0.467311,0.544919,0.512796,0.547614,0.481264,0.544101,0.541849,0.556671,0.543555,0.531315,0.410611,0.538073,0.570079,0.590101,0.531469,0.567178,0.560145,0.562223,0.561337,0.511980,0.368232,0.524209,0.625515,0.584762,0.532024,0.528512,0.591035,0.544305,0.573699,0.520904,0.543791,0.523536,0.568970,0.504680,0.500727,0.536804,0.552228,0.567844,0.555341,0.536713,0.511947,0.580818,0.559921,0.582004,0.562624,0.567548,0.512992,0.561492,0.577829,0.547105,0.589633,0.563100,0.551278,0.533009,0.499640,0.561118,0.519415,0.531357,0.803745,0.566006,0.524738,0.537795,0.547236,0.486085,0.629004,0.516198,0.546844,0.711450,0.615134,0.753818,0.543984,0.517709,0.506426,0.588515,0.515613,0.572055,0.751528,0.536738,0.547655,0.523172,0.528988,0.560194,0.506167,0.495110,0.578711,0.545399,0.528721,0.533162,0.573373,0.547356,0.521574,0.554241,0.558395,0.555593,0.564545,0.447222,0.537103,0.578868,0.561122,0.544749,0.484532,0.547472,0.567617,0.512641,0.480998,0.475651,0.589063,0.550424,0.513538,0.518293,0.551992,0.544044,0.529302,0.515522,0.516594,0.521683,0.618634,0.564726,0.547005,0.577491,0.534571,0.458801,0.791308,0.562610,0.450759,0.608766,0.485958,0.539684,0.517494,0.526946,0.554503,0.468064,0.553868,0.532343,0.539942,0.577477,0.541722,0.511683,0.561674,0.572423,0.416313,0.538009,0.551110,0.518763,0.541503,0.544875,0.553200,0.546034,0.549290,0.542518,0.536959,0.514320,0.639590,0.475085,0.561070,0.545764,0.509663,0.552166,0.603638,0.541863,0.519146,0.640120,0.548815,0.540863,0.522784,0.589839,0.546674,0.505358,0.530579,0.512803,0.529171,0.593832,0.505139,0.485440,0.544294,0.588776,0.511210,0.628746,0.530049,0.545035,0.529580,0.517043,0.530029,0.528770,0.554274,0.551797,0.537635,0.512557,0.540929,0.504162,0.500736,0.542477,0.652483,0.561986,0.516437,0.444044,0.520846,0.562779,0.505897,0.568417,0.561808,0.508767,0.527801,0.581597,0.539484,0.544325,0.528155,0.532645,0.531794,0.521301,0.575920,0.556021,0.525961,0.514202,0.555025,0.531817,0.573847,0.514018,0.511145,0.467223,0.574237,0.567091,0.551394,0.551297,0.543441,0.525099,0.536022,0.557832,0.589534,0.586074,0.554492,0.506598,0.654864,0.573221,0.510350,0.576784,0.537386,0.531355,0.556434,0.521954,0.526302,0.567946,0.523302,0.522489,0.045350,0.547863,0.532698,0.543639,0.585152,0.592371,0.539436,0.536418,0.550081,0.572959,0.562103,0.600662,0.565277,0.521412,0.549009,0.553054,0.562731,0.515286,0.678502,0.579121,0.592683,0.528514,0.518347,0.528619,0.542936,0.524764,0.209840,0.553871,0.555109,0.517969,0.542819,0.555350,0.537047,0.528283,0.547699,0.576916,0.537942,0.562986,0.608469,0.395965,0.505862,0.569603,0.537257,0.555121,0.573733,0.611803,0.525342,0.566105,0.556666,0.553043,0.621439,0.586908,0.600226,0.544521,0.581249,0.656589,0.606313,0.563325,0.562009,0.519152,0.536439,0.467397,0.551055,0.545690,0.529085,0.729824,0.542147,0.571532,0.544024,0.544968,0.529009,0.534816,0.536407,0.692932,0.483087,0.526755,0.572025,0.536095,0.564507,0.573876,0.490246,0.537586,0.500823,0.546318,0.564047,0.625351,0.586985,0.529857,0.545008,0.552067,0.528466,0.521117,0.456004,0.520818,0.531235,0.523611,0.592308,0.546608,0.527808,0.530897,0.547506,0.519033,0.543944,0.579225,0.509305,0.591033,0.543969,0.493053,0.539055,0.538948,0.570132,0.511800,0.533773,0.545639,0.596557,0.540785,0.541153,0.541714,0.567145,0.539318,0.483519,0.545504,0.517689,0.562280,0.512023,0.566011,0.562256,0.523914,0.586981,0.537253,0.573016,0.520435,0.547726,0.524471,0.551271,0.589294,0.536421,0.498112,0.533412,0.553174,0.720907,0.536738,0.496365,0.432502,0.546000,0.722322,0.511105,0.509448,0.548930,0.553239,0.568841,0.566443,0.556099,0.576831,0.552130,0.544572,0.528817,0.519282,0.549158,0.528806,0.583358,0.530396,0.500495,0.541497,0.547679,0.596964,0.533799,0.560547,0.500203,0.522851,0.565224,0.581679,0.555213,0.517101,0.511191,0.474205,0.584155,0.541023,0.697917,0.553864,0.542484,0.605729,0.521464,0.568633,0.569591,0.543096,0.549532,0.544122,0.514002,0.543852,0.551378,0.508630,0.518037,0.549816,0.538754,0.467875,0.555280,0.490394,0.555956,0.527572,0.599589,0.557271,0.489605,0.543083,0.503754,0.506761,0.550186,0.841313,0.571654,0.548653,0.505232,0.610959,0.544137,0.585240,0.533747,0.497587,0.587548,0.562192,0.652310,0.536269,0.552176,0.559281,0.567366,0.535853,0.500823,0.535236,0.539694,0.509638,0.543718,0.551548,0.606829,0.538254,0.557525,0.511817,0.533451,0.528705,0.503582,0.502867,0.553041,0.515882,0.547223,0.529830,0.543654,0.539558,0.467267,0.522880,0.649662,0.519475,0.640142,0.816880,0.508479,0.534881,0.559913,0.529357,0.546838,0.522357,0.534550,0.581103,0.528332,0.535983,0.547966,0.553215,0.526455,0.535293,0.520889,0.527505,0.565436,0.569734,0.572921,0.523420,0.507963,0.600543,0.537704,0.558810,0.557072,0.513632,0.580120,0.578693,0.539528,0.554861,0.525151,0.491762,0.512160,0.526544,0.519213,0.526714,0.507495,0.511082,0.490154,0.569926,0.522904,0.539429,0.475365,0.542004,0.652794,0.602443,0.563399,0.520307,0.537006,0.539690,0.595381,0.531252,0.495065,0.626054,0.533968,0.565057,0.532375,0.535434,0.472450,0.567917,0.559804,0.725620,0.540071,0.532126,0.579013,0.562350,0.549692,0.523787,0.584759,0.524466,0.543327,0.643789,0.548956,0.533742,0.539889,0.545342,0.545537,0.548316,0.562274,0.576819,0.520110,0.619350,0.539262,0.552133,0.565018,0.533479,0.534315,0.524553,0.529309,0.602217,0.574322,0.545086,0.593901,0.538753,0.527699,0.516378,0.555993,0.559990,0.534539,0.554639,0.536810,0.553839,0.556625,0.519816,0.521721,0.568062,0.558496,0.550878,0.590952,0.566247,0.561741,0.574126,0.511029,0.556352,0.429165,0.600910,0.540913,0.501314,0.596682,0.512972,0.542181,0.545342,0.552539,0.617487,0.584821,0.538551,0.568089,0.424117,0.551621,0.476850,0.534186,0.515871,0.570048,0.566947,0.541947,0.492999,0.539233,0.521532,0.511886,0.533148,0.532952,0.556565,0.539050,0.574688,0.518307,0.557008,0.529035,0.525934,0.540129,0.550705,0.497619,0.588590,0.478546,0.530425,0.525354,0.497227,0.559563,0.542181,0.514300,0.516220,0.531803,0.551625,0.537765,0.532672,0.700862,0.553370,0.501617,0.526124,0.560324,0.625351,0.508540,0.592112,0.566004,0.536302,0.546535,0.541466,0.542838,0.506441,0.555797,0.544449,0.560501,0.412637,0.540790,0.520274,0.561256,0.481159,0.476665,0.541175,0.535570,0.548850,0.660649,0.538240,0.547116,0.410189,0.545798,0.496444,0.570567,0.528117,0.554530,0.561487,0.517817,0.538282,0.553485,0.540058,0.547454,0.495305,0.566200,0.557260,0.528825,0.560501,0.527100,0.541442,0.584780,0.573737,0.472686,0.537632,0.545392,0.553422,0.500437,0.516950,0.568757,0.550113,0.544173,0.534548,0.682569,0.532784,0.521440,0.581433,0.498696,0.579453,0.556504,0.591853,0.493159,0.538802,0.526358,0.551200,0.441466,0.551272,0.494430,0.541259,0.556760,0.570932,0.527240,0.564182,0.590056,0.558427,0.524164,0.552149,0.543307,0.606203,0.505341,0.587046,0.600312,0.468388,0.523095,0.518873,0.527742,0.505358,0.584347,0.625460,0.549413,0.599692,0.527680,0.566145,0.650006,0.519036,0.550085,0.492835,0.544311,0.708637,0.529076,0.525842,0.532092,0.579205,0.546470,0.502496,0.521943,0.588704,0.564956,0.522355,0.512564,0.552656,0.552300,0.512892,0.553374,0.504417,0.525580,0.550478,0.546515,0.537213,0.552060,0.618182,0.515569,0.605478,0.560995,0.512023,0.534008,0.433610,0.566309,0.565926,0.584847,0.509127,0.548925,0.573376,0.552017,0.779355,0.600311,0.521313,0.558466,0.329642,0.561641,0.531597,0.557367,0.459422,0.512690,0.536347,0.534780,0.558471,0.514215,0.541550,0.554049,0.483519,0.588278,0.419174,0.571990,0.551940,0.541387,0.514580,0.517830,0.535705,0.568608,0.553175,0.511560,0.724925,0.540839,0.523881,0.465414,0.416484,0.485848,0.580487,0.551874,0.536338,0.469160,0.548876,0.547277,0.565669,0.488734,0.541895,0.546470,0.558275,0.544564,0.662045,0.534848,0.511280,0.711191,0.580248,0.494365,0.585757,0.518021,0.538911,0.577193,0.614265,0.559719,0.474445,0.664590,0.508898,0.530260,0.585131,0.504891,0.548634,0.481264,0.550218,0.553497,0.535816,0.517217,0.545433,0.507874,0.603176,0.542948,0.559149,0.463282,0.568841,0.503484,0.526852,0.512247,0.532985,0.598009,0.529257,0.513477,0.528884,0.586118,0.498245,0.562794,0.549424,0.557156,0.524683,0.511779,0.524734,0.554258,0.381612,0.557743,0.571558,0.530521,0.527251,0.550404,0.575453,0.537090,0.498364,0.544015,0.599695,0.544303,0.517086,0.504434,0.519242,0.518994,0.561758,0.506921,0.550199,0.486796,0.540790,0.526501,0.549745,0.553483,0.546191,0.583300,0.554794,0.515288,0.536656,0.495930,0.548212,0.452505,0.579592,0.502553,0.617311,0.542094,0.559957,0.544743,0.535520,0.550459,0.560102,0.543726,0.668625,0.514930,0.498797,0.539964,0.574126,0.461666,0.572864,0.546842,0.540264,0.498823,0.549685,0.545964,0.538987,0.581456,0.641716,0.468616,0.522212,0.541278,0.563151,0.568445,0.514142,0.592797,0.537781,0.536649,0.566555,0.554747,0.585640,0.507378,0.553842,0.525498,0.550622,0.537699,0.570595,0.524577,0.560147,0.518619,0.587054,0.585397,0.498761,0.540690,0.563763,0.519356,0.432913,0.590718,0.516573,0.611587,0.516051,0.537133,0.549350,0.575994,0.592581,0.531522,0.523553,0.529051,0.561931,0.538336,0.612822,0.470147,0.529023,0.569350,0.570562,0.519639,0.575589,0.463669,0.533351,0.538040,0.557544,0.560043,0.593106,0.463436,0.491138,0.552310,0.565208,0.595738,0.518128,0.533968,0.722949,0.563486,0.532932,0.569172,0.525851,0.533599,0.547266,0.538093,0.565368,0.504493,0.574044,0.565967,0.543792,0.512403,0.541964,0.546854,0.524636,0.537498,0.504191,0.504467,0.526358,0.576392,0.533208,0.525233,0.604234,0.546592,0.595903,0.539372,0.575423,0.538449,0.511227,0.540174,0.555508,0.517823,0.555419,0.493105,0.538207,0.545797,0.505455,0.534064,0.596369,0.557468,0.551678,0.540994,0.526964,0.574334,0.539147,0.517626,0.552166,0.539378,0.574801,0.532407,0.571911,0.572130,0.561310,0.542958,0.557454,0.640385,0.603143,0.544392,0.540692,0.538211,0.549967,0.532659,0.556503,0.478172,0.606155,0.516144,0.543977,0.530643,0.532532,0.549421,0.557794,0.550851,0.560323,0.539709,0.538737,0.553186,0.548935,0.542047,0.522594,0.548019,
  0.461597,0.440125,0.470308,0.525014,0.447522,0.906023,0.501796,0.486650,0.416960,0.399824,0.428976,0.478422,0.436513,0.452446,0.450406,0.477155,0.393146,0.479753,0.481468,0.458958,0.452408,0.472755,0.494039,0.438687,0.478321,0.407532,0.484538,0.465683,0.481651,0.370112,0.421241,0.440385,0.525200,0.472286,0.457837,0.453799,0.447301,0.485308,0.522154,0.453638,0.447558,0.497761,0.452365,0.442992,0.447987,0.428008,0.469522,0.456338,0.482900,0.439583,0.450579,0.451769,0.413725,0.452871,0.448410,0.483164,0.494570,0.448034,0.409072,0.453036,0.446806,0.472423,0.446964,0.465135,0.407404,0.392934,0.442626,0.419315,0.320699,0.412889,0.461189,0.458583,0.447587,0.456109,0.525219,0.433096,0.471366,0.460912,0.396690,0.450003,0.432061,0.459740,0.419930,0.422746,0.486351,0.455191,0.462985,0.483097,0.439517,0.465117,0.460576,0.560540,0.421754,0.524454,0.328534,0.425995,0.466101,0.421469,0.466947,0.444551,0.454344,0.312409,0.435035,0.430515,0.456190,0.472891,0.473173,0.413524,0.466548,0.489265,0.482104,0.440135,0.436476,0.455516,0.435192,0.424780,0.398959,0.452551,0.543338,0.444811,0.413219,0.428785,0.415687,0.440074,0.466205,0.571920,0.506458,0.380620,0.497607,0.491508,0.452799,0.442232,0.418376,0.453026,0.520403,0.441291,0.403754,0.457509,0.428127,0.197000,0.501459,0.481466,0.509430,0.426710,0.499136,0.452186,0.482824,0.485617,0.470095,0.152487,0.506007,0.515715,0.488013,0.495962,0.421369,0.450912,0.537685,0.471186,0.440292,0.513025,0.458814,0.464789,0.486413,0.432663,0.505616,0.472965,0.502674,0.465975,0.497868,0.487157,0.504114,0.452921,0.494373,0.515109,0.458458,0.428926,0.480286,0.509815,0.445281,0.597300,0.473596,0.463416,0.439733,0.465668,0.487080,0.411844,0.408084,0.856219,0.466594,0.418501,0.428354,0.441167,0.419594,0.601986,0.432110,0.504105,0.707268,0.675666,0.503938,0.486027,0.443492,0.448951,0.474106,0.477007,0.473775,0.935646,0.442318,0.448530,0.472921,0.420343,0.457577,0.453177,0.409289,0.481704,0.444926,0.415845,0.442150,0.479075,0.455183,0.401610,0.441672,0.465465,0.471658,0.451983,0.374150,0.463327,0.480640,0.457228,0.452694,0.356111,0.451953,0.463944,0.478380,0.353939,0.387678,0.458011,0.443523,0.464327,0.420764,0.430289,0.453482,0.414911,0.402358,0.475251,0.424610,0.545447,0.465300,0.492020,0.492493,0.423757,0.421213,0.718566,0.468265,0.420511,0.440796,0.405554,0.458688,0.389651,0.464590,0.484820,0.357748,0.478900,0.449539,0.431826,0.499315,0.575949,0.447185,0.492687,0.507806,0.347407,0.456709,0.453034,0.458034,0.452062,0.464052,0.409825,0.451065,0.434563,0.442630,0.524011,0.467301,0.563853,0.368875,0.453649,0.457188,0.383614,0.466337,0.467548,0.468193,0.467590,0.627899,0.424344,0.457207,0.417739,0.568312,0.429785,0.399060,0.460331,0.439596,0.405195,0.460484,0.417842,0.445441,0.451025,0.623716,0.426254,0.615588,0.426743,0.431532,0.436457,0.401775,0.422314,0.401867,0.485948,0.480102,0.449098,0.404101,0.445073,0.419765,0.422830,0.470117,0.537315,0.267886,0.501907,0.365414,0.454007,0.518244,0.425823,0.455124,0.435001,0.355582,0.427710,0.459420,0.400151,0.440276,0.466503,0.421988,0.422796,0.587133,0.493178,0.431351,0.490956,0.494879,0.441516,0.419459,0.495941,0.400386,0.426209,0.347457,0.448247,0.433972,0.452421,0.466779,0.485950,0.495207,0.425540,0.493309,0.442756,0.483989,0.480869,0.398894,0.617070,0.567830,0.428792,0.446552,0.503525,0.424681,0.468093,0.421366,0.613851,0.450149,0.417266,0.434874,0.211804,0.473488,0.431006,0.446085,0.557400,0.500501,0.491435,0.435645,0.455091,0.445640,0.461989,0.469382,0.469736,0.445083,0.494728,0.440413,0.454452,0.488116,0.611845,0.484683,0.481910,0.511424,0.458972,0.481825,0.439973,0.476210,0.673860,0.456987,0.490187,0.444162,0.448079,0.429268,0.466388,0.427668,0.445853,0.447760,0.485314,0.449470,0.466239,0.215232,0.472688,0.456360,0.431168,0.457385,0.498538,0.449379,0.489488,0.469577,0.469225,0.474685,0.557371,0.470094,0.467186,0.455213,0.457028,0.617978,0.466451,0.438500,0.470953,0.404158,0.459849,0.406352,0.459551,0.446815,0.461312,0.798494,0.443392,0.477453,0.465594,0.454450,0.418832,0.417968,0.459130,0.603199,0.441112,0.419579,0.441395,0.430430,0.566399,0.465559,0.467662,0.553941,0.373425,0.423769,0.473356,0.498607,0.459724,0.515918,0.449782,0.425673,0.490576,0.468957,0.424076,0.455021,0.510707,0.507375,0.475817,0.433923,0.492118,0.436099,0.505801,0.423042,0.415478,0.473642,0.463822,0.525037,0.429467,0.357617,0.464475,0.427096,0.479761,0.439405,0.428457,0.455116,0.543774,0.457251,0.461563,0.438422,0.463318,0.458960,0.343923,0.476761,0.448351,0.535346,0.479214,0.513560,0.499371,0.415202,0.500405,0.416742,0.508472,0.429343,0.462657,0.430247,0.460625,0.491226,0.442095,0.403659,0.432118,0.601567,0.467134,0.464575,0.380347,0.339971,0.447795,0.740366,0.405719,0.493473,0.478939,0.456172,0.467543,0.424465,0.492647,0.625404,0.461712,0.451395,0.436010,0.469588,0.453042,0.447897,0.519113,0.429447,0.458961,0.466889,0.439090,0.494200,0.440232,0.448952,0.469903,0.461491,0.401404,0.524258,0.460119,0.512147,0.429777,0.359198,0.460293,0.466325,0.577113,0.472630,0.448101,0.552507,0.418045,0.457528,0.451581,0.446224,0.517323,0.452089,0.450748,0.521840,0.430206,0.406840,0.494277,0.424114,0.458202,0.368516,0.562615,0.411621,0.466405,0.418916,0.464581,0.516522,0.436393,0.425145,0.347240,0.469284,0.504305,0.827767,0.553365,0.479039,0.415092,0.505666,0.451796,0.527837,0.477093,0.261295,0.474076,0.505546,0.543842,0.422349,0.454856,0.482655,0.459866,0.498155,0.430835,0.436236,0.495260,0.426660,0.494025,0.470729,0.483327,0.448746,0.445312,0.456290,0.437024,0.448619,0.447675,0.465604,0.456944,0.491864,0.462158,0.437524,0.484415,0.447020,0.286515,0.499287,0.567090,0.402272,0.581135,0.827861,0.404559,0.507744,0.462473,0.467346,0.454305,0.366201,0.439645,0.455036,0.430921,0.443181,0.429091,0.452393,0.485378,0.428653,0.459284,0.447045,0.443955,0.452546,0.490336,0.394249,0.485066,0.513301,0.453084,0.435980,0.482430,0.492767,0.507833,0.477221,0.420095,0.462778,0.457953,0.585879,0.397975,0.488347,0.404450,0.489026,0.478005,0.411746,0.368547,0.563370,0.393919,0.446016,0.432625,0.431351,0.506101,0.468591,0.463991,0.432710,0.447772,0.466713,0.422634,0.474260,0.496196,0.537660,0.458184,0.474979,0.480882,0.440991,0.717244,0.513433,0.442711,0.488766,0.432088,0.457644,0.497556,0.459147,0.467752,0.402610,0.459756,0.464616,0.437911,0.428959,0.461051,0.506915,0.476539,0.378685,0.429219,0.447674,0.476488,0.587862,0.456331,0.621492,0.440627,0.466824,0.450027,0.393317,0.467966,0.448013,0.485693,0.343739,0.483736,0.434625,0.502667,0.405591,0.468199,0.502716,0.473906,0.457474,0.429769,0.451226,0.428779,0.268544,0.432056,0.446269,0.402768,0.454977,0.449073,0.463658,0.467011,0.523623,0.522064,0.493715,0.403694,0.446468,0.340167,0.490343,0.420399,0.470800,0.510385,0.360678,0.459365,0.378685,0.457340,0.484119,0.488292,0.513762,0.471569,0.166578,0.416506,0.265394,0.370172,0.416069,0.496462,0.458497,0.454800,0.440156,0.445664,0.486085,0.447224,0.470599,0.436818,0.445081,0.462453,0.480988,0.504379,0.446749,0.410479,0.444556,0.452427,0.473286,0.410697,0.395805,0.420933,0.428327,0.458909,0.396524,0.421115,0.430013,0.491935,0.450343,0.448803,0.456394,0.463957,0.425025,0.636060,0.493208,0.456616,0.444434,0.432024,0.498607,0.404811,0.542517,0.497866,0.449583,0.463306,0.443529,0.485738,0.474249,0.467397,0.449784,0.470254,0.232641,0.436181,0.454967,0.475778,0.362320,0.493832,0.444018,0.455783,0.459331,0.670845,0.590840,0.454709,0.289182,0.510088,0.431567,0.468162,0.520456,0.451214,0.458087,0.445447,0.442010,0.454065,0.420624,0.454182,0.338045,0.415854,0.458936,0.477704,0.476986,0.391265,0.447221,0.456570,0.456619,0.382537,0.451556,0.428591,0.460360,0.445873,0.497845,0.471181,0.439209,0.449296,0.443184,0.601255,0.434753,0.439093,0.483922,0.442159,0.495422,0.480368,0.476492,0.456571,0.460281,0.351792,0.478651,0.305377,0.522715,0.444018,0.504746,0.480101,0.513253,0.491779,0.508058,0.462153,0.507153,0.447335,0.465093,0.448253,0.477338,0.481643,0.453023,0.482432,0.408450,0.445469,0.414419,0.483492,0.463551,0.542362,0.603619,0.497250,0.495260,0.480565,0.481167,0.619810,0.450760,0.433853,0.614113,0.461772,0.608006,0.415966,0.422560,0.411007,0.443757,0.469319,0.439648,0.426447,0.477294,0.474284,0.416388,0.458914,0.461539,0.451228,0.399483,0.473940,0.375415,0.429658,0.472445,0.450661,0.422652,0.449628,0.563488,0.394286,0.500848,0.463832,0.479214,0.452235,0.356668,0.467671,0.505950,0.478981,0.390318,0.460696,0.446929,0.449674,0.688518,0.274275,0.408796,0.469819,0.422025,0.454944,0.420315,0.486951,0.437477,0.371003,0.465345,0.477758,0.451147,0.450592,0.446178,0.458138,0.343923,0.450841,0.340220,0.486352,0.471615,0.446031,0.468462,0.446334,0.483164,0.477397,0.455343,0.454798,0.466655,0.441396,0.406202,0.495260,0.310132,0.423289,0.483111,0.445303,0.502085,0.308740,0.455699,0.496344,0.386220,0.446865,0.448286,0.461769,0.471239,0.447801,0.544929,0.431205,0.444224,0.924563,0.478604,0.390113,0.452930,0.442092,0.443395,0.461027,0.529828,0.465983,0.437284,0.346305,0.432477,0.429149,0.458170,0.438211,0.436361,0.453026,0.456714,0.477732,0.414950,0.328783,0.474346,0.435509,0.480269,0.463105,0.469904,0.395806,0.467543,0.467663,0.447031,0.418196,0.454149,0.520114,0.431802,0.445794,0.297116,0.441839,0.442612,0.507287,0.460346,0.431469,0.398050,0.397563,0.501546,0.462805,0.367685,0.475381,0.465822,0.464166,0.496395,0.465282,0.573359,0.439844,0.375587,0.450148,0.563337,0.451072,0.348985,0.479666,0.451151,0.451472,0.478931,0.399506,0.456655,0.443949,0.434300,0.534555,0.444020,0.453433,0.440565,0.491199,0.468646,0.441277,0.437894,0.427080,0.461131,0.415104,0.487836,0.464847,0.341075,0.451714,0.462371,0.470813,0.487621,0.462690,0.462541,0.445709,0.576098,0.399832,0.499721,0.473826,0.493715,0.362156,0.495156,0.429134,0.444928,0.378153,0.464625,0.436550,0.452695,0.439851,0.546548,0.392360,0.486674,0.449203,0.460014,0.466167,0.471798,0.458526,0.449868,0.436739,0.420596,0.460740,0.423758,0.404431,0.453728,0.447069,0.446688,0.486618,0.484533,0.463297,0.517201,0.408722,0.473617,0.489890,0.426718,0.400519,0.405095,0.494317,0.319577,0.440252,0.448673,0.471157,0.452685,0.425709,0.461318,0.473708,0.436551,0.422992,0.488984,0.422163,0.496542,0.443596,0.557274,0.421537,0.480558,0.460645,0.535387,0.448948,0.466103,0.363386,0.414743,0.440107,0.453597,0.457112,0.511413,0.422887,0.746011,0.483493,0.410068,0.499434,0.435464,0.459619,0.510396,0.466912,0.497335,0.499042,0.418556,0.409760,0.469296,0.421425,0.481337,0.445264,0.481903,0.499708,0.454039,0.443324,0.439296,0.460417,0.429691,0.438213,0.382267,0.343019,0.351792,0.475967,0.453082,0.490038,0.442535,0.446468,0.441458,0.420997,0.432527,0.453376,0.490672,0.495184,0.443258,0.497061,0.463611,0.438328,0.433659,0.448032,0.407180,0.501272,0.505384,0.439360,0.361853,0.444867,0.499120,0.438389,0.437544,0.458918,0.466337,0.451407,0.523102,0.472422,0.536402,0.519514,0.454404,0.458178,0.459206,0.607190,0.507824,0.489817,0.597438,0.434392,0.409396,0.452612,0.476345,0.275692,0.509609,0.475313,0.467407,0.446532,0.364249,0.468981,0.413997,0.449134,0.474061,0.445053,0.465467,0.476637,0.435420,0.446769,0.389831,0.460718,
  0.416944,0.426001,0.446195,0.414728,0.410443,0.518205,0.403099,0.457101,0.365964,0.456462,0.425913,0.384612,0.438971,0.389581,0.410788,0.451515,0.451564,0.400346,0.447641,0.385584,0.428092,0.442406,0.444261,0.415894,0.431411,0.329038,0.385401,0.437712,0.436029,0.410788,0.412508,0.425470,0.465608,0.430076,0.444851,0.470075,0.449600,0.424140,0.457676,0.424549,0.446018,0.479825,0.429397,0.433571,0.438019,0.435745,0.398424,0.430854,0.406802,0.419174,0.415696,0.439978,0.406241,0.329222,0.429311,0.410501,0.446285,0.441013,0.423132,0.370773,0.411565,0.452013,0.432216,0.409261,0.397310,0.383799,0.421378,0.440456,0.312671,0.451641,0.470744,0.417062,0.437546,0.415837,0.440563,0.390342,0.422626,0.439720,0.386517,0.411004,0.407155,0.460957,0.410673,0.406457,0.427622,0.445816,0.409511,0.432487,0.425395,0.449002,0.411630,0.420354,0.405863,0.430086,0.330950,0.419820,0.457682,0.465398,0.467595,0.417712,0.410637,0.422555,0.432057,0.407645,0.415150,0.401089,0.447262,0.390736,0.410828,0.377594,0.397721,0.391115,0.422628,0.443842,0.429995,0.403340,0.385993,0.415054,0.461764,0.424762,0.402257,0.402364,0.393545,0.420178,0.418829,0.424759,0.405133,0.429337,0.416312,0.448591,0.419483,0.414836,0.415866,0.524904,0.437816,0.381173,0.377945,0.412331,0.418277,0.238409,0.392384,0.436128,0.465239,0.421891,0.415513,0.424902,0.421869,0.445574,0.445080,0.125594,0.411388,0.392554,0.432040,0.416582,0.412413,0.404426,0.427995,0.440232,0.389048,0.428216,0.419810,0.474790,0.410373,0.390890,0.397846,0.419766,0.429875,0.432746,0.411082,0.404304,0.468286,0.430755,0.452850,0.425018,0.404591,0.404663,0.407289,0.444913,0.415032,0.527754,0.439955,0.449516,0.431863,0.385129,0.397155,0.414338,0.403991,0.743185,0.432786,0.407393,0.418347,0.443920,0.420490,0.547263,0.457805,0.455790,0.385511,0.523146,0.405381,0.425189,0.396694,0.414674,0.424514,0.412737,0.475290,0.752997,0.430531,0.440382,0.408213,0.403922,0.433152,0.428444,0.452321,0.503156,0.421986,0.402326,0.421926,0.416316,0.436532,0.396867,0.419118,0.436673,0.411381,0.419885,0.402876,0.440530,0.414065,0.414962,0.433697,0.359705,0.408318,0.414441,0.451722,0.383942,0.437628,0.428195,0.404253,0.401063,0.410262,0.399943,0.448978,0.405072,0.427673,0.407018,0.436094,0.446338,0.432978,0.419599,0.424064,0.442219,0.296789,0.447805,0.432715,0.411322,0.395475,0.383418,0.433050,0.439515,0.433373,0.447621,0.384377,0.403230,0.286448,0.412318,0.426647,0.475287,0.403097,0.436322,0.475057,0.395601,0.430458,0.445629,0.412320,0.437451,0.413658,0.423871,0.419946,0.408024,0.423110,0.418468,0.389245,0.454789,0.388177,0.430566,0.456924,0.313909,0.376657,0.432688,0.464061,0.415604,0.581192,0.394824,0.419706,0.372497,0.503573,0.406617,0.411988,0.435874,0.416978,0.396580,0.430524,0.423528,0.456546,0.445661,0.528133,0.449497,0.475961,0.408734,0.417433,0.415795,0.387523,0.437834,0.395078,0.411937,0.419828,0.404312,0.446595,0.420208,0.410659,0.395537,0.445421,0.424080,0.312461,0.428196,0.419473,0.421688,0.435766,0.417146,0.425163,0.404602,0.355032,0.389958,0.436691,0.378603,0.408503,0.432405,0.418392,0.398354,0.542877,0.425768,0.414614,0.390790,0.396307,0.414301,0.401950,0.426432,0.426244,0.394034,0.315844,0.431334,0.422798,0.445918,0.417788,0.467464,0.456856,0.415209,0.440807,0.397317,0.429941,0.418732,0.397483,0.456757,0.691782,0.390354,0.425833,0.509549,0.415248,0.441725,0.404319,0.441016,0.429516,0.435211,0.407829,0.520605,0.414311,0.424205,0.405419,0.509452,0.444343,0.446921,0.413594,0.404398,0.395908,0.432332,0.431500,0.398595,0.418047,0.422992,0.410918,0.431804,0.412575,0.511733,0.422853,0.444587,0.400660,0.397524,0.393657,0.393842,0.385168,0.555122,0.422997,0.451551,0.364343,0.428128,0.411225,0.424832,0.404833,0.475926,0.391766,0.387568,0.430036,0.405238,0.436103,0.386806,0.432632,0.422502,0.431801,0.425157,0.426025,0.388977,0.418914,0.434239,0.431584,0.453311,0.424470,0.423218,0.439897,0.432534,0.551965,0.388419,0.414670,0.439402,0.394771,0.443974,0.442872,0.432803,0.377211,0.432645,0.662483,0.426023,0.436045,0.438538,0.426434,0.397331,0.401701,0.431672,0.435580,0.413017,0.400167,0.421871,0.410473,0.471882,0.369995,0.421794,0.498106,0.363965,0.404123,0.457431,0.434895,0.413025,0.462872,0.441934,0.398082,0.383304,0.415948,0.385444,0.411252,0.425907,0.419350,0.426411,0.397248,0.448253,0.423544,0.430312,0.451518,0.307970,0.448659,0.385529,0.418723,0.408945,0.346448,0.403777,0.428293,0.422445,0.485982,0.407504,0.418211,0.496694,0.434610,0.448811,0.425703,0.431243,0.420511,0.366461,0.444822,0.450262,0.470492,0.267642,0.426243,0.442391,0.400804,0.461550,0.390227,0.430031,0.411060,0.424538,0.419208,0.437515,0.413273,0.428324,0.398262,0.422901,0.538010,0.369425,0.446691,0.355233,0.273494,0.429281,0.662100,0.402933,0.406455,0.455302,0.420338,0.424414,0.399002,0.417435,0.536567,0.439060,0.431062,0.416739,0.409032,0.417253,0.448106,0.444336,0.424792,0.445515,0.438057,0.409693,0.428500,0.402053,0.421767,0.381930,0.423652,0.281344,0.485582,0.439393,0.505870,0.427908,0.349456,0.458984,0.429865,0.460963,0.443480,0.419518,0.469841,0.436036,0.448388,0.404681,0.395307,0.437985,0.432975,0.412905,0.414381,0.401501,0.428477,0.394598,0.410235,0.420248,0.373211,0.636798,0.371814,0.441940,0.441883,0.434207,0.414904,0.425468,0.410360,0.369654,0.425258,0.461297,0.501805,0.494858,0.414653,0.423519,0.469280,0.433791,0.452541,0.418292,0.261042,0.426995,0.448930,0.390198,0.400891,0.433855,0.467037,0.409481,0.400269,0.427641,0.413483,0.426717,0.387126,0.508743,0.431799,0.350456,0.429898,0.415299,0.438361,0.411532,0.403421,0.396932,0.431602,0.413233,0.413732,0.417214,0.421472,0.420461,0.428015,0.385950,0.410156,0.410759,0.402603,0.431661,0.608817,0.467751,0.393421,0.406894,0.416703,0.429567,0.428125,0.410199,0.429311,0.420300,0.428865,0.403027,0.431003,0.392131,0.427119,0.415921,0.443931,0.409983,0.422701,0.448388,0.378119,0.428521,0.404535,0.434433,0.414948,0.447537,0.382036,0.481164,0.423192,0.399897,0.429328,0.405530,0.502995,0.409421,0.438749,0.302174,0.394151,0.390392,0.438173,0.378754,0.400197,0.371957,0.431168,0.431902,0.422095,0.445836,0.440785,0.408238,0.407977,0.420462,0.449864,0.397654,0.423373,0.474337,0.422254,0.423570,0.537531,0.432635,0.420839,0.487479,0.463383,0.415668,0.389199,0.417725,0.418341,0.444353,0.427834,0.418346,0.417661,0.418103,0.413113,0.442755,0.359843,0.430660,0.391864,0.452587,0.336349,0.403722,0.422124,0.445620,0.431963,0.414041,0.507528,0.430058,0.430206,0.411811,0.529599,0.417812,0.454134,0.401084,0.441977,0.410300,0.431818,0.468172,0.382808,0.415094,0.409202,0.441602,0.397278,0.418369,0.402679,0.408425,0.262586,0.410462,0.440988,0.416899,0.430427,0.419905,0.438111,0.440925,0.442887,0.429205,0.472063,0.378488,0.417036,0.442051,0.402299,0.390059,0.475475,0.418960,0.413783,0.434504,0.336349,0.444076,0.421453,0.440844,0.420599,0.409606,0.197765,0.398285,0.298372,0.391412,0.405031,0.435850,0.433866,0.451178,0.426303,0.429484,0.388209,0.429650,0.426296,0.430268,0.427962,0.438804,0.419065,0.469076,0.494165,0.402046,0.400212,0.383712,0.475733,0.383385,0.385407,0.442998,0.420989,0.406548,0.402694,0.412224,0.444469,0.398244,0.388417,0.424127,0.443028,0.414484,0.405228,0.511844,0.421061,0.462007,0.388411,0.419526,0.434895,0.417647,0.431617,0.412476,0.426744,0.438851,0.450653,0.498516,0.397366,0.415099,0.434193,0.439020,0.280445,0.414475,0.407082,0.458606,0.319477,0.340227,0.423501,0.427457,0.423587,0.523738,0.591683,0.435450,0.404260,0.442606,0.390191,0.446792,0.393037,0.427824,0.438393,0.411262,0.449465,0.431791,0.417589,0.435517,0.385078,0.395843,0.466680,0.401999,0.444378,0.388654,0.426074,0.421512,0.428140,0.414251,0.431194,0.430935,0.423823,0.431344,0.402494,0.437771,0.391686,0.475231,0.457487,0.470881,0.424395,0.418801,0.424821,0.394495,0.426512,0.483303,0.406966,0.436235,0.457555,0.403488,0.427608,0.377772,0.429145,0.431212,0.466818,0.422185,0.455275,0.393732,0.454751,0.416433,0.497929,0.391107,0.428931,0.432595,0.360402,0.407054,0.390817,0.384059,0.422759,0.427376,0.409047,0.463145,0.510234,0.430085,0.559149,0.476448,0.442638,0.425492,0.445250,0.570826,0.421607,0.422122,0.564696,0.424838,0.448070,0.427595,0.405864,0.405672,0.420830,0.463740,0.451074,0.387619,0.427234,0.434053,0.426983,0.436889,0.427242,0.427521,0.393374,0.449525,0.377286,0.445162,0.431004,0.466415,0.442821,0.416801,0.437410,0.409445,0.435277,0.435925,0.267642,0.424847,0.421689,0.397548,0.423396,0.420573,0.391940,0.434904,0.422583,0.407301,0.455884,0.239685,0.399995,0.451039,0.442441,0.400997,0.384991,0.454530,0.414667,0.367272,0.462868,0.436022,0.399789,0.411705,0.423732,0.423619,0.366461,0.418768,0.471359,0.419222,0.425558,0.419839,0.404441,0.436853,0.410501,0.440030,0.423475,0.404697,0.345606,0.422498,0.404576,0.626904,0.410237,0.428942,0.433217,0.433439,0.397607,0.326255,0.457393,0.428885,0.369190,0.453187,0.416545,0.504949,0.405414,0.401177,0.443876,0.437362,0.424692,0.468464,0.418850,0.469158,0.413690,0.418422,0.430616,0.402501,0.476649,0.436658,0.448354,0.367249,0.408409,0.410770,0.425714,0.399982,0.414154,0.524904,0.429368,0.458435,0.411393,0.330836,0.414101,0.410077,0.407897,0.431537,0.455922,0.343979,0.424414,0.401291,0.460140,0.442597,0.418343,0.441936,0.441754,0.403765,0.336121,0.462503,0.385853,0.469082,0.433101,0.399265,0.593494,0.396474,0.398499,0.457525,0.208988,0.416368,0.448424,0.416828,0.411838,0.438407,0.302132,0.423795,0.352142,0.423914,0.541307,0.427411,0.394016,0.406320,0.405517,0.412273,0.421164,0.452313,0.436821,0.421121,0.417838,0.568560,0.440090,0.424783,0.425799,0.424300,0.419130,0.411532,0.428246,0.471878,0.439480,0.412709,0.459613,0.445467,0.313864,0.431120,0.420784,0.435354,0.411973,0.431049,0.431898,0.427506,0.535033,0.421053,0.470505,0.446099,0.472063,0.429999,0.448127,0.381392,0.419334,0.378186,0.441940,0.435927,0.437047,0.414701,0.397628,0.434925,0.407891,0.437823,0.435011,0.429220,0.442251,0.427293,0.431723,0.407105,0.403054,0.421165,0.400792,0.392691,0.417800,0.392500,0.414111,0.414238,0.454871,0.411432,0.447668,0.396515,0.451079,0.426810,0.429209,0.402527,0.405443,0.408171,0.413159,0.424257,0.404876,0.427407,0.435609,0.398062,0.428915,0.414003,0.403630,0.437127,0.394786,0.397802,0.364685,0.421085,0.498450,0.407265,0.394823,0.423965,0.437259,0.398348,0.480871,0.455619,0.403563,0.417540,0.421955,0.435437,0.415187,0.425868,0.705383,0.436312,0.391681,0.433331,0.436414,0.413538,0.423071,0.434308,0.394425,0.455006,0.416710,0.418743,0.424635,0.444156,0.446823,0.428608,0.418579,0.442087,0.429552,0.413646,0.417347,0.441294,0.387710,0.421719,0.341481,0.407970,0.403488,0.427649,0.419275,0.392700,0.400751,0.407449,0.395701,0.421429,0.362552,0.421504,0.396395,0.373627,0.403916,0.389909,0.428672,0.442951,0.423650,0.428073,0.409079,0.408088,0.434464,0.418481,0.427401,0.426189,0.396339,0.426575,0.396063,0.420600,0.376657,0.433909,0.432741,0.410241,0.415106,0.376778,0.432486,0.431272,0.424194,0.532795,0.434537,0.449480,0.526217,0.417701,0.406528,0.461874,0.447014,0.348071,0.455874,0.386385,0.438270,0.439017,0.331559,0.434156,0.411209,0.441778,0.421130,0.420365,0.431700,0.419563,0.407383,0.446552,0.343913,0.428623,
  0.545311,0.502781,0.464087,0.437989,0.481492,0.325532,0.403834,0.506778,0.365491,0.523421,0.476438,0.414982,0.496884,0.454873,0.382222,0.527504,0.574679,0.397412,0.476986,0.555135,0.500567,0.495122,0.485461,0.440207,0.486948,0.402234,0.466870,0.464055,0.494215,0.440173,0.490683,0.512883,0.464515,0.466339,0.535329,0.536853,0.491427,0.471997,0.543048,0.513262,0.504979,0.541550,0.452792,0.461889,0.446930,0.500108,0.405249,0.537837,0.419134,0.513956,0.489105,0.508199,0.478553,0.549225,0.501355,0.478183,0.493508,0.594338,0.493563,0.411999,0.513893,0.503389,0.482942,0.587412,0.460350,0.483687,0.516384,0.550691,0.408890,0.535870,0.503444,0.481587,0.603303,0.477495,0.517030,0.597380,0.523676,0.592978,0.587134,0.472593,0.503760,0.483087,0.510462,0.476204,0.460531,0.509917,0.455649,0.485438,0.484098,0.453462,0.425620,0.485307,0.498559,0.496948,0.347795,0.484218,0.509646,0.452708,0.487543,0.501389,0.490335,0.614048,0.498681,0.474223,0.457702,0.407274,0.506711,0.462511,0.551369,0.413534,0.428968,0.470918,0.475570,0.530230,0.492028,0.517464,0.467997,0.469942,0.528021,0.492526,0.469598,0.480976,0.552586,0.426545,0.442707,0.456295,0.430274,0.511503,0.541227,0.414905,0.483701,0.425666,0.506235,0.579746,0.443539,0.567610,0.674599,0.416036,0.488259,0.463132,0.405389,0.511590,0.528299,0.489150,0.490950,0.497023,0.469020,0.474014,0.497688,0.395638,0.417956,0.556422,0.491576,0.420186,0.482922,0.445134,0.441381,0.476726,0.512371,0.407035,0.440171,0.735316,0.419591,0.413643,0.403480,0.507360,0.504762,0.512722,0.441219,0.406755,0.532164,0.510960,0.502644,0.524377,0.458601,0.481420,0.469124,0.506058,0.492308,0.503318,0.553810,0.471569,0.520595,0.439989,0.472828,0.522753,0.505198,0.891898,0.496529,0.509652,0.518126,0.535719,0.523201,0.665002,0.427609,0.516104,0.468446,0.363183,0.511624,0.471072,0.442140,0.474192,0.636748,0.464185,0.591876,0.558569,0.500019,0.477806,0.456994,0.558828,0.564045,0.491270,0.495383,0.750856,0.494493,0.562638,0.521062,0.459242,0.637544,0.477956,0.526856,0.525467,0.546667,0.495716,0.455007,0.446291,0.466171,0.542043,0.542729,0.435816,0.557217,0.538387,0.525446,0.420669,0.468941,0.525254,0.529471,0.407488,0.483401,0.494150,0.533639,0.463827,0.495840,0.416288,0.515305,0.525811,0.494493,0.421295,0.504614,0.450804,0.378691,0.499887,0.498558,0.460199,0.447842,0.463191,0.535368,0.566841,0.493457,0.510717,0.469056,0.421107,0.354349,0.500266,0.498453,0.545065,0.479060,0.495661,0.511651,0.419254,0.529260,0.452453,0.426629,0.501793,0.467404,0.523616,0.531695,0.515319,0.512559,0.434857,0.454850,0.542303,0.436901,0.478359,0.530957,0.314242,0.616112,0.535782,0.498428,0.435154,0.488301,0.525561,0.594551,0.423989,0.573098,0.512620,0.520742,0.485337,0.440489,0.435670,0.580855,0.459012,0.512992,0.521112,0.582972,0.485414,0.489846,0.549923,0.455842,0.496206,0.459159,0.537974,0.452828,0.455714,0.497257,0.483257,0.506138,0.456138,0.473803,0.416345,0.536712,0.430048,0.499931,0.432108,0.473105,0.437674,0.485706,0.489842,0.509189,0.467977,0.422342,0.581732,0.521465,0.436926,0.464899,0.439446,0.494564,0.537117,0.522512,0.490859,0.532929,0.398685,0.399651,0.506650,0.508404,0.487710,0.496813,0.388663,0.422807,0.741756,0.511165,0.504135,0.538401,0.484402,0.476787,0.490049,0.447179,0.461689,0.496732,0.539804,0.505489,0.531991,0.656423,0.406049,0.538418,0.547778,0.547852,0.511902,0.480317,0.520071,0.518989,0.504210,0.543166,0.603375,0.513630,0.499552,0.546105,0.556977,0.514210,0.563058,0.558033,0.557638,0.597025,0.500533,0.521107,0.455010,0.529919,0.524609,0.527692,0.473993,0.417635,0.584527,0.492133,0.507950,0.406183,0.413018,0.402758,0.425687,0.400652,0.467501,0.516274,0.507353,0.411465,0.502243,0.486304,0.491512,0.523112,0.473036,0.445611,0.403251,0.473065,0.499049,0.434607,0.387363,0.493746,0.496117,0.513438,0.491817,0.498330,0.403362,0.478021,0.513584,0.498586,0.542512,0.495934,0.509229,0.494740,0.514123,0.647400,0.445394,0.482122,0.521333,0.505680,0.437917,0.484245,0.490001,0.430057,0.491959,0.644574,0.621012,0.515147,0.566983,0.575481,0.526387,0.485591,0.458055,0.493133,0.463187,0.458889,0.551819,0.516998,0.567530,0.523993,0.533730,0.532040,0.442130,0.461535,0.522292,0.539276,0.477034,0.466002,0.628777,0.457857,0.396485,0.449214,0.417205,0.429079,0.421988,0.429987,0.501189,0.518301,0.576250,0.506028,0.423694,0.520866,0.396161,0.545876,0.389703,0.523057,0.523571,0.403764,0.477955,0.518162,0.521734,0.424789,0.524259,0.477079,0.533424,0.492240,0.488536,0.528959,0.506050,0.461117,0.415578,0.491258,0.498744,0.553009,0.547299,0.513008,0.493897,0.547868,0.533539,0.448566,0.502352,0.457696,0.482563,0.528686,0.524318,0.454456,0.519968,0.479947,0.491261,0.560385,0.403603,0.516273,0.355192,0.422027,0.519204,0.650833,0.518613,0.422366,0.548278,0.482399,0.460031,0.442565,0.452520,0.673212,0.522675,0.497855,0.480151,0.391086,0.503567,0.470176,0.545141,0.507201,0.504004,0.502656,0.417580,0.460007,0.471404,0.549344,0.390884,0.502639,0.362235,0.569831,0.536110,0.523775,0.478755,0.446547,0.666429,0.465784,0.606678,0.507770,0.529808,0.515132,0.509252,0.507534,0.549481,0.454633,0.448890,0.500997,0.515666,0.408555,0.452990,0.453900,0.391416,0.485403,0.509869,0.444672,0.799714,0.432281,0.538521,0.488602,0.528178,0.443326,0.526450,0.508715,0.490260,0.520731,0.530569,0.783315,0.500325,0.479822,0.440896,0.541480,0.529610,0.534937,0.457851,0.357479,0.498211,0.500006,0.488615,0.538615,0.477084,0.545004,0.535446,0.400962,0.482099,0.486495,0.477897,0.409408,0.582616,0.510696,0.433544,0.565244,0.526102,0.504625,0.512180,0.492578,0.484865,0.521959,0.504543,0.462121,0.505572,0.522351,0.495377,0.503242,0.884933,0.427036,0.325253,0.445060,0.515057,0.627860,0.441655,0.515628,0.443955,0.445821,0.532992,0.504469,0.501430,0.503648,0.502557,0.545641,0.541544,0.490735,0.393012,0.504798,0.440319,0.488193,0.545609,0.478540,0.496801,0.506146,0.470129,0.468881,0.478870,0.477921,0.484842,0.427895,0.577289,0.464278,0.447291,0.509283,0.401641,0.529971,0.484969,0.563092,0.541598,0.399973,0.390255,0.486829,0.469352,0.565645,0.456895,0.496667,0.512832,0.511430,0.506934,0.509329,0.542749,0.507488,0.518247,0.484408,0.459167,0.466207,0.502705,0.458859,0.460473,0.466421,0.485370,0.519839,0.425708,0.497743,0.555672,0.420673,0.507726,0.468773,0.533955,0.543574,0.528020,0.519822,0.436863,0.432041,0.485120,0.548734,0.513211,0.396204,0.485145,0.482998,0.468456,0.507518,0.537640,0.364424,0.425886,0.564518,0.500515,0.561162,0.462728,0.568142,0.509804,0.531893,0.402236,0.586529,0.565313,0.558008,0.515693,0.442734,0.429584,0.414419,0.502511,0.470244,0.453345,0.413885,0.489288,0.555148,0.579552,0.499906,0.524961,0.481570,0.477502,0.501336,0.461837,0.502070,0.485318,0.454455,0.591216,0.486266,0.616397,0.494682,0.500106,0.562044,0.486463,0.527951,0.513611,0.482998,0.489548,0.510394,0.510487,0.425014,0.539215,0.409323,0.544106,0.364353,0.606569,0.476714,0.450373,0.546618,0.538863,0.455939,0.509992,0.400080,0.444939,0.486202,0.462629,0.580684,0.494034,0.483567,0.594874,0.510713,0.464247,0.440319,0.430422,0.530641,0.602703,0.534026,0.570967,0.521390,0.423955,0.483996,0.501000,0.517706,0.413861,0.509410,0.571879,0.442939,0.504380,0.512917,0.536436,0.457108,0.557806,0.418680,0.450719,0.539276,0.447805,0.463198,0.526712,0.513086,0.524726,0.558599,0.493396,0.388935,0.462155,0.572870,0.474809,0.439482,0.440201,0.427995,0.550453,0.452771,0.361554,0.502875,0.505410,0.489061,0.643904,0.573883,0.521620,0.610931,0.520420,0.488560,0.517679,0.486156,0.513257,0.553114,0.456276,0.392123,0.612976,0.563458,0.480946,0.504992,0.527239,0.525295,0.439781,0.497384,0.475140,0.554589,0.512787,0.596889,0.500560,0.523052,0.502620,0.483137,0.453906,0.416271,0.509423,0.602024,0.477605,0.566876,0.466893,0.471566,0.478025,0.506529,0.469158,0.496058,0.550922,0.450548,0.517859,0.440442,0.385903,0.507133,0.495879,0.454105,0.462811,0.595026,0.483571,0.541200,0.393164,0.483158,0.518731,0.562410,0.454112,0.601114,0.475690,0.539018,0.416935,0.581095,0.480574,0.440239,0.500179,0.463915,0.482693,0.631485,0.500783,0.676253,0.521948,0.554951,0.552726,0.504967,0.634239,0.428241,0.509210,0.548234,0.485242,0.462334,0.503945,0.493147,0.490706,0.473417,0.547634,0.528024,0.451162,0.496497,0.569382,0.503704,0.468690,0.596700,0.601610,0.448076,0.488715,0.427914,0.464668,0.455206,0.484194,0.495343,0.476857,0.402870,0.520761,0.499602,0.507646,0.547299,0.462458,0.541893,0.508025,0.471450,0.488209,0.446491,0.496532,0.531994,0.536741,0.521741,0.486566,0.450775,0.531572,0.607359,0.577777,0.522509,0.541751,0.490092,0.504025,0.515571,0.494369,0.522640,0.488279,0.563496,0.474491,0.415578,0.448587,0.721565,0.483522,0.605058,0.540368,0.466745,0.522245,0.478183,0.487139,0.493510,0.407854,0.476943,0.504403,0.455879,0.473288,0.446571,0.511252,0.523595,0.509438,0.397564,0.534713,0.496651,0.492465,0.515331,0.586979,0.504329,0.505123,0.572477,0.473811,0.455493,0.507443,0.456485,0.586925,0.505535,0.555670,0.490385,0.525908,0.516580,0.488652,0.559000,0.475623,0.515104,0.419243,0.443662,0.493268,0.519269,0.518817,0.555173,0.579746,0.584467,0.542011,0.492525,0.450416,0.462603,0.455041,0.471124,0.483507,0.549388,0.599605,0.460031,0.394256,0.509735,0.526631,0.538181,0.524259,0.556260,0.427159,0.522238,0.607649,0.386445,0.466491,0.517710,0.457634,0.574699,0.453501,0.408139,0.444113,0.304413,0.528098,0.521608,0.432597,0.422527,0.518923,0.456386,0.516769,0.508391,0.508481,0.621153,0.515075,0.539479,0.413856,0.422458,0.425018,0.508548,0.550508,0.515380,0.508767,0.507728,0.588850,0.552652,0.625536,0.538156,0.499369,0.503895,0.425578,0.512775,0.583976,0.463626,0.542584,0.509231,0.525394,0.340571,0.516772,0.496410,0.538582,0.414004,0.499683,0.498739,0.514860,0.674500,0.435927,0.584300,0.491817,0.454455,0.507161,0.544435,0.531751,0.534328,0.558892,0.507434,0.536519,0.521114,0.544255,0.572866,0.529250,0.490703,0.496032,0.510680,0.531057,0.497288,0.537757,0.520307,0.544619,0.501714,0.511893,0.497358,0.630711,0.548993,0.418586,0.476863,0.445812,0.631377,0.426048,0.430763,0.512434,0.471786,0.496164,0.530910,0.509852,0.520046,0.408858,0.723055,0.499893,0.421234,0.465574,0.568487,0.522270,0.512774,0.541717,0.474456,0.570328,0.397099,0.527974,0.419902,0.532439,0.566738,0.522726,0.392279,0.536579,0.499996,0.412956,0.702244,0.645868,0.474421,0.440226,0.498257,0.517091,0.469624,0.478929,0.444564,0.493441,0.504852,0.504676,0.452025,0.566851,0.450015,0.468725,0.417647,0.498021,0.509366,0.507596,0.487751,0.506975,0.587873,0.453964,0.484142,0.434736,0.597453,0.527991,0.443052,0.525395,0.512827,0.502720,0.401994,0.535298,0.385903,0.519544,0.453673,0.397708,0.511458,0.483307,0.482902,0.505454,0.478438,0.476787,0.401417,0.490743,0.536154,0.401387,0.486368,0.567855,0.444585,0.533173,0.505778,0.475307,0.516797,0.529599,0.544542,0.460272,0.410947,0.468195,0.533572,0.457633,0.616112,0.522444,0.501201,0.446610,0.461826,0.416034,0.511063,0.479806,0.561908,0.564868,0.504950,0.500989,0.540947,0.520317,0.526579,0.513577,0.601827,0.575741,0.505026,0.403108,0.502782,0.506217,0.393151,0.586842,0.424362,0.561940,0.539929,0.540167,0.488604,0.499908,0.473013,0.532267,0.388785,0.626529,
  0.404034,0.306523,0.670940,0.633648,0.661930,0.521099,0.658398,0.549502,0.500763,0.552694,0.467863,0.650066,0.485940,0.596515,0.770461,0.316658,0.393584,0.671218,0.665439,0.383057,0.319444,0.369025,0.577705,0.592465,0.483459,0.620337,0.294524,0.670733,0.482448,0.465595,0.483144,0.285506,0.653643,0.520670,0.487686,0.476023,0.473602,0.480997,0.537974,0.502159,0.461955,0.608418,0.488560,0.518942,0.484745,0.572493,0.653459,0.556555,0.634380,0.392683,0.369443,0.471940,0.480748,0.380398,0.471202,0.647060,0.588282,0.397327,0.527879,0.351185,0.413923,0.511468,0.607325,0.393306,0.528580,0.291584,0.294750,0.392940,0.266837,0.399950,0.465119,0.660880,0.395999,0.367434,0.506006,0.398591,0.524580,0.400544,0.392431,0.716628,0.488124,0.537580,0.620105,0.481870,0.499252,0.449939,0.480547,0.561016,0.442821,0.510987,0.583492,0.504654,0.739177,0.462276,0.590354,0.374831,0.679017,0.555722,0.679310,0.588729,0.505610,0.631016,0.386974,0.460844,0.443616,0.682438,0.454437,0.659125,0.382036,0.647308,0.549169,0.658703,0.500970,0.381533,0.590865,0.544200,0.670151,0.359076,0.664817,0.471387,0.532396,0.648779,0.590433,0.562747,0.497520,0.553612,0.470479,0.504637,0.304424,0.636569,0.707171,0.563827,0.451322,0.593969,0.623113,0.400450,0.270723,0.608948,0.652917,0.303045,0.637169,0.584640,0.585668,0.660597,0.466007,0.301434,0.469863,0.611191,0.466690,0.391618,0.641950,0.609737,0.483102,0.600042,0.477255,0.492132,0.649474,0.526761,0.636941,0.511071,0.539766,0.239997,0.632398,0.620213,0.651009,0.630319,0.487480,0.285900,0.519451,0.656152,0.573341,0.303695,0.556159,0.515498,0.652011,0.631778,0.595032,0.497982,0.657801,0.622288,0.393989,0.505471,0.481060,0.555700,0.571988,0.615431,0.502477,0.264251,0.475090,0.615875,0.471127,0.480521,0.642195,0.614668,0.602354,0.572445,0.646310,0.258584,0.577840,0.472782,0.476992,0.657710,0.372594,0.578110,0.582010,0.640521,0.294013,0.647012,0.543730,0.481699,0.401097,0.624212,0.562433,0.391425,0.676453,0.486648,0.608776,0.507405,0.400577,0.614577,0.563172,0.303135,0.676795,0.307322,0.572104,0.496157,0.481973,0.495546,0.644149,0.250197,0.647579,0.399191,0.591811,0.477254,0.561686,0.526311,0.619707,0.635442,0.652653,0.625470,0.579461,0.515188,0.455388,0.625923,0.459222,0.339468,0.471924,0.630587,0.404358,0.521861,0.554683,0.512264,0.465754,0.566175,0.547938,0.542999,0.672879,0.378704,0.468746,0.479696,0.615437,0.537647,0.606088,0.286124,0.461805,0.363327,0.573497,0.503158,0.496432,0.552903,0.651614,0.508743,0.554379,0.288118,0.492276,0.495744,0.666790,0.658594,0.287805,0.648513,0.558890,0.340590,0.463795,0.346139,0.468289,0.189545,0.697220,0.533878,0.649918,0.567254,0.467377,0.483009,0.407040,0.654205,0.689940,0.677860,0.491832,0.450199,0.550642,0.501418,0.259166,0.483351,0.586633,0.640587,0.623865,0.520439,0.347877,0.501844,0.599388,0.565686,0.569619,0.396416,0.607497,0.555333,0.470938,0.509858,0.486631,0.619859,0.512028,0.548632,0.420015,0.658699,0.612824,0.644924,0.551860,0.548947,0.536122,0.467492,0.573940,0.606483,0.355445,0.698924,0.565217,0.337955,0.614569,0.632397,0.687789,0.466795,0.554424,0.467107,0.575409,0.626210,0.652463,0.674105,0.279035,0.468235,0.467195,0.626646,0.614613,0.257386,0.740230,0.636977,0.565492,0.680016,0.624419,0.649351,0.495347,0.542484,0.474267,0.429502,0.847837,0.366124,0.630208,0.541163,0.578306,0.502380,0.558734,0.479756,0.609034,0.629418,0.500674,0.467182,0.696698,0.652777,0.683034,0.675514,0.664287,0.596853,0.476277,0.619771,0.503383,0.686559,0.396926,0.385766,0.502566,0.401580,0.407511,0.639553,0.690828,0.348184,0.646190,0.275289,0.495637,0.544897,0.655660,0.610453,0.630931,0.624927,0.650014,0.566935,0.649211,0.491299,0.544355,0.623691,0.478007,0.640415,0.495474,0.591832,0.510071,0.661259,0.345178,0.550902,0.504617,0.628040,0.455787,0.661758,0.387142,0.466668,0.550798,0.647972,0.434676,0.263134,0.475496,0.310554,0.303570,0.506203,0.750201,0.381699,0.384225,0.547992,0.501411,0.324380,0.631636,0.479280,0.611822,0.645366,0.583814,0.484411,0.602212,0.405231,0.311960,0.510590,0.397864,0.468967,0.626295,0.494837,0.639525,0.616572,0.561367,0.559739,0.465224,0.640305,0.385615,0.636222,0.646249,0.222826,0.471362,0.585362,0.341655,0.579438,0.641422,0.398407,0.544387,0.644320,0.532801,0.604821,0.569806,0.630689,0.522608,0.303327,0.418458,0.501015,0.280812,0.610808,0.459106,0.511528,0.422936,0.645015,0.350202,0.410726,0.506255,0.705627,0.464665,0.349676,0.625535,0.632720,0.634786,0.509019,0.677596,0.641621,0.392548,0.303755,0.484850,0.482197,0.443202,0.454403,0.482479,0.686343,0.515767,0.498769,0.489951,0.242513,0.353875,0.474639,0.547166,0.482503,0.484210,0.295716,0.586990,0.642602,0.397192,0.533515,0.643583,0.568132,0.454916,0.522220,0.588422,0.306503,0.552864,0.633930,0.638295,0.629814,0.472464,0.497085,0.329976,0.534420,0.686585,0.288440,0.469408,0.489163,0.710690,0.526151,0.677013,0.383522,0.617871,0.485221,0.495027,0.507292,0.523059,0.691148,0.627702,0.645335,0.613840,0.383058,0.367390,0.363763,0.394474,0.615303,0.640917,0.249960,0.506695,0.644302,0.560993,0.600778,0.552741,0.458709,0.470266,0.385592,0.648387,0.507310,0.500492,0.642692,0.639753,0.594354,0.520574,0.644614,0.480880,0.674986,0.586584,0.719967,0.503388,0.508158,0.494058,0.511515,0.568850,0.623002,0.659509,0.331298,0.563313,0.548646,0.687307,0.495434,0.468054,0.539328,0.416591,0.281088,0.385392,0.506955,0.339862,0.301110,0.510071,0.627926,0.405431,0.457835,0.586762,0.387594,0.663522,0.686270,0.583322,0.573971,0.551590,0.472195,0.513403,0.567698,0.496623,0.413190,0.440292,0.372331,0.549038,0.564752,0.520484,0.555029,0.575812,0.415411,0.635020,0.668989,0.295299,0.323490,0.614886,0.103745,0.478872,0.339626,0.296809,0.575837,0.554877,0.664034,0.619461,0.425253,0.476083,0.339937,0.354831,0.657907,0.671093,0.585674,0.350755,0.660932,0.548322,0.574001,0.488781,0.668452,0.495460,0.495106,0.675442,0.683344,0.569623,0.613205,0.531047,0.473356,0.560421,0.341210,0.517644,0.485667,0.693164,0.695148,0.588110,0.460918,0.492523,0.354882,0.645013,0.658969,0.444265,0.816831,0.573572,0.547970,0.488182,0.549337,0.658415,0.321991,0.381028,0.404272,0.595042,0.285922,0.438674,0.520661,0.562164,0.328729,0.573853,0.534030,0.569771,0.664943,0.374191,0.140156,0.397637,0.409604,0.532032,0.466391,0.578449,0.571553,0.586278,0.412593,0.537495,0.497362,0.620037,0.275367,0.288054,0.365627,0.656299,0.464903,0.488243,0.444445,0.390033,0.471510,0.246098,0.566890,0.568901,0.463214,0.411071,0.517807,0.406173,0.654884,0.508634,0.630545,0.585482,0.490016,0.521733,0.306319,0.353860,0.594764,0.654224,0.353532,0.382714,0.621673,0.308216,0.694513,0.583429,0.296857,0.650685,0.736272,0.352426,0.671798,0.440627,0.343042,0.417340,0.345506,0.386770,0.747906,0.383654,0.693767,0.662083,0.746648,0.552008,0.645561,0.457711,0.467872,0.488243,0.468276,0.551161,0.420883,0.638605,0.607091,0.686354,0.654955,0.292002,0.714352,0.611909,0.482879,0.574906,0.461345,0.576926,0.467371,0.650344,0.637679,0.664924,0.516267,0.414383,0.578720,0.468244,0.528648,0.487932,0.516923,0.637764,0.290870,0.396089,0.706580,0.635888,0.509126,0.462853,0.590623,0.464433,0.529872,0.394431,0.632498,0.676607,0.595438,0.642094,0.418824,0.465527,0.211049,0.491779,0.512308,0.616421,0.525822,0.341655,0.495512,0.642899,0.440779,0.446488,0.474713,0.636592,0.559748,0.643655,0.510263,0.397671,0.479311,0.553195,0.596486,0.580633,0.485170,0.188192,0.623272,0.611593,0.386453,0.312461,0.651310,0.389555,0.469690,0.632945,0.312937,0.491012,0.425104,0.566945,0.290779,0.579513,0.654601,0.580825,0.401156,0.437685,0.552723,0.506033,0.732429,0.428803,0.599697,0.550541,0.606186,0.561817,0.506151,0.404897,0.657719,0.473583,0.553378,0.538907,0.581062,0.643902,0.314116,0.284002,0.596680,0.334963,0.527404,0.547310,0.541187,0.524319,0.667785,0.459334,0.485266,0.383984,0.458988,0.504655,0.245440,0.477457,0.628847,0.508929,0.579447,0.525677,0.721678,0.579935,0.671245,0.572897,0.556253,0.462221,0.658206,0.344382,0.641484,0.565769,0.628968,0.253903,0.397736,0.528907,0.679997,0.504891,0.606934,0.544002,0.419998,0.606372,0.584642,0.255437,0.364447,0.333487,0.526597,0.588961,0.428087,0.490275,0.524160,0.612198,0.424980,0.459163,0.612776,0.464972,0.470673,0.456229,0.505687,0.474946,0.397428,0.410177,0.546477,0.346659,0.406876,0.544909,0.564681,0.578923,0.402667,0.142242,0.460127,0.290067,0.529619,0.345525,0.394721,0.534050,0.316649,0.686343,0.546470,0.634655,0.580694,0.507407,0.682150,0.553972,0.492635,0.383154,0.611161,0.314525,0.601075,0.537600,0.600018,0.554181,0.277472,0.493642,0.479092,0.646604,0.677905,0.674040,0.708286,0.380925,0.663790,0.560904,0.322231,0.482197,0.487395,0.632893,0.462984,0.638685,0.390519,0.647753,0.647798,0.647060,0.560691,0.682864,0.632635,0.377208,0.625944,0.526306,0.256151,0.598987,0.467710,0.528411,0.538226,0.672523,0.541952,0.392636,0.688834,0.474848,0.522597,0.527487,0.287368,0.438611,0.456677,0.525362,0.622111,0.583871,0.609854,0.398510,0.473647,0.597997,0.665710,0.446695,0.374416,0.500958,0.489966,0.341617,0.352310,0.624027,0.454467,0.525157,0.487959,0.563294,0.593969,0.370773,0.454663,0.500144,0.305257,0.631587,0.617096,0.624949,0.508625,0.463144,0.613079,0.497085,0.654748,0.676572,0.366965,0.549343,0.287668,0.606082,0.614024,0.510152,0.235642,0.336803,0.392929,0.688473,0.390200,0.210415,0.543406,0.641614,0.474979,0.281867,0.394610,0.464613,0.587932,0.632562,0.465474,0.550577,0.470156,0.686897,0.454943,0.379310,0.459162,0.486755,0.627619,0.578326,0.581055,0.469457,0.496098,0.462111,0.489688,0.694602,0.371234,0.383588,0.398472,0.370446,0.458086,0.528146,0.602205,0.456434,0.502348,0.361215,0.739585,0.522410,0.656414,0.314050,0.470093,0.664129,0.217348,0.636629,0.339540,0.422318,0.468025,0.316085,0.486978,0.524513,0.582512,0.386770,0.465242,0.481580,0.433202,0.406978,0.614011,0.456144,0.581130,0.687674,0.233900,0.627120,0.356523,0.361808,0.453063,0.429036,0.576705,0.676037,0.576375,0.473446,0.332039,0.665459,0.446354,0.576458,0.712859,0.573239,0.642310,0.566148,0.627960,0.621941,0.575500,0.360608,0.460002,0.341519,0.476935,0.188600,0.713272,0.693443,0.667005,0.277614,0.392919,0.583177,0.523911,0.656926,0.349905,0.597284,0.606722,0.627511,0.373033,0.628408,0.590889,0.374996,0.403734,0.527271,0.684680,0.672995,0.600572,0.490774,0.598762,0.228016,0.596226,0.453433,0.609543,0.668789,0.593095,0.613168,0.528062,0.544097,0.666669,0.697725,0.353218,0.495156,0.621499,0.529189,0.506680,0.643280,0.558091,0.466757,0.705056,0.179797,0.270586,0.703406,0.595016,0.485490,0.548724,0.394010,0.673384,0.551303,0.469676,0.534047,0.462253,0.259898,0.492834,0.245440,0.537770,0.556753,0.655811,0.642264,0.603703,0.687937,0.271902,0.458578,0.557924,0.647347,0.463549,0.542800,0.655226,0.557501,0.560988,0.599168,0.604652,0.460254,0.403181,0.349891,0.647172,0.242221,0.345150,0.645773,0.377061,0.462290,0.623068,0.697220,0.625572,0.474977,0.627581,0.391664,0.573411,0.409333,0.479598,0.344106,0.357658,0.546748,0.656710,0.612931,0.538924,0.652493,0.666797,0.573936,0.306189,0.446436,0.655277,0.494871,0.484622,0.334425,0.377373,0.619555,0.383072,0.396790,0.400770,0.512609,0.470058,0.450372,0.439268,0.349224,0.398754,
  0.484815,0.439864,0.554232,0.529545,0.518070,0.643550,0.469636,0.555331,0.412215,0.477913,0.503920,0.492538,0.452836,0.406119,0.548414,0.441116,0.456827,0.455824,0.652200,0.451437,0.440812,0.468463,0.493329,0.506106,0.495739,0.639881,0.459796,0.548704,0.501072,0.529953,0.584170,0.408478,0.544224,0.486628,0.525616,0.579614,0.519923,0.444649,0.466439,0.510064,0.530352,0.370214,0.442604,0.462177,0.493373,0.506323,0.481832,0.593200,0.453939,0.468480,0.480541,0.514282,0.572626,0.410929,0.469317,0.576354,0.329526,0.494792,0.575027,0.504808,0.493097,0.534282,0.525302,0.421723,0.521233,0.431597,0.423539,0.479878,0.387941,0.484266,0.502870,0.509901,0.485840,0.477295,0.481217,0.489308,0.501871,0.496577,0.474810,0.610365,0.496273,0.510827,0.524179,0.528047,0.484926,0.503509,0.445588,0.528101,0.521009,0.472943,0.501297,0.482604,0.640534,0.498521,0.371897,0.472958,0.554829,0.475156,0.530856,0.558440,0.491506,0.599083,0.498116,0.560956,0.484972,0.475561,0.517313,0.540829,0.472093,0.457530,0.485901,0.506097,0.536024,0.512150,0.514855,0.509495,0.535325,0.454375,0.540214,0.462349,0.490110,0.509054,0.482809,0.528703,0.498216,0.478644,0.478061,0.493391,0.549293,0.456922,0.628941,0.493766,0.485924,0.568279,0.527323,0.493805,0.445050,0.516726,0.509836,0.373682,0.463360,0.506416,0.523072,0.488109,0.530854,0.428149,0.503167,0.608817,0.493508,0.280514,0.484232,0.525445,0.517450,0.461392,0.596684,0.460696,0.457052,0.500559,0.522485,0.545374,0.502620,0.458261,0.447936,0.510680,0.493546,0.451507,0.522632,0.403537,0.443146,0.473366,0.516617,0.428829,0.486092,0.485148,0.506444,0.527368,0.568566,0.453502,0.625569,0.456631,0.493177,0.515924,0.508864,0.526738,0.559254,0.534197,0.482472,0.107032,0.472388,0.502314,0.515838,0.519428,0.460865,0.535638,0.488153,0.566303,0.564299,0.454785,0.512339,0.452089,0.440384,0.541651,0.317690,0.547984,0.520424,0.474462,0.434998,0.543272,0.496560,0.510665,0.495457,0.507212,0.510648,0.406396,0.540507,0.516051,0.517125,0.464966,0.488891,0.557161,0.480789,0.423873,0.486047,0.424037,0.510714,0.490659,0.474846,0.524982,0.517252,0.359834,0.611836,0.484305,0.550431,0.502131,0.494626,0.472132,0.459916,0.482437,0.527056,0.511645,0.560089,0.515038,0.479845,0.447828,0.515566,0.545826,0.468069,0.512447,0.405962,0.467919,0.436164,0.495960,0.467361,0.517462,0.571671,0.491145,0.555844,0.445323,0.516039,0.521552,0.534909,0.480465,0.772301,0.419950,0.538351,0.527629,0.536435,0.458365,0.546064,0.507676,0.558546,0.516728,0.495984,0.416260,0.437581,0.517237,0.461513,0.631032,0.414407,0.459755,0.541859,0.386536,0.501579,0.466253,0.512839,0.442647,0.694416,0.465351,0.551174,0.506714,0.568055,0.539004,0.491558,0.452352,0.596451,0.635940,0.590107,0.530350,0.498960,0.462388,0.519189,0.508936,0.528210,0.553429,0.561651,0.505403,0.355783,0.533047,0.446698,0.538438,0.489128,0.474419,0.543086,0.514312,0.470135,0.585834,0.517534,0.552656,0.519062,0.503400,0.446999,0.507570,0.616928,0.455854,0.522037,0.495007,0.466604,0.510937,0.497525,0.349115,0.502704,0.604901,0.474801,0.424374,0.550502,0.521966,0.575643,0.469744,0.350389,0.515475,0.486006,0.476515,0.463867,0.652490,0.410524,0.493387,0.498576,0.491875,0.530345,0.433570,0.490624,0.571975,0.500128,0.538273,0.579726,0.528288,0.486341,0.522323,0.501023,0.497344,0.647009,0.527423,0.629933,0.492806,0.489134,0.483455,0.595853,0.528490,0.555159,0.562771,0.507714,0.521744,0.574790,0.617724,0.507500,0.552861,0.627290,0.644048,0.504232,0.562451,0.522616,0.578880,0.471942,0.485119,0.450664,0.460468,0.432515,0.493400,0.635775,0.485183,0.455405,0.408538,0.493286,0.494702,0.478209,0.507911,0.475592,0.435696,0.480815,0.692437,0.460164,0.497698,0.506783,0.535424,0.580253,0.537391,0.491770,0.510451,0.452967,0.510017,0.478897,0.511408,0.614444,0.451009,0.468926,0.493063,0.494090,0.497192,0.536352,0.475002,0.519174,0.414199,0.589907,0.514080,0.413319,0.458033,0.557794,0.489776,0.527935,0.538005,0.493604,0.442817,0.541659,0.532435,0.514172,0.535581,0.570427,0.511402,0.605087,0.480191,0.453477,0.524060,0.487672,0.464339,0.524765,0.464013,0.520494,0.526633,0.494208,0.466594,0.464743,0.638459,0.567299,0.572538,0.564279,0.335265,0.507635,0.339903,0.523537,0.507438,0.550811,0.483876,0.552057,0.453370,0.501204,0.514727,0.500456,0.455100,0.423258,0.410361,0.476111,0.527514,0.421333,0.426144,0.492027,0.511032,0.456480,0.489830,0.559264,0.475977,0.494350,0.578786,0.520620,0.524442,0.506021,0.478811,0.595573,0.495941,0.609540,0.534357,0.485858,0.431985,0.471284,0.506753,0.501417,0.509307,0.531918,0.724500,0.477148,0.495709,0.512750,0.337554,0.505880,0.509385,0.524969,0.593520,0.501883,0.436279,0.457275,0.544060,0.508749,0.551666,0.552520,0.436382,0.511724,0.405290,0.618597,0.431854,0.389855,0.532792,0.459185,0.549874,0.524608,0.413732,0.422431,0.468209,0.748388,0.423931,0.464895,0.459622,0.511329,0.492053,0.528024,0.546708,0.605697,0.495571,0.479515,0.456756,0.541720,0.563466,0.454420,0.477263,0.522339,0.337041,0.500361,0.523039,0.525499,0.533238,0.560949,0.466392,0.516890,0.650757,0.504719,0.610238,0.510479,0.479738,0.480059,0.474461,0.492200,0.428440,0.456266,0.454459,0.468899,0.557663,0.479902,0.481790,0.599977,0.541045,0.511335,0.688864,0.463496,0.530009,0.522376,0.453666,0.554507,0.536544,0.520658,0.347195,0.535187,0.565388,0.649361,0.484973,0.510962,0.502975,0.526394,0.414354,0.552070,0.408238,0.342966,0.391284,0.470363,0.570098,0.475193,0.502568,0.563268,0.472833,0.511791,0.556434,0.509793,0.558609,0.477803,0.467594,0.530691,0.556020,0.489955,0.487135,0.493273,0.558444,0.520728,0.526742,0.489283,0.501656,0.558477,0.494218,0.534560,0.497459,0.436180,0.588385,0.448841,0.259957,0.496568,0.533024,0.568584,0.488260,0.564360,0.549511,0.499172,0.474695,0.532717,0.494932,0.483901,0.519601,0.463595,0.511671,0.476517,0.476154,0.534894,0.507139,0.466663,0.460577,0.457643,0.460473,0.450442,0.542540,0.521706,0.558101,0.469429,0.546457,0.526849,0.474134,0.472831,0.439505,0.602540,0.495227,0.469880,0.520655,0.528859,0.408985,0.486464,0.444009,0.475499,0.671169,0.460476,0.461203,0.471861,0.507824,0.535515,0.551007,0.491620,0.487980,0.581305,0.409829,0.499213,0.500894,0.535285,0.525719,0.561555,0.537679,0.399267,0.512075,0.541428,0.486600,0.476875,0.499171,0.533397,0.504172,0.548840,0.467154,0.541645,0.477669,0.524518,0.518290,0.516199,0.403001,0.351264,0.405234,0.468492,0.519597,0.569370,0.520410,0.501487,0.528340,0.367831,0.506090,0.595643,0.511873,0.473420,0.444826,0.490510,0.500164,0.566809,0.462921,0.512470,0.519170,0.477659,0.386558,0.447439,0.507910,0.442546,0.432141,0.483088,0.591681,0.408043,0.650145,0.698442,0.498497,0.485299,0.493770,0.506010,0.517566,0.507460,0.450935,0.510648,0.476980,0.520345,0.599325,0.505345,0.433798,0.503402,0.568078,0.533300,0.562287,0.476501,0.516089,0.569370,0.489209,0.498179,0.512224,0.458200,0.599933,0.681256,0.699053,0.341526,0.494043,0.558957,0.533475,0.525783,0.539827,0.519427,0.510077,0.504005,0.515513,0.518432,0.438955,0.492423,0.471229,0.522115,0.581959,0.482958,0.565713,0.515227,0.385748,0.493638,0.589557,0.424649,0.518217,0.506801,0.514189,0.518971,0.637862,0.471439,0.472337,0.515692,0.553427,0.612050,0.519725,0.523508,0.296087,0.425999,0.490402,0.508915,0.501739,0.523537,0.516390,0.469900,0.466841,0.510095,0.515866,0.457032,0.440928,0.476010,0.487028,0.484541,0.434849,0.674238,0.511375,0.509260,0.542664,0.503224,0.467429,0.592275,0.456704,0.412612,0.485997,0.458361,0.511073,0.649596,0.496747,0.551748,0.508850,0.528044,0.396998,0.399883,0.526718,0.390826,0.479820,0.477050,0.563831,0.493537,0.556278,0.511504,0.493017,0.506455,0.378967,0.580003,0.473085,0.466075,0.491299,0.509495,0.424966,0.475489,0.532719,0.448448,0.433883,0.455608,0.496981,0.445827,0.449231,0.555942,0.467479,0.460948,0.515936,0.521553,0.536619,0.450050,0.545931,0.471534,0.263041,0.516428,0.536184,0.410285,0.520282,0.584391,0.581161,0.450593,0.503283,0.548974,0.525036,0.513826,0.514705,0.429248,0.608843,0.666430,0.470434,0.417106,0.580920,0.433228,0.608168,0.522601,0.471622,0.520266,0.501839,0.509528,0.485072,0.297995,0.547640,0.466468,0.588399,0.509995,0.515551,0.554574,0.472824,0.619110,0.480121,0.499947,0.651265,0.553552,0.553821,0.513179,0.441590,0.513443,0.430100,0.484805,0.504460,0.459027,0.491499,0.525381,0.532545,0.675153,0.484994,0.425019,0.496724,0.386641,0.393653,0.417065,0.462498,0.443788,0.443872,0.724500,0.537144,0.435998,0.496861,0.458086,0.506731,0.543634,0.591265,0.484686,0.500838,0.490277,0.577887,0.516338,0.559847,0.612468,0.429857,0.539939,0.521594,0.414289,0.533159,0.583066,0.620282,0.482200,0.508040,0.574285,0.439198,0.506753,0.436671,0.679852,0.532101,0.520582,0.433682,0.480640,0.622422,0.576354,0.609953,0.509767,0.509248,0.504657,0.600978,0.574622,0.220362,0.498459,0.562133,0.480581,0.601327,0.512236,0.585288,0.460169,0.628912,0.545687,0.596412,0.436440,0.388670,0.525633,0.530732,0.447552,0.527571,0.520542,0.603293,0.502832,0.551399,0.467057,0.515645,0.521655,0.447271,0.564561,0.497018,0.544115,0.529784,0.504405,0.502752,0.470092,0.554859,0.572311,0.568279,0.442277,0.523578,0.476343,0.500332,0.519426,0.523509,0.471210,0.497012,0.541201,0.527269,0.413732,0.504458,0.575372,0.424757,0.592392,0.539623,0.420974,0.507727,0.584460,0.454817,0.493735,0.502747,0.563855,0.452194,0.366178,0.541333,0.457060,0.481749,0.339629,0.460758,0.543544,0.515369,0.460476,0.505261,0.478975,0.509053,0.486959,0.504059,0.423366,0.504441,0.544883,0.489667,0.507780,0.503333,0.531663,0.551679,0.532539,0.506960,0.643372,0.486525,0.497057,0.460922,0.483100,0.528210,0.479559,0.507091,0.505350,0.488556,0.500673,0.494111,0.602387,0.533260,0.406929,0.508450,0.517026,0.392931,0.469246,0.464691,0.501929,0.510549,0.477624,0.536735,0.582914,0.582940,0.520345,0.494883,0.507862,0.462248,0.448936,0.719305,0.530612,0.467736,0.620872,0.417574,0.733818,0.509321,0.517476,0.515834,0.516106,0.512646,0.518062,0.518699,0.511802,0.449896,0.529269,0.474135,0.502490,0.519418,0.532839,0.491566,0.492641,0.514765,0.516007,0.507163,0.419283,0.552272,0.449385,0.511334,0.377570,0.486112,0.534115,0.497434,0.390151,0.483279,0.503768,0.440112,0.391369,0.472762,0.478305,0.617131,0.452945,0.488350,0.492898,0.528568,0.466414,0.446296,0.567338,0.547004,0.515694,0.522973,0.526175,0.499488,0.445956,0.607950,0.530536,0.622748,0.531680,0.548119,0.507984,0.393960,0.467950,0.516661,0.537924,0.424777,0.520841,0.467969,0.508931,0.457449,0.489753,0.551954,0.510588,0.535681,0.439680,0.409285,0.578037,0.535525,0.526239,0.550378,0.483613,0.514831,0.488034,0.515450,0.472759,0.505962,0.450635,0.573118,0.263041,0.490688,0.543137,0.471893,0.554553,0.448124,0.467152,0.422757,0.554926,0.484419,0.476419,0.564342,0.557112,0.465092,0.557619,0.510093,0.518481,0.549551,0.527788,0.478794,0.397988,0.394032,0.312337,0.425733,0.466473,0.493821,0.514109,0.510829,0.694416,0.572004,0.540795,0.520150,0.503795,0.570389,0.488284,0.500565,0.481835,0.405913,0.481909,0.564471,0.573904,0.659786,0.535126,0.609586,0.415609,0.371339,0.505056,0.468699,0.479812,0.483451,0.387533,0.463017,0.523750,0.507256,0.432362,0.440277,0.482930,0.467582,0.523321,0.509687,0.456525,0.464138,
  0.564460,0.571091,0.549641,0.500825,0.526547,0.705491,0.428310,0.530003,0.489516,0.523598,0.560368,0.478233,0.514636,0.527140,0.499368,0.574664,0.509377,0.427365,0.569623,0.539610,0.560831,0.557430,0.454174,0.515206,0.505112,0.548505,0.576638,0.537693,0.574570,0.538469,0.551568,0.575396,0.522781,0.490350,0.564829,0.570928,0.589165,0.551694,0.532055,0.515147,0.586572,0.508499,0.541044,0.625153,0.504559,0.459465,0.428859,0.559777,0.442751,0.523920,0.545461,0.564044,0.545392,0.445362,0.528593,0.489002,0.437326,0.553463,0.668636,0.532509,0.581019,0.542072,0.532688,0.463023,0.536144,0.580921,0.579540,0.548945,0.514520,0.549895,0.596154,0.525681,0.556525,0.550011,0.558753,0.563687,0.503781,0.547928,0.540921,0.520329,0.538848,0.523128,0.484826,0.558343,0.503997,0.573780,0.541686,0.567984,0.577909,0.515417,0.510887,0.471594,0.554672,0.512682,0.298473,0.548662,0.542841,0.515024,0.538180,0.525985,0.484823,0.524269,0.577564,0.531819,0.551397,0.444823,0.582786,0.455984,0.558716,0.444642,0.460785,0.518493,0.569271,0.550474,0.460279,0.474291,0.463217,0.512840,0.544943,0.521567,0.482707,0.523219,0.493403,0.521815,0.503460,0.454716,0.492925,0.495102,0.543406,0.452507,0.543312,0.518274,0.545310,0.508711,0.503920,0.555984,0.573962,0.515533,0.437551,0.467570,0.435190,0.485211,0.566883,0.451470,0.516161,0.571705,0.528174,0.538594,0.587359,0.455627,0.425148,0.553958,0.518496,0.410001,0.575839,0.531484,0.445061,0.496891,0.456794,0.574665,0.519506,0.556811,0.427333,0.519611,0.440442,0.497029,0.528688,0.550051,0.470229,0.442520,0.576457,0.575833,0.542826,0.536539,0.522989,0.462679,0.567288,0.536666,0.548710,0.429835,0.572530,0.509607,0.559901,0.517833,0.554030,0.481874,0.494822,0.096942,0.524151,0.450042,0.558407,0.568427,0.512976,0.548453,0.505208,0.529498,0.449794,0.603781,0.472541,0.551187,0.540243,0.514201,0.570502,0.522371,0.576426,0.372344,0.580415,0.540249,0.474966,0.537413,0.565280,0.456974,0.528713,0.467935,0.462108,0.529069,0.480418,0.538860,0.548976,0.463444,0.516374,0.568520,0.550231,0.559898,0.523689,0.521158,0.539147,0.526002,0.469004,0.592014,0.552480,0.558919,0.520383,0.556288,0.503507,0.530097,0.521486,0.446004,0.463812,0.441667,0.576909,0.539877,0.544465,0.432822,0.576884,0.536769,0.518181,0.536766,0.552628,0.512831,0.254043,0.472835,0.524506,0.550195,0.585247,0.477770,0.450885,0.504563,0.580022,0.574411,0.501251,0.518845,0.658977,0.559287,0.513508,0.533027,0.493810,0.539710,0.555596,0.517764,0.465943,0.524588,0.515539,0.578918,0.498673,0.534789,0.509596,0.572273,0.571748,0.447961,0.542012,0.406113,0.547452,0.576855,0.560896,0.612822,0.789542,0.519916,0.551388,0.508212,0.428584,0.587377,0.563475,0.431961,0.601110,0.570510,0.555896,0.588967,0.522887,0.517045,0.564110,0.601449,0.490705,0.474540,0.484659,0.528110,0.474922,0.536372,0.535207,0.460553,0.465560,0.531656,0.515467,0.487607,0.527115,0.506986,0.519070,0.531155,0.499466,0.533156,0.525699,0.466021,0.758465,0.458934,0.487297,0.517855,0.461132,0.562780,0.482768,0.500720,0.518659,0.533226,0.509944,0.568276,0.528166,0.521904,0.477833,0.520994,0.458280,0.524267,0.522039,0.425310,0.424703,0.555911,0.553835,0.519519,0.553237,0.437616,0.409158,0.575744,0.394857,0.503515,0.480022,0.537448,0.524913,0.482961,0.545961,0.516004,0.516434,0.556805,0.363654,0.524782,0.400984,0.527751,0.524843,0.529491,0.559962,0.570474,0.548546,0.526192,0.563353,0.583744,0.455454,0.774338,0.517355,0.452048,0.537108,0.667378,0.540788,0.499893,0.531261,0.537384,0.547515,0.552882,0.544085,0.517495,0.474202,0.559566,0.561145,0.581109,0.430690,0.539231,0.554111,0.464990,0.431529,0.517327,0.439016,0.442056,0.432234,0.685366,0.499917,0.518772,0.516706,0.477861,0.550428,0.465971,0.493308,0.525041,0.527848,0.449464,0.579663,0.490040,0.625553,0.416070,0.514690,0.455370,0.566810,0.525460,0.454801,0.432837,0.585585,0.577871,0.588724,0.549969,0.565782,0.521111,0.530927,0.555401,0.689632,0.525913,0.494170,0.575003,0.477356,0.555878,0.454579,0.521910,0.504195,0.547030,0.601661,0.545329,0.589239,0.534679,0.554714,0.511257,0.482731,0.541487,0.439552,0.521571,0.471926,0.531608,0.542778,0.604259,0.559234,0.477912,0.542052,0.479867,0.547451,0.459493,0.532575,0.477894,0.513769,0.540988,0.566103,0.434881,0.515412,0.495630,0.516652,0.439088,0.492126,0.568337,0.570876,0.512820,0.600559,0.440071,0.557680,0.540822,0.536686,0.423993,0.511115,0.564776,0.496757,0.446457,0.577150,0.494943,0.505164,0.519787,0.536539,0.512303,0.471993,0.537618,0.576772,0.573501,0.525323,0.553408,0.562707,0.584090,0.581667,0.670813,0.523077,0.543149,0.533574,0.462167,0.511144,0.527685,0.550494,0.546157,0.521992,0.580121,0.517055,0.463350,0.570294,0.576229,0.493207,0.523357,0.582084,0.462831,0.662077,0.566240,0.391852,0.473932,0.441864,0.450364,0.579372,0.525637,0.511861,0.545050,0.829834,0.564810,0.522674,0.520636,0.506502,0.490958,0.533961,0.526623,0.500653,0.586472,0.530610,0.499266,0.565397,0.502962,0.500501,0.424180,0.456079,0.492649,0.624671,0.521175,0.495452,0.518946,0.426133,0.575920,0.553425,0.612218,0.556180,0.545261,0.516057,0.533230,0.549549,0.555436,0.500529,0.482630,0.518669,0.506763,0.427734,0.526373,0.514209,0.428459,0.565478,0.463877,0.512825,0.563288,0.500881,0.561659,0.567909,0.534055,0.488843,0.463874,0.466765,0.496925,0.494712,0.541619,0.542413,0.496358,0.546862,0.535008,0.599035,0.585980,0.522108,0.520956,0.358218,0.557457,0.547034,0.413135,0.559390,0.564105,0.522021,0.556407,0.437221,0.462073,0.465634,0.512223,0.537837,0.514627,0.582268,0.576712,0.541052,0.574311,0.564904,0.526311,0.491133,0.554751,0.488027,0.479608,0.520365,0.548878,0.469439,0.514899,0.576005,1.000000,0.438550,0.478496,0.573727,0.509876,0.499033,0.512416,0.475132,0.432061,0.500689,0.551718,0.568515,0.531838,0.580695,0.439080,0.513968,0.466478,0.577243,0.422994,0.478315,0.537330,0.536008,0.506308,0.550423,0.534932,0.499201,0.508497,0.478962,0.533277,0.506379,0.593643,0.500379,0.603248,0.529542,0.539676,0.468523,0.502360,0.411270,0.599689,0.517382,0.521898,0.462259,0.417480,0.565239,0.348524,0.470888,0.432016,0.528520,0.481950,0.459772,0.539742,0.558309,0.557208,0.518020,0.576673,0.556096,0.528885,0.480150,0.518840,0.501328,0.546908,0.616559,0.468496,0.515739,0.842131,0.524170,0.559655,0.545980,0.546692,0.538010,0.566731,0.518324,0.563810,0.531779,0.503893,0.515105,0.582896,0.413228,0.538298,0.427791,0.563136,0.609608,0.504613,0.558172,0.567705,0.347607,0.513031,0.509287,0.544382,0.549273,0.544628,0.528585,0.496632,0.478019,0.438213,0.549968,0.530109,0.525855,0.546659,0.589825,0.514153,0.407418,0.571959,0.522671,0.526238,0.551314,0.570966,0.783572,0.592319,0.429932,0.453946,0.580161,0.492157,0.570497,0.560729,0.570715,0.560259,0.602646,0.475400,0.566935,0.583946,0.528479,0.463611,0.483018,0.444912,0.527395,0.561720,0.609608,0.508964,0.491801,0.561465,0.432773,0.564983,0.529714,0.473095,0.620121,0.487056,0.583691,0.556094,0.508542,0.583740,0.525792,0.552361,0.441815,0.496712,0.494112,0.541628,0.551092,0.509965,0.516035,0.563852,0.559816,0.550184,0.502971,0.481216,0.581710,0.472646,0.443989,0.486036,0.559728,0.512097,0.569127,0.543709,0.591352,0.427898,0.488731,0.485416,0.599163,0.569672,0.533497,0.567860,0.551511,0.456632,0.501643,0.536943,0.532575,0.565656,0.470296,0.536030,0.577812,0.567200,0.481757,0.532589,0.418867,0.525831,0.554661,0.551369,0.666192,0.511181,0.521813,0.600776,0.657645,0.480576,0.527008,0.569922,0.577463,0.441377,0.531818,0.550793,0.457715,0.551751,0.523370,0.549443,0.510504,0.583186,0.476044,0.501047,0.446427,0.550152,0.551216,0.538106,0.478585,0.489391,0.553741,0.456881,0.448321,0.426254,0.575040,0.548473,0.511358,0.452205,0.556563,0.481076,0.480079,0.508858,0.424389,0.604538,0.560752,0.527853,0.522011,0.517949,0.513557,0.497718,0.539824,0.480721,0.514873,0.583487,0.496020,0.587698,0.550997,0.557712,0.541072,0.464202,0.498528,0.517859,0.567779,0.524784,0.550437,0.419977,0.608934,0.515372,0.544134,0.501785,0.536816,0.592983,0.474088,0.431814,0.572786,0.623259,0.531527,0.548480,0.413526,0.436807,0.457719,0.552888,0.552180,0.563783,0.515983,0.518698,0.581341,0.644694,0.513025,0.547001,0.590349,0.506315,0.637390,0.529139,0.543492,0.495484,0.607971,0.591624,0.537519,0.553018,0.501994,0.569616,0.535067,0.508394,0.543437,0.558155,0.493071,0.422845,0.487755,0.539640,0.604696,0.602412,0.556438,0.475280,0.416026,0.531836,0.458437,0.590725,0.670813,0.546412,0.554201,0.503030,0.534050,0.527270,0.496212,0.549607,0.556442,0.523522,0.511652,0.477511,0.457193,0.598459,0.596706,0.583221,0.514880,0.558958,0.521623,0.513086,0.522534,0.524361,0.570230,0.501593,0.572063,0.577252,0.553408,0.535340,0.625707,0.512323,0.484749,0.554247,0.446672,0.587362,0.489002,0.586315,0.478003,0.473830,0.546302,0.535359,0.551085,0.830301,0.511012,0.583643,0.514469,0.528680,0.431532,0.565405,0.567063,0.524113,0.573206,0.572720,0.485193,0.545008,0.608810,0.549831,0.522949,0.468997,0.519511,0.551598,0.543021,0.543623,0.480757,0.496266,0.564151,0.556910,0.602709,0.547192,0.511786,0.593035,0.499652,0.531783,0.543795,0.537290,0.564936,0.508711,0.542667,0.568666,0.497154,0.565137,0.481930,0.533080,0.462504,0.576650,0.577680,0.465038,0.525637,0.424129,0.515857,0.564473,0.506684,0.546488,0.462986,0.507322,0.554722,0.576153,0.600325,0.565035,0.570291,0.493876,0.584979,0.327207,0.421576,0.517412,0.469354,0.555471,0.577418,0.523068,0.444025,0.557321,0.459649,0.553694,0.427353,0.550231,0.436067,0.564083,0.545459,0.436124,0.513845,0.511678,0.565712,0.546888,0.562135,0.482625,0.552152,0.497954,0.553684,0.549047,0.551180,0.505171,0.546238,0.508237,0.547214,0.438027,0.581727,0.449192,0.596618,0.549034,0.503475,0.549816,0.455593,0.572083,0.432924,0.575357,0.555401,0.557964,0.545120,0.578183,0.566450,0.537121,0.602646,0.578485,0.553485,0.510637,0.537410,0.539680,0.558177,0.517018,0.536652,0.496486,0.735164,0.529907,0.478487,0.558309,0.589223,0.500229,0.464365,0.498652,0.557280,0.506092,0.478413,0.536506,0.461763,0.462576,0.516202,0.439600,0.537367,0.454753,0.412771,0.512831,0.476740,0.599442,0.544412,0.526355,0.581754,0.430994,0.473921,0.436458,0.636035,0.557601,0.513867,0.528222,0.512590,0.514752,0.513448,0.565960,0.472264,0.560530,0.441728,0.573118,0.457853,0.546931,0.496061,0.440668,0.424235,0.492930,0.524634,0.509362,0.558008,0.485769,0.504909,0.522620,0.498292,0.513287,0.455476,0.539963,0.520557,0.463016,0.425142,0.538500,0.558331,0.509667,0.486513,0.548125,0.450063,0.482073,0.552969,0.420937,0.602190,0.580012,0.583426,0.531599,0.496167,0.617394,0.549399,0.500457,0.506224,0.556423,0.475531,0.548025,0.591586,0.523694,0.557712,0.531980,0.540741,0.411884,0.429035,0.459639,0.460841,0.567507,0.624947,0.543816,0.428139,0.575355,0.574064,0.420921,0.539507,0.515371,0.517680,0.528644,0.562249,0.501086,0.520313,0.415804,0.324861,0.563927,0.438800,0.570080,0.513354,0.506807,0.789542,0.524609,0.505156,0.450616,0.485670,0.553267,0.559317,0.508301,0.555405,0.469668,0.552676,0.534658,0.550266,0.564959,0.418588,0.523456,0.515960,0.487433,0.526217,0.445358,0.539467,0.553309,0.576714,0.555511,0.519310,0.484474,0.554494,0.549664,0.554181,0.530459,0.502274,0.568521,0.577033,0.552116,
  0.539086,0.560586,0.492333,0.457894,0.480118,0.513243,0.371011,0.478427,0.429026,0.454447,0.525481,0.435443,0.524966,0.501599,0.480461,0.544967,0.502414,0.379874,0.468642,0.534151,0.539632,0.524029,0.455763,0.486062,0.514681,0.562071,0.591590,0.492811,0.503288,0.532753,0.490047,0.558352,0.470715,0.507278,0.528632,0.494534,0.524116,0.526105,0.481767,0.474144,0.527719,0.542389,0.555507,0.440036,0.542048,0.451258,0.373454,0.493538,0.409954,0.535125,0.517836,0.549404,0.504076,0.464192,0.528670,0.450920,0.535008,0.524239,0.586713,0.541597,0.602457,0.509608,0.486228,0.427095,0.491365,0.556987,0.569209,0.547025,0.505030,0.542180,0.538593,0.479047,0.513430,0.522992,0.499536,0.555613,0.481279,0.513284,0.508463,0.447835,0.537094,0.484147,0.459696,0.518211,0.530987,0.536900,0.517294,0.537534,0.540864,0.501531,0.481700,0.450708,0.469890,0.518103,0.231618,0.552578,0.481535,0.486305,0.509037,0.494912,0.513200,0.410392,0.545261,0.493478,0.515090,0.401154,0.553980,0.431235,0.535174,0.399673,0.522778,0.472424,0.525906,0.507276,0.434387,0.510742,0.444067,0.488732,0.503520,0.528352,0.504334,0.478315,0.452254,0.450544,0.497834,0.437643,0.474936,0.490684,0.524103,0.427380,0.465232,0.501644,0.542442,0.416844,0.465775,0.565526,0.517192,0.472069,0.451564,0.538922,0.371362,0.454569,0.512836,0.453585,0.508499,0.591136,0.547077,0.469158,0.553807,0.901386,0.379131,0.494851,0.516775,0.372564,0.498534,0.537750,0.403058,0.479575,0.415504,0.542349,0.497031,0.486472,0.384113,0.488706,0.377139,0.484278,0.527585,0.529002,0.533858,0.391384,0.525394,0.587839,0.499269,0.507363,0.475266,0.415937,0.474422,0.498437,0.471471,0.385215,0.529250,0.463594,0.545817,0.491774,0.504888,0.462608,0.510791,0.089318,0.522176,0.396846,0.550410,0.546045,0.482120,0.541876,0.472102,0.477940,0.405790,0.676192,0.445177,0.526600,0.513354,0.462108,0.547624,0.491718,0.536611,0.504725,0.569250,0.506005,0.453915,0.505041,0.535463,0.437559,0.465928,0.404080,0.447647,0.493578,0.443830,0.537531,0.511600,0.430619,0.480909,0.541635,0.467254,0.572895,0.490875,0.500520,0.542387,0.484973,0.441065,0.746186,0.460789,0.535464,0.478401,0.532371,0.440765,0.494569,0.481380,0.396412,0.416218,0.417266,0.516429,0.507893,0.519546,0.406311,0.559844,0.501218,0.523750,0.497222,0.540523,0.535237,0.318734,0.457252,0.527525,0.522284,0.504132,0.531977,0.413229,0.507293,0.544381,0.544130,0.461059,0.514108,0.457158,0.545368,0.523779,0.523315,0.470421,0.488149,0.517109,0.493160,0.410693,0.484653,0.494122,0.546106,0.511280,0.524285,0.475701,0.477449,0.554181,0.406911,0.515401,0.386631,0.522571,0.553671,0.516253,0.447553,0.681793,0.473134,0.489315,0.469764,0.192622,0.515476,0.525663,0.484751,0.530631,0.475857,0.493261,0.527618,0.507936,0.498534,0.563852,0.556525,0.471009,0.419825,0.446611,0.494749,0.576731,0.502093,0.495955,0.473642,0.448773,0.523745,0.477010,0.514794,0.519318,0.469438,0.551358,0.478248,0.483607,0.514246,0.509660,0.398940,0.631502,0.432455,0.456005,0.500753,0.552091,0.532577,0.492574,0.500750,0.476490,0.444666,0.477908,0.521144,0.491415,0.476136,0.442492,0.494781,0.423153,0.518346,0.482602,0.368772,0.376416,0.471285,0.545328,0.524231,0.516028,0.377764,0.437003,0.517505,0.433525,0.451456,0.480684,0.496768,0.481079,0.466671,0.530543,0.491482,0.519185,0.540064,0.391691,0.481429,0.125718,0.471766,0.483371,0.527790,0.482286,0.533405,0.505735,0.281088,0.575267,0.555113,0.398034,0.808632,0.475601,0.424185,0.451867,0.659514,0.534900,0.503250,0.498227,0.458283,0.548041,0.522621,0.514822,0.534482,0.429886,0.502204,0.469933,0.555211,0.382710,0.485703,0.520014,0.513971,0.371223,0.487386,0.384668,0.414863,0.375864,0.627306,0.464130,0.537850,0.502971,0.455422,0.488624,0.442378,0.475017,0.473809,0.505664,0.384918,0.553654,0.459266,0.630141,0.360749,0.523886,0.454355,0.534034,0.522063,0.480046,0.377495,0.544812,0.563148,0.490285,0.517308,0.562667,0.482482,0.481767,0.531269,0.611328,0.485312,0.514117,0.552004,0.456859,0.600366,0.428261,0.493850,0.478173,0.517388,0.486040,0.510631,0.610287,0.519683,0.521494,0.482192,0.493771,0.524206,0.413361,0.474067,0.428339,0.497425,0.527215,0.549686,0.527220,0.424877,0.489865,0.451621,0.513601,0.552054,0.513696,0.492198,0.468546,0.506408,0.519303,0.396102,0.489958,0.465664,0.490331,0.414018,0.519392,0.563316,0.590471,0.475439,0.598946,0.398966,0.549355,0.382472,0.525834,0.373590,0.489336,0.563733,0.475031,0.415076,0.547888,0.490744,0.471126,0.458294,0.474433,0.539247,0.422402,0.496691,0.547751,0.581768,0.510982,0.530028,0.532315,0.542626,0.573733,0.542155,0.490419,0.505123,0.501865,0.450123,0.488388,0.532149,0.524130,0.484985,0.506087,0.568518,0.480405,0.429946,0.545071,0.526087,0.407865,0.498382,0.539261,0.553250,0.577759,0.547561,0.481563,0.436163,0.408150,0.422797,0.537843,0.524941,0.490264,0.505226,0.899884,0.549253,0.525133,0.534682,0.486344,0.537569,0.509816,0.498226,0.478062,0.554772,0.531524,0.504653,0.523752,0.476293,0.458009,0.371971,0.434284,0.526331,0.581841,0.506036,0.513904,0.488576,0.401308,0.512637,0.523431,0.578319,0.507348,0.470541,0.551698,0.565399,0.549565,0.529801,0.455873,0.528985,0.521213,0.480004,0.383232,0.476263,0.489466,0.378520,0.485799,0.429667,0.590526,0.535139,0.527770,0.527235,0.555649,0.496547,0.465047,0.433400,0.455696,0.397870,0.458122,0.484827,0.523743,0.512546,0.543633,0.512192,0.574834,0.567422,0.489544,0.519495,0.299722,0.557623,0.502872,0.352875,0.574896,0.537927,0.476317,0.533983,0.376669,0.428737,0.495735,0.487483,0.515080,0.515048,0.534326,0.496199,0.515513,0.592807,0.534359,0.495420,0.453931,0.490952,0.443648,0.503474,0.479669,0.521069,0.431692,0.470383,0.570043,0.899876,0.396048,0.444053,0.548068,0.557801,0.417946,0.488957,0.486950,0.469580,0.461638,0.528841,0.556440,0.522568,0.546688,0.461937,0.472637,0.435734,0.548831,0.370950,0.493568,0.510874,0.539824,0.467810,0.523951,0.499928,0.467533,0.454399,0.433304,0.489691,0.511890,0.554046,0.504063,0.556465,0.525554,0.546739,0.421727,0.474468,0.501274,0.554267,0.476309,0.651079,0.418207,0.381045,0.539012,0.364049,0.575407,0.404036,0.526333,0.452431,0.411689,0.505152,0.516459,0.531618,0.487432,0.550610,0.527810,0.498755,0.460130,0.486440,0.480003,0.513137,0.446203,0.437167,0.491720,0.627745,0.498145,0.538874,0.498149,0.511835,0.503131,0.565529,0.476812,0.508039,0.476862,0.553557,0.488382,0.574690,0.431151,0.547574,0.389462,0.542808,0.563900,0.500401,0.530495,0.532121,0.227278,0.487078,0.437570,0.501917,0.542466,0.516051,0.517865,0.455868,0.437352,0.404917,0.485561,0.497924,0.489481,0.532510,0.590113,0.489071,0.365599,0.555664,0.506671,0.478747,0.553273,0.478132,0.538384,0.529748,0.377127,0.435153,0.545703,0.456833,0.535406,0.537906,0.542996,0.538593,0.570637,0.421469,0.542280,0.551904,0.487204,0.407906,0.473473,0.460331,0.454839,0.504676,0.563900,0.497857,0.454027,0.527399,0.378136,0.441191,0.454671,0.390684,0.513203,0.417659,0.524016,0.550789,0.474940,0.547700,0.492154,0.516038,0.390148,0.462090,0.446147,0.516678,0.523791,0.477738,0.510776,0.513040,0.473329,0.537984,0.468592,0.614815,0.548848,0.447184,0.403359,0.474306,0.520993,0.485145,0.535960,0.440912,0.589060,0.385778,0.447268,0.429608,0.523869,0.534765,0.493472,0.598426,0.547678,0.502850,0.466539,0.501145,0.513696,0.552004,0.488508,0.519166,0.529520,0.519540,0.444261,0.508959,0.372793,0.507124,0.531913,0.536448,0.460743,0.493179,0.493458,0.556837,0.686265,0.455996,0.475105,0.552528,0.570704,0.360649,0.508647,0.524168,0.382881,0.472398,0.516896,0.529188,0.510900,0.577576,0.453582,0.463543,0.410403,0.523885,0.598971,0.549392,0.524077,0.467904,0.518753,0.409648,0.551091,0.459500,0.481658,0.521488,0.499098,0.449397,0.529309,0.504014,0.498312,0.475574,0.382810,0.599055,0.531752,0.470682,0.530498,0.479104,0.536870,0.503365,0.500692,0.436744,0.523171,0.538745,0.468136,0.544348,0.518017,0.365366,0.544799,0.469680,0.535649,0.500580,0.510631,0.471930,0.521637,0.358056,0.539707,0.489847,0.533116,0.465242,0.512402,0.514918,0.359997,0.380445,0.550166,0.534105,0.524982,0.465929,0.487593,0.472440,0.465308,0.525607,0.551980,0.524778,0.495002,0.498606,0.567689,0.580652,0.486284,0.526663,0.576241,0.504798,0.614884,0.516081,0.518594,0.437173,0.541655,0.502394,0.535449,0.554301,0.517903,0.534442,0.505620,0.490086,0.510377,0.528322,0.519624,0.517429,0.375631,0.505950,0.593532,0.537267,0.581179,0.505513,0.389918,0.525297,0.508685,0.568177,0.542155,0.511736,0.506429,0.502982,0.519117,0.450394,0.522178,0.492273,0.527432,0.469051,0.507524,0.397926,0.515408,0.535074,0.479481,0.583186,0.469359,0.520140,0.519201,0.465488,0.470015,0.468373,0.540136,0.459655,0.472925,0.570945,0.530028,0.511872,0.514082,0.510523,0.447978,0.534288,0.386496,0.475567,0.450920,0.531337,0.447668,0.438045,0.537126,0.468653,0.533245,0.721819,0.476825,0.532509,0.512493,0.463647,0.365960,0.495047,0.554746,0.470049,0.483401,0.505826,0.503352,0.583340,0.521526,0.513928,0.482630,0.441923,0.495796,0.534592,0.532665,0.471821,0.460566,0.450437,0.530048,0.541490,0.614218,0.507312,0.516095,0.471328,0.467018,0.510356,0.504542,0.476642,0.471818,0.416844,0.512458,0.530822,0.557978,0.610101,0.440913,0.501942,0.494875,0.501802,0.528451,0.481067,0.524941,0.370782,0.459080,0.558359,0.458574,0.527463,0.487966,0.475224,0.428645,0.500197,0.542259,0.541458,0.508437,0.505383,0.570633,0.319748,0.367623,0.525875,0.527864,0.536866,0.507330,0.490782,0.415023,0.531903,0.445986,0.513768,0.396515,0.518204,0.409671,0.514614,0.459528,0.392434,0.486697,0.484046,0.506099,0.485882,0.532341,0.499195,0.462396,0.479961,0.528189,0.531232,0.529016,0.527890,0.525282,0.474842,0.507214,0.421380,0.577844,0.385328,0.548106,0.506006,0.499038,0.527335,0.424565,0.627091,0.399014,0.576357,0.526837,0.529103,0.487670,0.553563,0.515601,0.487908,0.570637,0.540677,0.581769,0.581771,0.524312,0.406386,0.514317,0.483303,0.468623,0.560497,0.649234,0.510924,0.472403,0.527821,0.590186,0.465396,0.419673,0.472145,0.526983,0.530566,0.439689,0.553881,0.430403,0.426980,0.468070,0.390787,0.497853,0.410500,0.370685,0.486896,0.472616,0.524242,0.523503,0.516089,0.597209,0.422907,0.433716,0.391270,0.592386,0.535929,0.485634,0.507502,0.486848,0.515611,0.483690,0.433743,0.501283,0.542722,0.396707,0.514105,0.490583,0.533617,0.398102,0.440474,0.357094,0.453112,0.511009,0.482081,0.490460,0.428061,0.506623,0.471825,0.458972,0.453259,0.489469,0.534429,0.379718,0.429817,0.438976,0.533648,0.546335,0.457679,0.473295,0.527572,0.414137,0.542738,0.520084,0.419900,0.598090,0.564121,0.517350,0.487233,0.504930,0.536136,0.528470,0.454187,0.495245,0.524418,0.494860,0.527733,0.594366,0.477916,0.365366,0.493595,0.504827,0.355346,0.461897,0.515130,0.438318,0.554030,0.568565,0.518541,0.386455,0.503877,0.538105,0.394321,0.553374,0.496139,0.488295,0.480432,0.527224,0.515608,0.533472,0.467393,0.278349,0.549831,0.380193,0.545359,0.513277,0.477190,0.681793,0.469877,0.513328,0.402471,0.486046,0.395270,0.548645,0.536373,0.521286,0.476664,0.486658,0.478413,0.574250,0.467574,0.466452,0.469387,0.502924,0.577072,0.524880,0.409246,0.513280,0.518538,0.439028,0.535995,0.471029,0.489118,0.535509,0.534681,0.505786,0.517072,0.505505,0.538373,0.454986,0.534875,
  0.549343,0.576084,0.477213,0.434079,0.464071,0.524998,0.405807,0.456092,0.540501,0.508392,0.523971,0.512744,0.531637,0.545191,0.520815,0.545170,0.546718,0.429761,0.444500,0.576968,0.550555,0.529043,0.498545,0.516811,0.513547,0.554014,0.570831,0.482105,0.505682,0.550019,0.496939,0.574821,0.443651,0.580826,0.524917,0.498818,0.516995,0.527027,0.540711,0.490610,0.529643,0.507832,0.592524,0.552382,0.609061,0.524547,0.456762,0.481212,0.487754,0.553140,0.536472,0.537932,0.512435,0.539235,0.526498,0.447077,0.516206,0.528973,0.582320,0.515986,0.576908,0.528035,0.474702,0.438857,0.497397,0.595705,0.591309,0.583489,0.539319,0.578110,0.512947,0.460866,0.524067,0.543120,0.511709,0.580023,0.496678,0.515759,0.527606,0.435935,0.522036,0.491476,0.478244,0.507655,0.579834,0.511796,0.519515,0.542672,0.535542,0.578688,0.502440,0.488758,0.462408,0.518124,0.297106,0.601324,0.463863,0.500019,0.485835,0.512011,0.583036,0.436025,0.548482,0.498524,0.505515,0.438943,0.545355,0.458092,0.546409,0.484330,0.513077,0.461581,0.514088,0.519207,0.463532,0.583576,0.465073,0.506774,0.473644,0.529702,0.519410,0.464156,0.460811,0.658431,0.551864,0.509513,0.512287,0.541267,0.585781,0.540525,0.449823,0.518865,0.510699,0.417305,0.443627,0.590280,0.503567,0.482792,0.449019,0.602911,0.435103,0.485016,0.492047,0.448654,0.507128,0.620070,0.590465,0.439938,0.540958,0.809930,0.467241,0.445615,0.511081,0.472771,0.500194,0.561940,0.459116,0.529014,0.448502,0.533576,0.521368,0.475549,0.452401,0.488896,0.417289,0.501182,0.514046,0.554222,0.549484,0.462603,0.500265,0.619136,0.500894,0.491126,0.459435,0.461458,0.423425,0.485095,0.455813,0.397454,0.534734,0.486680,0.564712,0.489635,0.489166,0.453333,0.554996,0.198563,0.527991,0.417306,0.541233,0.526747,0.496010,0.601995,0.493917,0.456722,0.435305,0.493445,0.455200,0.529255,0.524857,0.433100,0.523794,0.480451,0.526110,0.551907,0.603243,0.484243,0.464260,0.515613,0.528078,0.460818,0.451823,0.434027,0.471507,0.500835,0.452235,0.541552,0.514870,0.469825,0.483776,0.559203,0.431845,0.600461,0.510140,0.519453,0.554965,0.503712,0.434369,0.821869,0.457298,0.542351,0.456578,0.551738,0.523611,0.488327,0.475744,0.464526,0.457977,0.441429,0.495038,0.516797,0.542510,0.485907,0.525645,0.580078,0.523983,0.500752,0.543964,0.488958,0.396397,0.548108,0.522956,0.533442,0.530853,0.597159,0.421676,0.565261,0.542651,0.524407,0.473835,0.548939,0.342658,0.570978,0.523864,0.556451,0.494785,0.504809,0.496117,0.510006,0.432433,0.490879,0.520600,0.570825,0.517768,0.548543,0.485016,0.465511,0.570276,0.463989,0.498607,0.424918,0.517938,0.551986,0.538741,0.460616,0.531946,0.468822,0.480617,0.511703,0.163797,0.531646,0.527431,0.539779,0.433927,0.471853,0.492729,0.516903,0.551692,0.519316,0.621121,0.570552,0.512012,0.434241,0.504569,0.516194,0.681385,0.512027,0.496495,0.475315,0.476869,0.574738,0.483238,0.523021,0.516203,0.478834,0.556027,0.466241,0.511055,0.536820,0.519051,0.461973,0.364460,0.482515,0.509586,0.541001,0.547484,0.528648,0.531565,0.497904,0.498206,0.440887,0.479345,0.475273,0.502207,0.499333,0.457031,0.513163,0.510809,0.515568,0.481926,0.424686,0.448632,0.463406,0.577494,0.520300,0.552116,0.486349,0.358844,0.504042,0.429391,0.465994,0.516639,0.489986,0.464105,0.472862,0.538464,0.516121,0.514617,0.552670,0.388156,0.495018,0.000000,0.506515,0.485362,0.523704,0.473654,0.524775,0.516112,0.386083,0.542503,0.526759,0.428313,0.780948,0.464947,0.422325,0.433208,0.662019,0.519450,0.560127,0.509892,0.458156,0.578780,0.532873,0.518168,0.570413,0.514316,0.473626,0.460720,0.554681,0.442648,0.501855,0.511443,0.575248,0.417835,0.497911,0.449207,0.490433,0.432945,0.706767,0.478547,0.595255,0.487866,0.481334,0.497496,0.497472,0.494212,0.493169,0.538938,0.431837,0.558829,0.480545,0.530169,0.427530,0.530031,0.448982,0.533981,0.519925,0.466840,0.451286,0.500203,0.580943,0.488040,0.565982,0.606525,0.486947,0.454657,0.535536,0.508147,0.493001,0.518815,0.557351,0.507931,0.594196,0.489179,0.486699,0.485223,0.522686,0.414985,0.516205,0.616298,0.582358,0.532096,0.510367,0.548101,0.554995,0.448621,0.451022,0.487738,0.494780,0.549801,0.489783,0.509824,0.458121,0.444322,0.500452,0.489192,0.531328,0.586344,0.548174,0.439258,0.507154,0.513422,0.469172,0.518968,0.445781,0.510000,0.482696,0.557197,0.604326,0.553853,0.495985,0.617123,0.476702,0.523056,0.322440,0.537325,0.431849,0.525222,0.574568,0.489640,0.460200,0.521618,0.547916,0.489322,0.473778,0.448842,0.563456,0.446991,0.479126,0.552864,0.607785,0.526109,0.611701,0.530939,0.530735,0.565964,0.609570,0.484592,0.498559,0.514518,0.487071,0.506843,0.517211,0.537823,0.486613,0.526033,0.587627,0.495795,0.463875,0.548006,0.517288,0.396105,0.511063,0.526969,0.674201,0.573704,0.568067,0.498244,0.443465,0.476721,0.450994,0.518158,0.551279,0.505934,0.539868,0.519243,0.575670,0.528335,0.528433,0.517461,0.583052,0.494705,0.511305,0.484976,0.544289,0.521255,0.576791,0.504533,0.476664,0.473156,0.431449,0.459080,0.543086,0.569147,0.554794,0.572432,0.490915,0.409274,0.509330,0.529251,0.506184,0.483370,0.462300,0.506376,0.530957,0.525911,0.543953,0.446700,0.576091,0.525138,0.493450,0.459266,0.478525,0.512027,0.429428,0.488085,0.450582,0.514947,0.366516,0.537176,0.521752,0.513490,0.492695,0.458644,0.475039,0.466147,0.376649,0.483945,0.469428,0.533058,0.520440,0.553257,0.535620,0.575727,0.590988,0.545606,0.523913,0.407008,0.596551,0.504133,0.452401,0.580721,0.528122,0.492124,0.543655,0.424055,0.463613,0.538500,0.444331,0.530792,0.521265,0.519787,0.501399,0.531683,0.583312,0.527497,0.551550,0.489614,0.475070,0.472990,0.554357,0.470673,0.543843,0.439053,0.457731,0.603926,0.817347,0.469719,0.550504,0.554426,0.596770,0.470756,0.508361,0.481409,0.458790,0.469171,0.528878,0.566368,0.591437,0.551119,0.457829,0.477177,0.475091,0.550127,0.440065,0.493873,0.521463,0.533532,0.468278,0.529489,0.501713,0.467635,0.419493,0.460826,0.478300,0.533354,0.540927,0.523273,0.560905,0.539801,0.594856,0.456473,0.498972,0.372421,0.526292,0.499386,0.602334,0.487941,0.459731,0.555386,0.357414,0.601010,0.615009,0.524300,0.485070,0.441518,0.593475,0.523663,0.543423,0.486789,0.573002,0.525954,0.507149,0.473770,0.563882,0.513254,0.508685,0.447140,0.456525,0.551481,0.497021,0.518273,0.551967,0.489096,0.500032,0.500509,0.500875,0.467689,0.514547,0.482376,0.583625,0.502546,0.605670,0.538493,0.580721,0.459631,0.519413,0.483481,0.518032,0.538848,0.526842,0.628322,0.502354,0.431259,0.527816,0.552741,0.520729,0.500388,0.472438,0.486123,0.485622,0.484858,0.508729,0.503847,0.542171,0.584915,0.499717,0.440579,0.558799,0.506147,0.485713,0.560556,0.474172,0.465595,0.537002,0.439408,0.456753,0.559739,0.452493,0.529504,0.540789,0.535652,0.546728,0.535453,0.434404,0.556898,0.520870,0.458119,0.406060,0.503465,0.499550,0.518366,0.524085,0.483481,0.574444,0.465998,0.523641,0.452216,0.432699,0.458231,0.379931,0.494325,0.422410,0.500344,0.539656,0.469185,0.530301,0.505959,0.526777,0.444131,0.472563,0.450829,0.534325,0.541194,0.494970,0.509515,0.513674,0.509430,0.530002,0.485502,0.664632,0.565340,0.441301,0.464713,0.518544,0.580148,0.503265,0.535455,0.455911,0.546090,0.456188,0.459031,0.443356,0.499988,0.539197,0.510389,0.607204,0.536394,0.548998,0.481742,0.490542,0.586344,0.558578,0.530452,0.578070,0.577366,0.518765,0.447263,0.507400,0.418777,0.559925,0.555410,0.548061,0.469715,0.501959,0.518943,0.533976,0.712910,0.520615,0.453622,0.561665,0.591310,0.376246,0.565273,0.505783,0.400727,0.534366,0.516268,0.513585,0.479359,0.587784,0.479472,0.473306,0.489054,0.544876,0.585095,0.527139,0.565068,0.439674,0.515610,0.456114,0.545285,0.469222,0.468860,0.515104,0.566697,0.456882,0.525459,0.532003,0.498182,0.482403,0.454510,0.610562,0.541099,0.494649,0.600133,0.507716,0.535291,0.534923,0.501363,0.434737,0.520890,0.520440,0.485826,0.522314,0.518392,0.363616,0.539868,0.515074,0.579569,0.516803,0.510817,0.456690,0.514844,0.414229,0.455114,0.483566,0.523126,0.472619,0.522166,0.482043,0.414061,0.442519,0.576392,0.523470,0.556424,0.443527,0.536825,0.498017,0.472607,0.518470,0.618117,0.479494,0.563391,0.547124,0.593154,0.520896,0.509977,0.527549,0.615728,0.502399,0.656720,0.477899,0.475634,0.455425,0.518604,0.508586,0.527562,0.580133,0.516641,0.549627,0.501304,0.508801,0.518279,0.532295,0.516430,0.544011,0.427823,0.574054,0.602285,0.516643,0.600695,0.524856,0.418162,0.564786,0.496342,0.580833,0.609570,0.508452,0.503118,0.509660,0.530176,0.427144,0.520597,0.491055,0.535910,0.471783,0.618296,0.534053,0.524628,0.517676,0.561377,0.613364,0.477227,0.495036,0.504798,0.473330,0.456646,0.447624,0.552613,0.467337,0.467766,0.605085,0.611701,0.509278,0.516028,0.509914,0.468024,0.541608,0.390790,0.455895,0.447077,0.522593,0.453561,0.457022,0.508023,0.446254,0.515332,0.520989,0.479725,0.525603,0.516152,0.465946,0.406334,0.476266,0.566735,0.450361,0.486566,0.501144,0.513584,0.593400,0.523524,0.507031,0.498475,0.458776,0.509832,0.518608,0.529334,0.506468,0.505165,0.453713,0.520246,0.555485,0.608816,0.519701,0.550560,0.458019,0.484815,0.478427,0.506420,0.522039,0.466505,0.417305,0.518679,0.515856,0.580619,0.572086,0.460216,0.534125,0.539781,0.491675,0.520559,0.548241,0.551279,0.419119,0.430313,0.600821,0.459109,0.618950,0.480886,0.489866,0.458967,0.510381,0.530854,0.565377,0.482057,0.494441,0.583430,0.481139,0.441415,0.611675,0.590422,0.553072,0.508332,0.503287,0.484267,0.510732,0.547699,0.518505,0.412375,0.498010,0.439321,0.585759,0.486289,0.446775,0.504125,0.504463,0.476150,0.499752,0.516824,0.520453,0.441617,0.542887,0.528197,0.553690,0.562137,0.522288,0.526435,0.489899,0.514856,0.483724,0.603686,0.446116,0.543393,0.502252,0.513970,0.511248,0.442340,0.755683,0.466732,0.604163,0.552851,0.513327,0.497866,0.546188,0.515260,0.468452,0.535453,0.507492,0.580070,0.557576,0.537204,0.408733,0.581354,0.484721,0.445950,0.663441,0.356725,0.566113,0.550841,0.536915,0.530992,0.469992,0.454241,0.465891,0.528599,0.621415,0.459259,0.580079,0.470814,0.472541,0.456732,0.440546,0.498679,0.457144,0.388564,0.502618,0.503055,0.539647,0.529177,0.510455,0.645378,0.451296,0.443216,0.446452,0.602664,0.535749,0.518946,0.511898,0.497863,0.604334,0.479602,0.432631,0.523704,0.566743,0.459618,0.491325,0.505966,0.546648,0.414012,0.442968,0.407509,0.447152,0.503639,0.503238,0.478174,0.436600,0.513080,0.482117,0.444590,0.438944,0.519074,0.529219,0.517062,0.448527,0.447408,0.537961,0.540517,0.470661,0.533316,0.511591,0.480453,0.541434,0.509714,0.445019,0.611388,0.604853,0.498296,0.491723,0.502973,0.463460,0.552173,0.455827,0.512851,0.584968,0.529065,0.490413,0.613004,0.469385,0.363616,0.493807,0.504269,0.425277,0.502983,0.531141,0.472975,0.572584,0.547837,0.517430,0.456457,0.509385,0.525708,0.487724,0.532240,0.499999,0.496074,0.462172,0.526395,0.524604,0.534854,0.450468,0.394034,0.558011,0.442508,0.549257,0.535850,0.492681,0.531946,0.449608,0.514120,0.449824,0.505129,0.420162,0.544808,0.550244,0.544095,0.508011,0.477081,0.464509,0.472702,0.467431,0.495562,0.450314,0.501308,0.608582,0.523728,0.485578,0.534959,0.524801,0.445048,0.572992,0.461207,0.567058,0.549499,0.542661,0.495105,0.517427,0.518812,0.530643,0.509454,0.546792,
  0.533756,0.549761,0.387802,0.300782,0.385921,0.407224,0.419313,0.344276,0.554087,0.457381,0.432547,0.573480,0.474459,0.551223,0.555869,0.488412,0.548215,0.460318,0.323408,0.546053,0.510275,0.472885,0.460347,0.490406,0.419752,0.455632,0.517702,0.401804,0.443781,0.501430,0.438084,0.549346,0.357372,0.491391,0.453504,0.432939,0.478851,0.480006,0.485050,0.447054,0.482243,0.401930,0.517378,0.559031,0.471359,0.459442,0.537300,0.393560,0.528814,0.531889,0.465801,0.450188,0.458590,0.496172,0.463818,0.427866,0.442819,0.470147,0.405199,0.478978,0.451522,0.466189,0.390082,0.371750,0.440233,0.586428,0.572840,0.561811,0.511776,0.559354,0.439930,0.380236,0.468150,0.502556,0.411110,0.546088,0.473839,0.454635,0.403071,0.318240,0.411396,0.439881,0.441176,0.407244,0.478832,0.436662,0.471931,0.520541,0.408938,0.525688,0.478981,0.442337,0.369689,0.457247,0.327201,0.580220,0.344321,0.489226,0.375298,0.512912,0.482390,0.460924,0.500199,0.437234,0.407683,0.449114,0.456255,0.435706,0.532047,0.552372,0.402426,0.387206,0.372948,0.487922,0.439287,0.501784,0.449233,0.456774,0.395869,0.469227,0.481409,0.391075,0.374995,0.487160,0.528932,0.448571,0.452268,0.486324,0.562493,0.614513,0.333005,0.485060,0.413522,0.323629,0.324912,0.498712,0.457686,0.458611,0.377081,0.505467,0.491001,0.452435,0.331256,0.382551,0.438655,0.538537,0.522234,0.314613,0.412070,0.765504,0.516096,0.383204,0.443274,0.527188,0.437951,0.488968,0.488285,0.491813,0.418721,0.567347,0.496221,0.437142,0.495783,0.445025,0.456434,0.451698,0.459122,0.524109,0.538647,0.507305,0.370221,0.546173,0.431917,0.414328,0.377927,0.471441,0.439459,0.412122,0.336619,0.282333,0.486297,0.471932,0.457659,0.460069,0.514418,0.398018,0.450599,0.052541,0.462120,0.383103,0.439765,0.448543,0.442056,0.633296,0.470686,0.355412,0.403440,0.118906,0.433606,0.484481,0.483796,0.355903,0.481510,0.411464,0.454193,0.520464,0.590698,0.374674,0.411244,0.462430,0.459266,0.440510,0.420131,0.421492,0.463593,0.447745,0.398249,0.441340,0.452560,0.448924,0.417659,0.517212,0.374386,0.561171,0.473067,0.488163,0.484146,0.466586,0.402805,0.846690,0.364189,0.522028,0.375210,0.555903,0.466146,0.420817,0.505839,0.516764,0.451370,0.406810,0.414395,0.474061,0.480041,0.551103,0.443852,0.552885,0.459308,0.464843,0.492429,0.485319,0.401656,0.495845,0.464697,0.516250,0.486930,0.480794,0.376138,0.556330,0.409177,0.423256,0.423830,0.521489,0.102783,0.541609,0.458688,0.501468,0.419533,0.394880,0.399660,0.440325,0.369839,0.438086,0.506192,0.535128,0.460163,0.478705,0.437121,0.369841,0.539107,0.500134,0.427901,0.384070,0.495007,0.493577,0.441191,0.450072,0.266391,0.388226,0.377771,0.467388,0.405773,0.473273,0.470611,0.476284,0.321909,0.382642,0.426500,0.464245,0.478706,0.483748,0.591043,0.539320,0.479240,0.358566,0.474904,0.504529,0.594546,0.459724,0.426557,0.405545,0.435676,0.564146,0.437456,0.448985,0.456494,0.448349,0.473423,0.437289,0.473036,0.514228,0.490434,0.521962,0.246642,0.442939,0.477385,0.517457,0.493161,0.434594,0.455085,0.461422,0.464718,0.342376,0.422816,0.386050,0.469685,0.476621,0.422028,0.482970,0.598886,0.452866,0.415021,0.482842,0.501932,0.357557,0.539848,0.453897,0.507320,0.510851,0.222927,0.452086,0.351642,0.449994,0.455206,0.364481,0.333574,0.471488,0.510869,0.465644,0.447421,0.502494,0.285755,0.482718,0.348316,0.445408,0.421923,0.479911,0.383719,0.466983,0.480711,0.759552,0.430850,0.444740,0.365655,0.692306,0.378051,0.427139,0.331606,0.652355,0.456695,0.544430,0.458947,0.368324,0.537038,0.479821,0.464346,0.511298,0.542167,0.436261,0.361844,0.504347,0.498998,0.455422,0.474215,0.463671,0.454936,0.460675,0.504294,0.550621,0.484448,0.755778,0.431596,0.471237,0.402324,0.457225,0.435518,0.471386,0.447189,0.421133,0.506524,0.475302,0.510910,0.469892,0.408568,0.481729,0.472125,0.381198,0.468851,0.458502,0.431117,0.515903,0.406721,0.571883,0.415040,0.523976,0.568624,0.441546,0.334579,0.478922,0.391914,0.429882,0.462547,0.506342,0.512813,0.506380,0.473042,0.389420,0.429961,0.461645,0.278180,0.455103,0.526326,0.519302,0.477420,0.511998,0.486322,0.530636,0.441472,0.381334,0.463251,0.425127,0.536155,0.386126,0.470071,0.404249,0.321481,0.546922,0.394460,0.421105,0.541414,0.478488,0.319965,0.448906,0.422268,0.532653,0.493605,0.358225,0.490163,0.525820,0.557154,0.564334,0.428592,0.439867,0.590338,0.533928,0.430698,0.236385,0.508818,0.484132,0.516140,0.478743,0.429878,0.414300,0.422470,0.544051,0.449477,0.424079,0.355232,0.506730,0.427150,0.365003,0.498388,0.549925,0.563617,0.553719,0.459263,0.466100,0.499433,0.646052,0.406939,0.407370,0.468280,0.451966,0.438616,0.448873,0.520123,0.432964,0.468696,0.547121,0.438091,0.462513,0.451275,0.440248,0.291291,0.473539,0.455698,0.773484,0.570085,0.534140,0.373089,0.367132,0.523817,0.410704,0.411439,0.573711,0.455054,0.468820,0.160032,0.549031,0.468571,0.474211,0.485648,0.454562,0.375418,0.472607,0.417152,0.462561,0.466440,0.503033,0.357476,0.393472,0.436866,0.486214,0.436174,0.532125,0.509146,0.497408,0.468193,0.430324,0.361257,0.474307,0.458059,0.340897,0.331295,0.367553,0.435289,0.414656,0.459907,0.531668,0.370209,0.548487,0.470878,0.464788,0.516323,0.434050,0.504454,0.469736,0.427605,0.429639,0.503713,0.092530,0.517009,0.446176,0.412367,0.430417,0.416309,0.460882,0.446591,0.304280,0.460515,0.368536,0.439260,0.475198,0.445901,0.410990,0.529234,0.568929,0.483266,0.470088,0.418576,0.575252,0.400177,0.381833,0.477490,0.454290,0.388529,0.522951,0.450390,0.469390,0.460307,0.448048,0.519824,0.451901,0.413906,0.427172,0.513404,0.455944,0.426184,0.588114,0.443683,0.456505,0.465281,0.465727,0.413791,0.477972,0.374620,0.386256,0.587879,0.711928,0.518851,0.576554,0.503509,0.512940,0.439163,0.486431,0.402550,0.385197,0.426319,0.476291,0.484366,0.515161,0.493594,0.376640,0.422952,0.439929,0.500132,0.482980,0.425476,0.504535,0.474272,0.418282,0.491413,0.398212,0.425238,0.341079,0.453608,0.389647,0.520431,0.430136,0.516202,0.514322,0.490139,0.505258,0.424104,0.464312,0.318554,0.436190,0.444408,0.551912,0.536177,0.519238,0.509586,0.260477,0.529698,0.785430,0.460297,0.460297,0.416951,0.548248,0.465895,0.520064,0.422118,0.534900,0.450261,0.457955,0.404415,0.526550,0.442363,0.422504,0.526729,0.399154,0.495341,0.445179,0.434890,0.532193,0.441655,0.402961,0.416800,0.335291,0.420042,0.477384,0.414237,0.408154,0.471116,0.563721,0.492415,0.566770,0.514452,0.455141,0.371023,0.505042,0.489291,0.457587,0.552819,0.469914,0.337521,0.410260,0.491930,0.496298,0.478978,0.430034,0.458189,0.544124,0.430046,0.458613,0.460283,0.495251,0.501394,0.456493,0.492512,0.514897,0.468677,0.412921,0.500870,0.389341,0.504080,0.488016,0.432663,0.396056,0.486266,0.389868,0.462238,0.490601,0.450720,0.507311,0.395305,0.365362,0.496430,0.457182,0.436838,0.324177,0.444268,0.457109,0.514140,0.411254,0.371023,0.571078,0.433233,0.457454,0.506962,0.357248,0.373227,0.341437,0.449470,0.390395,0.395382,0.445140,0.400006,0.457341,0.474424,0.411486,0.485362,0.446548,0.407688,0.495642,0.534991,0.441226,0.440471,0.444794,0.393747,0.454129,0.446083,0.531454,0.466212,0.354660,0.442232,0.491844,0.423601,0.486376,0.489621,0.422561,0.475334,0.497383,0.429526,0.417929,0.385290,0.472548,0.436617,0.557617,0.508782,0.525482,0.463829,0.424709,0.541414,0.535197,0.485181,0.493986,0.419305,0.417465,0.379666,0.430277,0.440971,0.506357,0.517244,0.498629,0.426809,0.484065,0.492689,0.443282,0.683568,0.572263,0.336646,0.542276,0.548122,0.329102,0.504544,0.422058,0.330425,0.550955,0.427699,0.449126,0.430397,0.568599,0.433407,0.429168,0.548400,0.506784,0.452269,0.457059,0.527614,0.369752,0.460781,0.471655,0.488131,0.416724,0.395610,0.458194,0.584342,0.432583,0.416507,0.504158,0.414029,0.415051,0.515136,0.541727,0.505861,0.422344,0.609225,0.429156,0.463338,0.507887,0.433366,0.373112,0.456507,0.436885,0.462623,0.447970,0.451240,0.412128,0.479545,0.488764,0.544372,0.509715,0.444213,0.345222,0.388378,0.458474,0.320008,0.416910,0.427748,0.439138,0.482518,0.361800,0.337064,0.491632,0.552827,0.453083,0.546890,0.321028,0.477255,0.463779,0.407670,0.436960,0.630913,0.354073,0.507068,0.547851,0.551960,0.461032,0.469502,0.464838,0.495049,0.427906,0.703975,0.524192,0.414227,0.374066,0.420931,0.458642,0.468635,0.476983,0.448078,0.506353,0.562769,0.465001,0.485793,0.482724,0.445982,0.476825,0.450485,0.469042,0.570202,0.498410,0.561635,0.497671,0.315887,0.551796,0.421557,0.550882,0.646052,0.419025,0.446771,0.492162,0.466911,0.399247,0.449956,0.439814,0.484856,0.395648,0.609149,0.558026,0.456844,0.403976,0.391714,0.580391,0.470157,0.430421,0.475887,0.443025,0.340840,0.326536,0.507564,0.426135,0.403104,0.570396,0.553719,0.451340,0.425044,0.439603,0.409806,0.515374,0.304466,0.350771,0.427866,0.438211,0.389973,0.421114,0.463998,0.323272,0.438021,0.429996,0.413089,0.456372,0.491724,0.399951,0.450016,0.434331,0.516318,0.324846,0.467144,0.428687,0.454469,0.551994,0.457578,0.439681,0.425823,0.420850,0.484950,0.449865,0.437111,0.477998,0.530633,0.406459,0.440853,0.528329,0.565030,0.483210,0.566798,0.460027,0.443582,0.413003,0.438472,0.434830,0.401098,0.323629,0.473019,0.446187,0.441413,0.451297,0.410750,0.483685,0.496981,0.419019,0.421242,0.392467,0.573711,0.444211,0.304545,0.553982,0.402165,0.553343,0.439965,0.466446,0.466338,0.515607,0.607480,0.454190,0.376037,0.397193,0.557134,0.476496,0.502846,0.570936,0.521883,0.543219,0.469771,0.461341,0.523527,0.411276,0.412662,0.405190,0.384198,0.406092,0.381995,0.440923,0.478345,0.474270,0.485708,0.465770,0.452371,0.480441,0.376302,0.496225,0.321282,0.537777,0.474343,0.508716,0.555094,0.456386,0.462083,0.443759,0.395227,0.480575,0.529271,0.446555,0.471823,0.431708,0.484962,0.415238,0.370862,0.670694,0.518584,0.544384,0.485188,0.405952,0.447695,0.528750,0.443962,0.359654,0.395305,0.503388,0.521118,0.472419,0.516352,0.323647,0.480402,0.413987,0.331461,0.620291,0.517650,0.564135,0.491127,0.461498,0.453485,0.433366,0.396115,0.394272,0.414637,0.629964,0.372509,0.455492,0.428616,0.440385,0.415778,0.472694,0.437711,0.476282,0.304869,0.471295,0.446429,0.509012,0.477396,0.446482,0.649978,0.406266,0.380490,0.468556,0.600720,0.477452,0.486440,0.438002,0.483752,0.636696,0.409331,0.348989,0.471270,0.547582,0.493150,0.378772,0.450632,0.529879,0.335428,0.415210,0.453500,0.393452,0.443474,0.481217,0.414172,0.359009,0.470796,0.409406,0.370782,0.325695,0.453625,0.475356,0.374614,0.384829,0.397361,0.482686,0.493717,0.422246,0.469051,0.466708,0.525773,0.483204,0.412052,0.419460,0.598463,0.573431,0.402545,0.414766,0.436146,0.340964,0.486962,0.412019,0.465583,0.450894,0.442075,0.396755,0.571533,0.441830,0.412128,0.481195,0.423197,0.481781,0.461819,0.499171,0.433287,0.539336,0.518015,0.450404,0.510616,0.435274,0.465184,0.546219,0.457818,0.443077,0.460038,0.346128,0.448699,0.472578,0.472725,0.369730,0.401173,0.516612,0.500610,0.502806,0.425739,0.453195,0.266391,0.342746,0.451720,0.467865,0.436625,0.460433,0.501002,0.550895,0.554734,0.456118,0.469523,0.354120,0.366893,0.401897,0.456749,0.330221,0.429069,0.621140,0.408770,0.536306,0.486197,0.473312,0.382618,0.525018,0.389196,0.622160,0.527088,0.512285,0.420989,0.458397,0.484554,0.432051,0.461836,0.496260,
  0.656147,0.615660,0.390150,0.433441,0.497359,0.428367,0.608195,0.423715,0.449521,0.513756,0.510937,0.703578,0.572211,0.532359,0.691855,0.563411,0.564284,0.612844,0.400806,0.545909,0.594261,0.533860,0.495992,0.531097,0.477361,0.496839,0.611588,0.394021,0.514445,0.580745,0.528410,0.624579,0.503708,0.507729,0.503275,0.513420,0.531027,0.588747,0.508922,0.560080,0.537032,0.485916,0.507113,0.565957,0.517733,0.507098,0.674802,0.476705,0.657479,0.631343,0.502899,0.506194,0.548153,0.526582,0.546556,0.528531,0.508181,0.540835,0.372246,0.581171,0.496964,0.533349,0.493117,0.461005,0.525760,0.653080,0.647235,0.557984,0.596367,0.565957,0.538658,0.499850,0.539665,0.556699,0.466643,0.567208,0.544839,0.519348,0.529710,0.391441,0.479028,0.541186,0.533206,0.449939,0.437217,0.501641,0.575657,0.596668,0.476372,0.495287,0.513660,0.512228,0.396459,0.533196,0.643458,0.562967,0.369663,0.640928,0.375909,0.667013,0.496140,0.580452,0.528756,0.550423,0.464451,0.592666,0.505875,0.523317,0.649539,0.622130,0.591046,0.507506,0.469081,0.582650,0.516309,0.518784,0.510179,0.519496,0.507195,0.555017,0.609638,0.507352,0.464463,0.496189,0.526392,0.478827,0.508160,0.530972,0.558567,0.633967,0.384579,0.507819,0.496970,0.511579,0.451830,0.507608,0.550784,0.573373,0.485237,0.613258,0.655847,0.505647,0.350885,0.498962,0.514089,0.547113,0.534534,0.429519,0.495497,0.775816,0.645653,0.555540,0.516504,0.621398,0.517251,0.509594,0.635220,0.479378,0.525145,0.526165,0.522715,0.544372,0.649373,0.520119,0.637070,0.532893,0.535453,0.592414,0.607038,0.675117,0.300609,0.554087,0.522626,0.454748,0.498904,0.575290,0.547801,0.459511,0.404742,0.432805,0.530391,0.556422,0.482354,0.548280,0.631792,0.523391,0.542406,0.462065,0.545835,0.482173,0.482127,0.517694,0.527836,0.578175,0.617117,0.465990,0.509039,0.082142,0.514394,0.596886,0.602964,0.504081,0.580987,0.502811,0.529871,0.533513,0.630034,0.381173,0.508136,0.549521,0.526591,0.520639,0.520374,0.551458,0.543880,0.549651,0.529261,0.484437,0.517314,0.532390,0.498859,0.587396,0.420547,0.591555,0.534127,0.535163,0.500002,0.545526,0.536800,0.931111,0.408906,0.628671,0.488006,0.600416,0.536058,0.498236,0.577487,0.660287,0.533673,0.516100,0.473099,0.542136,0.534721,0.640160,0.500747,0.525521,0.540472,0.507214,0.563554,0.529653,0.741315,0.494596,0.542055,0.591444,0.588744,0.500513,0.491463,0.576905,0.488857,0.472577,0.524702,0.527207,0.198416,0.619364,0.532196,0.504738,0.525727,0.472467,0.461526,0.500506,0.498261,0.517139,0.534773,0.607464,0.541442,0.513240,0.508284,0.404123,0.615391,0.651030,0.553182,0.451542,0.538299,0.559978,0.498417,0.524326,0.333530,0.463059,0.413515,0.518281,0.711907,0.513567,0.546490,0.565845,0.417440,0.415064,0.517828,0.525426,0.508102,0.518174,0.548630,0.578045,0.530957,0.486256,0.659152,0.612598,0.535391,0.553424,0.494002,0.498802,0.508593,0.566510,0.525897,0.537062,0.546787,0.544610,0.508831,0.516402,0.530447,0.515715,0.559447,0.625223,0.378360,0.568967,0.502758,0.504928,0.600747,0.495538,0.526571,0.611071,0.575333,0.399609,0.494847,0.538920,0.599184,0.512131,0.522111,0.603364,0.642466,0.527660,0.487562,0.663237,0.646515,0.403448,0.622610,0.527638,0.537873,0.639715,0.377583,0.575064,0.457326,0.557475,0.505558,0.413620,0.398679,0.539032,0.570213,0.557020,0.520158,0.537917,0.396942,0.534567,0.777043,0.526591,0.501884,0.590088,0.430315,0.528401,0.585725,1.000000,0.508008,0.512576,0.505762,0.494844,0.471197,0.517040,0.425706,0.822961,0.517062,0.659385,0.559227,0.427696,0.555593,0.547283,0.537183,0.523186,0.632974,0.527241,0.389863,0.567363,0.655549,0.524567,0.547890,0.504086,0.632478,0.531279,0.646932,0.662971,0.648788,0.308539,0.525994,0.505966,0.489622,0.528520,0.517009,0.514929,0.537214,0.468243,0.546341,0.639074,0.565185,0.533031,0.449251,0.651087,0.552674,0.495014,0.528599,0.536353,0.544084,0.659905,0.486274,0.709033,0.519190,0.535300,0.596854,0.530594,0.331701,0.536142,0.444291,0.521892,0.561523,0.578372,0.576817,0.568930,0.516286,0.378864,0.554568,0.539900,0.408910,0.524745,0.546565,0.530397,0.545957,0.614490,0.500077,0.545408,0.511273,0.507659,0.492712,0.497617,0.625995,0.458367,0.565729,0.524606,0.416342,0.698601,0.507543,0.499780,0.545391,0.517636,0.416327,0.526028,0.482106,0.660428,0.516725,0.486595,0.528380,0.654315,0.623392,0.592788,0.480271,0.534153,0.648101,0.651883,0.487963,0.391981,0.618138,0.649404,0.575428,0.468133,0.505808,0.503657,0.500139,0.525782,0.580280,0.491560,0.476725,0.589700,0.535780,0.393266,0.568735,0.559914,0.548215,0.572818,0.506647,0.550470,0.563863,0.791865,0.542555,0.461881,0.566718,0.540987,0.508131,0.515640,0.600727,0.527338,0.541010,0.593289,0.540805,0.570298,0.490663,0.474777,0.358655,0.593998,0.516225,0.764601,0.770772,0.597779,0.485623,0.501037,0.662861,0.525862,0.494861,0.620230,0.536893,0.492723,0.657624,0.612184,0.559111,0.579988,0.539071,0.502826,0.362800,0.531301,0.498272,0.484241,0.545376,0.493164,0.467507,0.446791,0.522355,0.673970,0.500122,0.524675,0.574370,0.540083,0.510931,0.477625,0.476837,0.555972,0.535772,0.350332,0.316252,0.447377,0.531489,0.441979,0.557167,0.660420,0.480309,0.487905,0.572502,0.569665,0.642552,0.539716,0.672178,0.645009,0.522877,0.551626,0.524981,0.141935,0.597897,0.491222,0.460045,0.504810,0.575319,0.521426,0.514312,0.567260,0.546213,0.456742,0.448634,0.578001,0.474793,0.699857,0.571041,0.640949,0.515770,0.552859,0.586241,0.614350,0.466725,0.496063,0.482536,0.536886,0.475790,0.656343,0.635866,0.519048,0.553440,0.560765,0.736530,0.512998,0.497273,0.442773,0.634274,0.493252,0.444165,0.596663,0.479964,0.563406,0.530382,0.513674,0.526314,0.526778,0.507800,0.501802,0.612157,0.430844,0.652023,0.504373,0.590538,0.534190,0.564395,0.571832,0.524369,0.461298,0.499739,0.554781,0.513791,0.520990,0.529617,0.464886,0.505576,0.489409,0.562143,0.650580,0.527671,0.529642,0.572654,0.511436,0.604176,0.478692,0.507572,0.654430,0.578587,0.495015,0.626785,0.517743,0.627951,0.568840,0.497580,0.492469,0.533549,0.506736,0.478234,0.485753,0.530335,0.540233,0.679008,0.646658,0.554615,0.402289,0.527634,0.904623,0.553149,0.513681,0.509310,0.514544,0.526141,0.622912,0.495754,0.611018,0.499856,0.534576,0.530600,0.535526,0.543292,0.492743,0.610627,0.527251,0.505384,0.529957,0.455791,0.622541,0.500444,0.511128,0.473539,0.390518,0.517619,0.507173,0.471866,0.456188,0.521729,0.612309,0.568988,0.594275,0.659166,0.513456,0.497702,0.620877,0.537725,0.514050,0.802354,0.517856,0.464823,0.515522,0.531528,0.554048,0.516478,0.505433,0.528978,0.659727,0.500200,0.552897,0.550423,0.574863,0.582668,0.525801,0.634366,0.599399,0.479667,0.502880,0.548231,0.434706,0.613861,0.570993,0.526936,0.492225,0.519979,0.507042,0.514682,0.565099,0.518004,0.587252,0.463240,0.431871,0.559754,0.496127,0.566892,0.429473,0.517988,0.508649,0.568529,0.515509,0.497702,0.554189,0.529214,0.530130,0.646706,0.444201,0.443180,0.484282,0.495583,0.509475,0.352527,0.590098,0.514371,0.518863,0.613472,0.527209,0.643693,0.487626,0.488631,0.545635,0.585772,0.522198,0.514139,0.502886,0.619683,0.516560,0.490457,0.361496,0.454390,0.420509,0.451249,0.605016,0.501138,0.534457,0.572155,0.508965,0.534703,0.649089,0.506275,0.518518,0.362354,0.516912,0.539693,0.612010,0.563325,0.669170,0.537098,0.513571,0.545391,0.563741,0.521946,0.546534,0.500123,0.529378,0.473240,0.518315,0.614552,0.537149,0.580737,0.558120,0.513336,0.620500,0.507724,0.560729,0.702636,0.689521,0.393893,0.635057,0.577688,0.469610,0.545947,0.510859,0.428956,0.561642,0.582953,0.513991,0.499888,0.644140,0.536397,0.504652,0.673204,0.547319,0.485867,0.520629,0.642537,0.495296,0.516316,0.617763,0.570215,0.599900,0.478373,0.527909,0.601495,0.488354,0.522211,0.566035,0.528346,0.544528,0.648473,0.549857,0.593786,0.467687,0.625262,0.494132,0.522948,0.516395,0.506691,0.488648,0.529338,0.508643,0.486440,0.497604,0.513218,0.389854,0.558157,0.536372,0.473606,0.614348,0.505478,0.386067,0.389994,0.639888,0.435608,0.524516,0.518043,0.539685,0.592627,0.336917,0.422361,0.646480,0.629817,0.523385,0.651483,0.394874,0.556644,0.543132,0.481065,0.492069,0.539486,0.427096,0.551583,0.578246,0.581611,0.505675,0.498501,0.515850,0.488241,0.544501,0.705302,0.541056,0.529538,0.442868,0.512837,0.461843,0.516377,0.477114,0.523386,0.566072,0.540788,0.601137,0.594135,0.551605,0.510949,0.544563,0.524669,0.526010,0.682221,0.481791,0.613923,0.581277,0.381684,0.577146,0.546007,0.583853,0.791865,0.485227,0.541194,0.586113,0.608564,0.515973,0.517379,0.520382,0.549144,0.460744,0.549332,0.555684,0.525502,0.346779,0.433233,0.578482,0.636757,0.494056,0.554010,0.517020,0.399346,0.382451,0.537210,0.506673,0.489784,0.602803,0.572818,0.546024,0.588764,0.512888,0.481853,0.647193,0.357942,0.404771,0.528531,0.505694,0.504944,0.526733,0.514297,0.381117,0.485304,0.516838,0.486087,0.515651,0.608001,0.485364,0.638015,0.561816,0.580605,0.392657,0.583189,0.486990,0.557557,0.621112,0.537587,0.561752,0.491342,0.519985,0.613171,0.513266,0.290659,0.583365,0.622187,0.496743,0.507252,0.591569,0.649152,0.482789,0.555826,0.571087,0.505233,0.506948,0.505435,0.485384,0.488844,0.511579,0.580533,0.501671,0.498885,0.474703,0.505252,0.537578,0.527959,0.538774,0.508787,0.525666,0.620230,0.626894,0.427830,0.537853,0.511277,0.510114,0.518988,0.521451,0.650445,0.544649,0.511714,0.479337,0.349624,0.472531,0.671748,0.573446,0.651490,0.541983,0.747294,0.663290,0.520465,0.524493,0.632432,0.523374,0.424844,0.517058,0.545008,0.514518,0.464311,0.482887,0.609509,0.625883,0.539701,0.502426,0.574367,0.487067,0.421279,0.623635,0.379515,0.539360,0.534824,0.552167,0.634806,0.525160,0.529406,0.496917,0.503172,0.602120,0.539075,0.510523,0.532630,0.517423,0.621265,0.511789,0.499265,0.535051,0.654978,0.554252,0.505615,0.516023,0.514200,0.570006,0.504054,0.459366,0.463240,0.486878,0.575234,0.482656,0.654704,0.490293,0.467236,0.488224,0.406266,0.570835,0.457710,0.557225,0.494405,0.557194,0.506786,0.533504,0.516110,0.516428,0.521395,0.557472,0.460545,0.503971,0.480373,0.507944,0.533822,0.634156,0.504345,0.597785,0.415495,0.541448,0.510329,0.564270,0.557497,0.524349,0.681775,0.642770,0.514336,0.645568,0.625386,0.531834,0.498778,0.496075,0.552558,0.595830,0.510024,0.437821,0.511573,0.575180,0.647890,0.332115,0.535843,0.667301,0.418854,0.518589,0.632102,0.507624,0.504305,0.525246,0.535116,0.438133,0.583440,0.516475,0.483838,0.413621,0.499876,0.537345,0.461153,0.504227,0.501402,0.556763,0.550488,0.502890,0.509008,0.530415,0.652010,0.570190,0.521740,0.517742,0.704219,0.621876,0.384267,0.510262,0.514436,0.441195,0.521414,0.508800,0.610039,0.472454,0.569959,0.506705,0.596828,0.546062,0.389854,0.594497,0.486085,0.640158,0.512022,0.540483,0.485193,0.622738,0.634200,0.521584,0.634879,0.486732,0.544908,0.655112,0.536183,0.529276,0.615372,0.424601,0.519810,0.562688,0.544109,0.534080,0.431344,0.609224,0.676889,0.552125,0.520810,0.527998,0.333530,0.426985,0.529990,0.595802,0.507532,0.668132,0.537643,0.581076,0.629357,0.527947,0.570005,0.398079,0.716354,0.511119,0.528386,0.399073,0.489191,0.686792,0.475183,0.668829,0.537185,0.538235,0.467980,0.543949,0.485424,0.657842,0.659702,0.646219,0.529212,0.546554,0.589362,0.487746,0.564687,0.535511,
  0.595136,0.576803,0.435373,0.505329,0.520016,0.321929,0.584042,0.490583,0.422631,0.526814,0.510816,0.607034,0.572789,0.463378,0.544514,0.568891,0.528846,0.555901,0.490141,0.492171,0.593117,0.519753,0.506691,0.491849,0.499559,0.488566,0.606077,0.420644,0.526572,0.556008,0.552205,0.593351,0.552697,0.506556,0.509211,0.540022,0.487228,0.618574,0.497959,0.534508,0.509479,0.526432,0.493169,0.507703,0.494079,0.505554,0.592071,0.502331,0.575462,0.575522,0.511657,0.505650,0.559375,0.491132,0.559288,0.516200,0.518066,0.533147,0.424009,0.549073,0.504057,0.413460,0.513078,0.480534,0.514340,0.601853,0.612477,0.513146,0.577648,0.509050,0.515286,0.516412,0.532134,0.526588,0.533968,0.510370,0.516203,0.526896,0.591986,0.489796,0.511922,0.586692,0.518823,0.472517,0.597122,0.497955,0.623201,0.535281,0.509624,0.470666,0.474106,0.518461,0.410775,0.537117,0.777798,0.508093,0.461016,0.577626,0.461999,0.665565,0.514530,0.497237,0.513249,0.557756,0.539013,0.553000,0.518311,0.491424,0.610429,0.529351,0.632851,0.515471,0.516652,0.546549,0.517518,0.501062,0.500312,0.509542,0.512541,0.558976,0.564717,0.518422,0.509618,0.486338,0.518459,0.608789,0.516561,0.522618,0.524263,0.521284,0.474842,0.484028,0.516989,0.608346,0.503899,0.503435,0.546888,0.514318,0.529369,0.727376,0.604445,0.569873,0.480034,0.538303,0.523869,0.524304,0.506170,0.488674,0.521935,0.686174,0.550115,0.537807,0.524740,0.574540,0.546826,0.485738,0.567317,0.644738,0.514468,0.525964,0.483975,0.542522,0.562970,0.497830,0.605238,0.508728,0.537995,0.575353,0.526736,0.607353,0.400054,0.528832,0.520049,0.519685,0.508886,0.592897,0.538621,0.528048,0.491995,0.465021,0.520676,0.592613,0.489384,0.513837,0.532924,0.530025,0.458055,0.888900,0.560004,0.510701,0.494385,0.513998,0.512881,0.443059,0.552835,0.503818,0.508930,0.622387,0.502248,0.606507,0.652641,0.514044,0.543177,0.511268,0.548577,0.446922,0.572799,0.394137,0.493419,0.562986,0.524494,0.530384,0.492169,0.563852,0.514182,0.550564,0.538788,0.480035,0.531213,0.495900,0.509217,0.564339,0.391522,0.546299,0.500270,0.520844,0.493150,0.499566,0.532100,0.808515,0.483918,0.581928,0.452741,0.663518,0.507688,0.532121,0.548280,0.588699,0.510611,0.527113,0.490771,0.509676,0.524704,0.538885,0.525647,0.495132,0.548979,0.489009,0.548574,0.515753,0.629723,0.504518,0.549126,0.508848,0.523359,0.507042,0.514782,0.523464,0.519033,0.495967,0.522596,0.485545,0.218898,0.590520,0.541328,0.517849,0.518667,0.531208,0.474395,0.508124,0.527305,0.498134,0.483868,0.592528,0.551617,0.488031,0.494749,0.432703,0.583006,0.582734,0.542124,0.489264,0.533096,0.554558,0.518893,0.573637,0.330110,0.501968,0.497884,0.479798,0.861424,0.496869,0.534594,0.586182,0.459446,0.422393,0.540951,0.508024,0.515791,0.479318,0.527224,0.579117,0.512421,0.543056,0.650096,0.555236,0.338627,0.551073,0.539288,0.526318,0.522021,0.510710,0.498641,0.528959,0.540286,0.529402,0.484461,0.506559,0.524386,0.479341,0.559969,0.537918,0.416812,0.585545,0.528742,0.473709,0.548612,0.513628,0.505413,0.584004,0.602383,0.490158,0.509477,0.587800,0.541027,0.494842,0.510752,0.544700,0.511601,0.530808,0.507087,0.622227,0.567893,0.407349,0.567936,0.536625,0.531248,0.577956,0.579599,0.581446,0.523081,0.522642,0.517097,0.512341,0.487921,0.484286,0.504290,0.518781,0.532651,0.512939,0.488453,0.517784,0.785704,0.467751,0.523549,0.579021,0.472206,0.490967,0.566990,0.959487,0.529520,0.510571,0.542612,0.458331,0.511800,0.504087,0.497138,0.418888,0.529426,0.648512,0.540658,0.495562,0.494266,0.526559,0.528818,0.528683,0.587630,0.502930,0.419298,0.539738,0.579481,0.516916,0.530991,0.539697,0.592972,0.486218,0.588070,0.566584,0.597471,0.449046,0.510161,0.515981,0.478934,0.558532,0.538804,0.490374,0.542462,0.511973,0.512016,0.594322,0.536494,0.510185,0.429464,0.599364,0.564849,0.535862,0.524160,0.542981,0.507653,0.588488,0.511138,0.688988,0.549309,0.542274,0.553590,0.531999,0.381137,0.521407,0.454774,0.499417,0.584144,0.572859,0.539476,0.526819,0.517624,0.410125,0.528340,0.532537,0.431605,0.525926,0.530148,0.545995,0.539414,0.534384,0.500817,0.510216,0.513222,0.513312,0.490987,0.512031,0.537390,0.383406,0.539629,0.522483,0.462507,0.710966,0.516030,0.526682,0.520296,0.511846,0.499908,0.530613,0.498909,0.577486,0.488125,0.512179,0.481719,0.562161,0.512150,0.551712,0.512777,0.514030,0.602175,0.556820,0.507951,0.435613,0.567888,0.595654,0.435404,0.770376,0.495214,0.483133,0.519519,0.490997,0.580230,0.502223,0.498769,0.566201,0.521645,0.482368,0.561445,0.526858,0.481936,0.560195,0.502050,0.510558,0.556285,0.691316,0.507407,0.495316,0.555000,0.531242,0.503273,0.523115,0.517169,0.523780,0.539339,0.552875,0.521102,0.558934,0.523680,0.500967,0.384318,0.663137,0.508213,0.583267,0.809943,0.563763,0.454399,0.525667,0.572327,0.518314,0.497680,0.507544,0.544288,0.472528,0.505241,0.571197,0.567350,0.573375,0.494612,0.494718,0.414680,0.546811,0.501282,0.502917,0.565473,0.504248,0.512250,0.450067,0.513440,0.622608,0.500068,0.515021,0.571247,0.536151,0.506508,0.492248,0.493385,0.543401,0.509346,0.322768,0.457512,0.495690,0.502537,0.450200,0.545380,0.600220,0.506210,0.443825,0.567938,0.514525,0.562797,0.515763,0.621751,0.585706,0.550215,0.539373,0.459932,0.252488,0.539386,0.484566,0.502635,0.523346,0.494539,0.505625,0.507826,0.638827,0.516114,0.496996,0.386084,0.545930,0.508762,0.665038,0.542001,0.592731,0.522106,0.566578,0.550365,0.573143,0.521436,0.524052,0.509480,0.509239,0.506809,0.612426,0.601570,0.500961,0.366817,0.520351,0.561144,0.491207,0.508111,0.295805,0.560048,0.501540,0.488430,0.535354,0.487091,0.523815,0.644836,0.504153,0.525231,0.527231,0.531564,0.511765,0.552330,0.602409,0.569910,0.503363,0.547454,0.521326,0.628191,0.528105,0.505458,0.499076,0.490244,0.543391,0.477384,0.494019,0.506330,0.507296,0.510702,0.477308,0.540282,0.588066,0.546541,0.494558,0.549436,0.496089,0.607726,0.514580,0.514715,0.369518,0.496866,0.511745,0.539539,0.496844,0.585216,0.539773,0.494591,0.484185,0.505928,0.468928,0.501892,0.520382,0.523753,0.473133,0.596047,0.554616,0.529697,0.503940,0.484832,0.916023,0.569257,0.623747,0.487840,0.508853,0.521292,0.577187,0.501964,0.576574,0.506378,0.507706,0.525593,0.531647,0.498920,0.511143,0.451348,0.535809,0.506713,0.555865,0.508846,0.543680,0.470902,0.514713,0.506406,0.479591,0.512316,0.538074,0.495786,0.516624,0.489562,0.553275,0.557316,0.540581,0.581353,0.505625,0.509351,0.541013,0.525313,0.525435,0.550952,0.476800,0.527512,0.520867,0.523702,0.526373,0.513239,0.498312,0.566754,0.573387,0.482573,0.532029,0.538463,0.572606,0.570418,0.493171,0.566793,0.593167,0.516377,0.539115,0.541292,0.431086,0.557627,0.567473,0.517358,0.487876,0.519538,0.522020,0.513589,0.561194,0.513144,0.560684,0.519857,0.477258,0.529564,0.478442,0.516201,0.495583,0.476152,0.495267,0.512691,0.512557,0.509351,0.529190,0.502378,0.514447,0.574700,0.495284,0.506902,0.492615,0.566641,0.502821,0.377540,0.653386,0.526447,0.512708,0.557313,0.528622,0.590144,0.480819,0.484986,0.534495,0.515672,0.528425,0.525248,0.503041,0.533881,0.499622,0.479741,0.283543,0.511804,0.463134,0.313647,0.598325,0.516512,0.479880,0.559553,0.501226,0.503385,0.577357,0.484596,0.510249,0.405526,0.531180,0.542700,0.586478,0.531407,0.497558,0.483342,0.537230,0.520296,0.538191,0.496322,0.554354,0.532215,0.529853,0.498485,0.510058,0.580234,0.505932,0.550945,0.532101,0.549584,0.546898,0.475159,0.546918,0.653504,0.599974,0.460074,0.588448,0.534513,0.515204,0.555766,0.516573,0.470734,0.523770,0.602717,0.560378,0.528136,0.607855,0.527430,0.486749,0.575833,0.522217,0.487813,0.481493,0.476893,0.506377,0.522389,0.582331,0.548978,0.642949,0.503153,0.534727,0.544769,0.592613,0.520802,0.547800,0.591148,0.538000,0.555839,0.520300,0.583554,0.517727,0.553158,0.502896,0.503047,0.497555,0.522240,0.514360,0.535090,0.503424,0.485781,0.516048,0.514857,0.374435,0.550061,0.506821,0.441690,0.537754,0.503941,0.450895,0.476002,0.589817,0.499899,0.512838,0.505843,0.487180,0.575389,0.410269,0.531141,0.579612,0.587209,0.480975,0.571861,0.474141,0.558432,0.512863,0.491942,0.504650,0.436041,0.496424,0.550852,0.526490,0.530576,0.439917,0.488172,0.512665,0.440959,0.593186,0.476386,0.509954,0.532336,0.479730,0.529801,0.477625,0.495355,0.489895,0.533747,0.542096,0.528855,0.588637,0.559860,0.539440,0.493629,0.546667,0.547349,0.533741,0.674784,0.704126,0.571393,0.545370,0.439450,0.530262,0.582503,0.528506,0.691316,0.510540,0.515127,0.550231,0.603320,0.503235,0.492943,0.499213,0.544267,0.485034,0.492419,0.541720,0.517597,0.391998,0.474646,0.520353,0.557924,0.494698,0.527448,0.486396,0.471217,0.467280,0.518226,0.501164,0.511837,0.556142,0.560195,0.560770,0.855296,0.524965,0.482506,0.636380,0.357786,0.506437,0.516200,0.501451,0.529697,0.450025,0.506928,0.471966,0.433216,0.546111,0.475879,0.514869,0.574603,0.515221,0.593969,0.549246,0.563661,0.480056,0.547161,0.632239,0.591431,0.587417,0.543229,0.554017,0.504791,0.531813,0.544241,0.447984,0.492603,0.579962,0.546693,0.497328,0.507306,0.536759,0.642174,0.495576,0.521069,0.573605,0.491888,0.509850,0.524636,0.536951,0.513011,0.608346,0.572118,0.513235,0.495569,0.728765,0.514477,0.507835,0.493725,0.557975,0.489741,0.516389,0.507544,0.594870,0.506800,0.517710,0.517935,0.516418,0.528317,0.479121,0.648735,0.562439,0.518738,0.522907,0.361398,0.500287,0.657442,0.592682,0.583708,0.444151,0.642974,0.576232,0.538705,0.484900,0.558320,0.521881,0.653303,0.524028,0.593345,0.518873,0.492816,0.512867,0.564631,0.574321,0.481902,0.481658,0.565846,0.559562,0.523352,0.498661,0.464123,0.493747,0.530664,0.527123,0.523255,0.526900,0.534842,0.485515,0.505834,0.525523,0.518561,0.508419,0.525537,0.545362,0.420898,0.521524,0.528499,0.509239,0.577208,0.523159,0.501764,0.520854,0.509972,0.548190,0.504519,0.513553,0.519857,0.525082,0.554285,0.511402,0.619096,0.555105,0.503345,0.516825,0.478276,0.513570,0.413881,0.512175,0.493580,0.513660,0.501662,0.525638,0.531207,0.539626,0.520190,0.499023,0.518147,0.496431,0.474276,0.501512,0.526503,0.581409,0.505723,0.547221,0.536558,0.491317,0.507067,0.568277,0.558682,0.526766,0.585428,0.695524,0.516849,0.613020,0.528907,0.516544,0.489723,0.503145,0.640741,0.513170,0.524391,0.498690,0.496675,0.516270,0.583932,0.417061,0.543670,0.617798,0.458383,0.502796,0.587723,0.514703,0.523804,0.477324,0.546007,0.468042,0.607592,0.539663,0.521585,0.491324,0.481313,0.509237,0.561141,0.523701,0.486852,0.556964,0.572514,0.519772,0.501032,0.513618,0.571168,0.556953,0.528063,0.496030,0.643071,0.562162,0.379318,0.552601,0.522071,0.508667,0.522811,0.499524,0.592946,0.505062,0.570499,0.510602,0.590638,0.597444,0.374435,0.550950,0.510147,0.590528,0.493470,0.507262,0.752240,0.591970,0.471892,0.541830,0.546089,0.476438,0.537091,0.556045,0.515884,0.518925,0.586389,0.495313,0.494359,0.557128,0.553414,0.534330,0.558803,0.620584,0.629838,0.529464,0.524652,0.503263,0.330110,0.491296,0.533144,0.548518,0.524613,0.558945,0.454900,0.508225,0.551071,0.518590,0.523888,0.460478,0.456062,0.512826,0.497554,0.477435,0.508190,0.616258,0.479927,0.582173,0.521522,0.526205,0.510291,0.523176,0.524944,0.545965,0.617207,0.640491,0.567630,0.542441,0.587196,0.510081,0.604974,0.524744,
  0.493007,0.517614,0.481158,0.485793,0.492509,0.360546,0.473367,0.494797,0.403264,0.479029,0.498026,0.483550,0.509117,0.441872,0.464158,0.550231,0.508009,0.466046,0.484915,0.495194,0.572633,0.497093,0.545733,0.450656,0.486258,0.442359,0.559937,0.478739,0.514863,0.506999,0.522537,0.542717,0.589547,0.479396,0.484684,0.492072,0.508888,0.566188,0.468881,0.516888,0.486167,0.511006,0.481931,0.481913,0.507061,0.520045,0.474244,0.482671,0.464637,0.487997,0.484693,0.505643,0.507877,0.461637,0.527851,0.443247,0.513401,0.508660,0.466172,0.509138,0.471901,0.357450,0.501533,0.457664,0.475163,0.562159,0.562717,0.487819,0.535537,0.476837,0.471880,0.487604,0.501250,0.501407,0.529360,0.487091,0.490648,0.499907,0.577246,0.485564,0.452624,0.589620,0.478664,0.456732,0.478026,0.465062,0.561427,0.489728,0.491428,0.673426,0.455106,0.496506,0.454968,0.508976,0.788615,0.480347,0.493510,0.498303,0.509219,0.584700,0.376106,0.520363,0.461790,0.479391,0.502495,0.466765,0.498859,0.456595,0.507994,0.458337,0.593912,0.486297,0.499399,0.513128,0.597009,0.504874,0.479528,0.475893,0.487096,0.522201,0.479090,0.488918,0.507684,0.451459,0.500975,0.463034,0.506996,0.504774,0.487808,0.459285,0.488374,0.458199,0.480671,0.563797,0.489272,0.500574,0.500799,0.486972,0.537307,0.822146,0.495177,0.493670,0.504628,0.523357,0.503785,0.485625,0.492213,0.484270,0.491128,0.654889,0.459112,0.544503,0.509780,0.477436,0.526493,0.463542,0.476286,0.444441,0.481208,0.485902,0.467429,0.521288,0.469908,0.473344,0.494951,0.488115,0.516535,0.517496,0.466974,0.494773,0.479190,0.496936,0.483840,0.527639,0.494741,0.352987,0.491719,0.538147,0.490202,0.448553,0.511432,0.582852,0.501211,0.485723,0.435707,0.502336,0.054931,0.906339,0.526710,0.571542,0.498112,0.476290,0.475262,0.413033,0.477269,0.492972,0.491604,0.765822,0.491455,0.538448,0.583025,0.486513,0.518164,0.487185,0.530729,0.373084,0.520974,0.458195,0.474878,0.510370,0.487036,0.762242,0.494188,0.539133,0.477034,0.570740,0.516752,0.670200,0.510461,0.470715,0.489867,0.517485,0.385215,0.502154,0.473893,0.516731,0.474799,0.476725,0.492995,0.768598,0.486814,0.493553,0.399038,0.544875,0.587078,0.513879,0.504564,0.469676,0.494356,0.513057,0.474190,0.482794,0.490777,0.465547,0.499349,0.489388,0.530555,0.463986,0.510125,0.484997,0.881238,0.480291,0.521918,0.471770,0.479287,0.472797,0.491412,0.492041,0.494361,0.510166,0.510207,0.461671,0.267883,0.547375,0.527806,0.478662,0.477431,0.522252,0.455347,0.488370,0.503325,0.425808,0.458890,0.538374,0.559316,0.430854,0.482852,0.471343,0.531486,0.481812,0.507947,0.473110,0.467733,0.505386,0.466572,0.537660,0.201454,0.490574,0.503216,0.440791,0.711102,0.588879,0.508711,0.559792,0.434381,0.454300,0.498449,0.483442,0.493398,0.470321,0.416378,0.517101,0.487550,0.534716,0.532324,0.494469,0.127661,0.495487,0.528815,0.527786,0.497525,0.470591,0.461287,0.484055,0.539058,0.473177,0.456704,0.473447,0.516435,0.467159,0.517214,0.451339,0.478089,0.529674,0.792095,0.455385,0.469496,0.499786,0.470068,0.514149,0.600959,0.491529,0.500552,0.546409,0.472745,0.451458,0.474923,0.474190,0.503754,0.507875,0.505865,0.522740,0.458418,0.458677,0.551591,0.521247,0.502668,0.445855,0.656177,0.483894,0.552463,0.463152,0.537063,0.511552,0.498239,0.478911,0.467377,0.474583,0.508604,0.489312,0.551152,0.494820,0.693828,0.472743,0.509597,0.516574,0.485578,0.475172,0.482874,1.000000,0.485603,0.483922,0.536820,0.441732,0.485417,0.463563,0.696041,0.200690,0.507005,0.535090,0.483778,0.481602,0.481804,0.493187,0.498028,0.515231,0.537385,0.473655,0.463185,0.505711,0.474237,0.473394,0.505421,0.552739,0.481101,0.453880,0.474489,0.469028,0.485594,0.606612,0.473503,0.487639,0.451891,0.324626,0.513472,0.470243,0.483440,0.503963,0.480456,0.481819,0.506342,0.486394,0.386613,0.493289,0.536230,0.520338,0.500334,0.520669,0.501427,0.475795,0.520376,0.666565,0.512190,0.292996,0.500411,0.505800,0.458406,0.488237,0.414476,0.492564,0.523042,0.557368,0.608931,0.510143,0.554236,0.467731,0.470845,0.499368,0.411734,0.506165,0.493218,0.088841,0.522812,0.491819,0.460389,0.485833,0.479498,0.492672,0.482805,0.508315,0.478194,0.302279,0.503338,0.466068,0.510345,0.716047,0.496315,0.511842,0.494129,0.481916,0.611218,0.505204,0.478938,0.461629,0.453521,0.592195,0.453593,0.455009,0.463396,0.496996,0.911531,0.490101,0.554946,0.457410,0.478581,0.468724,0.502566,0.480363,0.582640,0.595221,0.455603,0.486643,0.477688,0.439617,0.517790,0.483827,0.724397,0.483443,0.469385,0.490916,0.545414,0.498197,0.492378,0.512322,0.484116,0.461542,0.525471,0.600546,0.486277,0.521170,0.492136,0.487081,0.448322,0.508990,0.473469,0.527676,0.529093,0.508736,0.493002,0.211446,0.492454,0.479032,0.358972,0.617107,0.463033,0.482786,0.734507,0.515846,0.489062,0.506742,0.475506,0.489085,0.471051,0.440608,0.512963,0.719107,0.232667,0.520840,0.512610,0.505980,0.464173,0.466303,0.492420,0.465753,0.473862,0.486937,0.512903,0.484548,0.496427,0.460680,0.484233,0.525638,0.555297,0.476802,0.541994,0.514276,0.500326,0.482536,0.457621,0.529555,0.239358,0.338429,0.496179,0.483336,0.508515,0.446287,0.486230,0.495524,0.480126,0.428351,0.504191,0.488796,0.458793,0.477166,0.511248,0.483990,0.583180,0.515273,0.420953,0.196584,0.480145,0.468877,0.509452,0.508431,0.470578,0.478398,0.468944,0.645224,0.485813,0.484705,0.217488,0.491498,0.502478,0.437190,0.510094,0.539271,0.510050,0.570754,0.669741,0.518873,0.525630,0.477848,0.811659,0.485320,0.457444,0.501244,0.485685,0.475962,0.215598,0.492029,0.444342,0.449504,0.486469,0.242414,0.494105,0.481937,0.466519,0.480278,0.492437,0.489797,0.617771,0.481680,0.484978,0.502469,0.523027,0.482135,0.503806,0.771796,0.464735,0.722329,0.487170,0.482425,0.512868,0.483635,0.486750,0.472840,0.466452,0.495848,0.427762,0.460801,0.517059,0.525642,0.473629,0.459973,0.504759,0.463908,0.521991,0.464828,0.477726,0.469462,0.511080,0.529138,0.493277,0.467450,0.464408,0.489908,0.474864,0.474269,0.502246,0.499805,0.472140,0.476775,0.477985,0.448672,0.519879,0.581082,0.490340,0.457576,0.485724,0.464349,0.503849,0.549966,0.469558,0.461305,0.530108,0.450476,0.450502,0.471196,0.478381,0.489974,0.473805,0.542656,0.494659,0.478570,0.467980,0.499865,0.457443,0.485239,0.413637,0.507846,0.495678,0.536515,0.574995,0.485740,0.765383,0.512931,0.487216,0.498687,0.488274,0.470613,0.494133,0.513379,0.469395,0.496504,0.529605,0.505725,0.467206,0.498339,0.515706,0.479986,0.500134,0.550307,0.452355,0.453446,0.521583,0.513266,0.494566,0.488265,0.497806,0.472901,0.509738,0.459422,0.458710,0.484816,0.493725,0.547774,0.457233,0.455063,0.469391,0.566210,0.486274,0.520038,0.522400,0.410959,0.584386,0.553277,0.497360,0.461316,0.454375,0.496514,0.507406,0.526703,0.494027,0.506810,0.505975,0.498206,0.502808,0.444918,0.483533,0.493627,0.315913,0.476175,0.495221,0.500390,0.515706,0.484005,0.476621,0.493551,0.487594,0.490877,0.532454,0.469989,0.613108,0.469524,0.468497,0.435567,0.493601,0.499062,0.487460,0.506962,0.474727,0.481091,0.458377,0.509630,0.471053,0.513545,0.504919,0.478949,0.429136,0.427918,0.462063,0.433261,0.522509,0.484288,0.235605,0.458459,0.485444,0.453719,0.477711,0.475156,0.421240,0.470461,0.465886,0.493247,0.462532,0.497626,0.462017,0.553886,0.502513,0.401280,0.452624,0.517923,0.494129,0.493093,0.472891,0.480352,0.490100,0.518443,0.481213,0.479502,0.483988,0.475477,0.506023,0.493291,0.445704,0.491083,0.452168,0.546268,0.631463,0.460313,0.485324,0.517590,0.499955,0.502238,0.509035,0.498188,0.474333,0.483774,0.486475,0.485247,0.493591,0.580236,0.498517,0.466586,0.471015,0.493461,0.468464,0.435495,0.388305,0.498653,0.513172,0.494786,0.484591,0.565124,0.493773,0.506204,0.519793,0.361739,0.514482,0.516629,0.558741,0.492278,0.471752,0.501792,0.536627,0.491443,0.510214,0.495511,0.428178,0.464853,0.509025,0.449357,0.513248,0.495072,0.454522,0.484917,0.482845,0.520932,0.539068,0.481403,0.431924,0.490755,0.478311,0.482130,0.495276,0.479915,0.491018,0.477063,0.472526,0.450659,0.509813,0.473132,0.551589,0.475012,0.528151,0.485765,0.483372,0.485315,0.538137,0.480782,0.516346,0.499944,0.419956,0.486179,0.519408,0.528291,0.495502,0.233792,0.472496,0.488983,0.453341,0.544720,0.418514,0.491090,0.523812,0.489892,0.493525,0.456054,0.529496,0.477930,0.515546,0.497370,0.533364,0.509384,0.493304,0.517258,0.437660,0.523108,0.558148,0.542391,0.616707,0.524578,0.511433,0.494970,0.428951,0.506840,0.525557,0.488737,0.600546,0.487311,0.486796,0.488882,0.536189,0.483529,0.452923,0.669524,0.508197,0.482351,0.460863,0.424243,0.462222,0.456728,0.506874,0.483398,0.438682,0.478065,0.488406,0.464038,0.486928,0.482332,0.493005,0.471581,0.496716,0.506964,0.512322,0.537199,0.620693,0.504492,0.458842,0.528470,0.300013,0.515835,0.443247,0.431706,0.505817,0.421479,0.495518,0.491778,0.428331,0.538157,0.631237,0.493131,0.518551,0.496325,0.479979,0.484981,0.524550,0.484697,0.479801,0.478047,0.549725,0.529749,0.536133,0.504717,0.490619,0.475637,0.484030,0.439423,0.516899,0.511863,0.498782,0.467166,0.522916,0.487200,0.646665,0.481382,0.562861,0.575591,0.475038,0.497870,0.510353,0.541183,0.496749,0.563797,0.510760,0.479971,0.460454,0.995589,0.498031,0.491626,0.471466,0.509077,0.599220,0.472676,0.440608,0.488612,0.498065,0.493094,0.487925,0.443851,0.503727,0.454143,0.492749,0.570423,0.505252,0.494707,0.432274,0.394545,0.554941,0.649267,0.476373,0.446680,0.598341,0.484756,0.540176,0.458636,0.457884,0.509535,0.500140,0.522809,0.607626,0.508084,0.491888,0.488100,0.496813,0.480498,0.447348,0.466412,0.523072,0.548514,0.506405,0.428687,0.479284,0.467330,0.508799,0.497507,0.468933,0.496547,0.530525,0.472652,0.489089,0.450701,0.497248,0.486490,0.440841,0.513421,0.441279,0.507544,0.526326,0.609010,0.465312,0.488302,0.497720,0.505833,0.475560,0.512960,0.481315,0.494395,0.505975,0.474034,0.506291,0.498560,0.507359,0.497740,0.463484,0.503140,0.481996,0.466948,0.426567,0.725628,0.463722,0.488104,0.466001,0.494808,0.510364,0.499165,0.514618,0.595344,0.500553,0.514057,0.468554,0.485871,0.488656,0.478268,0.495918,0.470538,0.672977,0.457819,0.480136,0.514574,0.527661,0.503296,0.518731,0.375344,0.495398,0.500419,0.483112,0.474877,0.500528,0.483257,0.098012,0.478059,0.500884,0.492762,0.476972,0.480982,0.465737,0.475035,0.517058,0.508839,0.451612,0.485873,0.481591,0.494329,0.507181,0.450419,0.519928,0.470350,0.546692,0.497865,0.505087,0.492842,0.581453,0.484136,0.556177,0.506055,0.686166,0.530163,0.494682,0.490861,0.475907,0.485456,0.455212,0.480791,0.527068,0.472034,0.545155,0.494532,0.407663,0.537174,0.507169,0.504657,0.501591,0.483701,0.507731,0.490037,0.539511,0.497116,0.562017,0.540737,0.520932,0.491420,0.485754,0.492530,0.467868,0.478689,0.586571,0.565308,0.464813,0.548263,0.456150,0.599425,0.514980,0.455577,0.437351,0.485615,0.497354,0.495149,0.480294,0.526845,0.541780,0.549610,0.353899,0.593989,0.519466,0.500669,0.481618,0.471231,0.201454,0.501682,0.506036,0.466525,0.510126,0.460529,0.450049,0.475834,0.490155,0.390252,0.487267,0.487600,0.327529,0.476502,0.471646,0.485545,0.495846,0.550265,0.463806,0.461775,0.495960,0.499639,0.516429,0.498095,0.538171,0.499943,0.506658,0.529430,0.517740,0.534313,0.500906,0.420190,0.583784,0.496340};;
static coeff_t Co[1222] = {256.000000,256.000000,256.000000,0.377838,37.602711,3.981679,9.790625,256.000000,6.323599,143.001968,84.514107,30.896193,129.020493,6.459861,8.149495,256.000000,256.000000,256.000000,256.000000,42.939339,85.354729,256.000000,5.511238,256.000000,49.910217,77.610931,58.191307,31.715855,256.000000,154.992844,256.000000,41.504036,40.482929,25.511175,97.957176,256.000000,256.000000,3.106152,147.448822,256.000000,20.571304,20.594175,97.980598,29.161674,256.000000,28.371107,69.569237,256.000000,256.000000,256.000000,221.621445,256.000000,256.000000,7.286118,256.000000,256.000000,79.950882,256.000000,9.748680,218.093262,233.773270,19.245794,245.892624,20.977154,151.658997,43.558773,83.557373,256.000000,30.361534,256.000000,69.848518,256.000000,256.000000,22.685482,180.932770,256.000000,256.000000,256.000000,175.780472,256.000000,256.000000,83.398918,256.000000,193.200607,33.200405,256.000000,256.000000,56.017059,256.000000,33.699215,256.000000,90.146294,67.703819,126.287537,6.293340,138.538544,37.799156,51.413437,40.539246,1.970935,123.203011,0.120195,251.998688,256.000000,64.980316,256.000000,256.000000,46.873863,256.000000,16.078697,27.015860,7.731324,256.000000,256.000000,53.845215,0.430881,155.127777,256.000000,0.756773,256.000000,134.378967,256.000000,173.702728,13.157926,83.936493,14.515040,28.171759,76.566437,77.873688,0.727600,72.392250,256.000000,256.000000,256.000000,38.287205,256.000000,106.976959,18.869501,17.152201,2.139803,158.842453,94.776314,11.825386,41.481991,256.000000,111.226624,43.187813,157.304474,256.000000,3.420499,256.000000,256.000000,256.000000,256.000000,256.000000,9.108314,96.625061,101.105850,172.804794,69.834358,131.197174,116.941124,65.509415,256.000000,190.287155,256.000000,162.597275,206.941193,32.548077,35.062141,13.098492,71.558502,256.000000,77.049904,55.991570,12.038315,161.332153,115.660873,256.000000,16.948818,75.917671,256.000000,256.000000,78.537697,67.352989,256.000000,4.202294,3.816604,39.824875,59.649147,256.000000,256.000000,256.000000,22.422009,235.398438,73.942017,0.852340,5.426599,77.461403,3.893183,111.299408,256.000000,119.685135,256.000000,163.886841,1.318343,256.000000,248.538437,25.758383,256.000000,256.000000,6.981712,171.817810,15.338750,88.783844,238.295898,195.917755,5.242184,221.748413,34.870300,256.000000,256.000000,136.788071,58.949173,11.291489,74.284676,256.000000,239.496048,256.000000,3.408316,256.000000,204.835342,89.020790,16.206909,8.006501,256.000000,158.913605,256.000000,256.000000,67.215088,6.542893,74.531784,85.980217,189.031235,69.627998,15.828563,256.000000,256.000000,256.000000,189.887985,4.329193,0.396540,256.000000,151.280304,2.438487,64.836945,256.000000,106.522354,256.000000,256.000000,10.341138,85.615730,7.546156,68.882973,256.000000,136.523895,256.000000,52.238457,24.103226,27.656605,100.515549,90.817276,256.000000,54.334454,66.955803,58.984547,256.000000,196.591324,256.000000,133.769760,245.183701,43.094776,85.037041,256.000000,256.000000,15.053802,256.000000,56.058830,103.876724,170.991898,1.739854,208.878571,256.000000,95.100372,61.168484,234.024094,256.000000,132.185608,41.874481,20.895947,39.697018,207.194382,4.858116,13.165968,1.870093,256.000000,14.711633,256.000000,82.134842,8.965570,44.038624,256.000000,256.000000,256.000000,256.000000,90.062790,207.152817,73.851524,104.749947,68.375000,256.000000,36.472965,9.800015,256.000000,5.115048,88.021667,256.000000,256.000000,160.289200,136.382538,38.248680,256.000000,256.000000,125.631798,127.992004,256.000000,47.714981,256.000000,14.275994,256.000000,256.000000,256.000000,256.000000,24.323603,9.562403,256.000000,70.565231,5.677845,0.300455,13.505046,55.782383,11.741334,76.750900,99.657440,244.766983,73.215607,45.656094,256.000000,256.000000,256.000000,27.019733,2.311106,3.306921,182.139404,43.771156,116.840340,256.000000,256.000000,23.438526,3.538220,16.583696,256.000000,154.459259,3.810347,103.199738,159.960754,9.772880,7.585590,256.000000,16.111156,256.000000,215.579544,256.000000,256.000000,69.775314,78.527748,163.053528,166.938080,193.030518,256.000000,31.222799,32.986565,256.000000,21.191664,256.000000,256.000000,69.479897,256.000000,256.000000,3.767157,22.366007,154.143097,109.128288,8.348893,256.000000,214.236389,6.487822,256.000000,26.607384,256.000000,256.000000,45.794884,1.125327,110.415192,256.000000,256.000000,256.000000,256.000000,256.000000,7.072868,256.000000,106.223763,256.000000,20.488556,46.391750,256.000000,137.099716,130.806549,8.334361,43.434414,39.026585,256.000000,19.066351,183.589752,4.278144,146.990662,256.000000,256.000000,4.399008,100.579842,91.145332,0.758596,118.988907,7.203997,12.107448,238.270355,5.513325,5.233268,111.627586,1.931935,172.338272,7.744387,164.642670,20.630833,64.625786,2.255671,232.327774,130.689880,0.206084,36.110455,7.960837,256.000000,161.218643,23.051373,75.593636,59.388798,256.000000,256.000000,119.295998,256.000000,1.663769,256.000000,124.152527,93.235428,51.859158,11.040219,256.000000,256.000000,55.204582,20.032331,26.395702,118.594368,256.000000,35.106544,127.128593,37.624146,17.027836,37.687309,105.622887,37.370514,199.997559,67.652115,256.000000,215.862518,229.138824,256.000000,54.739857,256.000000,3.125135,58.658863,256.000000,34.637020,108.967484,256.000000,222.685883,49.824284,256.000000,256.000000,52.384460,5.702593,1.077722,54.894985,6.320492,27.685068,256.000000,0.834624,3.577484,99.984283,7.011896,108.445114,43.422825,161.537491,256.000000,256.000000,74.534248,11.115843,3.763793,256.000000,105.704742,182.662781,151.473907,134.576324,77.625832,34.599487,93.797768,3.444353,256.000000,10.802832,236.014465,53.183308,256.000000,20.229073,8.685500,29.099512,107.049477,256.000000,63.487907,256.000000,0.951145,256.000000,12.991178,4.111417,67.879532,256.000000,16.329903,90.899467,256.000000,256.000000,72.995895,179.665100,256.000000,8.309706,256.000000,256.000000,119.946594,256.000000,256.000000,28.486300,193.571838,5.494396,42.827423,256.000000,68.493271,234.299072,24.469368,61.739441,204.822647,1.524210,62.299759,256.000000,2.148471,36.436157,126.912704,96.181770,40.653130,256.000000,163.278915,136.075302,0.834381,123.508224,12.374328,3.559822,6.623189,234.973618,256.000000,256.000000,100.192848,82.421532,14.025699,183.112946,0.604039,83.436653,256.000000,10.849167,256.000000,197.254242,177.040146,25.651873,256.000000,31.082792,6.004776,21.809772,35.591747,256.000000,256.000000,256.000000,256.000000,3.418987,233.715485,8.516836,85.918114,12.124868,5.115730,84.237282,103.741180,148.799484,256.000000,256.000000,52.811905,173.261551,179.135956,40.568577,256.000000,10.675563,8.068893,256.000000,256.000000,101.188805,256.000000,256.000000,27.596491,256.000000,48.623207,16.442047,7.221565,242.609207,228.744980,147.892563,115.004601,127.227509,173.397903,81.009216,30.962217,188.924011,1.594950,125.048119,256.000000,14.884198,21.904202,70.434105,40.895130,11.520079,61.381645,4.127358,256.000000,1.477319,215.059799,108.104309,256.000000,256.000000,256.000000,176.350677,256.000000,105.742950,256.000000,47.498295,42.350727,-256.000000,-17.843529,-256.000000,-118.561905,-0.900315,-49.427326,-256.000000,-8.426908,-256.000000,-256.000000,-116.017639,-256.000000,-86.145828,-256.000000,-54.769875,-256.000000,-256.000000,-10.181157,-256.000000,-256.000000,-256.000000,-68.168495,-256.000000,-256.000000,-256.000000,-1.816648,-256.000000,-67.873894,-256.000000,-256.000000,-256.000000,-74.391159,-256.000000,-256.000000,-256.000000,-105.551079,-256.000000,-256.000000,-103.902740,-213.194519,-256.000000,-256.000000,-256.000000,-256.000000,-256.000000,-9.573307,-256.000000,-1.530713,-256.000000,-256.000000,-53.358479,-256.000000,-256.000000,-256.000000,-256.000000,-167.445877,-256.000000,-49.906231,-168.933365,-256.000000,-2.544054,-256.000000,-157.821106,-22.091463,-13.044273,-256.000000,-256.000000,-96.333900,-256.000000,-256.000000,-122.295776,-256.000000,-256.000000,-4.181292,-21.755030,-6.665123,-6.012242,-217.281113,-13.304906,-256.000000,-256.000000,-256.000000,-256.000000,-111.904945,-256.000000,-256.000000,-256.000000,-256.000000,-256.000000,-256.000000,-43.348972,-8.841123,-256.000000,-256.000000,-1.844458,-16.323900,-9.306588,-7.900302,-88.530029,-9.880508,-256.000000,-139.727219,-112.117889,-244.202011,-256.000000,-256.000000,-256.000000,-108.009789,-256.000000,-256.000000,-15.111933,-256.000000,-49.066250,-256.000000,-256.000000,-256.000000,-256.000000,-161.493927,-256.000000,-256.000000,-256.000000,-3.078381,-256.000000,-256.000000,-256.000000,-256.000000,-256.000000,-3.512558,-256.000000,-256.000000,-253.210602,-0.156252,-66.566078,-256.000000,-256.000000,-116.003517,-2.664066,-0.621146,-256.000000,-4.175947,-189.429779,-90.234695,-256.000000,-256.000000,-256.000000,-210.670303,-256.000000,-228.706390,-256.000000,-256.000000,-256.000000,-7.885718,-40.331474,-256.000000,-256.000000,-63.968369,-27.304436,-250.095673,-256.000000,-52.763817,-5.376092,-256.000000,-256.000000,-131.904800,-256.000000,-256.000000,-256.000000,-241.363373,-256.000000,-0.001234,-42.430080,-184.674835,-256.000000,-256.000000,-111.838806,-256.000000,-3.889288,-86.545731,-256.000000,-256.000000,-2.408864,-256.000000,-20.207777,-256.000000,-256.000000,-36.360039,-256.000000,-175.132660,-118.947334,-32.239712,-256.000000,-128.595596,-256.000000,-94.872124,-50.544212,-0.879965,-256.000000,-256.000000,-4.105247,-132.974625,-223.699173,-56.377029,-26.105927,-18.914125,-75.371132,-17.885948,-256.000000,-20.259706,-85.022484,-256.000000,-1.363831,-256.000000,-256.000000,-2.727881,-195.289673,-0.798018,-236.143707,-256.000000,-172.798660,-150.654984,-54.142082,-256.000000,-256.000000,-256.000000,-167.466949,-214.622055,-256.000000,-256.000000,-256.000000,-256.000000,-36.351162,-38.485111,-256.000000,-15.272907,-38.753895,-165.977371,-256.000000,-3.325738,-256.000000,-256.000000,-241.149582,-255.931534,-256.000000,-85.194214,-256.000000,-17.197260,-67.472443,-256.000000,-103.784355,-256.000000,-256.000000,-0.818312,-15.612702,-201.861847,-3.809661,-0.335948,-104.456169,-11.760599,-26.026913,-171.225403,-256.000000,-256.000000,-255.024612,-256.000000,-256.000000,-256.000000,-256.000000,-256.000000,-256.000000,-1.037318,-256.000000,-248.623016,-183.073990,-20.573690,-39.606834,-256.000000,-160.051682,-256.000000,-22.142809,-104.185799,-25.152058,-149.732346,-0.145817,-9.116907,-256.000000,-256.000000,-256.000000,-256.000000,-10.205378,-256.000000,-256.000000,-59.351711,-20.196621,-256.000000,-33.324333,-213.137161,-256.000000,-31.929674,-256.000000,-256.000000,-5.090537,-6.560724,-81.245621,-156.709229,-256.000000,-256.000000,-121.736580,-27.034815,-256.000000,-6.026342,-12.923452,-256.000000,-256.000000,-256.000000,-256.000000,-256.000000,-247.234695,-256.000000,-256.000000,-157.507584,-2.007016,-256.000000,-256.000000,-99.468063,-49.476688,-11.522698,-1.034085,-134.070221,-256.000000,-9.396217,-14.752956,-256.000000,-9.100965,-256.000000,-131.294449,-11.982084,-139.622635,-2.106203,-137.649551,-256.000000,-147.172455,-7.072444,-33.623226,-256.000000,-164.048981,-1.458130,-256.000000,-256.000000,-256.000000,-256.000000,-256.000000,-11.847391,-125.122688,-136.201126,-256.000000,-27.783068,-256.000000,-90.022148,-85.731560,-256.000000,-256.000000,-256.000000,-159.474594,-58.853752,-129.247726,-119.120392,-61.304306,-256.000000,-256.000000,-256.000000,-256.000000,-256.000000,-256.000000,-256.000000,-15.337561,-87.317825,-3.013679,-40.804905,-26.131580,-11.761307,-256.000000,-41.765682,-0.747833,-256.000000,-256.000000,-256.000000,-256.000000,-31.597832,-256.000000,-7.613805,-256.000000,-121.996864,-52.862988,-256.000000,-256.000000,-256.000000,-11.558264,-256.000000,-256.000000,-256.000000,-52.752945,-1.341946,-1.899512,-8.377485,-126.563843,-256.000000,-256.000000,-163.345123,-89.409554,-256.000000,-22.830221,-1.994243,-256.000000,-9.626154,-19.209908,-256.000000,-111.102844,-256.000000,-256.000000,-0.446186,-256.000000,-34.619537,-12.760421,-256.000000,-256.000000,-6.455916,-28.668245,-201.979462,-183.701859,-2.304885,-256.000000,-73.749504,-55.883755,-13.995918,-5.670978,-256.000000,-169.835159,-239.679443,-256.000000,-181.066452,-3.051180,-100.829964,-256.000000,-5.251395,-5.701899,-106.260246,-256.000000,-256.000000,-52.326290,-256.000000,-9.395118,-256.000000,-256.000000,-256.000000,-52.918671,-28.793499,-2.438405,-19.020601,-256.000000,-75.717522,-256.000000,-256.000000,-27.534323,-153.702423,-256.000000,-256.000000,-124.234016,-256.000000,-62.852139,-147.429001,-113.018593,-58.329403,-256.000000,-256.000000,-256.000000,-256.000000,-256.000000,-256.000000,-256.000000,-5.941471,-256.000000,-27.252138,-66.343895,-2.777405,-256.000000,-256.000000,-256.000000,-88.755508,-126.404816,-9.666991,-256.000000,-55.137455,-256.000000,-255.796707,-147.732574,-37.180119,-20.549978,-256.000000,-22.641054,-35.434879,-256.000000,-256.000000,-256.000000,-91.790222,-42.194019,-3.260047,-256.000000,-256.000000,-256.000000,-256.000000,-256.000000,-249.203964,-47.994205,-256.000000,-76.910194,-33.106411,-98.390289,-256.000000,-256.000000,-137.906052,-27.119961,-256.000000,-256.000000,-15.569659,-11.716291,-79.297691,-81.685211,-198.427963,-11.921264,-256.000000,-256.000000,-256.000000,-256.000000,-23.303205,-225.499771,-256.000000,-55.367420,-143.147552,-256.000000,-256.000000,-256.000000,-256.000000,-256.000000,-133.239441,-234.311661};;




void svm (
    output_t * class_hw,
    input_t x[18]
    );

void svm_top(
  output_t * class_hw0,
  output_t * class_hw1,
  output_t * class_hw2,
  output_t * class_hw3,
  input_t x0[18],
  input_t x1[18],
  input_t x2[18],
  input_t x3[18]
  );
# 3 "svm_top.cpp" 2
# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 1 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 3
# 41 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 3




# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 1 3
# 10 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
# 10 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3


# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 12 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 2 3


struct _exception;

#pragma pack(push,_CRT_PACKING)
# 75 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
extern "C" {



  extern double * __imp__HUGE;
# 91 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  struct _exception {
    int type;
    const char *name;
    double arg1;
    double arg2;
    double retval;
  };

  void __mingw_raise_matherr (int typ, const char *name, double a1, double a2,
         double rslt);
  void __mingw_setusermatherr (int ( *)(struct _exception *));
  __attribute__ ((__dllimport__)) void __setusermatherr(int ( *)(struct _exception *));



  double sin(double _X);
  double cos(double _X);
  double tan(double _X);
  double sinh(double _X);
  double cosh(double _X);
  double tanh(double _X);
  double asin(double _X);
  double acos(double _X);
  double atan(double _X);
  double atan2(double _Y,double _X);
  double exp(double _X);
  double log(double _X);
  double log10(double _X);
  double pow(double _X,double _Y);
  double sqrt(double _X);
  double ceil(double _X);
  double floor(double _X);
  double fabs(double _X);
# 135 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  double ldexp(double _X,int _Y);
  double frexp(double _X,int *_Y);
  double modf(double _X,double *_Y);
  double fmod(double _X,double _Y);

  void sincos (double __x, double *p_sin, double *p_cos);
  void sincosl (long double __x, long double *p_sin, long double *p_cos);
  void sincosf (float __x, float *p_sin, float *p_cos);



  int abs(int _X);
  long labs(long _X);



  double atof(const char *_String);
  double _atof_l(const char *_String,_locale_t _Locale);
# 162 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  struct _complex {
    double x;
    double y;
  };


  __attribute__ ((__dllimport__)) double _cabs(struct _complex _ComplexA);
  double _hypot(double _X,double _Y);
  __attribute__ ((__dllimport__)) double _j0(double _X);
  __attribute__ ((__dllimport__)) double _j1(double _X);
  __attribute__ ((__dllimport__)) double _jn(int _X,double _Y);
  __attribute__ ((__dllimport__)) double _y0(double _X);
  __attribute__ ((__dllimport__)) double _y1(double _X);
  __attribute__ ((__dllimport__)) double _yn(int _X,double _Y);


  __attribute__ ((__dllimport__)) int _matherr (struct _exception *);
# 189 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  __attribute__ ((__dllimport__)) double _chgsign (double _X);
  __attribute__ ((__dllimport__)) double _copysign (double _Number,double _Sign);
  __attribute__ ((__dllimport__)) double _logb (double);
  __attribute__ ((__dllimport__)) double _nextafter (double, double);
  __attribute__ ((__dllimport__)) double _scalb (double, long);
  __attribute__ ((__dllimport__)) int _finite (double);
  __attribute__ ((__dllimport__)) int _fpclass (double);
  __attribute__ ((__dllimport__)) int _isnan (double);






__attribute__ ((__dllimport__)) double j0 (double) ;
__attribute__ ((__dllimport__)) double j1 (double) ;
__attribute__ ((__dllimport__)) double jn (int, double) ;
__attribute__ ((__dllimport__)) double y0 (double) ;
__attribute__ ((__dllimport__)) double y1 (double) ;
__attribute__ ((__dllimport__)) double yn (int, double) ;

__attribute__ ((__dllimport__)) double chgsign (double);
# 219 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  __attribute__ ((__dllimport__)) int finite (double);
  __attribute__ ((__dllimport__)) int fpclass (double);
# 264 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
typedef float float_t;
typedef double double_t;
# 299 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern int __fpclassifyl (long double);
  extern int __fpclassifyf (float);
  extern int __fpclassify (double);
# 335 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern int __isnan (double);
  extern int __isnanf (float);
  extern int __isnanl (long double);
# 376 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern int __signbit (double);
  extern int __signbitf (float);
  extern int __signbitl (long double);
# 404 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern float sinf(float _X);
  extern long double sinl(long double);

  extern float cosf(float _X);
  extern long double cosl(long double);

  extern float tanf(float _X);
  extern long double tanl(long double);
  extern float asinf(float _X);
  extern long double asinl(long double);

  extern float acosf (float);
  extern long double acosl (long double);

  extern float atanf (float);
  extern long double atanl (long double);

  extern float atan2f (float, float);
  extern long double atan2l (long double, long double);


  extern float sinhf(float _X);



  extern long double sinhl(long double);

  extern float coshf(float _X);



  extern long double coshl(long double);

  extern float tanhf(float _X);



  extern long double tanhl(long double);



  extern double acosh (double);
  extern float acoshf (float);
  extern long double acoshl (long double);


  extern double asinh (double);
  extern float asinhf (float);
  extern long double asinhl (long double);


  extern double atanh (double);
  extern float atanhf (float);
  extern long double atanhl (long double);



  extern float expf(float _X);



  extern long double expl(long double);


  extern double exp2(double);
  extern float exp2f(float);
  extern long double exp2l(long double);



  extern double expm1(double);
  extern float expm1f(float);
  extern long double expm1l(long double);


  extern float frexpf(float _X,int *_Y);



  extern long double frexpl(long double,int *);




  extern int ilogb (double);
  extern int ilogbf (float);
  extern int ilogbl (long double);


  extern float ldexpf(float _X,int _Y);



  extern long double ldexpl (long double, int);


  extern float logf (float);
  extern long double logl(long double);


  extern float log10f (float);
  extern long double log10l(long double);


  extern double log1p(double);
  extern float log1pf(float);
  extern long double log1pl(long double);


  extern double log2 (double);
  extern float log2f (float);
  extern long double log2l (long double);


  extern double logb (double);
  extern float logbf (float);
  extern long double logbl (long double);
# 553 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern float modff (float, float*);
  extern long double modfl (long double, long double*);


  extern double scalbn (double, int);
  extern float scalbnf (float, int);
  extern long double scalbnl (long double, int);

  extern double scalbln (double, long);
  extern float scalblnf (float, long);
  extern long double scalblnl (long double, long);



  extern double cbrt (double);
  extern float cbrtf (float);
  extern long double cbrtl (long double);


  extern float fabsf (float x);
# 583 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern long double fabsl (long double);
# 595 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern double hypot (double, double) ;
  extern float hypotf (float x, float y);



  extern long double hypotl (long double, long double);


  extern float powf(float _X,float _Y);



  extern long double powl (long double, long double);


  extern float sqrtf (float);
  extern long double sqrtl(long double);


  extern double erf (double);
  extern float erff (float);
  extern long double erfl (long double);


  extern double erfc (double);
  extern float erfcf (float);
  extern long double erfcl (long double);


  extern double lgamma (double);
  extern float lgammaf (float);
  extern long double lgammal (long double);


  extern double tgamma (double);
  extern float tgammaf (float);
  extern long double tgammal (long double);


  extern float ceilf (float);
  extern long double ceill (long double);


  extern float floorf (float);
  extern long double floorl (long double);


  extern double nearbyint ( double);
  extern float nearbyintf (float);
  extern long double nearbyintl (long double);



extern double rint (double);
extern float rintf (float);
extern long double rintl (long double);


extern long lrint (double);
extern long lrintf (float);
extern long lrintl (long double);

__extension__ long long llrint (double);
__extension__ long long llrintf (float);
__extension__ long long llrintl (long double);
# 739 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern double round (double);
  extern float roundf (float);
  extern long double roundl (long double);


  extern long lround (double);
  extern long lroundf (float);
  extern long lroundl (long double);
  __extension__ long long llround (double);
  __extension__ long long llroundf (float);
  __extension__ long long llroundl (long double);



  extern double trunc (double);
  extern float truncf (float);
  extern long double truncl (long double);


  extern float fmodf (float, float);
  extern long double fmodl (long double, long double);


  extern double remainder (double, double);
  extern float remainderf (float, float);
  extern long double remainderl (long double, long double);


  extern double remquo(double, double, int *);
  extern float remquof(float, float, int *);
  extern long double remquol(long double, long double, int *);


  extern double copysign (double, double);
  extern float copysignf (float, float);
  extern long double copysignl (long double, long double);


  extern double nan(const char *tagp);
  extern float nanf(const char *tagp);
  extern long double nanl(const char *tagp);
# 788 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern double nextafter (double, double);
  extern float nextafterf (float, float);
  extern long double nextafterl (long double, long double);


  extern double nexttoward (double, long double);
  extern float nexttowardf (float, long double);
  extern long double nexttowardl (long double, long double);



  extern double fdim (double x, double y);
  extern float fdimf (float x, float y);
  extern long double fdiml (long double x, long double y);







  extern double fmax (double, double);
  extern float fmaxf (float, float);
  extern long double fmaxl (long double, long double);


  extern double fmin (double, double);
  extern float fminf (float, float);
  extern long double fminl (long double, long double);



  extern double fma (double, double, double);
  extern float fmaf (float, float, float);
  extern long double fmal (long double, long double, long double);
# 871 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
   __attribute__ ((__dllimport__)) float _copysignf (float _Number,float _Sign);
   __attribute__ ((__dllimport__)) float _chgsignf (float _X);
   __attribute__ ((__dllimport__)) float _logbf(float _X);
   __attribute__ ((__dllimport__)) float _nextafterf(float _X,float _Y);
   __attribute__ ((__dllimport__)) int _finitef(float _X);
   __attribute__ ((__dllimport__)) int _isnanf(float _X);
   __attribute__ ((__dllimport__)) int _fpclassf(float _X);



   extern long double _chgsignl (long double);
# 893 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
}




#pragma pack(pop)
# 46 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 2 3
# 76 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 3
namespace std {



  template<typename _Tp>
    _Tp __cmath_power(_Tp, unsigned int);

  template<typename _Tp>
    inline _Tp
    __pow_helper(_Tp __x, int __n)
    {
      return __n < 0
        ? _Tp(1)/__cmath_power(__x, -__n)
        : __cmath_power(__x, __n);
    }

  inline double
  abs(double __x)
  { return __builtin_fabs(__x); }

  inline float
  abs(float __x)
  { return __builtin_fabsf(__x); }

  inline long double
  abs(long double __x)
  { return __builtin_fabsl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    abs(_Tp __x)
    { return __builtin_fabs(__x); }

  using ::acos;

  inline float
  acos(float __x)
  { return __builtin_acosf(__x); }

  inline long double
  acos(long double __x)
  { return __builtin_acosl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    acos(_Tp __x)
    { return __builtin_acos(__x); }

  using ::asin;

  inline float
  asin(float __x)
  { return __builtin_asinf(__x); }

  inline long double
  asin(long double __x)
  { return __builtin_asinl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    asin(_Tp __x)
    { return __builtin_asin(__x); }

  using ::atan;

  inline float
  atan(float __x)
  { return __builtin_atanf(__x); }

  inline long double
  atan(long double __x)
  { return __builtin_atanl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    atan(_Tp __x)
    { return __builtin_atan(__x); }

  using ::atan2;

  inline float
  atan2(float __y, float __x)
  { return __builtin_atan2f(__y, __x); }

  inline long double
  atan2(long double __y, long double __x)
  { return __builtin_atan2l(__y, __x); }

  template<typename _Tp, typename _Up>
    inline
    typename __gnu_cxx::__promote_2<
    typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value
        && __is_arithmetic<_Up>::__value,
        _Tp>::__type, _Up>::__type
    atan2(_Tp __y, _Up __x)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return atan2(__type(__y), __type(__x));
    }

  using ::ceil;

  inline float
  ceil(float __x)
  { return __builtin_ceilf(__x); }

  inline long double
  ceil(long double __x)
  { return __builtin_ceill(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    ceil(_Tp __x)
    { return __builtin_ceil(__x); }

  using ::cos;

  inline float
  cos(float __x)
  { return __builtin_cosf(__x); }

  inline long double
  cos(long double __x)
  { return __builtin_cosl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    cos(_Tp __x)
    { return __builtin_cos(__x); }

  using ::cosh;

  inline float
  cosh(float __x)
  { return __builtin_coshf(__x); }

  inline long double
  cosh(long double __x)
  { return __builtin_coshl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    cosh(_Tp __x)
    { return __builtin_cosh(__x); }

  using ::exp;

  inline float
  exp(float __x)
  { return __builtin_expf(__x); }

  inline long double
  exp(long double __x)
  { return __builtin_expl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    exp(_Tp __x)
    { return __builtin_exp(__x); }

  using ::fabs;

  inline float
  fabs(float __x)
  { return __builtin_fabsf(__x); }

  inline long double
  fabs(long double __x)
  { return __builtin_fabsl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    fabs(_Tp __x)
    { return __builtin_fabs(__x); }

  using ::floor;

  inline float
  floor(float __x)
  { return __builtin_floorf(__x); }

  inline long double
  floor(long double __x)
  { return __builtin_floorl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    floor(_Tp __x)
    { return __builtin_floor(__x); }

  using ::fmod;

  inline float
  fmod(float __x, float __y)
  { return __builtin_fmodf(__x, __y); }

  inline long double
  fmod(long double __x, long double __y)
  { return __builtin_fmodl(__x, __y); }

  using ::frexp;

  inline float
  frexp(float __x, int* __exp)
  { return __builtin_frexpf(__x, __exp); }

  inline long double
  frexp(long double __x, int* __exp)
  { return __builtin_frexpl(__x, __exp); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    frexp(_Tp __x, int* __exp)
    { return __builtin_frexp(__x, __exp); }

  using ::ldexp;

  inline float
  ldexp(float __x, int __exp)
  { return __builtin_ldexpf(__x, __exp); }

  inline long double
  ldexp(long double __x, int __exp)
  { return __builtin_ldexpl(__x, __exp); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
  ldexp(_Tp __x, int __exp)
  { return __builtin_ldexp(__x, __exp); }

  using ::log;

  inline float
  log(float __x)
  { return __builtin_logf(__x); }

  inline long double
  log(long double __x)
  { return __builtin_logl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    log(_Tp __x)
    { return __builtin_log(__x); }

  using ::log10;

  inline float
  log10(float __x)
  { return __builtin_log10f(__x); }

  inline long double
  log10(long double __x)
  { return __builtin_log10l(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    log10(_Tp __x)
    { return __builtin_log10(__x); }

  using ::modf;

  inline float
  modf(float __x, float* __iptr)
  { return __builtin_modff(__x, __iptr); }

  inline long double
  modf(long double __x, long double* __iptr)
  { return __builtin_modfl(__x, __iptr); }

  using ::pow;

  inline float
  pow(float __x, float __y)
  { return __builtin_powf(__x, __y); }

  inline long double
  pow(long double __x, long double __y)
  { return __builtin_powl(__x, __y); }




  inline double
  pow(double __x, int __i)
  { return __builtin_powi(__x, __i); }

  inline float
  pow(float __x, int __n)
  { return __builtin_powif(__x, __n); }

  inline long double
  pow(long double __x, int __n)
  { return __builtin_powil(__x, __n); }


  template<typename _Tp, typename _Up>
    inline
    typename __gnu_cxx::__promote_2<
    typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value
        && __is_arithmetic<_Up>::__value,
        _Tp>::__type, _Up>::__type
    pow(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return pow(__type(__x), __type(__y));
    }

  using ::sin;

  inline float
  sin(float __x)
  { return __builtin_sinf(__x); }

  inline long double
  sin(long double __x)
  { return __builtin_sinl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    sin(_Tp __x)
    { return __builtin_sin(__x); }

  using ::sinh;

  inline float
  sinh(float __x)
  { return __builtin_sinhf(__x); }

  inline long double
  sinh(long double __x)
  { return __builtin_sinhl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    sinh(_Tp __x)
    { return __builtin_sinh(__x); }

  using ::sqrt;

  inline float
  sqrt(float __x)
  { return __builtin_sqrtf(__x); }

  inline long double
  sqrt(long double __x)
  { return __builtin_sqrtl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    sqrt(_Tp __x)
    { return __builtin_sqrt(__x); }

  using ::tan;

  inline float
  tan(float __x)
  { return __builtin_tanf(__x); }

  inline long double
  tan(long double __x)
  { return __builtin_tanl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    tan(_Tp __x)
    { return __builtin_tan(__x); }

  using ::tanh;

  inline float
  tanh(float __x)
  { return __builtin_tanhf(__x); }

  inline long double
  tanh(long double __x)
  { return __builtin_tanhl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    tanh(_Tp __x)
    { return __builtin_tanh(__x); }

}
# 497 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 3
namespace std {

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    fpclassify(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_fpclassify(0x0100, (0x0100 | 0x0400), 0x0400,
      (0x0400 | 0x4000), 0x4000, __type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isfinite(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isfinite(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isinf(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isinf(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isnan(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isnan(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isnormal(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isnormal(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    signbit(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_signbit(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isgreater(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isgreater(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isgreaterequal(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isgreaterequal(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isless(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isless(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    islessequal(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_islessequal(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    islessgreater(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_islessgreater(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isunordered(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isunordered(__type(__f1), __type(__f2));
    }

}






# 1 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cmath.tcc" 1 3
# 35 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cmath.tcc" 3
namespace std {

  template<typename _Tp>
    inline _Tp
    __cmath_power(_Tp __x, unsigned int __n)
    {
      _Tp __y = __n % 2 ? __x : _Tp(1);

      while (__n >>= 1)
        {
          __x = __x * __x;
          if (__n % 2)
            __y = __y * __x;
        }

      return __y;
    }

}
# 615 "C:/Xilinx/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 2 3
# 4 "svm_top.cpp" 2

using namespace std;


void svm_top(
  output_t * class_hw0,
  output_t * class_hw1,
  output_t * class_hw2,
  output_t * class_hw3,
  input_t x0[18],
  input_t x1[18],
  input_t x2[18],
  input_t x3[18])
{_ssdm_SpecArrayDimSize(x0, 18);_ssdm_SpecArrayDimSize(x1, 18);_ssdm_SpecArrayDimSize(x2, 18);_ssdm_SpecArrayDimSize(x3, 18);
#pragma HLS DATAFLOW
 svm(class_hw0, x0);
 svm(class_hw1, x1);
 svm(class_hw2, x2);
 svm(class_hw3, x3);
}
