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

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void initializeBuffer(signed int *llvm_cbe_buffer, signed int (*llvm_cbe_in_data)[100], signed int llvm_cbe_index_row_out, signed int llvm_cbe_kernel_size_row, signed int llvm_cbe_kernel_size_col);
signed int calculateConvolution(signed int *llvm_cbe_buffer, signed int (*llvm_cbe_kernel)[100], signed int llvm_cbe_kernel_size_row, signed int llvm_cbe_kernel_size_col);
void updateBuffer(signed int *llvm_cbe_buffer, signed int (*llvm_cbe_in_data)[100], signed int llvm_cbe_index_row_out, signed int llvm_cbe_index_col_out, signed int llvm_cbe_kernel_size_row, signed int llvm_cbe_kernel_size_col, signed int llvm_cbe_col_in);
void conv2D(signed int (*llvm_cbe_in_data)[100], signed int (*llvm_cbe_out_data)[100], signed int llvm_cbe_row_in, signed int llvm_cbe_col_in, signed int (*llvm_cbe_kernel)[100], signed int llvm_cbe_kernel_size_row, signed int llvm_cbe_kernel_size_col);


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

void initializeBuffer(signed int *llvm_cbe_buffer, signed int (*llvm_cbe_in_data)[100], signed int llvm_cbe_index_row_out, signed int llvm_cbe_kernel_size_row, signed int llvm_cbe_kernel_size_col) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  unsigned int llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond5_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge12_2e_us;
  unsigned int llvm_cbe_storemerge12_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  unsigned int llvm_cbe_tmp__2;
  unsigned int llvm_cbe_tmp__2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  unsigned long long llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  signed int *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  unsigned int llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  unsigned int llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  unsigned long long llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  signed int *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  unsigned int llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge3_2e_us;
  unsigned int llvm_cbe_storemerge3_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  unsigned int llvm_cbe_tmp__10;
  unsigned int llvm_cbe_tmp__10__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  unsigned int llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  unsigned long long llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  unsigned int llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @initializeBuffer\n");
  if ((((signed int )llvm_cbe_kernel_size_row) > ((signed int )0u))) {
    goto llvm_cbe__2e_preheader_2e_lr_2e_ph;
  } else {
    goto llvm_cbe_tmp__14;
  }

llvm_cbe__2e_preheader_2e_lr_2e_ph:
  if ((((signed int )llvm_cbe_kernel_size_col) > ((signed int )0u))) {
    llvm_cbe_storemerge3_2e_us__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__10__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph_2e_us;
  } else {
    goto llvm_cbe__2e__crit_edge4;
  }

  do {     /* Syntactic loop '.lr.ph.us' to make GCC happy */
llvm_cbe__2e_lr_2e_ph_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3.us = phi i32 [ %%4, %%3 ], [ 0, %%.preheader.lr.ph  for 0x%I64xth hint within @initializeBuffer  --> \n", ++aesl_llvm_cbe_storemerge3_2e_us_count);
  llvm_cbe_storemerge3_2e_us = (unsigned int )llvm_cbe_storemerge3_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3.us = 0x%X",llvm_cbe_storemerge3_2e_us);
printf("\n = 0x%X",llvm_cbe_tmp__1);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = phi i32 [ %%17, %%3 ], [ 0, %%.preheader.lr.ph  for 0x%I64xth hint within @initializeBuffer  --> \n", ++aesl_llvm_cbe_42_count);
  llvm_cbe_tmp__10 = (unsigned int )llvm_cbe_tmp__10__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__10);
printf("\n = 0x%X",llvm_cbe_tmp__13);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = add nsw i32 %%storemerge3.us, %%index_row_out, !dbg !5 for 0x%I64xth hint within @initializeBuffer  --> \n", ++aesl_llvm_cbe_46_count);
  llvm_cbe_tmp__11 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3_2e_us&4294967295ull)) + ((unsigned int )(llvm_cbe_index_row_out&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__11&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = sext i32 %%15 to i64, !dbg !5 for 0x%I64xth hint within @initializeBuffer  --> \n", ++aesl_llvm_cbe_47_count);
  llvm_cbe_tmp__12 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = add i32 %%14, %%kernel_size_col, !dbg !5 for 0x%I64xth hint within @initializeBuffer  --> \n", ++aesl_llvm_cbe_48_count);
  llvm_cbe_tmp__13 = (unsigned int )((unsigned int )(llvm_cbe_tmp__10&4294967295ull)) + ((unsigned int )(llvm_cbe_kernel_size_col&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__13&4294967295ull)));
  llvm_cbe_storemerge12_2e_us__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__10;   /* for PHI node */
  goto llvm_cbe_tmp__15;

llvm_cbe_tmp__16:
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = add nsw i32 %%storemerge3.us, 1, !dbg !7 for 0x%I64xth hint within @initializeBuffer  --> \n", ++aesl_llvm_cbe_21_count);
  llvm_cbe_tmp__1 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__1&4294967295ull)));
  if (((llvm_cbe_tmp__1&4294967295U) == (llvm_cbe_kernel_size_row&4294967295U))) {
    goto llvm_cbe__2e__crit_edge4;
  } else {
    llvm_cbe_storemerge3_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__1;   /* for PHI node */
    llvm_cbe_tmp__10__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__13;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph_2e_us;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__15:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12.us = phi i32 [ 0, %%.lr.ph.us ], [ %%13, %%5  for 0x%I64xth hint within @initializeBuffer  --> \n", ++aesl_llvm_cbe_storemerge12_2e_us_count);
  llvm_cbe_storemerge12_2e_us = (unsigned int )llvm_cbe_storemerge12_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12.us = 0x%X",llvm_cbe_storemerge12_2e_us);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__9);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = phi i32 [ %%14, %%.lr.ph.us ], [ %%10, %%5  for 0x%I64xth hint within @initializeBuffer  --> \n", ++aesl_llvm_cbe_27_count);
  llvm_cbe_tmp__2 = (unsigned int )llvm_cbe_tmp__2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__2);
printf("\n = 0x%X",llvm_cbe_tmp__10);
printf("\n = 0x%X",llvm_cbe_tmp__6);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sext i32 %%storemerge12.us to i64, !dbg !5 for 0x%I64xth hint within @initializeBuffer  --> \n", ++aesl_llvm_cbe_28_count);
  llvm_cbe_tmp__3 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge12_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [100 x i32]* %%in_data, i64 %%16, i64 %%7, !dbg !5 for 0x%I64xth hint within @initializeBuffer  --> \n", ++aesl_llvm_cbe_29_count);
  llvm_cbe_tmp__4 = (signed int *)(&llvm_cbe_in_data[(((signed long long )llvm_cbe_tmp__12))
#ifdef AESL_BC_SIM
 % 100
#endif
][(((signed long long )llvm_cbe_tmp__3))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__12));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__3));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__3) < 100)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in_data' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i32* %%8, align 4, !dbg !5 for 0x%I64xth hint within @initializeBuffer  --> \n", ++aesl_llvm_cbe_30_count);
  llvm_cbe_tmp__5 = (unsigned int )*llvm_cbe_tmp__4;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = add nsw i32 %%6, 1, !dbg !5 for 0x%I64xth hint within @initializeBuffer  --> \n", ++aesl_llvm_cbe_31_count);
  llvm_cbe_tmp__6 = (unsigned int )((unsigned int )(llvm_cbe_tmp__2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__6&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = sext i32 %%6 to i64, !dbg !5 for 0x%I64xth hint within @initializeBuffer  --> \n", ++aesl_llvm_cbe_33_count);
  llvm_cbe_tmp__7 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds i32* %%buffer, i64 %%11, !dbg !5 for 0x%I64xth hint within @initializeBuffer  --> \n", ++aesl_llvm_cbe_34_count);
  llvm_cbe_tmp__8 = (signed int *)(&llvm_cbe_buffer[(((signed long long )llvm_cbe_tmp__7))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__7));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%9, i32* %%12, align 4, !dbg !5 for 0x%I64xth hint within @initializeBuffer  --> \n", ++aesl_llvm_cbe_35_count);
  *llvm_cbe_tmp__8 = llvm_cbe_tmp__5;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = add nsw i32 %%storemerge12.us, 1, !dbg !7 for 0x%I64xth hint within @initializeBuffer  --> \n", ++aesl_llvm_cbe_36_count);
  llvm_cbe_tmp__9 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__9&4294967295ull)));
  if (((llvm_cbe_tmp__9&4294967295U) == (llvm_cbe_kernel_size_col&4294967295U))) {
    goto llvm_cbe_tmp__16;
  } else {
    llvm_cbe_storemerge12_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__9;   /* for PHI node */
    llvm_cbe_tmp__2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__6;   /* for PHI node */
    goto llvm_cbe_tmp__15;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.lr.ph.us' */
llvm_cbe__2e__crit_edge4:
  goto llvm_cbe_tmp__14;

llvm_cbe_tmp__14:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @initializeBuffer}\n");
  return;
}


signed int calculateConvolution(signed int *llvm_cbe_buffer, signed int (*llvm_cbe_kernel)[100], signed int llvm_cbe_kernel_size_row, signed int llvm_cbe_kernel_size_col) {
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  unsigned int llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond8_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge12_2e_us;
  unsigned int llvm_cbe_storemerge12_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  unsigned int llvm_cbe_tmp__18;
  unsigned int llvm_cbe_tmp__18__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  unsigned int llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  unsigned long long llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  signed int *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  unsigned int llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  unsigned long long llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  signed int *llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  unsigned int llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  unsigned int llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  unsigned int llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  unsigned int llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge4_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge4_2e_us;
  unsigned int llvm_cbe_storemerge4_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  unsigned int llvm_cbe_tmp__29;
  unsigned int llvm_cbe_tmp__29__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  unsigned int llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  unsigned long long llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge4_count = 0;
  unsigned int llvm_cbe_storemerge4;
  unsigned int llvm_cbe_storemerge4__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  unsigned int llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond9_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_lcssa3_count = 0;
  unsigned int llvm_cbe__2e_lcssa3;
  unsigned int llvm_cbe__2e_lcssa3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @calculateConvolution\n");
  if ((((signed int )llvm_cbe_kernel_size_row) > ((signed int )0u))) {
    goto llvm_cbe__2e_preheader_2e_lr_2e_ph;
  } else {
    llvm_cbe__2e_lcssa3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge5;
  }

llvm_cbe__2e_preheader_2e_lr_2e_ph:
  if ((((signed int )llvm_cbe_kernel_size_col) > ((signed int )0u))) {
    llvm_cbe_storemerge4_2e_us__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    llvm_cbe_tmp__29__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph_2e_us;
  } else {
    llvm_cbe_storemerge4__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe_tmp__33;
  }

  do {     /* Syntactic loop '.lr.ph.us' to make GCC happy */
llvm_cbe__2e_lr_2e_ph_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge4.us = phi i32 [ %%4, %%3 ], [ 0, %%.preheader.lr.ph  for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_storemerge4_2e_us_count);
  llvm_cbe_storemerge4_2e_us = (unsigned int )llvm_cbe_storemerge4_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge4.us = 0x%X",llvm_cbe_storemerge4_2e_us);
printf("\n = 0x%X",llvm_cbe_tmp__17);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = phi i32 [ %%15, %%3 ], [ 0, %%.preheader.lr.ph  for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_101_count);
  llvm_cbe_tmp__29 = (unsigned int )llvm_cbe_tmp__29__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__29);
printf("\n = 0x%X",llvm_cbe_tmp__27);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = mul nsw i32 %%storemerge4.us, %%kernel_size_col, !dbg !5 for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_106_count);
  llvm_cbe_tmp__30 = (unsigned int )((unsigned int )(llvm_cbe_storemerge4_2e_us&4294967295ull)) * ((unsigned int )(llvm_cbe_kernel_size_col&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__30&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = sext i32 %%storemerge4.us to i64, !dbg !5 for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_107_count);
  llvm_cbe_tmp__31 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge4_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__31);
  llvm_cbe_storemerge12_2e_us__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__18__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__29;   /* for PHI node */
  goto llvm_cbe_tmp__34;

llvm_cbe_tmp__35:
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = add nsw i32 %%storemerge4.us, 1, !dbg !6 for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_74_count);
  llvm_cbe_tmp__17 = (unsigned int )((unsigned int )(llvm_cbe_storemerge4_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__17&4294967295ull)));
  if (((llvm_cbe_tmp__17&4294967295U) == (llvm_cbe_kernel_size_row&4294967295U))) {
    llvm_cbe__2e_lcssa3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__27;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge5;
  } else {
    llvm_cbe_storemerge4_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__17;   /* for PHI node */
    llvm_cbe_tmp__29__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__27;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph_2e_us;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__34:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12.us = phi i32 [ 0, %%.lr.ph.us ], [ %%16, %%5  for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_storemerge12_2e_us_count);
  llvm_cbe_storemerge12_2e_us = (unsigned int )llvm_cbe_storemerge12_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12.us = 0x%X",llvm_cbe_storemerge12_2e_us);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__28);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = phi i32 [ %%17, %%.lr.ph.us ], [ %%15, %%5  for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_81_count);
  llvm_cbe_tmp__18 = (unsigned int )llvm_cbe_tmp__18__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__18);
printf("\n = 0x%X",llvm_cbe_tmp__29);
printf("\n = 0x%X",llvm_cbe_tmp__27);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = add nsw i32 %%storemerge12.us, %%18, !dbg !5 for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_82_count);
  llvm_cbe_tmp__19 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12_2e_us&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__30&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__19&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = sext i32 %%7 to i64, !dbg !5 for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_83_count);
  llvm_cbe_tmp__20 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds i32* %%buffer, i64 %%8, !dbg !5 for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_84_count);
  llvm_cbe_tmp__21 = (signed int *)(&llvm_cbe_buffer[(((signed long long )llvm_cbe_tmp__20))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__20));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load i32* %%9, align 4, !dbg !5 for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_85_count);
  llvm_cbe_tmp__22 = (unsigned int )*llvm_cbe_tmp__21;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = sext i32 %%storemerge12.us to i64, !dbg !5 for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_86_count);
  llvm_cbe_tmp__23 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge12_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds [100 x i32]* %%kernel, i64 %%19, i64 %%11, !dbg !5 for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_87_count);
  llvm_cbe_tmp__24 = (signed int *)(&llvm_cbe_kernel[(((signed long long )llvm_cbe_tmp__31))
#ifdef AESL_BC_SIM
 % 100
#endif
][(((signed long long )llvm_cbe_tmp__23))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__31));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__23));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__23) < 100)) fprintf(stderr, "%s:%d: warning: Read access out of array 'kernel' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load i32* %%12, align 4, !dbg !5 for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_88_count);
  llvm_cbe_tmp__25 = (unsigned int )*llvm_cbe_tmp__24;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = mul nsw i32 %%13, %%10, !dbg !5 for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_89_count);
  llvm_cbe_tmp__26 = (unsigned int )((unsigned int )(llvm_cbe_tmp__25&4294967295ull)) * ((unsigned int )(llvm_cbe_tmp__22&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__26&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = add nsw i32 %%14, %%6, !dbg !5 for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_90_count);
  llvm_cbe_tmp__27 = (unsigned int )((unsigned int )(llvm_cbe_tmp__26&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__18&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__27&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = add nsw i32 %%storemerge12.us, 1, !dbg !7 for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_94_count);
  llvm_cbe_tmp__28 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__28&4294967295ull)));
  if (((llvm_cbe_tmp__28&4294967295U) == (llvm_cbe_kernel_size_col&4294967295U))) {
    goto llvm_cbe_tmp__35;
  } else {
    llvm_cbe_storemerge12_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__28;   /* for PHI node */
    llvm_cbe_tmp__18__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__27;   /* for PHI node */
    goto llvm_cbe_tmp__34;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.lr.ph.us' */
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__33:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge4 = phi i32 [ %%21, %%20 ], [ 0, %%.preheader.lr.ph  for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_storemerge4_count);
  llvm_cbe_storemerge4 = (unsigned int )llvm_cbe_storemerge4__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge4 = 0x%X",llvm_cbe_storemerge4);
printf("\n = 0x%X",llvm_cbe_tmp__32);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = add nsw i32 %%storemerge4, 1, !dbg !6 for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe_113_count);
  llvm_cbe_tmp__32 = (unsigned int )((unsigned int )(llvm_cbe_storemerge4&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__32&4294967295ull)));
  if (((llvm_cbe_tmp__32&4294967295U) == (llvm_cbe_kernel_size_row&4294967295U))) {
    llvm_cbe__2e_lcssa3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge5;
  } else {
    llvm_cbe_storemerge4__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__32;   /* for PHI node */
    goto llvm_cbe_tmp__33;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge5:
if (AESL_DEBUG_TRACE)
printf("\n  %%.lcssa3 = phi i32 [ 0, %%0 ], [ %%15, %%3 ], [ 0, %%20  for 0x%I64xth hint within @calculateConvolution  --> \n", ++aesl_llvm_cbe__2e_lcssa3_count);
  llvm_cbe__2e_lcssa3 = (unsigned int )llvm_cbe__2e_lcssa3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.lcssa3 = 0x%X",llvm_cbe__2e_lcssa3);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__27);
printf("\n = 0x%X",0u);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @calculateConvolution}\n");
  return llvm_cbe__2e_lcssa3;
}


void updateBuffer(signed int *llvm_cbe_buffer, signed int (*llvm_cbe_in_data)[100], signed int llvm_cbe_index_row_out, signed int llvm_cbe_index_col_out, signed int llvm_cbe_kernel_size_row, signed int llvm_cbe_kernel_size_col, signed int llvm_cbe_col_in) {
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  unsigned int llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  unsigned int llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  unsigned long long llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  unsigned int llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond11_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  unsigned int llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  unsigned long long llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  signed int *llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  unsigned int llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  unsigned int llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  unsigned int llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  unsigned long long llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  signed int *llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge12_2e_us;
  unsigned int llvm_cbe_storemerge12_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  unsigned int llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  unsigned int llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  unsigned long long llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  signed int *llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  unsigned int llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  unsigned long long llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  signed int *llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  unsigned int llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond10_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge3_2e_us;
  unsigned int llvm_cbe_storemerge3_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  unsigned int llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_2e_us6_count = 0;
  unsigned int llvm_cbe_storemerge3_2e_us6;
  unsigned int llvm_cbe_storemerge3_2e_us6__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  unsigned int llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  unsigned long long llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  signed int *llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  unsigned int llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  unsigned int llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  unsigned int llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  unsigned long long llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  signed int *llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  unsigned int llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @updateBuffer\n");
  if ((((signed int )llvm_cbe_kernel_size_row) > ((signed int )0u))) {
    goto llvm_cbe__2e_preheader_2e_lr_2e_ph;
  } else {
    goto llvm_cbe_tmp__66;
  }

llvm_cbe__2e_preheader_2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = add nsw i32 %%kernel_size_col, -1, !dbg !7 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_153_count);
  llvm_cbe_tmp__36 = (unsigned int )((unsigned int )(llvm_cbe_kernel_size_col&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__36&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = add nsw i32 %%kernel_size_col, %%index_col_out, !dbg !6 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_155_count);
  llvm_cbe_tmp__37 = (unsigned int )((unsigned int )(llvm_cbe_kernel_size_col&4294967295ull)) + ((unsigned int )(llvm_cbe_index_col_out&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__37&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sext i32 %%4 to i64, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_157_count);
  llvm_cbe_tmp__38 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__38);
  if ((((signed int )llvm_cbe_tmp__36) > ((signed int )0u))) {
    llvm_cbe_storemerge3_2e_us__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph_2e_us;
  } else {
    goto llvm_cbe__2e_preheader_2e_lr_2e_ph_2e__2e_preheader_2e_lr_2e_ph_2e_split_crit_edge;
  }

llvm_cbe__2e_preheader_2e_lr_2e_ph_2e__2e_preheader_2e_lr_2e_ph_2e_split_crit_edge:
  if ((((signed int )llvm_cbe_tmp__37) < ((signed int )llvm_cbe_col_in))) {
    llvm_cbe_storemerge3_2e_us6__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe_tmp__67;
  } else {
    goto llvm_cbe__2e__crit_edge4_2e_us_2d_lcssa;
  }

  do {     /* Syntactic loop '.lr.ph.us' to make GCC happy */
llvm_cbe__2e_lr_2e_ph_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3.us = phi i32 [ %%8, %%7 ], [ 0, %%.preheader.lr.ph  for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_storemerge3_2e_us_count);
  llvm_cbe_storemerge3_2e_us = (unsigned int )llvm_cbe_storemerge3_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3.us = 0x%X",llvm_cbe_storemerge3_2e_us);
printf("\n = 0x%X",llvm_cbe_tmp__39);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = mul nsw i32 %%storemerge3.us, %%kernel_size_col, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_199_count);
  llvm_cbe_tmp__56 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3_2e_us&4294967295ull)) * ((unsigned int )(llvm_cbe_kernel_size_col&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__56&4294967295ull)));
  llvm_cbe_storemerge12_2e_us__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__68;

llvm_cbe_tmp__69:
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add nsw i32 %%storemerge3.us, 1, !dbg !7 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_160_count);
  llvm_cbe_tmp__39 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__39&4294967295ull)));
  if (((llvm_cbe_tmp__39&4294967295U) == (llvm_cbe_kernel_size_row&4294967295U))) {
    goto llvm_cbe__2e__crit_edge4;
  } else {
    llvm_cbe_storemerge3_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__39;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph_2e_us;
  }

llvm_cbe_tmp__70:
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = add nsw i32 %%storemerge3.us, %%index_row_out, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_169_count);
  llvm_cbe_tmp__40 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3_2e_us&4294967295ull)) + ((unsigned int )(llvm_cbe_index_row_out&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__40&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = sext i32 %%10 to i64, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_170_count);
  llvm_cbe_tmp__41 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds [100 x i32]* %%in_data, i64 %%11, i64 %%6, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_171_count);
  llvm_cbe_tmp__42 = (signed int *)(&llvm_cbe_in_data[(((signed long long )llvm_cbe_tmp__41))
#ifdef AESL_BC_SIM
 % 100
#endif
][(((signed long long )llvm_cbe_tmp__38))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__41));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__38));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__38) < 100)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in_data' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load i32* %%12, align 4, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_172_count);
  llvm_cbe_tmp__43 = (unsigned int )*llvm_cbe_tmp__42;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__43);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = mul nsw i32 %%storemerge3.us, %%kernel_size_col, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_173_count);
  llvm_cbe_tmp__44 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3_2e_us&4294967295ull)) * ((unsigned int )(llvm_cbe_kernel_size_col&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__44&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = add i32 %%2, %%14, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_174_count);
  llvm_cbe_tmp__45 = (unsigned int )((unsigned int )(llvm_cbe_tmp__36&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__44&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__45&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = sext i32 %%15 to i64, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_175_count);
  llvm_cbe_tmp__46 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__45);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__46);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds i32* %%buffer, i64 %%16, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_176_count);
  llvm_cbe_tmp__47 = (signed int *)(&llvm_cbe_buffer[(((signed long long )llvm_cbe_tmp__46))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__46));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%13, i32* %%17, align 4, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_177_count);
  *llvm_cbe_tmp__47 = llvm_cbe_tmp__43;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__43);
  goto llvm_cbe_tmp__69;

llvm_cbe_tmp__71:
  if ((((signed int )llvm_cbe_tmp__37) < ((signed int )llvm_cbe_col_in))) {
    goto llvm_cbe_tmp__70;
  } else {
    goto llvm_cbe_tmp__69;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__68:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12.us = phi i32 [ 0, %%.lr.ph.us ], [ %%27, %%19  for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_storemerge12_2e_us_count);
  llvm_cbe_storemerge12_2e_us = (unsigned int )llvm_cbe_storemerge12_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12.us = 0x%X",llvm_cbe_storemerge12_2e_us);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__55);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = add nsw i32 %%storemerge12.us, %%28, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_180_count);
  llvm_cbe_tmp__48 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12_2e_us&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__56&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__48&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = add nsw i32 %%20, 1, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_181_count);
  llvm_cbe_tmp__49 = (unsigned int )((unsigned int )(llvm_cbe_tmp__48&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__49&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = sext i32 %%21 to i64, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_182_count);
  llvm_cbe_tmp__50 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__49);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds i32* %%buffer, i64 %%22, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_183_count);
  llvm_cbe_tmp__51 = (signed int *)(&llvm_cbe_buffer[(((signed long long )llvm_cbe_tmp__50))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__50));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load i32* %%23, align 4, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_184_count);
  llvm_cbe_tmp__52 = (unsigned int )*llvm_cbe_tmp__51;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__52);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = sext i32 %%20 to i64, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_185_count);
  llvm_cbe_tmp__53 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds i32* %%buffer, i64 %%25, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_186_count);
  llvm_cbe_tmp__54 = (signed int *)(&llvm_cbe_buffer[(((signed long long )llvm_cbe_tmp__53))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__53));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%24, i32* %%26, align 4, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_187_count);
  *llvm_cbe_tmp__54 = llvm_cbe_tmp__52;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__52);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = add nsw i32 %%storemerge12.us, 1, !dbg !7 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_188_count);
  llvm_cbe_tmp__55 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__55&4294967295ull)));
  if (((llvm_cbe_tmp__55&4294967295U) == (llvm_cbe_tmp__36&4294967295U))) {
    goto llvm_cbe_tmp__71;
  } else {
    llvm_cbe_storemerge12_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__55;   /* for PHI node */
    goto llvm_cbe_tmp__68;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.lr.ph.us' */
  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__67:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3.us6 = phi i32 [ %%38, %%29 ], [ 0, %%.preheader.lr.ph..preheader.lr.ph.split_crit_edge  for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_storemerge3_2e_us6_count);
  llvm_cbe_storemerge3_2e_us6 = (unsigned int )llvm_cbe_storemerge3_2e_us6__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3.us6 = 0x%X",llvm_cbe_storemerge3_2e_us6);
printf("\n = 0x%X",llvm_cbe_tmp__65);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = add nsw i32 %%storemerge3.us6, %%index_row_out, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_205_count);
  llvm_cbe_tmp__57 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3_2e_us6&4294967295ull)) + ((unsigned int )(llvm_cbe_index_row_out&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__57&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = sext i32 %%30 to i64, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_206_count);
  llvm_cbe_tmp__58 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__57);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__58);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = getelementptr inbounds [100 x i32]* %%in_data, i64 %%31, i64 %%6, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_207_count);
  llvm_cbe_tmp__59 = (signed int *)(&llvm_cbe_in_data[(((signed long long )llvm_cbe_tmp__58))
#ifdef AESL_BC_SIM
 % 100
#endif
][(((signed long long )llvm_cbe_tmp__38))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__58));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__38));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__38) < 100)) fprintf(stderr, "%s:%d: warning: Read access out of array 'in_data' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = load i32* %%32, align 4, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_208_count);
  llvm_cbe_tmp__60 = (unsigned int )*llvm_cbe_tmp__59;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__60);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = mul nsw i32 %%storemerge3.us6, %%kernel_size_col, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_209_count);
  llvm_cbe_tmp__61 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3_2e_us6&4294967295ull)) * ((unsigned int )(llvm_cbe_kernel_size_col&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__61&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = add i32 %%2, %%34, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_210_count);
  llvm_cbe_tmp__62 = (unsigned int )((unsigned int )(llvm_cbe_tmp__36&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__61&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__62&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = sext i32 %%35 to i64, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_211_count);
  llvm_cbe_tmp__63 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__63);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds i32* %%buffer, i64 %%36, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_212_count);
  llvm_cbe_tmp__64 = (signed int *)(&llvm_cbe_buffer[(((signed long long )llvm_cbe_tmp__63))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__63));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%33, i32* %%37, align 4, !dbg !5 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_213_count);
  *llvm_cbe_tmp__64 = llvm_cbe_tmp__60;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__60);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = add nsw i32 %%storemerge3.us6, 1, !dbg !7 for 0x%I64xth hint within @updateBuffer  --> \n", ++aesl_llvm_cbe_214_count);
  llvm_cbe_tmp__65 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3_2e_us6&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__65&4294967295ull)));
  if (((llvm_cbe_tmp__65&4294967295U) == (llvm_cbe_kernel_size_row&4294967295U))) {
    goto llvm_cbe__2e__crit_edge4_2e_us_2d_lcssa;
  } else {
    llvm_cbe_storemerge3_2e_us6__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__65;   /* for PHI node */
    goto llvm_cbe_tmp__67;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge4_2e_us_2d_lcssa:
  goto llvm_cbe__2e__crit_edge4;

llvm_cbe__2e__crit_edge4:
  goto llvm_cbe_tmp__66;

llvm_cbe_tmp__66:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @updateBuffer}\n");
  return;
}


void conv2D(signed int (*llvm_cbe_in_data)[100], signed int (*llvm_cbe_out_data)[100], signed int llvm_cbe_row_in, signed int llvm_cbe_col_in, signed int (*llvm_cbe_kernel)[100], signed int llvm_cbe_kernel_size_row, signed int llvm_cbe_kernel_size_col) {
  static  unsigned long long aesl_llvm_cbe_buffer_count = 0;
  signed int llvm_cbe_buffer[25];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  unsigned int llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  unsigned int llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  signed int *llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  unsigned int llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  unsigned int llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge3_count = 0;
  unsigned int llvm_cbe_storemerge3;
  unsigned int llvm_cbe_storemerge3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  unsigned long long llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge12_count = 0;
  unsigned int llvm_cbe_storemerge12;
  unsigned int llvm_cbe_storemerge12__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  unsigned int llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  unsigned long long llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  signed int *llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  unsigned int llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  unsigned int llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond7_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @conv2D\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = add i32 %%row_in, 1, !dbg !6 for 0x%I64xth hint within @conv2D  --> \n", ++aesl_llvm_cbe_255_count);
  llvm_cbe_tmp__72 = (unsigned int )((unsigned int )(llvm_cbe_row_in&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__72&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sub i32 %%1, %%kernel_size_row, !dbg !6 for 0x%I64xth hint within @conv2D  --> \n", ++aesl_llvm_cbe_256_count);
  llvm_cbe_tmp__73 = (unsigned int )((unsigned int )(llvm_cbe_tmp__72&4294967295ull)) - ((unsigned int )(llvm_cbe_kernel_size_row&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__73&4294967295ull)));
  if ((((signed int )llvm_cbe_tmp__73) > ((signed int )0u))) {
    goto llvm_cbe__2e_lr_2e_ph5;
  } else {
    goto llvm_cbe__2e__crit_edge6;
  }

llvm_cbe__2e_lr_2e_ph5:
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds [25 x i32]* %%buffer, i64 0, i64 0, !dbg !5 for 0x%I64xth hint within @conv2D  --> \n", ++aesl_llvm_cbe_259_count);
  llvm_cbe_tmp__74 = (signed int *)(&llvm_cbe_buffer[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 25
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = add i32 %%col_in, 1, !dbg !6 for 0x%I64xth hint within @conv2D  --> \n", ++aesl_llvm_cbe_260_count);
  llvm_cbe_tmp__75 = (unsigned int )((unsigned int )(llvm_cbe_col_in&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__75&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = sub i32 %%5, %%kernel_size_col, !dbg !6 for 0x%I64xth hint within @conv2D  --> \n", ++aesl_llvm_cbe_261_count);
  llvm_cbe_tmp__76 = (unsigned int )((unsigned int )(llvm_cbe_tmp__75&4294967295ull)) - ((unsigned int )(llvm_cbe_kernel_size_col&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__76&4294967295ull)));
  llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__83;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__83:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge3 = phi i32 [ 0, %%.lr.ph5 ], [ %%15, %%._crit_edge  for 0x%I64xth hint within @conv2D  --> \n", ++aesl_llvm_cbe_storemerge3_count);
  llvm_cbe_storemerge3 = (unsigned int )llvm_cbe_storemerge3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__82);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @initializeBuffer(i32* %%4, [100 x i32]* %%in_data, i32 %%storemerge3, i32 %%kernel_size_row, i32 %%kernel_size_col), !dbg !5 for 0x%I64xth hint within @conv2D  --> \n", ++aesl_llvm_cbe_264_count);
  initializeBuffer((signed int *)llvm_cbe_tmp__74, llvm_cbe_in_data, llvm_cbe_storemerge3, llvm_cbe_kernel_size_row, llvm_cbe_kernel_size_col);
if (AESL_DEBUG_TRACE) {
printf("\nArgument storemerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\nArgument kernel_size_row = 0x%X",llvm_cbe_kernel_size_row);
printf("\nArgument kernel_size_col = 0x%X",llvm_cbe_kernel_size_col);
}
  if ((((signed int )llvm_cbe_tmp__76) > ((signed int )0u))) {
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    goto llvm_cbe__2e__crit_edge;
  }

llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = add nsw i32 %%storemerge3, 1, !dbg !8 for 0x%I64xth hint within @conv2D  --> \n", ++aesl_llvm_cbe_287_count);
  llvm_cbe_tmp__82 = (unsigned int )((unsigned int )(llvm_cbe_storemerge3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__82&4294967295ull)));
  if (((llvm_cbe_tmp__82&4294967295U) == (llvm_cbe_tmp__73&4294967295U))) {
    goto llvm_cbe__2e__crit_edge6;
  } else {
    llvm_cbe_storemerge3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__82;   /* for PHI node */
    goto llvm_cbe_tmp__83;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__84:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge12 = phi i32 [ 0, %%.lr.ph ], [ %%14, %%10  for 0x%I64xth hint within @conv2D  --> \n", ++aesl_llvm_cbe_storemerge12_count);
  llvm_cbe_storemerge12 = (unsigned int )llvm_cbe_storemerge12__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge12 = 0x%X",llvm_cbe_storemerge12);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__81);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = call i32 @calculateConvolution(i32* %%4, [100 x i32]* %%kernel, i32 %%kernel_size_row, i32 %%kernel_size_col), !dbg !6 for 0x%I64xth hint within @conv2D  --> \n", ++aesl_llvm_cbe_273_count);
  llvm_cbe_tmp__78 = (unsigned int )calculateConvolution((signed int *)llvm_cbe_tmp__74, llvm_cbe_kernel, llvm_cbe_kernel_size_row, llvm_cbe_kernel_size_col);
if (AESL_DEBUG_TRACE) {
printf("\nArgument kernel_size_row = 0x%X",llvm_cbe_kernel_size_row);
printf("\nArgument kernel_size_col = 0x%X",llvm_cbe_kernel_size_col);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__78);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = sext i32 %%storemerge12 to i64, !dbg !6 for 0x%I64xth hint within @conv2D  --> \n", ++aesl_llvm_cbe_276_count);
  llvm_cbe_tmp__79 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge12);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__79);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [100 x i32]* %%out_data, i64 %%9, i64 %%12, !dbg !6 for 0x%I64xth hint within @conv2D  --> \n", ++aesl_llvm_cbe_277_count);
  llvm_cbe_tmp__80 = (signed int *)(&llvm_cbe_out_data[(((signed long long )llvm_cbe_tmp__77))
#ifdef AESL_BC_SIM
 % 100
#endif
][(((signed long long )llvm_cbe_tmp__79))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__77));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__79));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__79) < 100 && "Write access out of array 'out_data' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%11, i32* %%13, align 4, !dbg !6 for 0x%I64xth hint within @conv2D  --> \n", ++aesl_llvm_cbe_278_count);
  *llvm_cbe_tmp__80 = llvm_cbe_tmp__78;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE)
printf("\n  call void @updateBuffer(i32* %%4, [100 x i32]* %%in_data, i32 %%storemerge3, i32 %%storemerge12, i32 %%kernel_size_row, i32 %%kernel_size_col, i32 %%col_in), !dbg !5 for 0x%I64xth hint within @conv2D  --> \n", ++aesl_llvm_cbe_279_count);
  updateBuffer((signed int *)llvm_cbe_tmp__74, llvm_cbe_in_data, llvm_cbe_storemerge3, llvm_cbe_storemerge12, llvm_cbe_kernel_size_row, llvm_cbe_kernel_size_col, llvm_cbe_col_in);
if (AESL_DEBUG_TRACE) {
printf("\nArgument storemerge3 = 0x%X",llvm_cbe_storemerge3);
printf("\nArgument storemerge12 = 0x%X",llvm_cbe_storemerge12);
printf("\nArgument kernel_size_row = 0x%X",llvm_cbe_kernel_size_row);
printf("\nArgument kernel_size_col = 0x%X",llvm_cbe_kernel_size_col);
printf("\nArgument col_in = 0x%X",llvm_cbe_col_in);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = add nsw i32 %%storemerge12, 1, !dbg !8 for 0x%I64xth hint within @conv2D  --> \n", ++aesl_llvm_cbe_280_count);
  llvm_cbe_tmp__81 = (unsigned int )((unsigned int )(llvm_cbe_storemerge12&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__81&4294967295ull)));
  if (((llvm_cbe_tmp__81&4294967295U) == (llvm_cbe_tmp__76&4294967295U))) {
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__81;   /* for PHI node */
    goto llvm_cbe_tmp__84;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = sext i32 %%storemerge3 to i64, !dbg !6 for 0x%I64xth hint within @conv2D  --> \n", ++aesl_llvm_cbe_271_count);
  llvm_cbe_tmp__77 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__77);
  llvm_cbe_storemerge12__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__84;

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e__crit_edge6:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @conv2D}\n");
  return;
}

