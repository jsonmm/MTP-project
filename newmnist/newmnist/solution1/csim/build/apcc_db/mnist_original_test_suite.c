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
/* Structure forward decls */
typedef struct l_struct_OC_k2c_tensor l_struct_OC_k2c_tensor;

/* Structure contents */
struct l_struct_OC_k2c_tensor {
  float field0[21632];
  unsigned long long field1;
  unsigned long long field2;
  signed long long field3[5];
};


/* External Global Variable Declarations */
extern float test1_input_1_input_array[784];
extern l_struct_OC_k2c_tensor test1_input_1_input;
extern float keras_dense_test1_array[10];
extern l_struct_OC_k2c_tensor keras_dense_test1;
extern float c_dense_test1_array[10];
extern l_struct_OC_k2c_tensor c_dense_test1;
extern float test2_input_1_input_array[784];
extern l_struct_OC_k2c_tensor test2_input_1_input;
extern float keras_dense_test2_array[10];
extern l_struct_OC_k2c_tensor keras_dense_test2;
extern float c_dense_test2_array[10];
extern l_struct_OC_k2c_tensor c_dense_test2;
extern float test3_input_1_input_array[784];
extern l_struct_OC_k2c_tensor test3_input_1_input;
extern float keras_dense_test3_array[10];
extern l_struct_OC_k2c_tensor keras_dense_test3;
extern float c_dense_test3_array[10];
extern l_struct_OC_k2c_tensor c_dense_test3;
extern float test4_input_1_input_array[784];
extern l_struct_OC_k2c_tensor test4_input_1_input;
extern float keras_dense_test4_array[10];
extern l_struct_OC_k2c_tensor keras_dense_test4;
extern float c_dense_test4_array[10];
extern l_struct_OC_k2c_tensor c_dense_test4;
extern float test5_input_1_input_array[784];
extern l_struct_OC_k2c_tensor test5_input_1_input;
extern float keras_dense_test5_array[10];
extern l_struct_OC_k2c_tensor keras_dense_test5;
extern float c_dense_test5_array[10];
extern l_struct_OC_k2c_tensor c_dense_test5;
extern float test6_input_1_input_array[784];
extern l_struct_OC_k2c_tensor test6_input_1_input;
extern float keras_dense_test6_array[10];
extern l_struct_OC_k2c_tensor keras_dense_test6;
extern float c_dense_test6_array[10];
extern l_struct_OC_k2c_tensor c_dense_test6;
extern float test7_input_1_input_array[784];
extern l_struct_OC_k2c_tensor test7_input_1_input;
extern float keras_dense_test7_array[10];
extern l_struct_OC_k2c_tensor keras_dense_test7;
extern float c_dense_test7_array[10];
extern l_struct_OC_k2c_tensor c_dense_test7;
extern float test8_input_1_input_array[784];
extern l_struct_OC_k2c_tensor test8_input_1_input;
extern float keras_dense_test8_array[10];
extern l_struct_OC_k2c_tensor keras_dense_test8;
extern float c_dense_test8_array[10];
extern l_struct_OC_k2c_tensor c_dense_test8;
extern float test9_input_1_input_array[784];
extern l_struct_OC_k2c_tensor test9_input_1_input;
extern float keras_dense_test9_array[10];
extern l_struct_OC_k2c_tensor keras_dense_test9;
extern float c_dense_test9_array[10];
extern l_struct_OC_k2c_tensor c_dense_test9;
extern float test10_input_1_input_array[784];
extern l_struct_OC_k2c_tensor test10_input_1_input;
extern float keras_dense_test10_array[10];
extern l_struct_OC_k2c_tensor keras_dense_test10;
extern float c_dense_test10_array[10];
extern l_struct_OC_k2c_tensor c_dense_test10;

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
signed int main(void);
void mnist_original_initialize();
void mnist_original(l_struct_OC_k2c_tensor *, l_struct_OC_k2c_tensor *);
float maxabs(l_struct_OC_k2c_tensor *llvm_cbe_tensor1, l_struct_OC_k2c_tensor *llvm_cbe_tensor2);
void mnist_original_terminate();
float fabsf(float );


/* Global Variable Definitions and Initialization */
float test1_input_1_input_array[784] = { 0x1.6483b8p-2, 0x1.528278p-3, 0x1.fb0e8cp-3, 0x1.ff5a42p-1, -0x1.0c9ae4p-1, 0x1.e82bbap0, 0x1.ee1aa2p-2, -0x1.c149e4p-2, -0x1.c291bep-1, 0x1.4b7a7ap0, 0x1.5d9564p-2, 0x1.48d9a6p0, 0x1.e5c308p-1, -0x1.8f5978p0, 0x1.a73ccp-1, 0x1.74e4c8p0, 0x1.3dc9b4p-1, -0x1.1328f2p-1, -0x1.f2eadep-1, 0x1.8d707ap-1, 0x1.360b8cp-6, 0x1.f20ff2p0, 0x1.7b27bp-2, 0x1.d9be52p0, -0x1.08adbp-1, -0x1.06ae3ep-3, 0x1.e5906ep-2, -0x1.fcd9b6p-1, 0x1.c1c91cp-2, -0x1.44f28cp-1, -0x1.2f6982p0, -0x1.fe9352p0, 0x1.143adp-1, -0x1.1572eap-2, -0x1.6d9c1p0, -0x1.2a8932p-1, -0x1.372774p0, 0x1.156a4ep-1, 0x1.5a7b3p0, 0x1.6369f2p-3, -0x1.960fb4p0, -0x1.700ba2p-1, -0x1.ea1214p0, 0x1.8bdb4cp-5, 0x1.4b03e8p-1, 0x1.6758b2p-1, 0x1.f0af7cp0, 0x1.49cc94p0, -0x1.914f26p0, 0x1.38bda2p0, -0x1.22bfb4p-3, -0x1.b8f842p0, -0x1.e42686p0, 0x1.628334p0, 0x1.26622cp-1, -0x1.0f5eb4p0, 0x1.05fb0ap-2, -0x1.fb6a96p0, -0x1.432d82p-1, 0x1.e57606p0, -0x1.8f1bfcp0, 0x1.2cca22p-1, 0x1.138fep0, -0x1.79b306p0, -0x1.9b65d8p-2, 0x1.8aaa18p-1, 0x1.8d9288p-1, 0x1.246ebap0, -0x1.9f8e9ep0, 0x1.4b8782p-2, 0x1.cde0bcp0, -0x1.c5e84ap0, -0x1.d30856p-2, 0x1.d4a334p0, -0x1.35df9ep0, -0x1.d04a7ap-2, 0x1.65de7ap-1, 0x1.02f658p-2, 0x1.68d36p0, 0x1.d76e1cp-2, -0x1.804432p0, -0x1.62c4bcp0, 0x1.608964p0, 0x1.a85a7p-2, 0x1.5a87cap-1, -0x1.119fep-2, 0x1.7a60e6p-2, -0x1.0371a6p-1, -0x1.536612p-2, 0x1.371ca8p-1, -0x1.d0b478p-2, -0x1.b33e42p-3, 0x1.9c9e48p0, -0x1.d967a6p0, 0x1.589498p-1, 0x1.8bf45ap0, -0x1.f2568ap-1, -0x1.ffa76ep0, 0x1.1afcc6p0, -0x1.06385cp-2, -0x1.876e76p-4, 0x1.cbd166p-4, 0x1.dcdb36p-5, 0x1.7aa912p-1, -0x1.d06814p0, -0x1.500b02p-2, -0x1.9ca672p-1, -0x1.b253a4p-2, -0x1.107442p-1, -0x1.938616p0, 0x1.2db87p-3, -0x1.4072eap-1, -0x1.5cd862p0, -0x1.34a668p-5, -0x1.c285dp0, 0x1.40e7a2p0, 0x1.e00638p-1, -0x1.95521cp0, -0x1.1f3eaap0, 0x1.f5a004p0, -0x1.a4eccp0, -0x1.911a0ep0, -0x1.87dee8p0, -0x1.c6157ap0, 0x1.639f0ap-1, -0x1.0d5108p0, 0x1.a6e744p0, -0x1.9c930ep0, -0x1.badf2p-2, -0x1.0d1b22p0, 0x1.72cffep0, 0x1.a9280cp-1, -0x1.3de2e8p-3, 0x1.ed9c3ap-1, -0x1.760132p0, 0x1.154cc8p0, -0x1.dc7858p-1, -0x1.f6edfp0, 0x1.9c754cp0, -0x1.5fc568p0, 0x1.f2dacep0, -0x1.f8b7d2p0, 0x1.d6219cp-1, 0x1.fb2abap0, -0x1.0b08fp-3, 0x1.06ca1ep-2, -0x1.6668bp0, 0x1.c8875ep-1, -0x1.c7c7bap-2, -0x1.510b1p-1, -0x1.9129fep-1, 0x1.c8f6a4p0, -0x1.09f5f6p-5, -0x1.042b58p0, 0x1.1b9674p0, -0x1.ca4964p-1, 0x1.d4542ap-1, 0x1.980d8p-3, 0x1.a4bc02p0, 0x1.228ca2p0, -0x1.f0767ap-1, 0x1.98264ap-1, 0x1.3958bep-1, 0x1.d18cb6p-3, -0x1.2e1c3p-5, -0x1.187628p0, -0x1.357b7p0, 0x1.7ac47p0, -0x1.d2811cp0, 0x1.1fe8dep-1, -0x1.f5da42p0, -0x1.6cae8p0, 0x1.b62a12p0, -0x1.e36de8p-1, 0x1.22b22p0, 0x1.08a3b6p-1, -0x1.babf9p0, -0x1.abfaf6p-3, -0x1.9d2702p0, -0x1.efbd5ap-1, 0x1.d4a20ap0, 0x1.20b6acp-4, 0x1.80b906p-4, 0x1.559114p0, 0x1.55da18p-1, 0x1.945cbp0, -0x1.0ddb42p-5, 0x1.a0183cp0, -0x1.58aea6p-1, 0x1.bcbf3p-3, -0x1.b89f1ep-1, -0x1.f66094p0, -0x1.63d772p0, 0x1.8060f8p0, 0x1.49a752p-4, -0x1.d433d8p0, 0x1.7d0e56p0, 0x1.bb4d34p0, -0x1.ad0856p-1, 0x1.416346p0, 0x1.eecceep-4, -0x1.6ddfc8p-1, 0x1.5776a6p-1, 0x1.fa3f3ep-1, -0x1.0bbb1ep-2, -0x1.933478p0, 0x1.0634d6p-1, 0x1.2008dap-2, 0x1.c30c58p-2, -0x1.b9a6d2p-1, 0x1.8d8d56p0, 0x1.00678ap0, -0x1.7f727cp-1, -0x1.1a7016p0, -0x1.e99f3ep0, 0x1.9f9c9cp0, -0x1.956fe6p0, 0x1.942b04p-2, -0x1.fab55p-1, -0x1.af96cp-1, 0x1.6ed2eep-3, -0x1.c5560cp0, 0x1.2dcaa4p0, -0x1.19610ep-2, 0x1.3b14bp-1, -0x1.8937dcp0, 0x1.92d0d2p-1, -0x1.21a5c4p-2, -0x1.74ee18p0, 0x1.d02b7p0, -0x1.f0aa84p-1, -0x1.dab5c6p0, -0x1.b18414p-1, 0x1.ca9a72p-4, 0x1.f9c1f2p0, -0x1.636148p0, 0x1.3cf598p0, -0x1.caed0cp-4, -0x1.30d9a4p-2, -0x1.e398ap-4, -0x1.9d58cep-2, -0x1.74189cp-4, -0x1.3a3b7ap0, 0x1.f11e68p0, 0x1.cbf996p-2, -0x1.7635c2p-1, 0x1.1991d2p0, -0x1.7fb5ecp0, -0x1.0e039p0, 0x1.664778p0, -0x1.33d322p-3, -0x1.0fd538p0, -0x1.bc77e4p-1, 0x1.f5de5p-2, 0x1.510cdp0, 0x1.ab7a0cp-2, 0x1.62c95ap0, -0x1.b2d1dp-1, -0x1.5911dcp0, -0x1.df1df6p0, -0x1.e2576p0, 0x1.0b0b4ap0, -0x1.2cad3cp-1, -0x1.6cadb8p-1, -0x1.e569bap-6, -0x1.72350ap0, 0x1.911b4ap0, -0x1.9ce6fep-1, -0x1.f29d64p0, -0x1.6f25e2p0, 0x1.0953a4p0, 0x1.135e1ap0, 0x1.82b818p0, -0x1.6921dep-1, 0x1.35d46cp-1, 0x1.ca9ab6p0, -0x1.ac7088p0, 0x1.993dccp-1, -0x1.eefb82p-4, -0x1.4bdb36p0, 0x1.7c4704p0, 0x1.48a5c8p-1, 0x1.6b7924p-2, -0x1.680764p-1, -0x1.fc2e5ep0, 0x1.edb97cp-2, -0x1.f8521p-1, -0x1.7269c2p0, 0x1.e97d26p0, -0x1.c95626p-3, -0x1.1e34ap0, -0x1.31b2ecp-1, -0x1.dd0cfp0, -0x1.bc4f38p-1, -0x1.32acd4p-1, -0x1.55b44ep-1, -0x1.19949cp0, 0x1.71f08ap0, -0x1.78572ap-2, 0x1.a36f6cp-4, -0x1.83d37ap0, -0x1.30b8c6p-1, 0x1.d4d172p0, -0x1.3860fcp0, 0x1.4d85ecp0, -0x1.2e90b4p-1, 0x1.3e526ep0, -0x1.ae5622p0, -0x1.81d3a6p-1, -0x1.8808fp-7, 0x1.df9008p-3, 0x1.902268p0, 0x1.abf76ap-1, -0x1.6c817p-1, -0x1.53cap-2, -0x1.248184p-2, 0x1.efc58p0, 0x1.d6c842p0, 0x1.04a602p0, -0x1.b618fap0, -0x1.f4503ap-2, -0x1.e34f66p-1, 0x1.4b042cp-1, 0x1.87f6ccp-1, -0x1.d1f39p-1, -0x1.318abcp0, 0x1.99b4ap-8, 0x1.ea46eap-1, 0x1.f1c3a4p-1, 0x1.935d7ap0, 0x1.9d1bd8p0, 0x1.7fec8p-1, -0x1.edea7ep0, -0x1.4dc95p-1, 0x1.b9e96cp-2, 0x1.a65cp-1, 0x1.2a5b3p-2, -0x1.a364bcp-1, 0x1.b700d2p0, -0x1.a8d68p0, -0x1.d79c56p0, -0x1.a241c4p-1, -0x1.dfef56p0, 0x1.52e86ap-2, 0x1.b92acp-1, 0x1.bcb08ap0, 0x1.239072p-3, 0x1.18c6dep-1, -0x1.de510ep0, -0x1.9fa9c4p0, -0x1.8be4e8p0, 0x1.007266p0, 0x1.305b3ap-1, 0x1.01ecb4p0, 0x1.e1dfep-3, 0x1.1995a8p0, -0x1.a0d2aap0, -0x1.b2486ap0, -0x1.0b582ep-1, 0x1.cc8d7ap-1, -0x1.8860e8p-2, 0x1.c437e4p-3, -0x1.17605ap-5, 0x1.08b62p-1, -0x1.7ed426p-6, 0x1.116608p-2, 0x1.4f56acp0, -0x1.29eca4p0, 0x1.c1c546p0, -0x1.561498p0, -0x1.abfefap0, -0x1.800ebcp-3, 0x1.3dbe22p-1, -0x1.82b61cp0, 0x1.66ebaep-1, 0x1.6f68c6p0, 0x1.4d04f2p0, -0x1.5bd8cp-2, -0x1.98a788p0, 0x1.87d2ecp-3, -0x1.7538aap0, -0x1.4d3ccep0, -0x1.df864ap0, 0x1.5918a8p0, -0x1.1b7292p-2, -0x1.09bb96p-3, 0x1.b58bfp0, -0x1.5cf194p0, -0x1.dba97cp0, -0x1.e8a6dcp0, 0x1.f5b83ap-3, -0x1.00e56ep0, 0x1.d259ccp0, 0x1.34fb4cp-1, 0x1.b71cb2p0, -0x1.677f72p0, -0x1.586484p0, -0x1.1c5e08p0, 0x1.acaf6ep0, 0x1.facb8ap0, 0x1.e1587ap-3, 0x1.728d8ep0, 0x1.e735d4p0, 0x1.b76526p-1, -0x1.2b2f38p0, -0x1.3f5ed6p0, 0x1.03b1aap-2, -0x1.6728dap0, 0x1.2e4b6ap-2, -0x1.17762ep-1, -0x1.4093bp-1, -0x1.976386p0, -0x1.7b0baap0, -0x1.12c3eap0, -0x1.3b0b4ep0, 0x1.02e86p0, 0x1.cf69a6p0, 0x1.ffe5d6p0, -0x1.0a1fdp0, 0x1.c5aa24p-3, -0x1.14d83p-1, 0x1.884972p-4, -0x1.a255d4p-1, 0x1.17973ap-3, -0x1.cf8bb4p0, -0x1.cac81ep-4, -0x1.e56158p-1, 0x1.fb0888p0, -0x1.bed868p-2, 0x1.e32b26p-1, 0x1.68ac1ep0, -0x1.59f4ep-4, -0x1.1a9bf6p-3, -0x1.6d07ccp0, -0x1.4986e8p0, 0x1.d1d8dep-3, -0x1.db7b6ep-2, -0x1.b93926p0, 0x1.9d71c8p0, 0x1.1a4272p0, 0x1.cf2a32p0, -0x1.3cea08p0, -0x1.172f08p-2, -0x1.ca7946p0, -0x1.30d006p-1, -0x1.65c444p0, -0x1.93a11p0, -0x1.82a46cp0, 0x1.6ecea8p-2, -0x1.ccd84ap0, -0x1.d6a93ep-5, -0x1.33d8bep0, -0x1.64a4bp0, 0x1.d3cb74p0, -0x1.1352d6p-4, 0x1.40fe32p0, 0x1.3bca52p-2, -0x1.baa7b8p0, 0x1.877c78p0, 0x1.7c362ap0, 0x1.b72c5ep0, -0x1.e7c5dep0, 0x1.506d7p0, -0x1.436a44p0, -0x1.6c952p0, 0x1.1cc31cp0, 0x1.7332cap-2, -0x1.f43306p0, 0x1.ee4618p0, -0x1.196b46p-2, 0x1.04d8b2p0, 0x1.b3fe8ap-1, 0x1.c434eap-2, -0x1.4d5f5cp0, -0x1.5e6798p-2, -0x1.909b9p0, 0x1.cbefdep-1, 0x1.9b6508p-1, -0x1.11ab1ep-2, 0x1.d2fb4p0, 0x1.b5d8b8p0, -0x1.f8f05ap0, -0x1.d4cd52p-1, 0x1.b7f7d6p-3, -0x1.f1443cp0, 0x1.ed1734p-2, -0x1.33aeecp0, -0x1.a5248cp0, 0x1.2f4d24p-1, -0x1.f1a7b8p-1, -0x1.a70e7ap-5, 0x1.7435cep-1, -0x1.a4249ep-2, -0x1.f85052p0, -0x1.b4969p0, -0x1.e4d37cp-2, -0x1.2193f8p0, 0x1.9d6366p-2, -0x1.6f24a2p0, 0x1.e9913p-1, -0x1.d6e694p-1, 0x1.6e02dep-2, -0x1.d8d6b6p-1, -0x1.c36accp0, 0x1.ab2198p0, 0x1.19d0e6p-1, 0x1.47cfb8p0, -0x1.9e6e4ap0, 0x1.acccaap0, -0x1.d96f2p-3, -0x1.e3c1aep-1, -0x1.585838p-7, -0x1.22811ap0, 0x1.cdfcaap-1, -0x1.a295e4p0, 0x1.0ed72cp-2, -0x1.c82596p-1, 0x1.fdf766p0, 0x1.db8e4ep0, 0x1.d3cdfp-1, 0x1.6ed5a6p-1, 0x1.b201c4p-2, 0x1.3c4264p0, -0x1.175742p0, -0x1.11ec76p-1, 0x1.7ad14cp0, 0x1.8b9074p-1, -0x1.80cf88p-1, -0x1.5cc98ep0, -0x1.38b56ep-1, 0x1.95b3dcp0, -0x1.228678p-1, -0x1.2294acp-4, 0x1.9376eep0, -0x1.b39f48p0, -0x1.8a1744p-1, -0x1.fe3efcp-1, 0x1.e2a90ap0, 0x1.22ef1ap0, -0x1.75be42p0, -0x1.a8575p0, -0x1.c5d912p-4, -0x1.7152a8p-2, 0x1.1902e6p0, -0x1.b51e04p0, 0x1.d9d96cp0, -0x1.a9cae4p0, -0x1.c6267ap-2, -0x1.b30e82p-2, -0x1.95464p-1, 0x1.92e31p0, 0x1.42bd04p-3, 0x1.d5f09ap-1, 0x1.a8dcbp-1, -0x1.77dfb4p0, -0x1.4249fp-1, 0x1.bb2ae4p0, 0x1.1441ep-1, 0x1.c992a6p0, -0x1.61396p-1, -0x1.a7d524p0, 0x1.b12a78p0, -0x1.a6c7p-7, 0x1.c4dc26p-2, 0x1.72899ep-2, -0x1.236ec8p-1, 0x1.24e15ep-2, 0x1.19f06ap0, 0x1.9f64f2p-3, -0x1.35cb14p-3, -0x1.35323ap0, 0x1.b5f148p-2, -0x1.143cep0, 0x1.c7594ep0, -0x1.420128p0, 0x1.af0e2cp0, 0x1.85cdf4p-1, -0x1.88481ep-3, -0x1.4207dap-1, 0x1.b93c02p0, -0x1.e134a8p-1, -0x1.b7173ap0, -0x1.25064cp-3, 0x1.90ca88p0, -0x1.4c209cp0, 0x1.201358p-2, -0x1.9dfb08p0, 0x1.3e6808p0, -0x1.810988p-2, 0x1.cfa0dep-1, 0x1.2bb1acp0, 0x1.9590f8p-2, 0x1.7612a2p0, 0x1.d54a28p-1, -0x1.3baabap0, -0x1.b615b6p0, 0x1.076358p0, -0x1.a026cep0, 0x1.9cbf2cp0, -0x1.a1cf0ep0, 0x1.cd753cp0, 0x1.7d875ep-3, 0x1.b3c424p0, 0x1.4cc714p-1, -0x1.257902p0, -0x1.50ccbep-1, 0x1.44b16p-1, 0x1.550a5ep0, 0x1.483668p0, -0x1.1614dap-1, -0x1.45938ep-1, -0x1.89ccp-1, 0x1.5bb4a6p-1, -0x1.f7697p-2, -0x1.8a970cp-6, 0x1.1f654ap0, 0x1.cd564ap-2, 0x1.1ac9d4p-1, -0x1.a0a2eep-1, 0x1.d99706p0, 0x1.4efef4p-1, -0x1.014858p0, 0x1.b995aap-2, 0x1.2323ep0, 0x1.c00e5cp-1, 0x1.c1501p0, 0x1.7005c8p-1, 0x1.b9e374p-1, -0x1.a7ca0cp0, 0x1.574814p-1, -0x1.c2091cp-1, -0x1.d8223p-2, -0x1.8c0f66p0, 0x1.844c3ap0, -0x1.fb95bp0, 0x1.4f5eb4p0, -0x1.8dff8cp-7, -0x1.eb1462p0, 0x1.9bd06p-5, -0x1.67d8b6p0, -0x1.60ad68p0, -0x1.91ee86p0, -0x1.78bc44p-2, 0x1.a137fep0, -0x1.8a7e64p0, 0x1.a36334p-2, 0x1.2b6be4p-4, -0x1.2c1a7ep0, 0x1.aa0608p0, -0x1.49bd94p0, 0x1.a26a0ep-1, -0x1.76fe8p-1, -0x1.804088p-6, 0x1.961caap-1, -0x1.318ac8p0, -0x1.43351ap0, -0x1.c08f14p0, 0x1.9e93ep0, -0x1.f77dccp0, 0x1.b6d606p-4, 0x1.5a0af6p0, 0x1.173c1cp-1, 0x1.f821acp-2, -0x1.41d728p-1, -0x1.5bd4bp0, -0x1.c37996p0, 0x1.c07db6p0, -0x1.7cb626p0, 0x1.4bd92p0, 0x1.134132p-5, 0x1.594a7ep0, -0x1.41f842p0, 0x1.2d3e0ep-1, 0x1.ec322p-1, -0x1.807faap-1, 0x1.b872bp0, -0x1.bd249cp0, -0x1.2568c2p-2, 0x1.9bf6fap0, -0x1.af8676p0, -0x1.730a3cp0, -0x1.994d7p-2, 0x1.5ced6p-7, -0x1.4bc28ep0, -0x1.7cefd8p0, 0x1.1095fap-3, 0x1.f5b036p-2, 0x1.54625ap-2, 0x1.29bfacp-2, -0x1.8bd8bcp-2, -0x1.f795fap0, 0x1.7ba8cep-2, -0x1.eda51ap0, -0x1.6ffc88p0, -0x1.422fdp-1, -0x1.80e366p0, -0x1.88976p0, -0x1.a455c6p-1, -0x1.665f3ep0, 0x1.463a98p0, -0x1.44fa2ap0, -0x1.697612p0, 0x1.55a542p0, 0x1.6e84acp-1, -0x1.ce5128p0, -0x1.e9edbcp-3, 0x1.a20092p0, 0x1.5d760ep-4, 0x1.0cfc76p0, -0x1.72d32p-2, 0x1.3fec3ap0, 0x1.4365p0, 0x1.d5632ep0, 0x1.37672ep0, 0x1.62cd1cp-1, 0x1.c54d02p0, 0x1.ffea8ap0, -0x1.f51886p0, -0x1.2a9eeap-3, 0x1.57450cp-2, 0x1.58a882p-1, -0x1.8bd1ap0, 0x1.a9393ap-1, 0x1.7fd592p-3, 0x1.9f6ec6p-2, 0x1.7a4c56p-1, 0x1.691fccp0, -0x1.04a66cp-2, 0x1.e127dep0, -0x1.59ba44p0, -0x1.a76814p-1, 0x1.5705b2p-1, 0x1.57721cp-1, -0x1.db4224p0, 0x1.998e78p-3, 0x1.542cb8p-1, 0x1.9b3a4ap-3, -0x1.9f486cp-2, -0x1.f7e01ep-5, 0x1.abed84p0, -0x1.448a28p0, 0x1.b96ed2p0, -0x1.0ef29cp0, 0x1.21ad6ap-2, 0x1.1a1a4ap0, -0x1.06d56cp-2, -0x1.a802bcp-1, -0x1.0efd14p0, -0x1.e8e8acp0, 0x1.8751f2p0, -0x1.5f304p-1, -0x1.f64214p0, 0x1.82cda4p-2, 0x1.a790a6p0, 0x1.622efep-3, -0x1.23e304p0, 0x1.3fd926p0, 0x1.15a26p-1, 0x1.ad134ap0, -0x1.be47f6p-1, -0x1.c94b74p0, -0x1.e4a28cp-1, -0x1.36a724p0, -0x1.39c286p0, -0x1.b1807ap0, 0x1.18f70ap0, 0x1.593082p0, -0x1.89f7eep0, 0x1.da7186p-2, -0x1.06a72p0, -0x1.18c226p-1, 0x1.1743aap-1, 0x1.ac1492p-5, -0x1.880b5p0, 0x1.2a7164p-2, 0x1.c8d0aap0, -0x1.7e2a6cp0, -0x1.b8abd6p0, -0x1.c8e00cp-4, -0x1.d95fa6p0, -0x1.e7943cp0, 0x1.bc2082p0, 0x1.ea7136p-1, 0x1.420902p-1 };
l_struct_OC_k2c_tensor keras_dense_test1;
float c_dense_test1_array[10];
l_struct_OC_k2c_tensor test1_input_1_input;
float keras_dense_test1_array[10] = { 0x1.f7a9aap-8, 0x1.2430fep-9, 0x1.c3a498p-1, 0x1.f9ff8cp-6, 0x1.f6705cp-8, 0x1.4bdfb6p-9, 0x1.22c2ccp-8, 0x1.4c5fc4p-6, 0x1.3fc82ap-5, 0x1.9a2168p-9 };
l_struct_OC_k2c_tensor c_dense_test1;
float test2_input_1_input_array[784] = { 0x1.9dc458p0, 0x1.bd774ep-6, 0x1.f8278ep0, 0x1.06b572p-1, -0x1.fbfa2cp0, 0x1.29f8e4p0, -0x1.f502c6p-1, -0x1.c322dap0, 0x1.9d5622p0, -0x1.000362p0, 0x1.78c47cp-4, -0x1.f38a32p0, -0x1.2e2676p0, 0x1.c2ae38p-8, -0x1.2deea8p-5, 0x1.b6bf4p-3, -0x1.a9600ep-1, -0x1.8c177p0, 0x1.75954cp-4, 0x1.dec038p-1, -0x1.5a5d1cp-1, 0x1.2a9af8p-1, 0x1.adbb76p0, -0x1.1d1838p-1, 0x1.e4766p0, 0x1.0ee63cp-2, -0x1.28c272p-2, 0x1.0382dep0, -0x1.eaabd2p-3, 0x1.36371ep0, -0x1.578ec2p0, -0x1.ba2e68p0, -0x1.7f05cp-4, 0x1.7c1d66p0, -0x1.276a6p0, -0x1.5435fp-4, -0x1.9b5aa6p-3, 0x1.ec075ap0, 0x1.bdfe66p-1, -0x1.cff626p0, -0x1.456c7ep-3, 0x1.9774dp0, -0x1.f88abcp0, -0x1.9a1178p0, 0x1.301376p0, -0x1.288bd4p-1, -0x1.b709d4p-3, -0x1.572c8cp-3, -0x1.e25a58p0, -0x1.fd5794p-1, 0x1.b5ae9cp-2, 0x1.56a514p-1, -0x1.bea98ep0, 0x1.79e9ap-1, 0x1.744b24p0, -0x1.8b622p-1, -0x1.90a2bep0, -0x1.16bb38p0, 0x1.4a01f4p-5, 0x1.0f1542p0, 0x1.cc65c2p-1, -0x1.f2a7c2p0, -0x1.ca1106p-1, 0x1.5a605ap-6, 0x1.53581cp0, -0x1.d3e962p0, -0x1.37d152p0, -0x1.16a814p0, 0x1.44c26ap-2, 0x1.1f617cp-2, 0x1.85f0dep-1, -0x1.7cde36p0, 0x1.88e6dap-1, -0x1.2f6788p0, -0x1.c3d8dcp-1, -0x1.bccc54p0, -0x1.e24e44p0, 0x1.261bb2p-2, -0x1.7faa24p-1, 0x1.f14faep-3, 0x1.d09796p-1, 0x1.9f2dfap0, 0x1.424f16p0, -0x1.19cc92p0, -0x1.83cda2p-1, 0x1.66a8ccp-1, 0x1.b9e1bp-4, -0x1.8bba1cp-3, 0x1.c6b112p0, -0x1.966dfep0, -0x1.1b129cp0, 0x1.1fda62p-1, 0x1.f5f672p0, 0x1.a2168ap-4, 0x1.4182ccp0, 0x1.284e4p-1, -0x1.8f2e4ep-2, 0x1.60ac72p-2, -0x1.221666p-3, 0x1.99bc18p-2, -0x1.dde81p-1, 0x1.8e2ca2p0, -0x1.f02b4cp0, -0x1.c82e4p-1, 0x1.37faep-2, 0x1.63f096p0, 0x1.8b9fdap0, 0x1.21bc32p0, 0x1.88244p0, 0x1.77247cp0, 0x1.8f65cap0, 0x1.b5156ep-2, 0x1.ac0704p-1, 0x1.5601bep0, 0x1.abe482p0, -0x1.12796ap-1, 0x1.2c5dbep0, 0x1.008d9p-1, 0x1.1eea92p0, -0x1.ecfc76p-2, -0x1.c4c1bcp-1, 0x1.38d6bcp-1, 0x1.701a78p0, -0x1.3aae88p-1, 0x1.52b368p-1, -0x1.fa7a58p0, -0x1.5d0464p0, 0x1.f866cep-2, 0x1.2d4aa2p0, 0x1.ced6bcp0, -0x1.76c562p0, -0x1.279c48p-2, 0x1.4e870ep0, -0x1.9c78fp0, 0x1.ddd528p-10, 0x1.9d6a9p-2, -0x1.fd5cbap0, 0x1.e2f86ep-1, -0x1.6e8994p0, -0x1.d1e648p-1, -0x1.94b778p0, 0x1.4eda68p0, 0x1.884e36p0, -0x1.24a01cp0, 0x1.a0fa86p0, 0x1.64ab26p-1, -0x1.28250ap-4, 0x1.6a1ef6p0, -0x1.c79a6ap-1, 0x1.19de9ep-1, 0x1.13a384p0, 0x1.8a6152p-1, -0x1.ebb3b8p-3, -0x1.c158bcp-1, 0x1.1823cep-4, -0x1.098044p0, 0x1.91ce3ap-1, 0x1.7e6d62p-2, -0x1.eb2efep0, -0x1.f8e59cp-2, 0x1.e6b48ep0, -0x1.1de53cp0, 0x1.8b09aap0, -0x1.dfb63ap-2, -0x1.931916p-4, 0x1.3576a8p0, 0x1.18654p0, 0x1.d85ed4p0, 0x1.8b56b6p-1, 0x1.9d99c6p-2, 0x1.33d132p-2, 0x1.1b5cb8p0, -0x1.8588e6p0, -0x1.d6fd94p-3, 0x1.a145f2p0, 0x1.a71a88p0, -0x1.4b6c7ep-1, 0x1.f4e9f4p-1, -0x1.18f414p-1, -0x1.f06cdcp-4, -0x1.cd671cp-2, -0x1.85535p-6, 0x1.647e42p0, -0x1.81e368p0, -0x1.48eb94p0, -0x1.d1abc2p-3, 0x1.4471ecp-5, 0x1.70f35ap-1, -0x1.5de168p-1, -0x1.39f484p0, -0x1.1cd38cp0, -0x1.9365a6p0, 0x1.bc9b82p0, 0x1.79b29ap-2, -0x1.051918p0, 0x1.25976ep0, -0x1.7f4d56p-2, 0x1.e7751ap0, -0x1.616cep-3, -0x1.fe019ap0, -0x1.668b92p0, -0x1.bc585cp0, -0x1.417ec6p-1, -0x1.f46d4cp0, -0x1.d9304cp0, -0x1.3814bp0, 0x1.fc5d52p-2, 0x1.ee3a2ep-3, 0x1.6f7ca8p0, 0x1.7953c6p0, -0x1.1e2864p0, -0x1.cb352ap-3, -0x1.2234c6p-1, -0x1.a9b5c4p-2, -0x1.3469b8p0, -0x1.ef3d8ap0, 0x1.f22c8ep-2, -0x1.789048p-2, 0x1.09ce26p0, 0x1.eb6a5cp-2, -0x1.4d3048p0, 0x1.009e2cp0, -0x1.540bdep-1, -0x1.47b6e4p0, 0x1.cc119ap0, -0x1.b6c50cp0, 0x1.178b2p0, -0x1.1ecee6p0, 0x1.8a769p0, 0x1.3680dcp-1, 0x1.520424p-7, 0x1.59ccccp-2, 0x1.baacdep0, -0x1.968648p0, 0x1.9a2f0cp-2, 0x1.d43be6p0, -0x1.59d004p0, -0x1.82f9a4p0, 0x1.7583b4p-1, 0x1.f097fcp0, 0x1.c3e5d8p0, -0x1.b5fd4p0, 0x1.ee226cp-1, -0x1.89a004p-1, -0x1.45ff32p0, -0x1.8ba264p-1, 0x1.ff8ac6p0, 0x1.3cf69ap-1, 0x1.84e97ap0, -0x1.bdb7bcp0, 0x1.bb60ccp-2, 0x1.97735ep-4, 0x1.cf79e4p-1, -0x1.52576ep-1, -0x1.c8a3dp-1, 0x1.e50e92p-1, -0x1.93364ap-1, 0x1.f62b84p-1, 0x1.6f0528p0, -0x1.6007dap0, 0x1.f48926p-2, -0x1.ce9036p-1, -0x1.e183d6p0, 0x1.b2b0c4p-3, -0x1.70c734p-2, -0x1.fd2fb2p0, -0x1.bc0c8cp-1, -0x1.8b2faap-1, -0x1.809b96p0, -0x1.29beecp0, -0x1.197824p-2, 0x1.31ea2p0, 0x1.f665d4p0, -0x1.6bab72p0, -0x1.0a3e06p0, 0x1.7e5abcp-1, 0x1.8f8298p-1, -0x1.b18f98p-1, 0x1.69cc6ap0, -0x1.59b16cp0, 0x1.cf7936p-1, 0x1.211a78p0, 0x1.013fcp0, -0x1.5fdce8p-1, -0x1.7f3398p0, 0x1.c247b4p-1, -0x1.a35fe4p0, 0x1.5f7f1ep0, -0x1.4f2652p-1, -0x1.d1307cp0, 0x1.e0f218p-1, -0x1.7cff72p-2, 0x1.e9cebcp0, 0x1.bda6d6p0, -0x1.89b6e8p0, 0x1.c1a94ep0, -0x1.f4c07ep-2, -0x1.36ad72p-2, -0x1.b1c3bcp0, 0x1.58ad4p0, -0x1.afe22ep0, -0x1.001142p0, 0x1.96d00cp-1, 0x1.5141bap0, -0x1.7a6634p0, 0x1.1b871ep0, -0x1.0ccc8cp0, -0x1.47c61ep0, -0x1.fc8d38p-3, -0x1.ee608cp-4, 0x1.c0c24ap-1, -0x1.8ef5eep0, -0x1.593238p-1, 0x1.89b52p-1, 0x1.1379p-1, -0x1.c10372p-1, 0x1.bbf17ap0, -0x1.dae246p-2, 0x1.71b9fap-1, -0x1.c894fp-2, 0x1.cf6b56p-7, -0x1.efe9ccp0, -0x1.19968ap0, 0x1.0d0c5cp0, -0x1.cb5p-4, -0x1.b8e3c2p-2, 0x1.26f754p-2, 0x1.5f8682p-2, 0x1.9e0bbep0, -0x1.7a69c8p0, -0x1.b055eap0, -0x1.1c9648p0, 0x1.044a0ap-1, 0x1.b2ec02p-3, -0x1.4cb1cap-1, -0x1.92f044p-2, -0x1.04b48ap-1, 0x1.c5e5b2p-2, 0x1.f15028p-1, 0x1.5ba49p0, 0x1.b16d08p-1, -0x1.c4ddep-1, -0x1.49a0d8p0, 0x1.d2d75ep-2, -0x1.5eeb94p-1, -0x1.da26b2p-1, -0x1.38597p-6, -0x1.6e3d94p0, 0x1.856e58p-2, 0x1.82e1f6p0, 0x1.3d337ap-1, -0x1.c0620cp0, -0x1.e693b2p0, 0x1.f3e702p-1, 0x1.afa7f6p0, 0x1.8a55eep-3, 0x1.69f314p0, 0x1.2c8fcap-1, 0x1.bf74cep0, -0x1.acc1ep-1, 0x1.677daap-1, 0x1.515f54p-3, -0x1.89f38ep-1, -0x1.ba63p0, -0x1.bc1466p-1, -0x1.0d8efcp0, 0x1.584386p-4, -0x1.98b682p-2, -0x1.96f96p-2, -0x1.1713d6p0, -0x1.43fe7ap0, 0x1.c7ce24p0, -0x1.fc377cp0, 0x1.7ac124p-3, 0x1.9ee93ep-1, 0x1.a976ep-1, 0x1.235d54p0, -0x1.a436b8p-1, 0x1.9ca59ap-1, 0x1.725664p0, 0x1.4b18e8p0, -0x1.e45386p-1, -0x1.45bb8ap0, -0x1.849852p-2, -0x1.370036p0, -0x1.a1b6f2p0, 0x1.5fa8a6p0, -0x1.7ebda4p-1, 0x1.4f5c3ap0, 0x1.0c02b2p-3, 0x1.e84f4p0, -0x1.6303a4p0, -0x1.772d64p0, -0x1.401d5cp0, 0x1.4945ccp-5, 0x1.b0bb7ap-1, -0x1.94e29cp-1, 0x1.17650ep-1, -0x1.b8bd3cp0, 0x1.d3980ep-1, 0x1.aee1bcp-4, -0x1.312756p0, 0x1.9288a2p-2, -0x1.e50cb8p0, -0x1.ee79dep0, 0x1.f468e2p-1, 0x1.92a2bcp0, 0x1.a4648ap0, -0x1.d657bap0, 0x1.ffa91ap0, -0x1.faf06cp-2, 0x1.06509ap-1, -0x1.e5596ep0, -0x1.86cccep-1, 0x1.196e2p0, -0x1.f4641ap-1, 0x1.4c7d5ap0, 0x1.424eb8p0, 0x1.e258fap-5, -0x1.31f16p-1, -0x1.7c9cbp0, -0x1.6c7bfcp-1, -0x1.8e5d1ap-1, -0x1.47259ap0, -0x1.237a1p0, -0x1.e1b2b8p0, 0x1.e56fc6p-1, -0x1.83150ep-1, 0x1.9d8b16p-5, -0x1.85eb2ep0, 0x1.f7a032p-2, -0x1.3d79bcp0, -0x1.bb57bcp-3, -0x1.ff6c02p0, -0x1.459b5p-5, -0x1.95e4c4p-2, -0x1.a76566p-1, -0x1.f28ap0, -0x1.3147cp-1, -0x1.bc9edap-1, 0x1.83b32cp0, 0x1.415564p-1, -0x1.83b862p-3, -0x1.dcc1cp-1, 0x1.d79d0ap0, 0x1.ed5a12p0, 0x1.6ff2bp-1, 0x1.8fc6a8p-2, 0x1.9d1cf4p-1, 0x1.6a1834p0, -0x1.6cddeep0, -0x1.72b21p0, -0x1.44d926p0, -0x1.85ed42p0, -0x1.76319p0, -0x1.9c0692p-2, 0x1.6ad4c4p-6, 0x1.22deaap-2, 0x1.502e82p-2, 0x1.ca694ap-3, -0x1.2d7f7cp-2, -0x1.b2ed28p-1, 0x1.2bd91cp0, 0x1.72832cp-1, -0x1.b03952p-1, -0x1.802caep-2, 0x1.d2b38ap0, 0x1.05c7e4p-1, -0x1.406adp-1, 0x1.979d28p-1, 0x1.5aed4ep-3, 0x1.c6041ep-4, 0x1.d60d2cp0, -0x1.65726p-1, 0x1.e77a02p-4, 0x1.863f0ap0, 0x1.b703bap-4, -0x1.3065d6p0, -0x1.64d4bap0, 0x1.eed974p0, 0x1.c1e68ap0, -0x1.590602p-3, -0x1.2dd7cep0, -0x1.dd3422p-2, -0x1.98bfcp-2, -0x1.262fd8p0, 0x1.67994ap-1, -0x1.52b78cp0, 0x1.6d0796p-1, 0x1.ac50c2p0, -0x1.1f371ep0, -0x1.fd1a9ap-1, 0x1.e55706p0, 0x1.de3442p-2, 0x1.415284p-1, -0x1.928d64p-3, -0x1.28ce26p0, 0x1.fd0882p0, 0x1.c3053cp0, -0x1.96a676p0, -0x1.eddf1p-1, 0x1.068762p0, -0x1.27115ap-2, 0x1.8a47aap-3, 0x1.f14b3ep-3, -0x1.8df962p0, -0x1.cd466ap0, -0x1.0350f8p0, -0x1.2b96dcp0, 0x1.47aa58p-3, -0x1.025aap0, 0x1.fabc4cp-1, -0x1.d1889ap0, -0x1.aa4ca2p0, -0x1.1c1adp0, -0x1.f6db2p-2, 0x1.21074cp0, -0x1.4dc8dep0, -0x1.de8b82p0, -0x1.a2adeap0, -0x1.bfdcd6p0, -0x1.833de6p0, -0x1.5412b4p-3, -0x1.286c8p-2, 0x1.b0f29cp0, 0x1.dd05ecp0, 0x1.8bd124p-3, 0x1.8e2d38p-3, -0x1.969ccp-1, -0x1.3ba1e4p-1, 0x1.f01366p0, 0x1.5cefeap-1, -0x1.299194p0, 0x1.a06eb4p-2, 0x1.78180ap0, -0x1.6fab28p-4, -0x1.70ab6p0, -0x1.94fb8p0, -0x1.40f412p0, -0x1.f15b52p0, 0x1.915792p-1, 0x1.1c3418p0, -0x1.3ae14ap0, -0x1.0a93e4p0, 0x1.c296bap-1, -0x1.e93bdcp0, 0x1.cbe7fap0, -0x1.d03684p0, -0x1.99ccap-1, -0x1.22d888p0, 0x1.ad2e46p-1, -0x1.01bfa4p-1, -0x1.92e0c2p-2, 0x1.b9082ap0, 0x1.0e84eep0, -0x1.3bb154p0, -0x1.565ccap-2, 0x1.41d0f6p0, -0x1.f2f142p-3, -0x1.f5669ep-1, -0x1.52a34ap0, -0x1.0750eap0, 0x1.4562eap0, -0x1.4039cap-1, -0x1.ee1a9p0, -0x1.aebc86p0, 0x1.eb707p-1, -0x1.ab9142p-7, 0x1.652f86p-1, -0x1.41307p0, 0x1.b02ad8p-1, 0x1.5fc0d8p0, -0x1.c0d77p0, 0x1.dbf11cp0, 0x1.ac4574p0, -0x1.fd421p0, 0x1.cec636p-3, 0x1.6336a2p-2, 0x1.da375ap0, -0x1.498bb8p0, -0x1.6faccap-5, 0x1.064b7cp-2, -0x1.80244cp0, 0x1.9e2d74p-1, -0x1.bce57ep0, 0x1.74b44p-2, -0x1.f8da48p-1, -0x1.be02f4p-4, -0x1.69fa92p0, -0x1.7a1d5p0, -0x1.84b9b6p0, -0x1.e027aap-6, -0x1.522572p-1, -0x1.57600ep-3, -0x1.0e15f2p0, -0x1.87d8c6p-1, 0x1.d35bep0, 0x1.b1199ep-1, 0x1.89f8e6p-1, -0x1.3c9234p0, -0x1.fec502p-3, -0x1.d6b8bap0, -0x1.5e4958p0, 0x1.68ea14p-4, 0x1.089c8cp0, 0x1.7b0bc4p-2, 0x1.d4aa1cp-1, 0x1.bb78d6p0, 0x1.dca3f8p-1, 0x1.553326p0, 0x1.0ae874p-2, 0x1.68861ap0, 0x1.3ae93cp-1, 0x1.3b40e6p0, 0x1.ccf70ap-2, 0x1.71f156p0, 0x1.6e2d6p0, 0x1.0e4714p0, -0x1.d36aaep0, 0x1.1ffbep0, -0x1.6d1d3p0, -0x1.e1cc6p-1, 0x1.4038b6p0, -0x1.982d6cp0, 0x1.038cd6p0, -0x1.78af3ep-2, -0x1.7490b2p0, -0x1.3c221p0, -0x1.5325b6p-2, 0x1.1cfcc2p0, 0x1.1e45cap0, -0x1.93cc2p-1, 0x1.cdacap-2, -0x1.aa4182p0, 0x1.9a294ap-1, 0x1.1d0bb6p0, 0x1.e50d7ap-1, -0x1.c98b1ep0, 0x1.30bfc2p-2, 0x1.32a654p-3, -0x1.eabf5p0, -0x1.9ace14p0, -0x1.21fc64p0, -0x1.f82838p-1, -0x1.27f6b4p0, -0x1.54d44cp0, 0x1.84ba92p-1, 0x1.ebf0a6p-3, 0x1.5fe2ccp0, 0x1.ce4e7p0, 0x1.c4b068p0, -0x1.ec52d6p-2, 0x1.2e2026p0, -0x1.e7e222p-2, 0x1.6cd5bep0, -0x1.5121aap0, -0x1.686aa4p-1, 0x1.38035cp0, 0x1.58d394p0, 0x1.459a34p-2, 0x1.597b66p-2, -0x1.94251cp-2, -0x1.42918p-3, -0x1.31eddap-2, 0x1.2b5af6p0, -0x1.cd3d82p0, 0x1.d56384p0, -0x1.4703p0, -0x1.f2871ep0, -0x1.bb1792p0, 0x1.a68f3p0, 0x1.d12008p-2, -0x1.aa557ap0, 0x1.7c76bcp0, -0x1.3e1f12p0, 0x1.607d7cp-4, -0x1.1fe0fp-3, 0x1.756878p0, -0x1.a633f2p0, -0x1.fd789ap-1, 0x1.57e0aep-1, 0x1.7c3e3ap-4, -0x1.44edecp0, 0x1.c065eep0, 0x1.20212ep-1, -0x1.ab589cp-1, -0x1.6feb3cp0, -0x1.e2908ep0, -0x1.0b5314p0, 0x1.9ad2d8p-2, 0x1.f4306ep0, 0x1.1273d8p-1, -0x1.f8186ep-1, 0x1.5adf9cp0, -0x1.c123e6p0, -0x1.e449fp0, -0x1.b417aap-1, -0x1.9a2706p0, 0x1.7385aap0, 0x1.c1bd2p0, -0x1.de43cep0, -0x1.f21ecep-1, 0x1.7e5502p0, -0x1.085f48p-1, 0x1.bcb2dep0, 0x1.76316ep-2, -0x1.c9e0dp0, 0x1.a61c9ap0, -0x1.6fbdc8p-1, -0x1.374134p0, 0x1.a5b512p0, -0x1.d1e7bcp-2, 0x1.59f21cp0, 0x1.f96776p-3, 0x1.d773cep0, 0x1.effee2p-1, -0x1.c10286p-2, 0x1.a07e8p-4, -0x1.e7bfc2p-3, 0x1.35b44p0, -0x1.064ap0, 0x1.60f80cp0, 0x1.461044p0, 0x1.dfb6aep0, 0x1.da91f8p0, 0x1.c90e74p0, -0x1.1ffb26p-3, -0x1.ce9844p0, 0x1.c3814cp0, 0x1.99da5cp-2, -0x1.6fdfaap0, -0x1.f3a0b2p-5, -0x1.96a254p-1, -0x1.f1752p0, -0x1.6d4bd2p-1, -0x1.66751cp-2, 0x1.982376p0, -0x1.ddaf8cp0, -0x1.a0e6b8p0, -0x1.8b888p0, -0x1.6d6026p-1, 0x1.6bc34cp0, 0x1.3e621p-2, -0x1.adb8bap0, 0x1.69d4d8p-1, -0x1.e3f828p0, 0x1.94fdbap0, 0x1.6709a4p-1, 0x1.b53164p-1, 0x1.3673f8p0, 0x1.1e703ap-2, 0x1.d6d8ccp-1, -0x1.55f514p-2, 0x1.f06f16p-1, 0x1.e120acp0, 0x1.115deep0, -0x1.59780ap-2, 0x1.fd5f62p-1, 0x1.37b37p-3, -0x1.f30264p-1, 0x1.d8b6ecp0, 0x1.bf515p-1, 0x1.454df8p0, 0x1.406c2ep0, 0x1.c959c4p-1, -0x1.c5476cp-2, 0x1.c77fa6p0, -0x1.e146a2p-1, -0x1.77a22ap0, 0x1.c7d868p0, 0x1.68ea7cp0, 0x1.68b3bcp-2, -0x1.abc702p0, -0x1.aa2e04p0, -0x1.c7eeecp0, -0x1.e5a43p-2, 0x1.4e3516p-2, 0x1.dea998p0, 0x1.8946fap-1, 0x1.6ef6a4p0, 0x1.ed82acp0, 0x1.8b8a42p-2, -0x1.25d082p0, -0x1.aed4b6p-1 };
l_struct_OC_k2c_tensor test2_input_1_input;
float keras_dense_test2_array[10] = { 0x1.d489aap-11, 0x1.214c0ap-6, 0x1.e0a4eep-4, 0x1.e135d4p-2, 0x1.17e13ap-3, 0x1.aed524p-8, 0x1.075d24p-8, 0x1.f07672p-3, 0x1.3cba52p-9, 0x1.11ea08p-9 };
l_struct_OC_k2c_tensor keras_dense_test2;
float test3_input_1_input_array[784] = { -0x1.36ed74p-2, -0x1.a0f8fep-1, 0x1.7854f8p0, -0x1.0b47b4p-2, 0x1.ef22b2p-1, 0x1.88c1ap0, 0x1.665388p-3, 0x1.3144ccp-1, 0x1.3acc64p-5, 0x1.e176bap-1, -0x1.643658p-1, -0x1.83e494p-1, 0x1.c4e774p0, -0x1.8cc25ap-1, 0x1.112ecap-1, 0x1.809496p-1, -0x1.ee1d7p-6, -0x1.06914p-3, -0x1.af224ep0, -0x1.be1a04p0, 0x1.9b3e64p0, -0x1.b2e88ep0, -0x1.eaede6p0, 0x1.bbc31ep0, -0x1.c0f71p0, -0x1.4857eep-2, 0x1.bcc9e4p-1, -0x1.295f54p-1, 0x1.bc0da4p0, -0x1.c97864p-1, -0x1.722944p-1, 0x1.54f2bap-4, 0x1.cc4306p0, -0x1.3fc4ap-2, 0x1.011862p-1, -0x1.df5accp-2, 0x1.138c16p-2, -0x1.bd5abp-3, -0x1.5fec96p0, 0x1.4aa8d8p0, -0x1.162398p-3, 0x1.b1a92p-3, -0x1.824888p0, -0x1.9c1046p0, 0x1.5266d8p-1, 0x1.c55fb2p0, -0x1.3a5878p0, -0x1.3e6f4p-1, -0x1.97c45ap-1, -0x1.f9399ep0, 0x1.bdb792p0, 0x1.e041f8p0, 0x1.73bcf6p0, -0x1.b89bb8p-2, -0x1.07cfap0, -0x1.6bba68p0, -0x1.ea91b4p-2, -0x1.45a062p-2, -0x1.88039p0, 0x1.81819p0, -0x1.db4fa8p0, 0x1.a6e8f2p-1, 0x1.ff62a6p0, 0x1.881a7ap0, -0x1.352b74p-1, 0x1.9fa196p-2, 0x1.b2331p0, 0x1.25b61ap0, 0x1.2cfb3cp-1, -0x1.a4b0a4p0, -0x1.43c318p-2, -0x1.f1c002p-2, 0x1.26a92p-1, 0x1.5a6432p0, -0x1.fb75f4p0, 0x1.e9b5d6p0, -0x1.e1a0f4p-2, 0x1.5f9f1ap-8, -0x1.ce7942p0, 0x1.f4ed9p0, -0x1.fbfd18p-1, 0x1.da1108p-1, -0x1.f7f89p-1, 0x1.a2c92ep-3, 0x1.c3fb94p0, 0x1.4edbacp0, -0x1.0821aap0, 0x1.656958p-4, -0x1.d1887cp-3, -0x1.01b892p-1, 0x1.e49b58p-1, 0x1.642312p-6, 0x1.156f36p0, -0x1.bb5da4p-1, 0x1.212888p-1, 0x1.d9f53cp0, -0x1.f381dap0, 0x1.0f3afp0, 0x1.53661cp-2, 0x1.53ecf6p0, -0x1.cc2796p-2, -0x1.0ff286p0, -0x1.95fa64p0, -0x1.27c052p-3, 0x1.d81a98p-1, 0x1.7acc42p0, 0x1.a6c406p-4, -0x1.2c4cb8p0, -0x1.a50bcp0, -0x1.1b818cp0, -0x1.7a796ep-2, -0x1.afb238p-3, 0x1.b2c588p0, -0x1.e2df0ep0, 0x1.ac8818p-1, -0x1.4b5b7p0, 0x1.91b7fp0, 0x1.ca7452p0, 0x1.bea578p-5, -0x1.4738cep-1, -0x1.587e62p-2, -0x1.0efa3cp-1, -0x1.c06f48p0, 0x1.621252p0, -0x1.5c033p0, 0x1.0d899ap-1, 0x1.e50744p0, 0x1.6cc512p-1, -0x1.d03886p0, 0x1.0fe85ap-2, 0x1.23c896p0, 0x1.726c92p0, -0x1.a7dc4cp0, -0x1.c8f1c4p-2, 0x1.f117eep0, 0x1.7bdbb6p0, 0x1.f147d8p0, -0x1.69faeap0, 0x1.44d318p-2, 0x1.ad4ac8p0, 0x1.632bp0, 0x1.44b9f6p-6, 0x1.2020eep-1, -0x1.d5e32cp-1, -0x1.6482c4p0, -0x1.0b53c2p0, 0x1.f705eap-1, -0x1.12a82ep0, 0x1.9ef57ap0, 0x1.8e691ap-1, 0x1.f2bf5ep0, 0x1.a4640cp0, 0x1.5c0504p-1, -0x1.3620dcp-1, -0x1.ccda24p-1, 0x1.1a3c02p0, 0x1.e3d932p0, 0x1.0ceb72p-2, -0x1.17f53p-1, -0x1.cc3e66p0, -0x1.a1610ap0, 0x1.89ff44p-5, 0x1.49752p-2, -0x1.26d932p0, 0x1.371bf4p-2, 0x1.ebe104p0, 0x1.625ba8p0, 0x1.399076p0, -0x1.2eab84p-1, 0x1.1c06aep0, -0x1.6c156cp0, 0x1.3ce858p-1, 0x1.714ef2p0, 0x1.e7435cp0, -0x1.7745fp-1, 0x1.fc6d42p-5, -0x1.573872p0, 0x1.b2c58cp0, -0x1.6ef61ep0, 0x1.4847a6p0, 0x1.d9bf82p0, -0x1.41eb2ep0, -0x1.44892p-1, -0x1.23ab86p-2, -0x1.4e343ep-2, 0x1.d1f93ep0, -0x1.f2945ep-1, 0x1.8525e4p0, -0x1.af807ap0, 0x1.71f90cp-1, -0x1.e806bp0, 0x1.504604p-2, 0x1.682816p0, 0x1.363bcp0, 0x1.a1ade6p-4, 0x1.f03ed6p-2, -0x1.ac36dep-1, -0x1.4799d8p0, -0x1.d858eap-1, -0x1.267c9ap0, -0x1.1aee12p0, -0x1.bff7c4p0, -0x1.a968fcp-3, 0x1.82accap0, 0x1.5d4ce4p0, -0x1.ce449ep0, -0x1.4c9964p-1, 0x1.78e1ep-1, -0x1.48bfd6p-3, 0x1.07c408p-3, -0x1.92b68ep0, 0x1.5d8044p-3, -0x1.7922f2p-1, -0x1.92b98ap-2, -0x1.84f5c4p-2, 0x1.da334p0, -0x1.1ce87p-3, 0x1.77462ep-5, 0x1.db169ep0, -0x1.d08d76p0, -0x1.030e6ep0, -0x1.7d9d64p0, 0x1.d313e2p-1, -0x1.adc942p-2, 0x1.4c562p-2, -0x1.122d46p-4, -0x1.359e9ep-1, 0x1.975d4ep-2, -0x1.1e685p0, -0x1.93423p0, -0x1.df0c92p0, -0x1.e3832ap-1, 0x1.43ce28p-1, 0x1.e463cap0, -0x1.e839fep-2, 0x1.8e6d9p0, 0x1.60bd4ep-1, 0x1.4e65fp-1, 0x1.2b128cp-1, 0x1.1adf84p0, 0x1.bc5508p0, 0x1.7cdep-1, 0x1.585b98p0, -0x1.bd2b28p-1, -0x1.85c824p-1, 0x1.4084eap0, 0x1.ba7034p-1, 0x1.1ba906p0, -0x1.7d04ap0, -0x1.b4392p0, -0x1.c65c3ep0, 0x1.29f34ep-1, -0x1.8080a4p0, -0x1.21e60cp-1, 0x1.38bb3cp-2, 0x1.86d2f8p-2, 0x1.decfcp0, -0x1.ce7066p0, -0x1.753dbap0, -0x1.30c5b4p0, -0x1.e72b4p-1, -0x1.79dap0, -0x1.fe1872p-1, -0x1.dda07cp-1, -0x1.ff352p0, -0x1.14ae3cp0, 0x1.d029eap0, 0x1.cba964p-2, -0x1.1ecf6cp0, 0x1.ee2fd8p0, -0x1.82da82p0, -0x1.28970cp-4, 0x1.8a8ed4p-1, 0x1.407bd8p0, 0x1.6fb428p0, 0x1.d60c7ap-1, 0x1.907996p-3, -0x1.9af0b4p0, -0x1.b945eep0, -0x1.c2cc7p-1, -0x1.58097cp0, 0x1.78d69cp0, -0x1.125ff6p0, 0x1.3bf618p0, -0x1.e6741cp-3, 0x1.8554p0, 0x1.489adp-2, -0x1.4dc1p-1, -0x1.81fbb4p-3, -0x1.8b640cp0, -0x1.dec078p0, -0x1.abf4e8p-1, -0x1.119bbep-4, 0x1.3e46acp0, 0x1.b04282p0, 0x1.aa3c7cp0, -0x1.8fc156p0, 0x1.7208a2p-1, 0x1.397906p0, -0x1.7283b2p-1, -0x1.fc84b2p-4, 0x1.bddbc2p0, 0x1.4bb0b8p0, -0x1.1625fcp0, 0x1.c62594p0, -0x1.12cbc4p-4, -0x1.0fe41ep-1, 0x1.fad772p0, -0x1.e84b4cp0, 0x1.3fda48p0, 0x1.dfb966p0, -0x1.0d3ddep0, 0x1.279716p0, 0x1.1e601cp-1, -0x1.aa12c2p-1, 0x1.7f8f7ap0, -0x1.a3c1e2p0, 0x1.ed38e2p-1, -0x1.c4daa2p0, -0x1.286bf2p0, -0x1.016c9cp-2, 0x1.f218c2p-1, -0x1.7bde82p-3, 0x1.ca9f3ep-3, -0x1.74aec4p0, -0x1.1286eap0, 0x1.32f19ap0, -0x1.c42204p0, -0x1.f9c0bap0, 0x1.73d6dp-4, 0x1.3843a4p0, 0x1.28dfaep0, 0x1.2ce006p0, 0x1.d89e78p0, 0x1.52f244p0, 0x1.952d2ep-1, 0x1.a73886p0, -0x1.8eff3cp0, -0x1.2b6e2p-1, 0x1.375132p-1, 0x1.4906c8p0, 0x1.4fa538p-6, 0x1.bcb408p-2, 0x1.b03faap-1, 0x1.662ddap0, -0x1.75a246p0, 0x1.a55384p0, 0x1.fa1f8ep0, -0x1.fe2502p0, 0x1.a9d85cp0, -0x1.4c04f4p0, -0x1.53ff36p-1, -0x1.ce64a6p-1, -0x1.c98f0ep0, -0x1.7622a2p0, 0x1.ba72e2p-1, -0x1.837f1p-5, -0x1.538baep0, 0x1.471f4ap0, 0x1.d05e3ap-4, 0x1.d248c8p0, 0x1.33ebeap-4, 0x1.fd27e8p-1, 0x1.f01b16p-3, -0x1.67ab9ap0, 0x1.7ac578p-2, -0x1.39ec92p0, -0x1.19f2c4p0, -0x1.42b404p0, 0x1.74032cp-1, 0x1.453014p-2, 0x1.58b428p-1, -0x1.b4de92p-1, 0x1.457f8ap-2, -0x1.2e3804p0, 0x1.18225p-1, -0x1.8987aep0, -0x1.fce7ap-1, 0x1.92515p-3, -0x1.fed152p0, 0x1.c2b21cp-3, 0x1.e70bcap0, 0x1.7a0b18p0, 0x1.19e354p-1, 0x1.fa7ed4p0, 0x1.8ebc74p0, -0x1.be76f8p-1, 0x1.5cf02p-2, -0x1.5a927p-1, -0x1.fdf5dap-1, -0x1.9d0d0cp0, -0x1.296e2ep-1, -0x1.11858ep-2, 0x1.695598p0, -0x1.0a03d8p-1, 0x1.5409a2p0, -0x1.995f72p-1, -0x1.43826p-1, -0x1.94431ap-4, 0x1.805feep0, -0x1.671ab2p0, 0x1.52c23p-6, 0x1.ced594p0, 0x1.b45314p0, 0x1.1ba216p0, -0x1.526058p0, -0x1.7fda9p0, -0x1.12725ep0, 0x1.eb7a2ep-2, -0x1.cbece2p0, -0x1.3ef30ap-1, 0x1.a6595ep0, 0x1.edc0bcp-1, -0x1.0dcd3ap0, -0x1.2b78d4p0, -0x1.619f0ap0, 0x1.7755eap-3, -0x1.dfb54ap0, -0x1.ec6ecep-4, -0x1.131bep0, -0x1.a5222ep0, -0x1.6eee32p0, -0x1.41a802p-1, 0x1.e74edcp0, -0x1.0aa69p0, -0x1.49bf1ap-2, 0x1.c758c2p-1, -0x1.ca8d8p0, 0x1.dc3d4p-2, -0x1.52254p-1, -0x1.4958bp-2, -0x1.0b6adcp0, -0x1.5c1d36p-7, 0x1.76137cp0, -0x1.ebe442p0, -0x1.5c2a34p0, -0x1.560ad4p-4, -0x1.88e4dcp0, -0x1.de20cep-3, -0x1.114a7cp-4, 0x1.0e6ee8p0, -0x1.7799c6p-1, -0x1.0b8ddp0, -0x1.ff3e5p0, -0x1.f4fceep0, -0x1.01eeaep0, 0x1.0ce148p0, 0x1.e0883cp0, 0x1.0fd70cp-1, -0x1.81ee66p-1, -0x1.c0908ap0, -0x1.bee3e8p-1, -0x1.228e56p-2, 0x1.2c8044p-1, -0x1.13971ep-4, 0x1.cfd102p0, 0x1.50e282p0, 0x1.d785fcp0, -0x1.f3554ap0, 0x1.94dbbp-1, -0x1.72dfbap0, 0x1.630544p-2, -0x1.8ee918p0, 0x1.ad556ep-1, -0x1.f24eeep0, -0x1.f559a8p-1, 0x1.5a88d6p0, -0x1.cc6fb4p-1, 0x1.69c0bep0, 0x1.c8dfaep0, 0x1.1ebf8ep0, 0x1.1d479cp-2, -0x1.920872p0, -0x1.bb2474p0, 0x1.c5f7f4p-1, 0x1.c41c3cp0, 0x1.59d874p0, -0x1.222eb4p0, -0x1.e6b9cp-4, -0x1.651p-5, -0x1.34c0eap-4, 0x1.a1d46ap-1, 0x1.d6fc02p0, 0x1.3bf52cp-3, 0x1.b96b9cp0, 0x1.ebc952p-1, -0x1.63c96ap0, -0x1.2b2b64p0, 0x1.7d27a4p-1, -0x1.201c7cp-1, -0x1.9ffffap0, -0x1.4e475ep0, -0x1.93fab4p0, 0x1.e7d9d2p0, -0x1.82d7e4p0, 0x1.310b8ap0, 0x1.7519cp-2, -0x1.af103ap0, 0x1.bda34ep-2, -0x1.740a92p0, 0x1.4c8a4p-1, -0x1.de9b58p0, 0x1.36e874p0, -0x1.28c7d8p-7, -0x1.cef5aep-2, -0x1.42cd02p0, -0x1.4a674p0, -0x1.a7428ep-1, -0x1.68e78ap-1, -0x1.5b07b4p-4, -0x1.7bde76p0, 0x1.132b64p0, 0x1.50cae8p-3, 0x1.c0c6fap-2, 0x1.27473ap-1, 0x1.9db36cp-2, 0x1.918e4ep-1, -0x1.9b6d3ap0, -0x1.bca1dcp-1, 0x1.94fcb4p0, 0x1.1b112ep0, -0x1.e0371cp0, 0x1.78ca3ep0, 0x1.343286p-1, -0x1.4b768ep0, 0x1.0192ep-1, -0x1.2e701ep-2, -0x1.799e18p-1, -0x1.588bf4p0, 0x1.d33152p-1, 0x1.0bc32ep-1, -0x1.586066p-2, 0x1.6b6b02p0, 0x1.dff15cp0, -0x1.b7fd9p0, 0x1.4a4bcap-3, -0x1.8aa16p0, 0x1.a5d14ep0, 0x1.81d70ep-3, -0x1.ab0deap-5, -0x1.7c515p0, -0x1.3c303cp-2, 0x1.ef3f52p0, 0x1.77583ap-1, -0x1.00ec04p0, 0x1.ca248cp-1, 0x1.9134aap-3, -0x1.f38918p0, 0x1.f2c894p-4, -0x1.55ccf4p0, 0x1.b3d642p-1, -0x1.f0bd64p0, 0x1.fedbap-1, -0x1.4ad02p0, 0x1.edbc5ep-8, -0x1.92c35ap0, 0x1.767784p0, 0x1.5b79a6p0, 0x1.75efe2p0, 0x1.a01ba6p-2, 0x1.fb2af6p-3, 0x1.8c78bp-2, 0x1.2b9676p0, -0x1.6b60fep0, 0x1.83389ap0, 0x1.a33344p0, 0x1.66dd5ap0, 0x1.7801c2p0, -0x1.89f57cp-2, -0x1.6baa5p-1, -0x1.99af5cp-5, -0x1.81784ep0, -0x1.2682e6p0, 0x1.483842p0, 0x1.1120c4p-1, -0x1.8693c2p0, -0x1.4a90cap-1, -0x1.b95cfap0, 0x1.28c132p-2, 0x1.5241b8p0, -0x1.54c342p-2, 0x1.1abd66p-1, -0x1.e1cbb6p0, -0x1.98604cp0, -0x1.3120e4p-1, 0x1.fa4cf4p-2, -0x1.2d1786p-2, -0x1.7b9d3cp-1, 0x1.f0a22ap-1, -0x1.ea7a9ep-2, 0x1.bf4c56p0, 0x1.9a8274p-4, 0x1.e73f7ep-1, 0x1.4ba78ap-2, -0x1.6295fcp0, -0x1.fe0918p-2, 0x1.1da36ep0, -0x1.313db8p0, -0x1.eee98ep0, 0x1.3dd3eap0, 0x1.128ebep0, 0x1.a72656p0, -0x1.f8eac2p-1, -0x1.6d4a6cp-2, -0x1.07550cp0, -0x1.adb8aep0, 0x1.04a00ap0, -0x1.c2566cp-1, -0x1.c8f788p-1, 0x1.1f6da8p-6, 0x1.ddfbfp0, -0x1.a74f92p0, 0x1.bb2042p-3, 0x1.caf80ep-1, 0x1.f238a4p0, 0x1.c99a48p0, 0x1.2793c4p0, 0x1.4650c6p0, 0x1.2bc686p0, -0x1.c382cep0, -0x1.fac11p0, 0x1.a1291cp-3, -0x1.8c39b6p-6, 0x1.8eb132p-5, 0x1.f38924p-1, 0x1.32ae12p0, 0x1.49ee12p-1, -0x1.8609aap0, -0x1.4dd0f8p-1, 0x1.44683ep0, 0x1.51c5fap0, -0x1.8c808cp0, 0x1.6a267p-3, 0x1.e27feep-4, 0x1.c579fep-3, 0x1.b44222p-4, -0x1.4e4c56p0, -0x1.3c56ep-1, -0x1.dd4ddap-1, 0x1.21db74p-1, -0x1.80b644p0, -0x1.56aac6p0, -0x1.c53e8ep-1, 0x1.7d56a8p-1, -0x1.bbdae4p0, 0x1.e138b2p-1, 0x1.28ad72p0, -0x1.73406cp-1, -0x1.59930ep-5, -0x1.7b00ecp-1, -0x1.a755f6p0, -0x1.3e2b9ap0, -0x1.41faaap-3, 0x1.df4682p0, 0x1.8d13dap-1, -0x1.afdefap0, 0x1.24dc34p-2, -0x1.99bdb6p-2, -0x1.c8bfa6p-1, 0x1.f0e7acp0, -0x1.bb733p0, 0x1.b5b6b4p0, -0x1.9dac6p-7, -0x1.b1fe5ap0, -0x1.a0dd1p-1, -0x1.d404b8p0, 0x1.979f8p0, -0x1.79c4fp-1, -0x1.4502a6p-1, 0x1.98aeccp-1, 0x1.35e194p-2, 0x1.ca1ddcp0, -0x1.d1c35p0, 0x1.4514e2p0, -0x1.9d0304p0, 0x1.4d190ep-5, -0x1.ed8534p-2, 0x1.ac02b4p-2, 0x1.3c9f6ep-2, -0x1.5fc596p-5, 0x1.d3a3cep0, 0x1.4e9552p0, 0x1.90a974p0, 0x1.5647d8p-1, 0x1.3c1c58p-3, -0x1.694a32p-2, -0x1.051b6ep0, 0x1.063e12p0, 0x1.a05c14p-2, -0x1.4d25e2p0, -0x1.81123p0, 0x1.19b69ap-2, -0x1.7c3e3p0, 0x1.6c9856p0, 0x1.773b24p-3, 0x1.bdfd7p-4, -0x1.4059fp-1, -0x1.c2ce42p-5, 0x1.07445ep-3, -0x1.89c7aep0, 0x1.417b58p-1, -0x1.1a99cep-2, -0x1.d1048p-1, -0x1.904e62p0, 0x1.2552bep0, 0x1.bf433p-6, 0x1.95f64ap-5, -0x1.0b1836p-4, 0x1.f07904p-1, 0x1.991e6cp-2, 0x1.a9e522p0, 0x1.2935d4p-2, -0x1.72e94p0, 0x1.fa9b68p0, -0x1.a0307p0, 0x1.4f97p-4, 0x1.450724p0, 0x1.50a35ep-2, 0x1.af7e32p-1, 0x1.87b80ep-1, 0x1.144d58p-2, 0x1.ba939cp0, -0x1.ac0eap0, 0x1.e9e5bep-1, -0x1.8a787cp-1, -0x1.29f08p0, 0x1.16114ap-8, 0x1.ee0e0cp0, 0x1.c29e8p0, 0x1.e1d40cp-1, 0x1.728984p-3, 0x1.441c5cp-1, 0x1.0ba1e8p0, 0x1.48316ap0, -0x1.3e1d12p0, -0x1.2a99aep0, 0x1.66cf5p0, -0x1.92da6ap0, -0x1.1f00b6p-4, 0x1.8110aep0, 0x1.dd2ff2p0, -0x1.3bcfc6p0, 0x1.9c1c3ap0, -0x1.df2754p0, -0x1.7590aep0, -0x1.430a2p-2, -0x1.97fe1ep0, 0x1.0131c2p-2, 0x1.622952p-2, 0x1.acb36ap-1, 0x1.2edd32p-1, 0x1.30b37p-3, -0x1.ccc6aep0, -0x1.0eb74ap0, 0x1.b1643p0, -0x1.7f88cap-1, -0x1.25f17p0, -0x1.8a212ep0, -0x1.9d2f7p-1, -0x1.55b676p-3, -0x1.ac68aep-1, -0x1.b6c2f4p0, -0x1.f0153ep-1, 0x1.ead59ap0, -0x1.33fc48p-3, -0x1.35e6cap0, -0x1.6906bep0, -0x1.cd78ccp-1, 0x1.672412p0, -0x1.d6bbfcp0, -0x1.ddd746p-1, -0x1.adc0c4p-2, 0x1.75c92ep0, 0x1.b16a4p0, -0x1.b7a9f2p-3, -0x1.05e08p0, 0x1.a486a2p-1, 0x1.b1858ep0, 0x1.ec4d54p-2, -0x1.44e904p-4, 0x1.2a07cap0, 0x1.0e5dd2p0, -0x1.d7367p-1, -0x1.534828p-3 };
float c_dense_test3_array[10];
l_struct_OC_k2c_tensor keras_dense_test6;
float c_dense_test6_array[10];
float keras_dense_test5_array[10] = { 0x1.31746p-8, 0x1.7431bap-6, 0x1.f184ccp-2, 0x1.c8a9fep-9, 0x1.4e6bd4p-3, 0x1.16b322p-10, 0x1.a9cd78p-5, 0x1.a71fep-3, 0x1.e6b334p-5, 0x1.e8a516p-11 };
l_struct_OC_k2c_tensor test3_input_1_input;
l_struct_OC_k2c_tensor test4_input_1_input;
l_struct_OC_k2c_tensor c_dense_test4;
float keras_dense_test6_array[10] = { 0x1.b2d616p-9, 0x1.8d5db4p-8, 0x1.06453p-5, 0x1.b469cp-2, 0x1.898254p-9, 0x1.40fbd2p-3, 0x1.3276d2p-7, 0x1.912aap-4, 0x1.0cbb4p-2, 0x1.83f414p-9 };
l_struct_OC_k2c_tensor keras_dense_test3;
float c_dense_test2_array[10];
l_struct_OC_k2c_tensor c_dense_test3;
float c_dense_test4_array[10];
l_struct_OC_k2c_tensor test6_input_1_input;
l_struct_OC_k2c_tensor c_dense_test5;
float keras_dense_test4_array[10] = { 0x1.2796dap-8, 0x1.f5026ap-5, 0x1.0f8dd4p-3, 0x1.606p-4, 0x1.b29682p-3, 0x1.39105cp-7, 0x1.c382e4p-7, 0x1.d528fcp-3, 0x1.f01b5p-3, 0x1.220d66p-7 };
float test6_input_1_input_array[784] = { -0x1.57d098p-1, 0x1.2834a6p0, -0x1.0ec2dcp0, -0x1.6c4fbap-1, -0x1.9b0fd4p-5, -0x1.901a58p0, 0x1.5b224p-2, -0x1.0bc67p-3, -0x1.10a42cp-1, -0x1.1e0daep-1, 0x1.da8c76p0, -0x1.1d13e8p0, -0x1.e1a908p0, -0x1.4b27b4p-5, -0x1.ae0b16p-1, 0x1.553c36p-2, 0x1.89705p-2, -0x1.7d8a22p0, -0x1.778d4ep-1, -0x1.1cc57p0, -0x1.60a3bcp0, 0x1.e0b43p0, -0x1.6d0f92p-1, -0x1.ac173p0, -0x1.a41796p0, 0x1.884384p-2, -0x1.0f515ap0, 0x1.96427p0, 0x1.cc544p0, 0x1.49cfcap-3, -0x1.d12f0cp0, 0x1.3160e8p-1, -0x1.83c306p-1, -0x1.0ca93p0, 0x1.f1477cp0, 0x1.aec578p0, 0x1.12685ap-2, -0x1.527244p0, -0x1.e61026p-1, -0x1.728646p-1, 0x1.0fad66p0, 0x1.aca1c4p0, 0x1.72c71cp-2, -0x1.2ac5bcp-5, -0x1.8f2982p-3, 0x1.9811bcp-5, 0x1.ba49cap0, 0x1.975cb6p0, 0x1.fc76e4p0, -0x1.98025ep-1, 0x1.91451p0, 0x1.427eecp0, 0x1.5d95dcp-3, 0x1.27640cp0, 0x1.eebc9ep0, 0x1.a2f07p0, -0x1.277dfep0, 0x1.c86f0ap-5, 0x1.7c5356p0, -0x1.ca1a48p-1, -0x1.9d79bap0, -0x1.086da2p0, -0x1.0496e4p0, 0x1.1ded18p0, 0x1.41dea4p0, -0x1.2da158p0, 0x1.22ab62p-1, -0x1.29e9fcp-1, 0x1.9cb6ccp0, 0x1.9de354p0, 0x1.aaf242p-1, 0x1.c7ae1ap-1, -0x1.0bbd58p-3, -0x1.90636p-1, 0x1.f8ddeap-1, -0x1.5875ccp-1, 0x1.a53436p-1, -0x1.58013p0, -0x1.cfc9e6p-1, -0x1.a06824p0, 0x1.72246p0, 0x1.1c8feap0, -0x1.31fe78p0, 0x1.28567ep-3, -0x1.afb4f2p0, 0x1.03043p0, 0x1.56f0f4p-1, 0x1.89f89ap0, -0x1.92dc94p0, 0x1.09a3d2p-2, -0x1.fb4bf2p0, 0x1.1865b8p0, 0x1.6f01ccp-1, -0x1.922a62p-2, -0x1.e8347ep0, -0x1.ff159ap0, 0x1.690f9ap0, 0x1.5ebc5ep-1, 0x1.98360ep-4, 0x1.bff50ap0, 0x1.571116p-3, -0x1.685af8p-1, 0x1.1fb6fep-2, 0x1.8abf3p-3, -0x1.0fd3d2p0, -0x1.335f4ap0, 0x1.08ae72p0, 0x1.38edd4p-2, -0x1.9d7f18p-3, 0x1.8de006p0, 0x1.19cb66p-1, -0x1.ccb118p0, 0x1.cc9c8ep0, -0x1.12c182p0, 0x1.9a7104p0, 0x1.d47642p0, 0x1.2e69e6p0, -0x1.988a7cp0, -0x1.101a3p0, 0x1.f5a4eap-1, 0x1.48ff2ap0, 0x1.008fa8p0, -0x1.750aaap0, -0x1.56efd4p0, 0x1.00e342p0, -0x1.7dd588p-2, 0x1.8433e8p-2, 0x1.e76b2ap0, 0x1.554c46p0, 0x1.3c012ep-1, 0x1.697678p0, -0x1.54b81ap0, 0x1.1ea42ap-1, 0x1.7dc1eap0, 0x1.9b3f92p-4, 0x1.72b708p0, 0x1.bad9aap-1, -0x1.7fb924p-6, 0x1.827dbep-2, 0x1.3e8a18p0, 0x1.75c0fp-2, -0x1.a4a04ap0, -0x1.621e94p0, -0x1.20cc8cp-1, -0x1.f2d83cp0, -0x1.a9eb6p-2, -0x1.f3e226p-2, 0x1.449256p-2, 0x1.7f802cp-2, 0x1.1f9fc8p0, 0x1.08a8c8p-1, -0x1.5e0652p0, 0x1.aa9202p0, -0x1.a492a2p-1, -0x1.93afb6p-2, -0x1.6a3b56p0, 0x1.3b4562p-4, -0x1.ee0dd4p-1, 0x1.8169aep0, -0x1.5e35c4p-1, -0x1.360aa4p-7, 0x1.e13926p-1, -0x1.253716p-1, 0x1.97d3a6p0, 0x1.381b06p-5, -0x1.63e34ap-2, -0x1.946332p-2, 0x1.454578p-2, -0x1.8a2f82p0, 0x1.a621c4p-4, 0x1.05c6acp-2, 0x1.228ffap0, 0x1.0874ccp-5, -0x1.ce590ap0, 0x1.e5b74p-1, 0x1.cc352cp-1, -0x1.06fe2ap0, -0x1.6078a8p0, 0x1.dba344p0, -0x1.81ece8p0, -0x1.35fe1cp0, 0x1.a672d6p-5, 0x1.0928bap-1, -0x1.576d12p0, -0x1.98b98p0, -0x1.7d5c36p-2, -0x1.91077cp-3, 0x1.279964p0, -0x1.6f3cf2p0, 0x1.23900cp-2, -0x1.d392aep0, 0x1.6594a8p0, 0x1.3282bep0, -0x1.db178ap0, 0x1.9d5da8p0, -0x1.a60d54p0, 0x1.4f535ap-1, -0x1.c6520ap0, 0x1.7e1c9p0, 0x1.c90e4ep0, 0x1.b2df6p-2, -0x1.c48cf2p-1, -0x1.de1a3cp0, -0x1.f00fc4p-1, -0x1.189fa2p0, 0x1.227f5cp0, 0x1.96612p-4, -0x1.3f4b22p-1, -0x1.95d4a2p-2, 0x1.42022cp-6, 0x1.3fa33ep-1, -0x1.4c59d2p-1, -0x1.5d4232p-3, 0x1.6df066p0, -0x1.45c6cp-2, -0x1.13088ep0, 0x1.4cdd4ep0, -0x1.34d6e8p-2, 0x1.bcf95cp-3, 0x1.2fa8c6p0, -0x1.9c600ap0, 0x1.c26d04p-3, -0x1.0b74f8p-1, -0x1.ac6f76p0, 0x1.b4f6ccp0, -0x1.7f7764p0, 0x1.582d8ap0, 0x1.c134c2p-2, -0x1.2faa78p-1, 0x1.4fb1eap-1, 0x1.c10f0cp0, -0x1.58ab82p-3, 0x1.bee464p-1, -0x1.15d16ap-3, -0x1.88e4c8p0, 0x1.41f48cp-1, 0x1.a9a2aap-2, 0x1.0cc408p-1, 0x1.28122ap0, 0x1.a43976p0, -0x1.bdeb4ap0, 0x1.763116p0, 0x1.d65d1ep0, -0x1.0faaa8p-1, -0x1.ccd698p-2, -0x1.40a28ap-1, 0x1.823b96p0, -0x1.f88784p-4, 0x1.5a6a66p-6, -0x1.a2cc96p0, 0x1.2a07c8p-1, -0x1.99b2ep-3, -0x1.c26548p-1, 0x1.b391f4p0, 0x1.7a557cp0, 0x1.bfae82p-1, -0x1.28312ap0, 0x1.ffb05cp-1, -0x1.684f9ep0, -0x1.039576p0, 0x1.e54484p0, -0x1.790cfcp-5, 0x1.d5517p0, 0x1.7b25bep0, -0x1.c10892p0, -0x1.c04a5cp0, -0x1.b4d8dap-2, -0x1.7bc9a6p-3, -0x1.d30642p0, -0x1.4a7746p-1, -0x1.9f4616p-1, 0x1.2cdbfap0, 0x1.aef12ep-5, -0x1.758edap0, -0x1.471716p0, -0x1.57603p0, 0x1.c63088p0, 0x1.9045dcp0, -0x1.d84186p0, 0x1.883de8p0, 0x1.d486c2p0, -0x1.027446p-2, -0x1.7cca16p0, 0x1.f82b9p-2, 0x1.0a6948p-5, 0x1.f906cap-2, 0x1.d58ac4p0, -0x1.04b86cp0, 0x1.a89d9cp-1, -0x1.b12154p0, 0x1.5cb7p-1, 0x1.b0aaaap0, -0x1.89b034p0, -0x1.4647eap0, 0x1.e9497cp0, 0x1.b4d312p-2, 0x1.10a7a2p-3, 0x1.63b21p-2, 0x1.f2e74ap-1, -0x1.1936b6p0, -0x1.210b5p0, -0x1.7fe098p0, -0x1.cad15ap-2, -0x1.96b402p0, 0x1.dd6f48p-3, -0x1.ffff6ap0, -0x1.424446p-1, -0x1.1dddb6p0, -0x1.f2d5d4p-1, -0x1.46d5ap0, 0x1.ecf0d8p-2, -0x1.cbc732p-5, -0x1.be00fap-1, -0x1.aa3b8ap0, 0x1.b8cf1ap0, 0x1.890544p0, -0x1.4500bcp0, -0x1.aea968p0, -0x1.3a122p0, -0x1.3b7f72p0, -0x1.bf42cp0, -0x1.ac0fb2p-2, -0x1.02ca38p0, 0x1.0e9956p-1, 0x1.a8d8bp-2, 0x1.6c54p-1, 0x1.9727ccp0, -0x1.df6952p0, 0x1.366eep-3, 0x1.6deb68p0, 0x1.48525p0, 0x1.779c4cp0, 0x1.aee318p0, -0x1.2f2b66p0, -0x1.ef6a4ep-1, 0x1.ca92bp-1, 0x1.601032p0, 0x1.968da8p0, -0x1.9413a6p0, -0x1.ae8d3ap-2, -0x1.032b9ep-4, 0x1.8c26cep-3, -0x1.ad4bc4p0, -0x1.e7111ep-2, 0x1.19462p-2, -0x1.422beep-1, 0x1.4633dep-4, 0x1.9440e4p0, -0x1.ff7cb2p-2, -0x1.cbd094p-1, -0x1.ffe77ep0, -0x1.b776b6p-1, 0x1.9ee7bp0, 0x1.f862fcp-1, -0x1.76cef6p0, -0x1.16508ep-2, 0x1.ec3222p0, -0x1.e2ce1ep0, -0x1.986918p0, -0x1.68054ep0, 0x1.68507cp-4, 0x1.e80ccp0, -0x1.16b03cp-6, 0x1.d67926p0, -0x1.e78a7p-8, 0x1.7e4902p0, 0x1.b4b99p-4, -0x1.bf5336p0, 0x1.9173f2p0, -0x1.e3b5b6p0, -0x1.20f402p-2, -0x1.d61ad8p0, 0x1.c37e48p0, 0x1.e77148p0, 0x1.0c0174p0, 0x1.52a736p0, 0x1.933592p0, -0x1.5b1bdap0, 0x1.23a9fep0, 0x1.d88764p0, 0x1.b038a4p-1, 0x1.f52f82p-1, 0x1.00cfccp0, 0x1.6390a8p0, 0x1.280b2p0, -0x1.729dccp0, -0x1.000f7ep0, 0x1.cf6d9p0, 0x1.edcd1ep0, -0x1.94cfd6p0, 0x1.bbf298p0, -0x1.90f7acp-3, 0x1.7f9d5ap0, 0x1.1a4b26p-1, -0x1.90d0e2p0, -0x1.a57cfap0, 0x1.427f0cp-1, 0x1.1f8f6ap-2, -0x1.12148p-1, -0x1.6939c8p0, -0x1.69f52ap0, 0x1.61bd64p-2, 0x1.0fdfecp0, 0x1.8c2678p0, 0x1.245b26p0, -0x1.4babb8p0, -0x1.a6defep-1, 0x1.5994dcp-1, 0x1.f0e26cp-1, 0x1.f46ec6p-1, 0x1.7b6d6p-1, 0x1.02d32cp-2, -0x1.2f88f8p0, 0x1.5e94f6p0, 0x1.a20e14p-3, 0x1.1b533ap0, 0x1.61b236p0, -0x1.139cfcp-2, -0x1.30c13ap-1, -0x1.bc605ep0, 0x1.66e6cap-3, -0x1.a48e9cp0, -0x1.8a9276p-1, 0x1.faceb8p-1, 0x1.8494a6p-1, 0x1.d17dbp-1, 0x1.06ea2p0, -0x1.052336p-2, 0x1.e8b504p0, -0x1.f547f6p0, 0x1.c7aebap-3, -0x1.6e3c4ep0, 0x1.098748p0, -0x1.1c7a5ap-4, 0x1.31a972p0, -0x1.e39a3cp0, -0x1.f7adfep0, -0x1.489084p0, 0x1.13c236p0, 0x1.51907p0, 0x1.3d3912p-1, -0x1.92932ap-2, -0x1.c8cbdp-1, -0x1.8ca232p0, -0x1.67dd2cp-1, 0x1.d09aecp-4, 0x1.a9cec2p0, 0x1.3af6eep0, 0x1.b31dfp0, -0x1.e6c068p0, 0x1.0c9532p-1, -0x1.b08de2p-1, 0x1.4113f8p-1, 0x1.b75a7ep0, -0x1.bbf8c8p-1, -0x1.ff511ap-1, 0x1.e44e0ep-3, -0x1.79759cp0, -0x1.c19138p0, -0x1.52d716p-1, 0x1.be0dc8p0, 0x1.c2e124p0, -0x1.17cb36p-6, 0x1.08d1b6p-1, 0x1.2d677p0, 0x1.87769ap-1, -0x1.a7e344p-2, -0x1.d26eaep-2, 0x1.5e79dap-1, 0x1.58d936p0, 0x1.f70064p0, -0x1.5fb586p0, -0x1.e47aaap-4, -0x1.8eb6acp-4, -0x1.861e92p-2, 0x1.e47a8p-1, 0x1.8a06fcp-1, -0x1.a28f1ep-4, -0x1.79737ap0, 0x1.13ff12p0, 0x1.409eeap-6, -0x1.41def8p-4, 0x1.c985acp0, -0x1.71be16p-2, 0x1.6987f8p-2, 0x1.7d4d5ep-1, -0x1.aafbep-1, 0x1.900caap0, 0x1.40c5d8p0, -0x1.8d4a26p0, 0x1.7e29b8p-1, -0x1.9c7958p-3, -0x1.9aafcep-1, 0x1.6fa662p0, 0x1.381df2p0, 0x1.3e69c6p0, 0x1.29035p0, 0x1.fbc81p-1, -0x1.8109dap0, 0x1.eb0b28p0, -0x1.7a9b28p0, 0x1.85532ep0, 0x1.cda832p0, 0x1.25e708p-1, 0x1.76b88ep-1, 0x1.e67f34p-1, -0x1.e3306ep0, 0x1.a23acp-1, -0x1.9da954p0, -0x1.2501cep0, 0x1.984aap-1, -0x1.3df822p0, -0x1.fc0f6cp-3, -0x1.89cfd6p-4, 0x1.bcf9acp-3, -0x1.7dad6cp-7, -0x1.8ba3eep0, 0x1.011944p0, 0x1.9c9588p0, 0x1.96b1c2p-3, -0x1.3b0f7p0, 0x1.bad91cp-3, 0x1.b8ae2ap-1, -0x1.eb0d0ep-2, 0x1.7eb70cp0, 0x1.3fc886p0, -0x1.ced7a8p-1, -0x1.db3f04p0, 0x1.e9ea76p-1, 0x1.01d5c4p-2, 0x1.e3516ep-1, 0x1.4c79ccp-7, 0x1.181d46p-1, -0x1.5777e2p0, 0x1.2d074p0, 0x1.0c64f2p-1, 0x1.044492p-1, 0x1.8bff38p-2, 0x1.f3c9ep-3, 0x1.bba66ap-3, -0x1.6888a2p-3, -0x1.3e827ep0, 0x1.830944p0, -0x1.9e3ffp-1, 0x1.223756p-2, 0x1.499a32p-2, -0x1.4e85b2p-3, -0x1.fa68eap-1, -0x1.d86fa2p0, -0x1.ccb968p0, 0x1.4068c6p-1, 0x1.1de48ap0, 0x1.3d15c4p-2, -0x1.58badap0, -0x1.3aa34ep-2, -0x1.8d133p0, -0x1.d8c08cp-4, 0x1.c845dap-1, -0x1.3b827ap0, 0x1.fac8d2p0, -0x1.1ae92p0, 0x1.78b39cp0, 0x1.07b232p0, 0x1.0e8f2cp0, 0x1.57cbfp0, 0x1.18e634p-1, -0x1.eea3bap-3, 0x1.d433a8p0, 0x1.5d1d5p-1, 0x1.37522p-3, 0x1.149772p-1, 0x1.1b1ef8p-1, -0x1.ec2906p0, 0x1.8e4652p0, -0x1.deb46p-1, 0x1.c25964p-3, 0x1.f3f3f4p-1, 0x1.6069e2p0, 0x1.bb882ep-1, 0x1.616dbap-4, -0x1.453fccp0, -0x1.b2653cp0, 0x1.08beecp-5, 0x1.f482cep0, -0x1.a0093ap-1, 0x1.e78bb4p0, 0x1.bbfd08p-1, 0x1.f9886ep-1, -0x1.c09f26p-1, 0x1.76cb1cp0, 0x1.d4765ep0, 0x1.cf7d2ep-3, -0x1.408da2p0, 0x1.e78bd6p-4, -0x1.b92fd6p-2, 0x1.5030b2p0, -0x1.857134p0, -0x1.9d4ebp0, 0x1.369d14p-2, -0x1.67ad56p-1, -0x1.f76cdep0, -0x1.f1bc42p-1, 0x1.adfe4cp0, -0x1.f5440cp0, -0x1.0f2912p0, -0x1.3e10ccp0, 0x1.e4686ep-4, 0x1.fee2f2p0, -0x1.42067p-4, 0x1.fdf724p0, 0x1.703856p0, 0x1.b29d2cp0, -0x1.35559ap-3, -0x1.d085a2p0, -0x1.b1d98cp0, 0x1.be26e4p-2, 0x1.278932p-2, -0x1.c9b34ep0, 0x1.9c24c6p-4, -0x1.b15a5p0, -0x1.262dbap0, 0x1.098c5p0, 0x1.bb0ebcp0, 0x1.d0c75p0, 0x1.37bcc8p0, 0x1.e464a2p-1, -0x1.25385ep-4, -0x1.18f8f8p0, -0x1.6a0326p0, 0x1.fa1ce6p0, 0x1.40dbcp0, -0x1.fcd6dap-1, 0x1.a5e6dap0, -0x1.100e22p-1, -0x1.a2ea34p-1, -0x1.c5fa7ap-2, 0x1.ff876cp-2, 0x1.9cfa46p-1, 0x1.c08c72p0, -0x1.fda7bep-3, 0x1.56795cp-1, 0x1.f7e094p0, 0x1.04ac98p0, -0x1.327c04p-1, 0x1.dd8358p0, -0x1.b48dc2p0, -0x1.ab3caep-2, -0x1.0c6774p-1, -0x1.8ba47p-9, -0x1.28f3e6p0, -0x1.b5873ep-1, 0x1.918c02p0, -0x1.30b72p-1, 0x1.4c8b5ap-3, -0x1.1a3a7cp-2, 0x1.2383b4p-1, -0x1.242d16p0, 0x1.ddef5p0, -0x1.3536b8p-1, 0x1.a47b8ap-1, -0x1.7060ccp0, 0x1.350ca2p0, -0x1.a43302p0, -0x1.e22f24p-2, 0x1.6d6908p-1, 0x1.7949ecp-6, 0x1.1e716cp0, 0x1.5c549p-1, -0x1.c223dap-2, -0x1.4c416ep-1, 0x1.f83afcp-1, -0x1.5ae454p0, 0x1.573262p0, 0x1.8eddcep-1, -0x1.5c9b7cp0, -0x1.0f6a1ep0, -0x1.fb6208p0, -0x1.869cbp0, 0x1.f5dbc4p-1, -0x1.141322p0, 0x1.95db06p-2, -0x1.fdaec2p0, -0x1.0e706cp0, -0x1.acd5fp-4, -0x1.c4444cp0, -0x1.d9e244p0, 0x1.ba4bbep0, 0x1.bf3d04p0, 0x1.ca3ceap0, 0x1.a44362p0, 0x1.31055cp0, 0x1.c479e6p0, -0x1.ef114ap-1, 0x1.694dbep-1, 0x1.34d94cp0, -0x1.abd49ap0, -0x1.69b3e8p0, 0x1.b3e752p-3, -0x1.5e0d8cp0, 0x1.7c588cp-2, -0x1.076b8ep-1, -0x1.ac2638p0, -0x1.e008bcp0, 0x1.00b31ap0, 0x1.5b3b5cp0, 0x1.2c295p0, -0x1.9e576ap-2, -0x1.7f64d6p0, -0x1.b6097cp-1, -0x1.c165f6p0, 0x1.6e3278p-2, 0x1.3b234ap0, -0x1.cc6fe2p0, -0x1.611136p-1, 0x1.4db5d4p-1, 0x1.c5bf44p-2, -0x1.830f66p0, -0x1.a9e4e4p-1, -0x1.4d07eep-2, 0x1.82b0ccp-1, -0x1.78a11ap-1, 0x1.e06154p-3, -0x1.1374bcp0, -0x1.41db9p0, 0x1.1825f2p0, 0x1.e4d5ecp0, 0x1.e63316p-1, -0x1.990f4ap0, 0x1.46325cp0, 0x1.a345aap-3, -0x1.19fb74p0, -0x1.b9f84cp-1, -0x1.ec78b2p0, 0x1.327d16p0, 0x1.b374eap0, -0x1.a8052ep0, -0x1.f9f75p-4, 0x1.1d3decp-2, -0x1.54e19ep0, 0x1.fc2e8cp0, 0x1.821cfp-3, 0x1.d91a6ap0, -0x1.850d8ap0, 0x1.21f4b2p-4, -0x1.d3fb2p-1, 0x1.6db9dcp0, -0x1.25a178p0, 0x1.9137bap-3, 0x1.d25784p-1, -0x1.38c622p-1, -0x1.a93ec8p0, -0x1.08e4c2p-1, -0x1.939954p-1, 0x1.0834b4p-1, -0x1.7e3586p-1, -0x1.63b492p0, -0x1.f5bf6ep0, -0x1.ed626ap-1, 0x1.123e8p0, 0x1.b6189ap0, -0x1.2f6faap0, -0x1.15f492p0, 0x1.34eafcp0, -0x1.43ceeep-5, -0x1.ff6b18p0, -0x1.f32742p0, -0x1.38efc4p0, 0x1.a99cd6p0, 0x1.5ecc5ep-2, -0x1.371cp0, -0x1.e52ed8p-2, 0x1.95e66cp-2, -0x1.d94b4ep0, -0x1.a98b6p-1, 0x1.f4eb3ep0, -0x1.972c68p0, 0x1.9f94e4p-3, 0x1.c8f018p-1, -0x1.62270cp-3, 0x1.61375cp0, 0x1.55bbdep0, 0x1.88fcf2p0, -0x1.a0729ap-1, 0x1.81df06p-1 };
l_struct_OC_k2c_tensor keras_dense_test4;
l_struct_OC_k2c_tensor c_dense_test2;
float keras_dense_test3_array[10] = { 0x1.66fe9ep-12, 0x1.3a2934p-14, 0x1.3a76a2p-4, 0x1.21ed28p-6, 0x1.938d16p-12, 0x1.23bf74p-16, 0x1.4d39aap-14, 0x1.cd51acp-1, 0x1.d7a3d6p-9, 0x1.50457cp-16 };
float test4_input_1_input_array[784] = { -0x1.7f3b72p0, -0x1.b1ef88p-2, -0x1.c2123ap0, 0x1.4d9902p-1, 0x1.714a76p0, -0x1.6d90eap0, 0x1.d5cd6p-1, -0x1.dc2d42p0, 0x1.223a92p0, -0x1.2e9eb4p-5, 0x1.67d9fcp-1, -0x1.64d1dp-1, -0x1.46fcep0, -0x1.6628d6p-1, 0x1.a083d2p-1, 0x1.023854p0, 0x1.e0a668p0, -0x1.00e0e2p-1, 0x1.db3a5ap0, 0x1.482fa4p-3, -0x1.9bf19ep-1, -0x1.911998p0, -0x1.51dd5p-4, -0x1.564d36p0, -0x1.1a5a9p-2, -0x1.e3d9d6p0, -0x1.1fb44p0, -0x1.34579p-1, 0x1.5b2d7cp0, 0x1.e416e2p0, 0x1.6aef1ep-4, -0x1.f9b7d6p-4, -0x1.89e964p-5, -0x1.5402fap-2, -0x1.88a18ap0, -0x1.892c18p-3, -0x1.1a9964p-2, -0x1.1dc09p-4, 0x1.aa258p-1, -0x1.9ce9e2p-2, -0x1.07fcd4p0, -0x1.1892a4p-3, -0x1.ee5536p-1, -0x1.4b8d44p-3, -0x1.5f69fcp-1, -0x1.c99e88p0, 0x1.718f76p-4, -0x1.7fc6fp-1, 0x1.c65bbep0, 0x1.821e1ep0, 0x1.427472p0, -0x1.e9e03ep0, -0x1.7fbba8p-1, -0x1.9c1ee4p-1, -0x1.627e74p-1, -0x1.83d2acp0, 0x1.d23a6ep-4, -0x1.16bf5ep0, 0x1.b2ecdp0, -0x1.766c8ap0, 0x1.c71d18p0, 0x1.f25b6ep-2, 0x1.86f0fp0, 0x1.3ac64ap0, -0x1.dc9654p-1, 0x1.dca1bap-1, -0x1.99c0e2p-1, 0x1.41587ep0, 0x1.38b006p-1, 0x1.52cfcap-4, -0x1.7384a6p-1, 0x1.483796p-1, 0x1.7fd4d4p-3, 0x1.62dad8p0, -0x1.cfbccp-5, -0x1.f62c42p-1, -0x1.6d2528p-4, 0x1.e0731p0, -0x1.1de0cp0, -0x1.317662p0, 0x1.d3efcp0, -0x1.753936p0, -0x1.76167cp0, 0x1.09a9cp0, 0x1.6bd5cp0, 0x1.6ead08p-2, 0x1.291146p0, 0x1.76933ep0, -0x1.85dfdep0, -0x1.cce8b4p0, 0x1.cdb744p0, 0x1.8ad51ep0, 0x1.362f62p0, 0x1.757c08p0, -0x1.0517p-2, -0x1.afccdp0, -0x1.55f114p0, 0x1.0fe202p0, -0x1.afe61p-1, 0x1.704edp0, -0x1.8de836p0, 0x1.cd9cbcp-1, 0x1.60f478p-2, 0x1.162f6p-1, 0x1.f941e6p0, -0x1.f6024p-1, -0x1.f14e98p0, -0x1.1b39b2p0, 0x1.ed4668p-1, 0x1.e9a084p-1, -0x1.e99f94p0, -0x1.956ebap-7, -0x1.3e87dp0, 0x1.a97138p-3, -0x1.dae116p0, 0x1.1f0b48p-2, -0x1.dbb808p-1, -0x1.2e63ccp0, -0x1.aade94p-5, -0x1.09cf7ap-2, 0x1.03d024p-2, -0x1.bd4c26p-4, 0x1.ba72f4p-2, 0x1.7efca4p-7, -0x1.3997bp-3, -0x1.84be36p-5, 0x1.d419ecp-6, -0x1.b1dc64p-5, -0x1.e26e6ep-1, -0x1.135f02p-1, -0x1.808622p0, 0x1.7a61a8p0, -0x1.7592cp-1, 0x1.cf539ap-1, -0x1.977574p-5, -0x1.0defcp0, 0x1.fdd44p-2, -0x1.cdb25ep0, 0x1.513a3ap-3, -0x1.98503p-1, -0x1.a29288p0, -0x1.06b644p-3, -0x1.b578fp-1, 0x1.ab0df6p-3, -0x1.b610c6p0, -0x1.a6ea94p-1, 0x1.797db8p0, 0x1.2755f8p0, 0x1.673dfap0, 0x1.ea5bc2p-5, 0x1.d83d14p-2, 0x1.2cb05ap0, -0x1.44d6a6p0, 0x1.d5a6b2p0, -0x1.c5cbc4p0, 0x1.ceb39ap0, 0x1.a44a32p-1, -0x1.d9df52p0, 0x1.f57076p0, -0x1.aa3168p0, 0x1.3f3ab2p0, 0x1.80c93ap0, 0x1.a1fc3p-3, 0x1.0ad548p0, -0x1.df16p0, 0x1.360f8cp0, 0x1.76b5c2p-1, 0x1.ca34bp0, 0x1.c8a3fp0, 0x1.2ee79cp-2, 0x1.d0b796p-2, 0x1.f36344p0, 0x1.3d649cp-3, 0x1.1009dep0, 0x1.a95f64p-1, 0x1.87f502p-1, 0x1.ca23fep-4, 0x1.ec0a84p-1, -0x1.1f7598p-1, 0x1.d98bf4p-1, 0x1.5849d6p0, -0x1.2da42ap-1, -0x1.c74b3ap0, 0x1.6eb7dap-3, 0x1.12a586p-1, 0x1.711f8cp-1, -0x1.fb6bf2p-1, -0x1.6f5ca8p-1, 0x1.2c519ep-1, -0x1.065f26p-1, -0x1.51e20ap0, -0x1.33f722p0, -0x1.3e3292p0, 0x1.fa8fbap-1, -0x1.52867cp0, 0x1.9335aep0, 0x1.39ac1p0, -0x1.f34cf8p0, -0x1.966e84p-1, 0x1.b949dap-3, 0x1.83d36cp-2, -0x1.7b0092p-1, -0x1.985a68p0, 0x1.7a1674p0, 0x1.896f2p-1, -0x1.f3c138p0, 0x1.274bap-2, 0x1.b5f05ap-1, 0x1.bd1e1ep-3, -0x1.5074f8p0, 0x1.f9fdecp0, -0x1.fb1036p-8, 0x1.cb921cp0, 0x1.a9badp-1, -0x1.026a5ep0, 0x1.3f4016p0, -0x1.64792ap-2, -0x1.3a62e2p0, 0x1.65f61ep-2, -0x1.a88fb8p0, 0x1.91998p0, -0x1.5267e4p-1, 0x1.313f4p-1, -0x1.ffe23p0, 0x1.aad7b8p0, -0x1.149024p-1, -0x1.84987ap0, 0x1.836fe6p0, 0x1.a0253cp-1, -0x1.fbe2bap0, -0x1.a473d6p0, -0x1.e62884p0, -0x1.5fdcb6p0, 0x1.ecea2ep-1, -0x1.16bc7p0, -0x1.a9dc64p-3, 0x1.427802p0, 0x1.71122ep-1, 0x1.637448p-1, -0x1.252d84p-1, -0x1.c95bd4p0, -0x1.8b92dep0, -0x1.52c88ep0, -0x1.2091bep0, -0x1.078fa8p0, 0x1.155504p0, 0x1.05497p-1, -0x1.0d6838p0, 0x1.bf25d6p-2, 0x1.5e148ap-2, -0x1.6c1d06p-2, 0x1.dc61a4p-1, 0x1.b4b8d6p-2, 0x1.cff2cp-5, 0x1.1f3774p-5, -0x1.b961f4p0, 0x1.a290dap-1, 0x1.d95522p-1, -0x1.d16c84p-1, -0x1.320a12p0, 0x1.80a3dp-2, 0x1.918966p0, 0x1.d3a52ap0, 0x1.60b67cp0, 0x1.6d7c14p0, -0x1.9b5decp0, 0x1.5d0d14p-1, -0x1.0efc2ap0, 0x1.ed2a34p0, 0x1.3e0578p-3, -0x1.0adb9ep0, 0x1.0c8b2ep0, 0x1.091556p0, 0x1.810a9ep-1, -0x1.d3490cp0, -0x1.c68e7cp0, -0x1.c5a3aep0, -0x1.f90b72p-2, 0x1.c26494p0, 0x1.da9d04p0, -0x1.cfc75cp-2, -0x1.7eedap0, -0x1.4da9f4p-4, 0x1.760378p-3, 0x1.704c68p-1, -0x1.bb4a92p0, -0x1.91d3b2p-1, 0x1.1f461ep-2, 0x1.1f5cfap0, 0x1.fe4696p-1, -0x1.1a036cp-1, -0x1.0e453cp0, 0x1.89fd38p-1, -0x1.064d0cp-1, 0x1.9e541cp-1, 0x1.11e73ep-2, 0x1.f4acdp0, -0x1.efcda6p-1, -0x1.b327ecp-2, 0x1.fc465p-2, -0x1.e76ce8p0, 0x1.18ab5p-3, -0x1.33ea48p-4, 0x1.f9788ep-1, 0x1.74eaa8p0, 0x1.c06646p-3, 0x1.d1aebcp-1, -0x1.d5a6a2p-3, 0x1.55b8e2p0, -0x1.9ed93cp-1, 0x1.46d21ap-7, 0x1.d91a6ep0, -0x1.bf1bccp-1, 0x1.5077dep-2, 0x1.52a088p-1, -0x1.a108cep0, -0x1.06a3b2p0, 0x1.b0d6b2p-1, -0x1.181dccp0, -0x1.eb47c6p-3, 0x1.acb90ep-4, -0x1.df8694p-2, 0x1.20ac5p-2, -0x1.fbc6d4p0, 0x1.ab339cp-3, -0x1.3052dep0, -0x1.3621fcp0, -0x1.62c9d2p0, 0x1.579a24p-1, -0x1.6a23cep-4, -0x1.f19dfcp0, 0x1.e63e48p-5, -0x1.871836p0, 0x1.d4cbc6p-1, 0x1.817a48p-1, 0x1.f692fp0, 0x1.2848c2p0, 0x1.879c36p-4, -0x1.c477c2p0, 0x1.b80726p-1, -0x1.ebbe1ep0, 0x1.3d1a5ap0, 0x1.44a848p0, -0x1.a424e8p0, 0x1.ab8b52p0, 0x1.4cdb9ap-1, 0x1.f5893ep0, 0x1.718e5ap0, -0x1.8f3554p0, 0x1.6fe998p0, 0x1.0cf66p0, -0x1.e33b16p-1, 0x1.9839d4p-1, 0x1.607c2ep-4, -0x1.5f10c4p0, 0x1.bd4d1ap-1, -0x1.7a452p0, -0x1.2ef2b4p0, 0x1.e889c6p0, 0x1.bb456cp0, 0x1.3b0b88p0, -0x1.76f09cp-3, 0x1.7293e6p-1, -0x1.815962p0, 0x1.f88926p0, -0x1.60f10ap-1, -0x1.768e42p-1, 0x1.c63bc4p0, -0x1.38dd1p-1, 0x1.684a2ep-1, -0x1.673b34p0, 0x1.390b14p0, 0x1.5967aap-4, 0x1.74757ep0, -0x1.66ddaep-1, -0x1.34a778p0, -0x1.3ec0c2p0, 0x1.04d0dep0, -0x1.780bep-4, 0x1.46b04p0, 0x1.99f95ap-3, 0x1.af4004p-1, 0x1.b6f582p-1, 0x1.9a66b6p0, 0x1.ac7136p-1, 0x1.28dbb8p-4, -0x1.470bep-1, 0x1.3eb7bep0, -0x1.4586cp0, -0x1.0026cp-5, 0x1.2027e4p0, -0x1.03c144p-1, -0x1.1e3882p-2, 0x1.2d7098p0, -0x1.43cc5ap-4, 0x1.0e1974p0, 0x1.4100f2p0, 0x1.04ca1ap0, 0x1.f467e8p0, 0x1.a4f174p-1, 0x1.63553cp0, 0x1.64c0c8p-2, 0x1.c19c98p-1, -0x1.984872p0, -0x1.1b9de2p0, -0x1.2bcdcep0, 0x1.99b9d2p0, -0x1.c7e04ap-3, 0x1.36fc4p-4, 0x1.64dcccp0, 0x1.a7309p-1, 0x1.08e2cap-2, 0x1.b4d2fep-2, -0x1.2009dp-1, 0x1.347176p-3, -0x1.010404p0, 0x1.e2f4eap-1, 0x1.700b6cp0, -0x1.76733ap0, -0x1.f0704ep0, 0x1.b0506cp-3, 0x1.e3dd12p0, -0x1.f0d68cp-1, 0x1.af0bd4p0, 0x1.4bbc5ep-1, -0x1.d06294p0, 0x1.3d2d8p-2, 0x1.e3053p-1, -0x1.1712acp-1, -0x1.bae466p-4, -0x1.8c0052p-3, -0x1.924f12p0, 0x1.a613dep-3, 0x1.9852f8p-1, -0x1.f88068p-1, -0x1.b4e436p-1, 0x1.a8e402p0, -0x1.307748p0, -0x1.9d6e56p-4, 0x1.3a45d6p0, 0x1.36221ap-2, 0x1.13f2b4p0, -0x1.866b42p0, -0x1.9a57b8p0, 0x1.f2e934p0, -0x1.5e437ep-1, -0x1.59451p-3, 0x1.285688p-1, -0x1.d9fe7p-3, -0x1.1c4604p-10, -0x1.364e3ap0, -0x1.c56e1cp-2, 0x1.2258aap-1, -0x1.292f44p0, -0x1.4a0c06p-2, -0x1.1f007ep0, -0x1.7bf6cep0, 0x1.138388p-3, 0x1.d1e148p-6, 0x1.88b206p-1, 0x1.312e08p-1, -0x1.1d5196p0, -0x1.e11144p-1, 0x1.ede068p-2, 0x1.324194p-7, -0x1.148b1p-2, -0x1.18316cp0, 0x1.bb9d7p0, -0x1.48a0e4p0, -0x1.6e35aep0, -0x1.d64952p-2, -0x1.62daaep0, 0x1.e98cd8p0, -0x1.365556p0, -0x1.b33456p0, 0x1.45c5bep-3, -0x1.70de58p-1, -0x1.d0957ap0, -0x1.33d1cp0, 0x1.527924p0, -0x1.1fa7a8p0, -0x1.0fdff4p-1, -0x1.c0491ap0, 0x1.3e67c6p-4, 0x1.5b19eap-4, 0x1.92f82cp0, 0x1.4fd4bep0, -0x1.42a8ccp-1, -0x1.facf3cp-1, 0x1.89bf86p0, -0x1.5209p-2, -0x1.e9176ep0, -0x1.fb5d54p0, 0x1.ccdff2p-1, 0x1.12e0acp-1, 0x1.27c96ap-1, -0x1.474fd8p-1, -0x1.f3ab84p0, -0x1.dd429ap0, 0x1.c98c24p-2, 0x1.2e2fcp0, -0x1.c9b166p0, -0x1.50305cp0, 0x1.38c4e8p0, -0x1.e2213ap-4, 0x1.b55d6cp0, 0x1.13532ap-4, 0x1.f282f4p-1, 0x1.a3a466p-1, 0x1.5b71c4p0, -0x1.ec901ap-2, 0x1.9469c4p-3, 0x1.d804ep0, 0x1.3fb648p-2, -0x1.3e9592p0, 0x1.645664p0, 0x1.6b04fcp-5, 0x1.bcf672p0, -0x1.6438cp-2, -0x1.8bd2acp-3, -0x1.2a41d8p-1, 0x1.af3b3ap0, -0x1.d50716p0, -0x1.5dc7bep-4, 0x1.613196p0, -0x1.08957p-1, 0x1.47405ap-2, -0x1.b47846p0, 0x1.9ec0f2p-7, 0x1.c196f2p0, -0x1.507954p0, 0x1.601b3ap-1, 0x1.87c88cp0, -0x1.e5e15ap-1, -0x1.ea9f2ap0, -0x1.80027ap-1, -0x1.f317d8p-5, -0x1.b53bf2p-1, 0x1.313826p-1, 0x1.ca4ae6p0, -0x1.4ed4ccp0, -0x1.21c10ap0, -0x1.c6195cp-1, -0x1.443dd6p-2, 0x1.b91c54p0, 0x1.8b2a16p-3, -0x1.76321ep0, -0x1.ea7f12p-4, -0x1.461d84p-2, -0x1.45ed42p0, -0x1.2a56ccp0, 0x1.ad8bf8p0, -0x1.2d183cp0, 0x1.fe7012p-4, 0x1.40bdb6p-1, -0x1.3d45bep0, 0x1.498c6cp-1, 0x1.35d47cp0, -0x1.b005e2p0, 0x1.ae0ccp-3, -0x1.d35846p0, 0x1.d7f4fp-1, -0x1.b7e04ap0, -0x1.7486eep-1, -0x1.8f164ap0, -0x1.9d68a2p-3, 0x1.67e4d4p-2, 0x1.f37e28p-2, -0x1.4ba1b4p0, -0x1.b4d544p0, 0x1.2e3212p-3, -0x1.535584p-2, 0x1.81f26ep-2, -0x1.224362p-1, 0x1.d29396p-1, -0x1.569f3p-1, 0x1.6e4fc6p0, 0x1.9614a4p0, -0x1.d21fd4p0, -0x1.4b5c02p-2, 0x1.13f3eep0, 0x1.c97cecp0, -0x1.f3658cp0, 0x1.08e1d4p0, 0x1.bc8aa4p-2, -0x1.84cf58p-1, 0x1.4c1c54p0, 0x1.351966p0, -0x1.43fa7p0, -0x1.1a4016p0, 0x1.f46fcp-1, -0x1.516d0ep0, -0x1.065cdp0, -0x1.5b586ap-2, 0x1.ab5786p-4, 0x1.c10d1ep0, 0x1.f37504p-1, -0x1.b2e818p-1, -0x1.27c1c4p-3, -0x1.102f92p0, -0x1.46d51ep-2, 0x1.99fb26p-2, -0x1.f9432ap0, -0x1.0381fep-1, -0x1.2656cap0, 0x1.6393d2p0, 0x1.cf32dep-2, -0x1.f23e02p0, -0x1.6e5f64p0, 0x1.41709cp0, 0x1.92e57ap-4, 0x1.05a0f8p0, -0x1.87e2e2p-1, -0x1.fb30d8p-2, 0x1.eada52p-1, 0x1.59b5f4p-2, 0x1.3f825p0, 0x1.ac3f56p0, 0x1.b6b54cp-3, 0x1.67b602p-3, 0x1.60c9d8p-4, 0x1.9683e2p0, 0x1.83c7c2p0, -0x1.518df4p-3, 0x1.d3bc5cp-1, 0x1.ae6f66p-1, 0x1.a775e6p0, 0x1.ebc92ep-1, -0x1.adb11p-1, 0x1.f7b584p0, -0x1.ea771p-2, -0x1.e2724ap0, -0x1.a1065ap0, -0x1.7fde2cp-2, -0x1.a0648cp0, -0x1.2ee376p0, 0x1.706162p0, 0x1.a88a98p-1, -0x1.576d7cp-7, -0x1.8c42dp-1, 0x1.072838p-1, 0x1.2e5186p-1, 0x1.9b5ef4p-1, 0x1.318a9ap-4, 0x1.4766f6p0, 0x1.f4838cp-2, -0x1.3ce14ap-1, 0x1.c4be52p0, -0x1.ba758ep0, 0x1.fc5b5ep-2, 0x1.3cae9p0, -0x1.c13522p0, -0x1.f784bap-1, 0x1.18db94p0, -0x1.47a3d6p-1, 0x1.915f64p-6, 0x1.6bca8ap-2, -0x1.895ffap-3, 0x1.8e9fc8p0, -0x1.31d69ap-1, 0x1.884494p0, -0x1.c76706p-1, -0x1.b4ff3ap0, 0x1.aaba28p-2, -0x1.35a86cp-1, 0x1.ccd9bep0, 0x1.ed357p0, -0x1.0e1ebp-1, 0x1.953f2p-4, -0x1.af086ap0, 0x1.5be38cp0, 0x1.049916p-1, 0x1.409e1ep0, -0x1.a61ea2p-2, 0x1.e2718cp0, 0x1.c16adcp-1, 0x1.cd4884p-1, -0x1.9a1cc4p-1, 0x1.5f0ac4p0, -0x1.926d9ap-4, -0x1.9939a4p-2, 0x1.ed0be8p-3, -0x1.56135cp-1, -0x1.fcd66ap-2, -0x1.5e87fap-1, -0x1.8e517ap-1, 0x1.34b508p-1, 0x1.e97974p0, -0x1.8a11a2p0, 0x1.a5d27ap-1, 0x1.8bbb1cp0, 0x1.d98d22p-1, -0x1.326db6p-1, -0x1.247926p0, -0x1.355684p-5, 0x1.ffde18p0, 0x1.bb284ep0, 0x1.3e63aap0, -0x1.a0efc8p0, 0x1.c190acp0, 0x1.9c5688p-2, 0x1.c3e3a8p-1, -0x1.ea9c42p-3, -0x1.d466a6p0, -0x1.91f586p0, -0x1.84a332p-1, 0x1.fe175cp-4, 0x1.9d0094p0, -0x1.71b672p0, 0x1.ee1726p0, 0x1.1c3db6p-3, 0x1.55a39cp0, -0x1.c059e8p0, 0x1.6dd63ep-1, 0x1.b3ad36p0, 0x1.8e2c54p-1, 0x1.6bcdf6p-3, 0x1.3b0db6p0, -0x1.8e79bep0, -0x1.3a0986p0, -0x1.64fd42p0, 0x1.01d878p0, -0x1.b68a8p-1, -0x1.6114bp-2, 0x1.000938p0, -0x1.59cbep0, -0x1.03967p-2, 0x1.30dcb8p0, -0x1.4522e6p0, 0x1.64153p-2, 0x1.0fe574p0, 0x1.4864acp0, 0x1.455608p0, 0x1.5d2a1cp0, 0x1.7f1d8p-2, -0x1.c51712p0, 0x1.da326cp-1, 0x1.68a196p0, -0x1.09bf7cp-2, -0x1.cd8824p-1, -0x1.d78096p0, -0x1.77d3d4p0, 0x1.302b32p0, 0x1.e2c122p-2, -0x1.564504p-1, 0x1.f3ff6ap0, 0x1.49806ap-4, 0x1.770dc6p-1, -0x1.17c574p-3, -0x1.5d3c0ep0, -0x1.34bdbp-2, -0x1.5965e4p0, -0x1.b089f2p0, 0x1.7bb412p0, -0x1.42240ap-2, -0x1.c61372p0, -0x1.b5a9d2p0, -0x1.e7f9a6p-3, 0x1.fb2cb8p-4, 0x1.f02fc2p-1, 0x1.5b3c92p-3, 0x1.6551acp-1, -0x1.e34f1cp-2, 0x1.ab49c2p-1, 0x1.5c5df2p0, 0x1.c22988p0, -0x1.636a7ep-2, 0x1.a2ae6ep0, -0x1.66bb02p-1, 0x1.e96958p-1, -0x1.c31d58p-2, -0x1.39041ap-2, 0x1.24e6aap0, -0x1.fd43cep-1, 0x1.efbba2p-1, -0x1.5ac178p0, 0x1.113c9cp0, -0x1.2252a8p0, 0x1.27eb36p0, 0x1.776046p0, 0x1.321a0cp0, 0x1.2cb2acp0, 0x1.eca47ep-1, 0x1.c3c3dap-1 };
float test5_input_1_input_array[784] = { -0x1.603edep-1, 0x1.b61f2ap0, 0x1.998994p0, -0x1.b49fdap-2, 0x1.ab398cp-1, 0x1.aeb7ap-1, -0x1.75d4dap-2, -0x1.b8f1a6p-5, -0x1.d25c94p-1, -0x1.391e52p0, -0x1.c17064p0, 0x1.781d0ep-4, 0x1.3bc34ap0, -0x1.dd37aep-1, 0x1.9e13e8p-1, -0x1.a7abccp-3, 0x1.9e4ad6p0, -0x1.2c6e3ep-2, -0x1.3db5aap0, 0x1.dcb494p0, 0x1.2a538p-1, 0x1.0130d6p0, 0x1.93bd6ep-1, -0x1.58133ap0, 0x1.858d22p0, 0x1.b4e30cp0, 0x1.3782ccp0, -0x1.538c96p0, -0x1.7f86d8p-2, 0x1.17f588p-2, -0x1.57351cp0, -0x1.6541a6p-5, -0x1.2725e4p-1, 0x1.dbedbep-1, -0x1.390034p-1, 0x1.f90d68p-1, 0x1.c47386p0, 0x1.0b338p-3, -0x1.374e22p0, -0x1.a9f60cp-3, -0x1.74a792p0, -0x1.59a11p0, -0x1.273ccep-1, 0x1.f547a2p-3, 0x1.dfbc7cp-2, -0x1.a32ff6p-1, 0x1.6381aap-1, -0x1.10ba26p0, 0x1.2aeb1p0, 0x1.e8d2b2p-2, 0x1.66e424p-1, 0x1.77773ap-1, -0x1.8421d8p-1, -0x1.092054p-2, 0x1.e96dap0, -0x1.46c4f2p-1, -0x1.a1f218p-1, -0x1.30c772p0, 0x1.1ddd38p0, -0x1.59a00ep0, -0x1.30be3ap0, -0x1.62142ap-1, -0x1.853d2p-1, 0x1.a68c22p0, -0x1.522054p0, 0x1.32a804p0, 0x1.cc27a2p-7, 0x1.76ab96p0, 0x1.8292dap0, 0x1.b6fc0ap-3, -0x1.d9335ap0, 0x1.7feafep-1, -0x1.a26ea2p0, -0x1.821e02p0, 0x1.b1d0b6p-1, -0x1.65a806p0, 0x1.1838bap0, -0x1.32941cp-1, 0x1.3aca7cp0, -0x1.d08748p0, -0x1.487254p-1, -0x1.a09b52p0, -0x1.18fe82p0, -0x1.b73212p0, 0x1.ed6b88p0, 0x1.535c24p-2, -0x1.f8444ap-2, -0x1.774be4p-1, 0x1.8057c8p0, -0x1.f1d296p0, 0x1.3b3f8p0, -0x1.b42852p-1, 0x1.96ae0cp-1, -0x1.0856cp-3, -0x1.76cde2p0, 0x1.c09866p-2, 0x1.562d1ap-2, 0x1.4c1f2ap-2, 0x1.235522p-4, 0x1.65209cp0, 0x1.0d03bcp0, -0x1.aaf36p-10, -0x1.4f6902p-1, 0x1.ff43eap-1, 0x1.1c7d3p0, 0x1.9c6ee2p0, -0x1.1a99a6p-3, 0x1.f954d4p0, 0x1.2596dcp0, 0x1.8643aep-6, -0x1.9d12dcp0, 0x1.3ceb7cp-1, 0x1.68d076p0, 0x1.6ee0dp-4, -0x1.18c0ecp0, 0x1.754ccap-5, -0x1.f170dp0, 0x1.98e89p0, -0x1.c3926p-4, -0x1.746c8cp0, -0x1.cf0a1ep-4, 0x1.f4d806p-4, 0x1.f574fcp0, 0x1.b20bd6p0, 0x1.104b58p0, -0x1.37900cp-1, 0x1.196fe2p0, 0x1.c2b498p0, -0x1.15f26p-1, 0x1.554c06p-1, 0x1.a93be6p0, -0x1.caf10cp0, 0x1.ec4ef4p-1, 0x1.b09d02p-1, 0x1.bb7f52p-2, 0x1.83d7e8p-1, -0x1.0f642ep-1, 0x1.a13342p0, 0x1.04254ep-2, 0x1.9fd184p0, 0x1.304bccp-1, 0x1.2bbacap0, -0x1.74f32p-7, -0x1.32825p0, 0x1.e0c9f6p-1, -0x1.a90e18p0, 0x1.b77502p-2, -0x1.068782p-1, -0x1.7e2456p-1, 0x1.eb466ap-1, 0x1.e69516p0, 0x1.7093dcp0, -0x1.152b22p-3, -0x1.a6d3dcp0, 0x1.8e0a6cp0, -0x1.423da4p-3, 0x1.46f9a4p0, 0x1.e86bf8p0, 0x1.0166fap-2, 0x1.bd5f42p0, 0x1.302c6ap-1, 0x1.d6c526p0, 0x1.f21396p0, 0x1.81a784p-2, 0x1.63b26ap-3, -0x1.82a29ep0, -0x1.9e92ep0, -0x1.289054p0, -0x1.60d78cp0, 0x1.89e6b6p-1, 0x1.1cb2fcp-2, 0x1.442626p0, 0x1.281a46p0, -0x1.604f6cp0, -0x1.f26c38p0, 0x1.05db76p0, -0x1.a97034p-2, -0x1.26b662p0, 0x1.e09decp0, -0x1.bfa648p-1, 0x1.7930b4p-2, 0x1.fc39f2p0, -0x1.62c266p-2, -0x1.c7c24ep0, 0x1.3b1dfcp0, -0x1.b12cb2p-2, -0x1.a108cap0, -0x1.08c848p0, 0x1.15a40cp0, -0x1.cf77a2p-3, -0x1.12755cp0, -0x1.a0b7eep-2, 0x1.bd45b2p0, -0x1.f505fp0, -0x1.2beb38p-3, 0x1.3c2612p-1, -0x1.9d2e2ep0, 0x1.7bb86cp-2, 0x1.887b6ap0, -0x1.90c98p-3, -0x1.59d89ep-6, 0x1.4f5ec4p0, -0x1.86c4d8p-2, -0x1.43e0fp0, 0x1.2ab82cp0, -0x1.40ef06p-1, 0x1.bc1e84p-6, -0x1.ec4a5ep-2, -0x1.de5db4p0, 0x1.759d34p-1, 0x1.84d1f4p-1, 0x1.b7322p-3, -0x1.0acfd6p-1, -0x1.150b3ap0, 0x1.8f58a2p-1, -0x1.7bad1ap0, -0x1.765f54p-1, -0x1.73781p-1, 0x1.a92f2ap0, 0x1.32fc96p-2, 0x1.9574a8p-3, -0x1.95ffdep-1, -0x1.c52d7ep-1, 0x1.4f314ap0, -0x1.19f9bcp-1, -0x1.0431b6p-1, -0x1.e9a342p-4, -0x1.71eae8p-1, 0x1.add71ap-2, 0x1.c02f28p0, 0x1.87f31ap0, 0x1.dd52d2p0, -0x1.679396p0, 0x1.dfd22p-2, 0x1.f65d1p-1, -0x1.f20e52p0, -0x1.275e36p-2, -0x1.5c9a8cp-2, 0x1.289a98p0, -0x1.3a726cp0, 0x1.c08f84p-3, -0x1.2a806p-1, -0x1.cf34e6p0, 0x1.9ebd5cp0, -0x1.b7a72p0, -0x1.a86c98p-4, -0x1.01cd22p0, 0x1.413a4cp0, -0x1.cf833ap-1, 0x1.5986e6p0, -0x1.a91218p-1, -0x1.f389ap-2, 0x1.05029p0, -0x1.4b4748p0, -0x1.4d0a3cp-1, -0x1.83c578p-2, 0x1.3532ecp0, 0x1.de1846p-1, -0x1.0a22a6p0, 0x1.756544p0, -0x1.893cb2p-3, -0x1.a940cap-1, 0x1.330a5ap-3, 0x1.307e54p-1, -0x1.b33a76p-3, -0x1.9d47ap-1, 0x1.8d2826p-1, 0x1.daf868p0, 0x1.87a6ecp-1, -0x1.e17152p-1, 0x1.1ca96p-1, 0x1.d0aea8p0, 0x1.a1c936p-9, -0x1.eadce8p-1, -0x1.7bee5cp-1, -0x1.ddef5ep0, 0x1.74e494p0, 0x1.d2fc4p0, 0x1.c3fcd8p0, 0x1.dda8cap0, 0x1.3516bcp0, -0x1.f1c2b8p0, -0x1.d9c006p-2, -0x1.979e2cp0, 0x1.9413d2p0, 0x1.df319p0, 0x1.315e24p-2, 0x1.61f842p-1, -0x1.4a7148p-2, -0x1.05d704p-1, -0x1.b3f218p0, -0x1.57389ep-1, -0x1.7af43cp-1, 0x1.935a6ep0, 0x1.23f802p0, -0x1.a6b2a6p0, 0x1.9e0d84p0, 0x1.37cf96p0, 0x1.b89472p-1, -0x1.9ff7e6p-4, -0x1.e337f2p-1, 0x1.55ecbep-3, 0x1.d36654p0, -0x1.e8b7e2p-1, -0x1.d09058p-1, -0x1.fe3354p-2, 0x1.5c745cp0, 0x1.55ef18p-1, -0x1.4ae226p-2, 0x1.af946cp-3, -0x1.f922p-4, -0x1.9858f6p0, -0x1.a1eae6p0, 0x1.17c3p0, -0x1.9ef08ep0, 0x1.12c4c8p0, 0x1.b7402ap-1, -0x1.abb2f8p-6, -0x1.ae5f3ep0, -0x1.e2fd4p0, 0x1.26bc8cp0, 0x1.6ae0b6p-2, -0x1.25ae7p-2, -0x1.c12638p0, -0x1.f6d736p-2, 0x1.150f36p0, 0x1.405462p0, 0x1.d03bbap0, 0x1.d1313ap-2, -0x1.144946p-1, 0x1.639bb6p0, -0x1.8e76f4p-2, 0x1.478836p0, -0x1.ec19f4p-2, 0x1.4e79bp0, 0x1.0426c6p-3, -0x1.103b38p0, 0x1.b05bdap0, 0x1.24a31p0, -0x1.eac3fcp0, -0x1.184884p0, -0x1.eb7134p0, -0x1.59dcf8p-1, 0x1.c5117p-1, 0x1.3ccfc8p0, 0x1.246166p0, 0x1.21a578p-1, -0x1.3614aap-2, 0x1.e56f3cp-1, -0x1.400258p-1, -0x1.3828ccp0, 0x1.f37d0ap0, 0x1.c6474p0, -0x1.794f62p0, -0x1.8f5c32p-2, 0x1.de744cp0, 0x1.5e1cbcp0, 0x1.8b7316p-12, -0x1.efd58p0, -0x1.bf35fp0, 0x1.246204p-1, 0x1.4aefaep-3, -0x1.74c5eap-2, -0x1.8f1f08p0, 0x1.f8505cp-2, 0x1.c8261ap0, -0x1.c7d818p0, 0x1.6859dap0, 0x1.2ce124p0, 0x1.f5d842p-1, 0x1.161e8p-1, -0x1.c072c8p0, 0x1.9ac4eap0, 0x1.77c23ep0, -0x1.c8f568p0, -0x1.4a1d98p0, -0x1.b83d4cp-3, 0x1.ede564p0, 0x1.489e54p0, -0x1.70e3cep0, 0x1.901abep-3, -0x1.57c71p-1, 0x1.844e5cp-2, 0x1.8165b6p-1, -0x1.2cf8e8p0, 0x1.a07f84p0, 0x1.3ed6e8p-1, -0x1.ee51b2p-2, 0x1.375de4p0, -0x1.020bb2p-1, 0x1.ddfd22p0, -0x1.027dc4p0, 0x1.4f0d72p0, 0x1.474212p-1, -0x1.aa13dcp-1, 0x1.199a68p-1, 0x1.cd516cp0, -0x1.a62cfep-1, -0x1.6a32d2p-3, 0x1.aca3d6p0, -0x1.bb2bdcp0, 0x1.d3809p0, -0x1.95c642p-4, 0x1.ad0552p-2, 0x1.13133ap-1, 0x1.06d7ecp0, -0x1.ef21c6p0, 0x1.c79f8cp0, -0x1.59f16ep-2, 0x1.f9f6bap-4, -0x1.975e82p-3, 0x1.986fb8p0, 0x1.1727fcp0, 0x1.4fb5aap0, 0x1.0ffe2p0, -0x1.6d7bbep0, -0x1.f18bdp0, 0x1.31ad84p-2, -0x1.8bb7f8p0, -0x1.f6c95cp0, 0x1.d906cap0, 0x1.d97b56p-2, -0x1.42d01ep-3, -0x1.b77a24p-2, -0x1.77346p0, 0x1.48347p-1, -0x1.47568p-1, 0x1.63e852p-1, -0x1.da8b76p0, 0x1.db92b2p0, 0x1.60b89ep-1, -0x1.b5cf58p-2, 0x1.763f9p0, 0x1.3d312ap-2, -0x1.7e7a2cp-2, 0x1.f0666ap0, 0x1.b05ebap-1, -0x1.97307ep0, -0x1.dd081ep-1, 0x1.2dd85cp0, -0x1.7dde82p0, -0x1.9e804p0, -0x1.392888p0, -0x1.9b22acp0, 0x1.c861ep-1, 0x1.15795ep0, 0x1.b1381cp-2, -0x1.3d6d98p0, 0x1.d82decp-1, -0x1.db2e7cp-1, -0x1.fe6234p-3, -0x1.106b0ep0, -0x1.95567ap0, -0x1.49fep0, -0x1.c0a4fp-1, -0x1.785526p0, -0x1.43d6ecp0, 0x1.40cfc2p0, -0x1.a8a068p0, 0x1.231edcp-2, -0x1.3eaef2p-1, 0x1.2f0468p-1, -0x1.d03e8ap0, -0x1.ee712ep0, 0x1.240c7p0, -0x1.b387dap-3, 0x1.0e6636p0, -0x1.67692ep-2, -0x1.f8c034p0, 0x1.d6c51ep-2, 0x1.c13a76p0, 0x1.bc6c3p-2, -0x1.b305a4p0, -0x1.e74f1ap-1, -0x1.6c3904p0, 0x1.54bd16p-1, 0x1.f74d6p-1, -0x1.201244p0, -0x1.7eb6e4p-2, 0x1.15fabcp0, 0x1.94270ap0, -0x1.3f63ep0, -0x1.ad4814p0, 0x1.8e2db4p-2, 0x1.7f3c62p0, -0x1.7a20cep-11, 0x1.e22fc4p-1, -0x1.c14172p0, -0x1.1132b6p0, 0x1.8e4fb2p-1, 0x1.a0176cp-1, -0x1.44310ap0, -0x1.d1d84ap-1, 0x1.1c3cacp0, -0x1.05293ep-2, -0x1.8e1ad2p-2, -0x1.bd23f4p-2, 0x1.5fc2e6p-3, -0x1.8fbc0cp-3, 0x1.ed9b9ap-2, -0x1.72085ap-5, 0x1.edeac4p-1, -0x1.89e092p0, 0x1.ee4b36p0, -0x1.972566p0, 0x1.6dfd7cp-1, 0x1.f4977ep-1, 0x1.c3028cp-1, -0x1.d59d68p0, 0x1.4e37aep0, -0x1.388becp-3, 0x1.ab7234p0, -0x1.537b22p-2, 0x1.e6757p-3, -0x1.f66a4p-1, 0x1.598da8p-2, 0x1.eb25ccp0, -0x1.9eca84p-7, 0x1.142478p0, -0x1.6db752p-4, -0x1.f60b68p0, -0x1.ff75eap0, 0x1.67f0cep-1, 0x1.3ddfd2p0, -0x1.9e3c8p0, -0x1.de93f4p0, -0x1.2dc63cp0, -0x1.a72c3ap0, 0x1.a979c8p0, -0x1.f1c5fep0, 0x1.39f162p-2, -0x1.5c0c04p-2, -0x1.d21452p0, 0x1.eace8cp-1, 0x1.623b1ep0, 0x1.371b98p0, -0x1.ab7ca2p-2, -0x1.2b2616p-1, -0x1.7574e4p0, -0x1.083f2p-6, -0x1.3dc7a6p0, 0x1.c9acc8p0, -0x1.e36fdcp-7, 0x1.433aeep0, -0x1.2ed56p0, 0x1.f272ecp-4, 0x1.d8d1e6p-2, 0x1.a8c3ccp0, 0x1.506798p0, -0x1.005d62p0, -0x1.f3bc9p-4, -0x1.2e0f22p0, -0x1.f8838ap0, -0x1.dac88ap-1, -0x1.dddb72p-3, 0x1.101332p0, -0x1.d0957ap-1, -0x1.f33ae4p-1, -0x1.a00cbp-1, 0x1.e22ebep0, 0x1.37472ep-4, -0x1.5e531ap0, 0x1.6b9cdcp-1, -0x1.bd6f3cp0, -0x1.5a62ep0, 0x1.0a3e12p-2, 0x1.74cecep0, -0x1.111942p-1, -0x1.e6ccbep-1, 0x1.c3dddep-2, 0x1.4a1b1p-1, -0x1.e34d14p0, -0x1.b5f6a2p0, 0x1.65ede4p-2, -0x1.3e6346p0, 0x1.7ffd0cp-1, -0x1.c24abap-1, -0x1.82b6fep0, 0x1.7ef5cep-1, -0x1.d83fbep-1, 0x1.a3bf3ep0, 0x1.44a4b2p0, 0x1.75849ep-2, 0x1.5eada8p0, 0x1.d92e72p-1, 0x1.24546ep0, -0x1.e09ebp-1, 0x1.8cd5bap0, 0x1.de406ap-4, -0x1.0ed67ap0, 0x1.cef034p-5, -0x1.214e66p-2, 0x1.9a6eb4p-1, -0x1.9c2ef6p0, 0x1.64df7ap-2, 0x1.50cd22p-1, 0x1.b18c6ep0, -0x1.e1e376p-2, 0x1.b010cp-1, 0x1.506e28p0, 0x1.cb60fcp-1, -0x1.b2e036p0, 0x1.1859bp0, 0x1.5165d2p0, 0x1.c6f462p0, -0x1.521cccp-1, -0x1.596066p0, 0x1.16818p-1, 0x1.2ac77cp-1, -0x1.548fe2p-2, 0x1.1fc90cp0, -0x1.d2d3c6p-4, 0x1.e1f23p-1, 0x1.e37346p0, -0x1.c9a99ap0, -0x1.9f9f7cp-3, -0x1.da595p-1, -0x1.8d9e36p-3, -0x1.fc31fp0, 0x1.958cf8p0, -0x1.5d48dcp0, -0x1.c4e502p0, 0x1.20ff34p0, 0x1.560076p-1, 0x1.b329d2p0, 0x1.7b4a2ap-1, 0x1.748b72p-1, -0x1.42b8a8p0, -0x1.72a81ep0, -0x1.3c69aep-1, 0x1.21640ap-2, -0x1.b345ep-1, -0x1.714296p0, 0x1.a9d474p-1, 0x1.e276bp0, -0x1.5074fcp0, 0x1.256654p0, 0x1.e62fep-2, -0x1.9d073ep0, -0x1.3d99c4p-2, 0x1.ac7e02p-2, 0x1.ca8d4p-1, -0x1.732baap-1, 0x1.d727dap0, 0x1.5a424cp0, 0x1.90f24ap0, 0x1.574868p-1, 0x1.f72b8cp0, 0x1.407d64p0, 0x1.faf476p-3, 0x1.536914p0, -0x1.959b86p0, -0x1.fda2e4p-3, 0x1.20d3cep0, 0x1.5b6d0cp0, 0x1.f59cacp-1, -0x1.94986cp-1, 0x1.33cac6p0, 0x1.2f2164p0, 0x1.635576p0, -0x1.d3c1fp0, -0x1.c1e5a8p0, 0x1.9be544p0, 0x1.7d02d2p-1, -0x1.4cdbccp0, -0x1.602522p0, -0x1.8d0ed6p-1, -0x1.6b5804p0, -0x1.86848p0, -0x1.79af4p-1, 0x1.82dbdcp0, 0x1.30dcbap-1, -0x1.4cf11cp-4, -0x1.d9d42p-3, -0x1.249cbp-1, 0x1.e82102p0, -0x1.43bb92p-1, 0x1.cde632p0, -0x1.7d6e88p-1, 0x1.ea5b0cp-1, -0x1.97b642p0, 0x1.71767p0, 0x1.7166acp-2, 0x1.122e8ap0, 0x1.b032a2p0, 0x1.58fbaep-3, 0x1.fe4e2cp-3, -0x1.62d55cp-1, 0x1.cf9048p-1, -0x1.87393ep-1, 0x1.7673ep-2, -0x1.77c662p-3, -0x1.d2b08cp-4, -0x1.c470c6p-1, -0x1.3a22dcp-1, 0x1.5b361cp0, 0x1.0ad632p0, -0x1.42dc0ep0, 0x1.dd870cp-1, 0x1.ff310ep-1, 0x1.9df7c8p-6, -0x1.8140c8p0, 0x1.8788bp0, 0x1.4b515ap0, 0x1.b4ep-2, 0x1.bb97f2p0, -0x1.00f142p-1, -0x1.8aa9b8p-1, 0x1.cca304p0, -0x1.1bc79cp-1, -0x1.0bdffep0, -0x1.c900e2p0, 0x1.91777ep-4, -0x1.f23d2ep0, 0x1.e8dfb2p-8, 0x1.23ecaep-1, 0x1.ec7b42p-4, -0x1.11fe8p-1, -0x1.cab5e8p0, 0x1.3c5dfap0, -0x1.b2c94p0, 0x1.0ef106p0, 0x1.2595a4p-3, 0x1.36d5dap-2, 0x1.1f9a12p-1, 0x1.abd92p0, 0x1.96f3ccp0, -0x1.d7f872p-3, -0x1.e497c4p0, -0x1.56af32p-1, -0x1.fc6a9ap-1, 0x1.0e75ap-1, -0x1.7845aep0, 0x1.1a0e88p0, 0x1.1e3418p0, 0x1.e1eb1p0, 0x1.4240a2p-2, 0x1.18a7aap0, -0x1.b6d08ep0, 0x1.cb782ep-1, 0x1.8299d2p-1, 0x1.130fe4p-1, 0x1.442e9ep0, 0x1.bdce4ep0, 0x1.0c8faep0, 0x1.525f06p0, 0x1.e7cfe6p-2, -0x1.dff8e6p0, 0x1.0c1036p0, 0x1.efd8fcp0, 0x1.f21d66p-1, 0x1.fff302p-2, -0x1.62221ap0, 0x1.44febcp0, 0x1.3d1c96p0, -0x1.aec88p-1, 0x1.fd0016p-1, 0x1.55eeecp-2, 0x1.592d6cp-1, 0x1.1f9708p0, -0x1.341cb4p0, -0x1.3e80e2p-1, -0x1.1a57eap-1, 0x1.15744cp0, -0x1.d8a8b4p0, -0x1.f7a464p0, -0x1.4f2f0ap-1, -0x1.a80206p-2, 0x1.37f2e8p0, -0x1.550a4cp-4, -0x1.7559f8p0, 0x1.261beap-3, -0x1.c15b86p0, -0x1.e4ae5p-1, -0x1.60a83ep-1, -0x1.d7c9c4p-5, -0x1.124806p0, -0x1.0cbafep-1, -0x1.b060aep-1, 0x1.4d5578p-3, 0x1.c2210ap-1, -0x1.1fe956p-2, -0x1.2c1cbap0, -0x1.e0127ap-3 };
l_struct_OC_k2c_tensor keras_dense_test5;
l_struct_OC_k2c_tensor test5_input_1_input;
float c_dense_test5_array[10];
float test9_input_1_input_array[784] = { -0x1.ba6ae8p0, 0x1.5e9e62p0, -0x1.28c62cp-1, 0x1.29e202p0, -0x1.88a458p-1, -0x1.591bd8p0, 0x1.5be714p0, 0x1.5d4a7ap-2, -0x1.d8cd9cp-1, -0x1.345362p0, 0x1.d9225p-7, -0x1.a0dcep0, 0x1.0e8f0cp0, -0x1.31e6p0, 0x1.b10304p-2, -0x1.2fb1cp0, 0x1.fa94ap-1, 0x1.15030ep-2, 0x1.92d16cp-1, -0x1.ef3418p0, 0x1.b030d2p0, 0x1.34e0a6p0, -0x1.7f5864p0, -0x1.a8f48ep-1, 0x1.339676p-1, -0x1.d4c5b6p0, 0x1.c72872p-5, 0x1.8cdf36p0, 0x1.b68b6ap-2, 0x1.41a276p0, -0x1.175dap-5, -0x1.435712p-1, 0x1.f2a958p0, 0x1.641e86p0, -0x1.645774p-2, 0x1.40b5bp0, 0x1.0018b4p-1, 0x1.1e6cb6p-1, 0x1.2a85d4p-2, -0x1.62f9c6p0, 0x1.3c3f98p0, 0x1.12d732p0, -0x1.d94d3ap-1, -0x1.2ecd1p0, -0x1.f1ffc2p-3, 0x1.efe91ap0, -0x1.e97a8cp-2, 0x1.70f81p0, 0x1.0eb4c6p0, 0x1.215accp-3, -0x1.9141b6p-2, -0x1.7939cep-2, 0x1.a1918cp-2, 0x1.999f1p0, -0x1.8c418ap0, -0x1.188564p0, 0x1.6343c4p0, 0x1.af415ap-1, 0x1.6d09e6p0, -0x1.52378cp0, 0x1.125cfap-2, 0x1.20c8f6p0, -0x1.e983bcp-2, -0x1.7ed5aap0, -0x1.38de26p0, 0x1.5f94acp-2, -0x1.401d36p-2, -0x1.23ac8p0, -0x1.47ed94p0, 0x1.1c7974p0, -0x1.21b782p-3, -0x1.91da6ep0, 0x1.bc1946p-2, 0x1.6b4896p-2, 0x1.f54c04p-1, -0x1.fad1e6p-2, -0x1.099dfcp0, 0x1.00cb34p-7, 0x1.3e1456p0, 0x1.6e1c5ep0, 0x1.8d5c84p0, -0x1.732e7ep0, 0x1.68d54p0, 0x1.92b51cp-3, -0x1.b43106p-1, -0x1.45d16cp-1, -0x1.b592e6p0, 0x1.98cc1p0, 0x1.085856p0, 0x1.5a0722p0, -0x1.d0d7bcp0, -0x1.3f569cp0, 0x1.3a30a8p-1, 0x1.9a602p0, -0x1.972386p-1, -0x1.a4ec5p0, -0x1.293358p0, 0x1.9ed10cp-1, 0x1.152e7ap-2, -0x1.867298p0, -0x1.151acp0, -0x1.eeacbap0, 0x1.56153ep0, 0x1.6ddddap0, 0x1.efa12cp-2, 0x1.2d33a8p-1, 0x1.390becp-2, 0x1.2d6074p0, -0x1.7aa7bep0, 0x1.a22ebep-2, -0x1.13e91ep0, -0x1.72d0eep-1, -0x1.18dd08p0, -0x1.32b64p0, 0x1.4f99e6p0, 0x1.51a1p0, 0x1.1cab38p-1, -0x1.4f4c06p0, -0x1.c36f8ap-1, 0x1.02b246p0, -0x1.b04eccp-1, -0x1.aea64ep-4, -0x1.0e5862p0, -0x1.aa284ap0, -0x1.80835p-1, -0x1.903a2cp-4, -0x1.429fecp-6, 0x1.f88f4ep0, -0x1.0b8c24p0, 0x1.5cc652p0, -0x1.31a3eap-1, 0x1.d3a8a6p0, 0x1.db27cap0, 0x1.281c5ap0, -0x1.17ba32p0, 0x1.1c5636p0, -0x1.109a3p-5, 0x1.5160cep-3, -0x1.03c80ep-1, -0x1.85b08ep0, -0x1.5e5524p-1, -0x1.f1ab74p-2, 0x1.7448f4p0, 0x1.1bf106p0, -0x1.cb7402p-1, 0x1.559d2ep-1, 0x1.cf942ap0, 0x1.d74b7ap-1, -0x1.c9fc7p-1, 0x1.744742p-3, 0x1.7ba6e2p0, -0x1.b676ap-6, 0x1.5c823p0, -0x1.6a56fcp-2, 0x1.c1a684p-1, -0x1.8c843ap-1, 0x1.22bfecp0, -0x1.e41268p0, -0x1.c8a796p0, 0x1.46c1b6p0, -0x1.32e71ap-5, 0x1.7e7196p0, -0x1.a84f9cp-1, 0x1.545f1ap-4, 0x1.2fabeep-3, 0x1.b06e08p-1, 0x1.d775d6p0, -0x1.bc3cf6p0, -0x1.947578p0, 0x1.3226d6p0, -0x1.91e04ep0, -0x1.e7fd62p0, -0x1.65e1b6p0, 0x1.495eccp-1, 0x1.79621p0, -0x1.f5774ap-1, 0x1.30c82cp-4, 0x1.8389d2p-1, 0x1.7c211p-1, 0x1.3fd468p-1, 0x1.a4bf76p-1, 0x1.1e2a5ep0, 0x1.3a952cp-1, -0x1.1106c2p0, -0x1.0aaddap0, 0x1.20b826p-6, 0x1.4cc664p0, 0x1.4e9d66p0, 0x1.84f526p0, 0x1.075234p0, -0x1.47a97ep-1, 0x1.1040eap-1, 0x1.7663f8p0, 0x1.cd2796p-3, -0x1.697d86p-1, -0x1.5963b6p-1, 0x1.580276p-1, 0x1.54b02ep-5, 0x1.129af2p0, -0x1.fda422p0, 0x1.a31dc6p0, 0x1.184f8ep-2, 0x1.f522e6p-1, 0x1.761fcap0, -0x1.ce56b2p0, -0x1.d9162cp-1, 0x1.e1c1c6p-2, -0x1.3ca0acp0, -0x1.7d7018p0, 0x1.ec7072p-2, -0x1.c18302p0, 0x1.e9d154p0, 0x1.f31facp0, 0x1.8eb5c8p-1, -0x1.fb047ep0, -0x1.cbf1p-1, 0x1.d1c9cep-2, -0x1.b863dcp0, 0x1.a581e8p-3, 0x1.d8bf16p0, -0x1.09044cp-3, 0x1.3438e8p-2, 0x1.954d9p-3, -0x1.2904b8p-1, -0x1.7298fep-6, -0x1.c7f23ep0, 0x1.c65998p-1, -0x1.622938p-3, -0x1.4ef95ap0, 0x1.9cdb78p0, 0x1.5d0466p0, 0x1.6a0524p-2, 0x1.b2d3b6p0, -0x1.e1db24p-1, 0x1.119742p0, 0x1.f72d1p-1, -0x1.6c7b9cp0, 0x1.820584p-1, 0x1.80a7fap-2, -0x1.12f016p0, -0x1.f4ce0cp0, 0x1.c817b6p0, 0x1.5f4146p0, 0x1.f8c958p0, -0x1.0eaca8p-3, -0x1.b39604p0, 0x1.ef82bep0, -0x1.3c729ap-5, -0x1.233e6cp0, 0x1.adee6p-5, 0x1.1cec66p0, -0x1.fd68eap0, 0x1.b24b02p-1, -0x1.961668p0, -0x1.def276p-1, 0x1.af234p0, -0x1.f6c32cp0, 0x1.ba270ap-1, -0x1.d5260ep-1, -0x1.5a1e7ap-1, 0x1.eb3b0ap-1, 0x1.08c5d4p0, -0x1.7944b6p-2, -0x1.b072bep0, -0x1.21748cp-1, -0x1.0d198p-2, 0x1.7f74fp-2, -0x1.e5a758p-3, 0x1.6f49acp0, -0x1.bd9418p-1, -0x1.76eed8p0, -0x1.f290f4p-1, 0x1.d9c578p-1, 0x1.cc54a8p0, -0x1.0817cp0, 0x1.a7d0dcp0, -0x1.a80a0ep0, -0x1.94d0a8p-3, 0x1.2679c4p-1, 0x1.f2406ep-1, -0x1.4ff74ap0, -0x1.4bcb02p-1, 0x1.67d058p-2, -0x1.723e14p-1, -0x1.55e8f6p0, 0x1.af620ap-3, -0x1.401d9ep0, 0x1.9f2bfp-2, -0x1.ca22ccp0, -0x1.285204p0, 0x1.687b74p0, -0x1.c8f8bap0, -0x1.3619d8p0, 0x1.728af6p0, -0x1.eca0ep-1, 0x1.9c4e0cp-6, 0x1.b6db96p0, 0x1.64e576p-2, 0x1.66708cp-4, 0x1.03cafcp-1, -0x1.a2dad6p-3, -0x1.97c36p0, 0x1.d47814p-3, -0x1.b8ff84p0, 0x1.ac99f6p0, -0x1.40d628p-1, 0x1.597676p0, 0x1.4f4b9ep0, 0x1.e8dc94p0, -0x1.3c909p0, 0x1.73e09p0, 0x1.cd4ca6p-3, -0x1.95ca7cp-5, 0x1.473a42p-2, 0x1.48b70ep0, 0x1.81684ep0, 0x1.bc748ep0, 0x1.2efd44p-1, 0x1.af960ep-1, -0x1.20a534p-1, 0x1.209b0ap0, -0x1.bd63cap-2, -0x1.470ac8p-1, 0x1.9b7c5ap0, 0x1.8d8a04p0, 0x1.ca19ecp-1, 0x1.a8198cp-1, 0x1.b74a5ap0, -0x1.34c54p0, -0x1.7d674ep-2, -0x1.bfc5e2p0, -0x1.6bc842p-3, 0x1.70edf2p0, -0x1.64cfeap-2, 0x1.0c90c2p0, -0x1.65a5aap0, -0x1.a5b268p0, -0x1.52d59ep0, -0x1.2f8a18p0, 0x1.ef1ff2p-1, 0x1.73652cp-1, 0x1.914a92p-1, 0x1.c036bp-1, -0x1.ffb88p-2, -0x1.f3df34p0, 0x1.c1bc54p-1, -0x1.3901c2p-1, 0x1.f80524p-1, 0x1.e66ce8p-1, -0x1.b5025ep0, 0x1.9ad1e8p-1, 0x1.dbd812p-1, -0x1.8db19cp-3, 0x1.83d75ap0, 0x1.c93c26p-2, 0x1.ed3fb4p0, -0x1.4f0ccep0, -0x1.e0d002p-2, 0x1.89974ep-3, -0x1.35b374p0, -0x1.c50e64p-1, 0x1.2a2abep0, 0x1.cde85ep0, -0x1.ff46dcp0, 0x1.61d05p-2, 0x1.ee2618p0, -0x1.73188ep0, -0x1.8c7a32p-4, 0x1.8a737ap0, -0x1.d5eb7cp-1, -0x1.2f325cp-4, 0x1.75954ep-1, 0x1.5f02e8p0, -0x1.3f9f98p0, -0x1.b40fecp0, 0x1.223aa4p0, 0x1.6bf822p-1, 0x1.800e1ap-1, 0x1.3d94e4p0, -0x1.5e089cp-1, 0x1.4132dap0, -0x1.6ec924p0, -0x1.94a956p-4, 0x1.2db61ap-2, 0x1.5827aap-4, 0x1.46e6fep-2, 0x1.edfd3ep-1, 0x1.6e5004p-1, 0x1.66201cp-2, 0x1.bf7d7ap0, 0x1.db9f7ep0, -0x1.c08226p-3, -0x1.a21986p-2, -0x1.a21848p0, -0x1.949372p0, -0x1.a78f2ep0, 0x1.c0b84p0, 0x1.47452p0, 0x1.237538p-1, -0x1.89a58cp-3, -0x1.7492dep-2, -0x1.b4f92p-2, 0x1.a44b64p0, 0x1.dab5ecp-1, -0x1.786ae6p-1, -0x1.7ed9d8p-2, -0x1.15b3fcp0, 0x1.3ebe58p0, -0x1.1c275cp-1, -0x1.a148e6p0, -0x1.d30924p0, -0x1.2bf97p0, 0x1.1cb71ep0, -0x1.447c8p0, -0x1.b4f464p-1, 0x1.3b7f12p0, 0x1.a55962p0, 0x1.4548ecp-2, -0x1.cfcd6cp0, 0x1.50657ap-4, 0x1.982c88p0, -0x1.4fa932p0, -0x1.780b7ap-2, 0x1.5347c6p-1, 0x1.fa5e94p0, -0x1.51852cp0, -0x1.2d624cp0, -0x1.e0b516p0, -0x1.ce3af2p-4, -0x1.26d7b8p-1, -0x1.7ac406p0, 0x1.2932fap0, -0x1.721474p0, -0x1.a35dc8p0, -0x1.5751fp0, 0x1.b3816cp0, 0x1.b27a4p-1, 0x1.6d755p-4, -0x1.b87412p-1, 0x1.a5d4cap0, -0x1.136656p-1, 0x1.3ce384p-2, 0x1.aad7ap0, 0x1.185c8ep0, -0x1.d27eccp0, 0x1.bbed68p-5, -0x1.e26822p-1, -0x1.94848ap-1, 0x1.d6875cp0, -0x1.05a952p-1, 0x1.9c219ep-1, 0x1.a4a7fap0, -0x1.a3e1dcp-1, 0x1.259d04p-2, -0x1.36e57ap0, 0x1.de827ap-1, -0x1.70beacp-1, -0x1.5754c4p0, 0x1.072774p-1, 0x1.6b6246p-1, 0x1.2c4e52p-3, -0x1.01dc34p0, -0x1.57bf84p0, -0x1.b78c42p-1, -0x1.e40cc2p-1, 0x1.e3d288p0, -0x1.37e0bcp0, 0x1.f6e9eep-2, 0x1.41349p-1, -0x1.a2fe6ep-1, -0x1.9d8eb2p-1, 0x1.a8d586p-1, -0x1.603b68p0, 0x1.a6f00ep-1, 0x1.3cb724p-1, -0x1.127e84p-2, -0x1.e048bep0, -0x1.a9d3c2p0, -0x1.b9092cp0, 0x1.dec38ep0, 0x1.b0c978p0, 0x1.dcf1c4p-2, -0x1.eec738p-1, 0x1.ea703cp-1, -0x1.6f474p-1, -0x1.4c35ep-1, 0x1.b54d34p-1, 0x1.1839bcp-1, -0x1.5e969ep0, -0x1.94dd84p0, 0x1.919b74p-3, -0x1.d03abcp0, 0x1.9b05bcp-2, 0x1.2eb92ep-3, 0x1.f15a52p-1, -0x1.f2095cp0, 0x1.1382f4p-1, -0x1.4a9c26p0, -0x1.d58d9p0, -0x1.32b56ap0, -0x1.dfe08p0, 0x1.5ee216p0, -0x1.625ff2p0, 0x1.34474ep-1, 0x1.d688a6p0, -0x1.a91158p-1, 0x1.b76f32p-3, -0x1.92812cp-1, -0x1.34e17p-1, -0x1.2ffc4cp0, 0x1.2c28e6p0, -0x1.e876f4p-1, -0x1.08285cp0, 0x1.b443f2p0, -0x1.5ffd46p-5, 0x1.4e810ap0, -0x1.cf50e4p0, 0x1.3ea75ep-1, 0x1.78254ap-2, -0x1.a6733ep-11, -0x1.2eeb28p0, 0x1.79dbdap0, -0x1.bef62ap-1, -0x1.faa68ap-3, 0x1.6dae38p-4, -0x1.a31ca6p0, 0x1.8711fap-1, 0x1.9b1c7ap-1, 0x1.a5774p-1, -0x1.0cf4dep0, 0x1.7e3ddep-1, 0x1.ad351cp0, -0x1.a19886p-1, 0x1.2bdf38p0, 0x1.56e652p-3, 0x1.d5e716p-5, -0x1.441c3ep-4, -0x1.1c516p0, 0x1.820618p0, 0x1.9bed92p0, 0x1.739426p-1, -0x1.fc58f2p0, -0x1.c44e22p-1, 0x1.ecc3bap-2, -0x1.cde2f2p0, -0x1.52603ep0, -0x1.52f4d8p-1, 0x1.7e3ea8p0, -0x1.afb5ep0, -0x1.b0b848p-2, -0x1.30dc84p0, -0x1.bf0858p-1, 0x1.7175cp-5, 0x1.886ca4p0, 0x1.ca4aa8p0, 0x1.d80a9ap-1, 0x1.9a66eep0, 0x1.db8dd6p-1, -0x1.85619ep-1, -0x1.b6a1e2p-1, -0x1.28c4cep0, 0x1.5d6a3ep-2, -0x1.87be9ap0, 0x1.c6aa94p0, 0x1.1e591p-1, -0x1.1c6e5cp0, -0x1.c3f604p0, -0x1.d2409ep0, -0x1.274d7cp-1, 0x1.7ac6c6p0, 0x1.f6659ep0, -0x1.cc8188p-3, 0x1.66253cp0, 0x1.610f36p-1, -0x1.467656p0, -0x1.01ec7ep-2, -0x1.1f5c7ep-1, -0x1.5ad12p-1, 0x1.792b6cp-2, -0x1.3d7b72p0, 0x1.ee3142p0, -0x1.312dfep0, 0x1.62fddcp-1, -0x1.de3314p-2, -0x1.0958cap0, -0x1.1c2c06p0, 0x1.33bffp-2, -0x1.229cbp0, 0x1.36ed5ap-1, -0x1.12f8bp0, 0x1.1fe714p0, -0x1.eb43dcp-3, -0x1.161b7cp-2, 0x1.8e5dfcp0, -0x1.a4a5f8p0, 0x1.26b716p0, -0x1.f907f4p0, -0x1.7eba64p0, -0x1.c6a298p0, 0x1.d0affap0, -0x1.cba74p0, 0x1.655be8p-8, 0x1.27ee38p-2, 0x1.d2e944p0, 0x1.983f5p0, -0x1.a7d8a6p-4, -0x1.aa471cp-1, -0x1.672204p0, -0x1.d8e44ep0, 0x1.a4dcacp-1, 0x1.133b8ep-1, -0x1.0aa086p0, 0x1.cdeba4p0, 0x1.387412p-1, 0x1.344ec4p0, -0x1.3e46d6p0, 0x1.e8fda8p-2, -0x1.97b984p-1, 0x1.98137ep-3, -0x1.ac6aeap0, -0x1.6bb10cp-1, -0x1.e21596p-1, -0x1.116538p0, 0x1.4b07fp-6, 0x1.796d2ap-1, 0x1.3b2d72p-1, -0x1.33a424p0, -0x1.976d4ap-1, -0x1.832306p0, 0x1.24532p-1, 0x1.77c81ep0, 0x1.c81ae4p-9, -0x1.a38d1cp0, 0x1.9b2b6ep0, 0x1.e5959ep0, -0x1.b76e44p-1, 0x1.fab48cp0, -0x1.e65c34p0, 0x1.9aa3f4p-2, 0x1.5b2b2ap-2, -0x1.2f26f2p-2, 0x1.24481ap0, -0x1.462bccp0, -0x1.9dda52p0, -0x1.25a31p-3, -0x1.7f78dp0, -0x1.f04536p0, 0x1.91620ap0, -0x1.0907eap0, -0x1.357126p-1, -0x1.cdba7p-1, -0x1.b7998ap-2, -0x1.7b46dap0, 0x1.92ec66p-1, -0x1.eabdc2p-2, 0x1.059fd6p0, 0x1.6c9966p0, -0x1.5757c6p0, -0x1.81eae4p0, 0x1.c7a056p0, 0x1.b7a92ep0, -0x1.ca0bf6p-1, 0x1.281ea4p-2, -0x1.3862fp-2, 0x1.631ea4p0, 0x1.148866p0, -0x1.83d638p-1, -0x1.b3fa28p-1, -0x1.a41deep0, -0x1.5a1932p-1, -0x1.c8b3ap-2, -0x1.331e96p0, 0x1.785d2cp-3, 0x1.e36bfcp0, 0x1.aa2cd6p-1, 0x1.43344cp0, -0x1.dafa3p-1, -0x1.c0eec2p-1, 0x1.9eba08p0, 0x1.058acep-1, 0x1.f17f16p0, 0x1.570c42p0, -0x1.62a43p0, -0x1.f64bb4p0, 0x1.3aaab4p0, 0x1.105706p0, 0x1.0525b2p-1, 0x1.e2ef1ap-1, 0x1.c1504ep-1, 0x1.13a2b2p-2, 0x1.812b3ep-1, 0x1.1afb56p-2, 0x1.cc8b3p-1, -0x1.603d62p-3, 0x1.dbda2ap0, 0x1.39b698p0, -0x1.8745f8p0, -0x1.8520acp0, 0x1.c18f26p0, 0x1.5097d8p0, -0x1.e03aeap-1, 0x1.bca7f2p-1, 0x1.7a8b04p-1, 0x1.516c82p0, -0x1.5e49aap0, -0x1.94ebccp-3, 0x1.380f38p0, -0x1.386f9cp0, 0x1.5e77a2p0, 0x1.bcfad2p0, 0x1.e992f4p-1, -0x1.1f52ecp0, 0x1.fba936p0, 0x1.63bc5p-3, 0x1.115cd2p0, -0x1.700ffap0, -0x1.4c10e8p0, -0x1.331ce8p0, 0x1.0b7cb4p-1, -0x1.2171fep-3, 0x1.0cfe66p0, -0x1.70b5d6p0, 0x1.6b2c7p-1, 0x1.4f8d5ep0, -0x1.95b7c6p0, 0x1.f24c7cp-3, 0x1.60a164p0, 0x1.bfe922p-6, 0x1.48ad6ep-2, -0x1.153848p0, 0x1.0eb1ep0, -0x1.4dd7a6p0, -0x1.d8192ap0, -0x1.312872p0, 0x1.88c76ep0, 0x1.6c577ap0, -0x1.f08d54p-2, -0x1.a7b186p0, 0x1.9003e2p-3, 0x1.609456p0, 0x1.712ep0, -0x1.2a9fep0, 0x1.9003a6p0, -0x1.2538ep0, -0x1.c4b33ap-1, 0x1.0ba702p-1, 0x1.492622p0, -0x1.5755acp-3, -0x1.e7259p0, -0x1.1a1578p0, 0x1.b18264p0, 0x1.1c3606p-1, -0x1.fb121ep0, 0x1.e4561ap0, 0x1.b28246p0, -0x1.732a0ep0, -0x1.0cfcc2p-5, 0x1.49b28p0, 0x1.ed398ep0, -0x1.61e7c2p-1, 0x1.8f76d6p-1, 0x1.032a02p-1, -0x1.02e0bcp-6, 0x1.02c548p-1, -0x1.5c2022p-2, 0x1.3b58eep-3, -0x1.a00586p-3, 0x1.5f8d54p0, 0x1.77bf34p0, -0x1.dbf5ap-2, 0x1.f66f1ap-3, 0x1.01c6aap0, -0x1.2c2f56p0, -0x1.7c63a4p0, 0x1.d7007p0, 0x1.0365c8p-2, 0x1.e5a2bep-2, 0x1.4949f2p-2, -0x1.0e180ep0, 0x1.b3874ep-5, -0x1.0293a2p-1, -0x1.271abap-4, -0x1.f15428p-1, -0x1.d79f5ep-2 };
l_struct_OC_k2c_tensor c_dense_test8;
l_struct_OC_k2c_tensor c_dense_test6;
l_struct_OC_k2c_tensor test7_input_1_input;
l_struct_OC_k2c_tensor c_dense_test7;
float keras_dense_test10_array[10] = { 0x1.425444p-8, 0x1.d03d12p-5, 0x1.fe747ap-6, 0x1.28e4b4p-2, 0x1.081caep-5, 0x1.071b0ap-9, 0x1.058f1cp-8, 0x1.08316ep-1, 0x1.e1332p-5, 0x1.1c727ap-8 };
l_struct_OC_k2c_tensor test8_input_1_input;
l_struct_OC_k2c_tensor keras_dense_test8;
float c_dense_test7_array[10];
l_struct_OC_k2c_tensor test9_input_1_input;
float c_dense_test8_array[10];
l_struct_OC_k2c_tensor keras_dense_test9;
l_struct_OC_k2c_tensor test10_input_1_input;
l_struct_OC_k2c_tensor c_dense_test10;
float c_dense_test9_array[10];
float test8_input_1_input_array[784] = { -0x1.a8f48cp-1, 0x1.00022cp0, 0x1.3af97ap-1, 0x1.cac542p-2, 0x1.859c0cp-1, -0x1.c8151p0, -0x1.5acc8ap0, 0x1.a239e8p-2, 0x1.82fbdap-2, -0x1.3f6418p-4, 0x1.402706p-1, -0x1.ecb208p-1, 0x1.5c60b2p-3, 0x1.dfa604p-1, -0x1.8f68bep-1, 0x1.591856p0, -0x1.f4d40ap-1, -0x1.471386p0, 0x1.a55de8p0, -0x1.ebe41cp0, 0x1.832ad6p0, -0x1.b0cc5ep0, 0x1.b45f2p0, 0x1.2082e8p-3, 0x1.04fc44p0, -0x1.d385ecp0, -0x1.cdf79p-1, -0x1.a357b8p0, 0x1.e1c7cp-2, -0x1.e37a04p0, 0x1.02e52p-1, -0x1.659218p-1, 0x1.81ee08p-1, -0x1.fc9b36p0, 0x1.b97914p0, -0x1.4c578ep0, -0x1.f5fed4p-3, -0x1.c35616p0, 0x1.952dd4p0, 0x1.de449ap0, 0x1.ddb776p0, -0x1.605a2cp0, -0x1.79cef6p0, 0x1.e9ca36p0, -0x1.5be69p-1, -0x1.0bb992p0, -0x1.072aap-1, 0x1.48dbacp-1, 0x1.0a685ep-2, 0x1.671becp-2, -0x1.fce354p-2, 0x1.58103p-2, 0x1.932c3cp-1, -0x1.2df7bep0, 0x1.6d1a74p-1, -0x1.6acfbcp-1, -0x1.551f44p0, 0x1.71640ap0, -0x1.63d11cp-1, 0x1.7cb3dep-1, -0x1.abfe3ap-1, 0x1.0cbd72p0, -0x1.f9c16p0, -0x1.b101acp-1, 0x1.ef19e4p0, -0x1.b0d29cp-1, 0x1.7fc094p0, -0x1.66e24ap0, -0x1.c7e832p-1, 0x1.6f2c94p-1, 0x1.e695dcp-1, -0x1.530e56p0, -0x1.64070cp0, -0x1.d6f03ap0, -0x1.ea674ep0, 0x1.71b7fcp0, 0x1.61a25ap0, 0x1.d2798cp-1, -0x1.ca016cp-3, -0x1.afac78p-1, -0x1.0dbbf6p-2, 0x1.2a8286p0, 0x1.17ee2ap0, -0x1.a09f08p0, -0x1.772e1cp-1, -0x1.a57992p0, 0x1.aba8ccp0, -0x1.558fb4p-5, -0x1.2cf934p0, 0x1.358e7ap0, -0x1.312d18p-1, 0x1.a7023ap-1, 0x1.5557f4p0, 0x1.17a606p0, -0x1.8becaap-3, -0x1.d5f33ep0, 0x1.7b3fecp0, -0x1.cf19ccp0, -0x1.33cae4p0, -0x1.56ad7ap0, 0x1.6cbe5cp0, 0x1.5eb038p-1, -0x1.e838e8p-1, 0x1.5651f8p-1, -0x1.f70b7cp-1, -0x1.c1785ep-2, -0x1.1e4336p-1, -0x1.11a5fp-3, 0x1.a8cc0ep-1, -0x1.eb692ap0, 0x1.035dc6p0, -0x1.40ce6cp-1, 0x1.bba51cp-1, 0x1.607584p0, -0x1.016042p0, -0x1.20d9dcp0, 0x1.531ed8p-5, 0x1.5b8058p-1, -0x1.44ffc2p-2, -0x1.718984p0, 0x1.c5db3ap0, -0x1.36ab7cp-4, 0x1.bdab56p0, -0x1.497dc8p-2, 0x1.a2f332p0, -0x1.20882cp0, -0x1.eb71fp0, -0x1.0f5046p0, 0x1.769c38p-2, 0x1.b50026p0, -0x1.009b98p0, 0x1.9a0482p-1, -0x1.0cbdf6p0, -0x1.23124cp0, 0x1.fecc1p0, 0x1.158fbp0, -0x1.b89cdap0, 0x1.aa605ep-6, -0x1.46203cp0, 0x1.01ac16p-1, -0x1.6f247ep0, -0x1.716b82p-2, 0x1.bb70d8p0, -0x1.d9ff8ep-2, 0x1.537212p0, -0x1.fa498p0, 0x1.068b8p0, -0x1.656f48p0, -0x1.765ef2p0, -0x1.c81218p0, 0x1.cd5662p-1, -0x1.74c204p-1, 0x1.99cce6p0, 0x1.f166dap0, -0x1.6cf79ap-1, 0x1.dd9ffcp0, 0x1.038532p-2, 0x1.199fp-1, 0x1.49712cp-2, 0x1.32794ap-1, -0x1.ff957ep0, 0x1.d95fc4p0, 0x1.3b7534p0, 0x1.8bca0ap-2, -0x1.501fe8p-1, 0x1.2a24ep-2, -0x1.83d2bcp0, 0x1.fced82p-1, 0x1.2c0538p-1, 0x1.a302bap-3, 0x1.dc25dcp-1, -0x1.7bf1cep-1, -0x1.e65a34p-1, -0x1.a5a058p-3, -0x1.822e1cp0, -0x1.6414b8p-2, -0x1.fe5f7ep-1, 0x1.5f45ccp-1, -0x1.9b042ep0, -0x1.94dd72p-3, 0x1.62e13p-3, -0x1.a0be14p0, -0x1.5608aap-1, 0x1.b2ef6ap0, 0x1.16083ep0, -0x1.991114p0, 0x1.5c808p-3, -0x1.c6015ap-1, -0x1.c4a328p0, -0x1.613412p-1, 0x1.82c526p-2, 0x1.aad33ap0, 0x1.89d7fep-3, -0x1.eb8f52p0, 0x1.0613bcp0, -0x1.322774p-1, 0x1.8ce976p-1, -0x1.2231b4p-1, -0x1.169454p-4, 0x1.cf857ap-3, 0x1.556c7ep-1, -0x1.26a606p-4, -0x1.620764p0, -0x1.51d58ap-1, -0x1.d7613p0, -0x1.80b4d2p-1, -0x1.c0d942p0, -0x1.b9699p-1, -0x1.980bbcp0, 0x1.72b078p0, -0x1.be447ap-1, -0x1.4a3ab4p-1, -0x1.a263fcp0, -0x1.73adbap-2, 0x1.2589dep0, -0x1.f5ed44p-2, 0x1.8200b2p-8, 0x1.7590cap0, 0x1.54b96ap0, -0x1.7155fcp0, 0x1.aceab6p0, 0x1.761fd2p0, 0x1.d9f0aep0, 0x1.b8ad86p0, 0x1.7d0de6p-2, -0x1.620146p0, -0x1.a6ffe6p-1, -0x1.7be8d6p0, 0x1.777864p-2, 0x1.c01fa6p-2, -0x1.2b85a8p-1, -0x1.bbcc42p0, 0x1.95733cp-4, -0x1.17247ep-1, 0x1.b449fep-3, 0x1.b9a6f6p0, 0x1.1cf95ep0, -0x1.20cf72p-2, -0x1.237764p-2, -0x1.6566c4p0, -0x1.36c59p0, 0x1.6c903p-2, 0x1.8c8664p0, 0x1.b137d2p0, -0x1.f496bap0, 0x1.c6a9c6p-2, 0x1.410592p-3, 0x1.985d98p-1, 0x1.749738p0, 0x1.b6186ep0, -0x1.e0d6bp0, 0x1.370bcap0, -0x1.2d63d8p-1, -0x1.a95c24p-3, -0x1.7a46bep0, 0x1.989e1p-1, -0x1.162692p-1, -0x1.e45efap-1, 0x1.47f598p-5, 0x1.721bc2p-1, 0x1.a86f22p0, 0x1.b40164p0, 0x1.a14278p-3, -0x1.2b909ep0, -0x1.6f22b8p-2, -0x1.841af6p0, 0x1.504df8p0, -0x1.8d56d2p-2, -0x1.812a34p-1, 0x1.49d73p0, 0x1.a40056p-1, -0x1.42c002p-2, -0x1.0c689p0, 0x1.6fea42p-10, 0x1.4566b8p0, -0x1.c84a24p-6, 0x1.d336b2p0, 0x1.fc7e9p0, 0x1.184ceap-3, -0x1.1f781cp-1, 0x1.b52798p-1, -0x1.ce62c4p0, -0x1.95bc8p0, 0x1.6ec5f2p0, 0x1.230b7ap-1, 0x1.7b2d52p-1, 0x1.d98ef8p-1, 0x1.46e354p0, 0x1.931d76p0, -0x1.b113dap-2, 0x1.fbf26ep0, -0x1.a49918p-1, -0x1.18e8ccp-2, 0x1.1f14dap-3, -0x1.3b0274p0, -0x1.60fd9ap0, 0x1.a56ccep-2, -0x1.87720ep0, 0x1.45144ap-5, 0x1.4a9468p-1, -0x1.da76f8p-1, -0x1.e79378p0, 0x1.0d5b92p0, 0x1.3712e8p0, 0x1.1aec9ap0, 0x1.decefcp0, -0x1.65d83p-1, 0x1.537722p-4, -0x1.329426p-3, -0x1.a1a7c6p0, -0x1.ca1022p0, -0x1.ece43p0, -0x1.b49712p-3, 0x1.2dea18p-2, 0x1.f92daep-1, -0x1.86b116p-2, 0x1.c51046p-1, 0x1.dffd32p0, 0x1.aa4c3p-1, -0x1.ecd348p-1, -0x1.c8efp-1, 0x1.ca32fcp-1, -0x1.0b4d54p0, -0x1.c4576cp-2, -0x1.6ebeaap-4, -0x1.44ebccp0, 0x1.2c9acp-1, 0x1.2e47f2p0, 0x1.2f8bdcp-1, 0x1.3fc8c6p0, 0x1.bdc584p-1, 0x1.16073p-1, -0x1.1d5062p-1, -0x1.39bf3ep0, 0x1.cd98bcp0, -0x1.4c2986p-1, 0x1.c24e9cp-2, 0x1.839d5p-2, -0x1.d89ca4p-1, 0x1.466404p0, 0x1.931936p-1, -0x1.55d918p0, 0x1.72a9f6p-3, 0x1.e413b6p-4, -0x1.1d7976p-1, -0x1.a3ad4cp-1, 0x1.942d7ep0, 0x1.048038p-1, -0x1.0bafc8p0, 0x1.b8941p0, -0x1.866a6p0, 0x1.45801cp0, 0x1.880d9ap-1, -0x1.4e6eap0, -0x1.039e5ap-1, -0x1.116ffap0, 0x1.950db4p-1, 0x1.7a78f8p-3, 0x1.923eccp-1, -0x1.802756p0, -0x1.626d78p0, -0x1.f25dbap-1, 0x1.0bbfc6p0, 0x1.1a967p0, -0x1.a16694p0, 0x1.510278p0, -0x1.641a5p0, 0x1.be956cp-7, -0x1.4f4d94p-2, 0x1.9c9962p0, -0x1.72b862p-3, -0x1.09f84ep-3, -0x1.123aaap0, 0x1.021b5ep0, 0x1.e1b8eep-3, 0x1.df65dap-1, 0x1.77c682p-2, -0x1.ba79cep0, 0x1.574c74p0, -0x1.274426p-1, 0x1.df9388p0, -0x1.79e3f2p-1, -0x1.8307cep0, -0x1.8b2bfap-3, 0x1.7d8f54p0, 0x1.39047ap-1, 0x1.7dfbb8p-3, -0x1.f8bf24p-2, 0x1.23ed68p-2, 0x1.d38a46p-1, 0x1.881a88p-4, 0x1.90610ap-3, 0x1.00b1d6p-1, -0x1.877676p0, 0x1.a693acp0, 0x1.c7cd7ap-1, 0x1.3efb2ap-1, 0x1.fd97ccp-7, 0x1.62fa1p0, 0x1.f38d56p0, 0x1.cfbc96p0, -0x1.988408p-1, 0x1.7b0678p-3, 0x1.006a9ap0, 0x1.6c00e2p-2, -0x1.b32776p-4, 0x1.4f335cp0, -0x1.d368ep0, -0x1.7aee66p-1, -0x1.5ec176p0, -0x1.059986p-3, 0x1.1a87bep-2, -0x1.cd2d9p-3, 0x1.97ab6ep-1, -0x1.cdfe1p0, 0x1.f56d8p0, 0x1.bc5d7p-3, -0x1.13a4bcp-1, 0x1.669c2p-4, -0x1.ef4d64p0, -0x1.a5ac2ep-1, 0x1.28e21cp-2, 0x1.ac184p0, -0x1.4d1908p0, 0x1.98781p-2, 0x1.6ecd34p0, -0x1.dd9f96p-2, 0x1.33bd32p-1, 0x1.b88dc2p-5, 0x1.b4d24p0, 0x1.7bf28cp0, 0x1.edbab8p-2, 0x1.e49fe6p-1, -0x1.e772c4p-1, -0x1.28264ap0, 0x1.7757p-7, 0x1.edaf7cp-3, -0x1.20d75ep-1, 0x1.e5d57ap0, -0x1.534816p0, -0x1.0f7f1ap-3, 0x1.2e501ap-1, -0x1.60af78p0, -0x1.153baep0, -0x1.8e66bcp-2, -0x1.6f9abp0, -0x1.3f4796p-2, -0x1.b99678p-1, 0x1.160bc4p0, -0x1.d83fdap0, 0x1.a25cf6p-2, -0x1.7641a2p-1, -0x1.2bd56cp0, -0x1.ced0bp-1, -0x1.aa8bc8p-4, 0x1.ecd2acp-1, 0x1.787becp0, 0x1.e06f1ep0, 0x1.ce2e4ep-1, -0x1.fe5b34p0, -0x1.4db66p-1, -0x1.083b62p-3, 0x1.5f801ep0, -0x1.10ac74p-1, -0x1.d1041ap-1, 0x1.bf78ap-1, 0x1.10bae2p-1, -0x1.a6ff72p0, 0x1.0e4d74p-4, 0x1.037c66p-1, -0x1.7e04dap0, -0x1.9e3f08p-1, -0x1.324fd2p-2, 0x1.467d98p-2, -0x1.3fe436p-1, 0x1.fec8bp-1, 0x1.cddcep-4, 0x1.2d7b3p0, -0x1.7aaf98p-1, -0x1.ce0588p-2, -0x1.ee31fp-2, 0x1.4a226ep-3, -0x1.8bc6c6p0, 0x1.8a295p-1, 0x1.43113p0, 0x1.1f4fcep-1, 0x1.74e5f2p0, 0x1.4e095ep-1, 0x1.34eecp0, 0x1.82e252p0, -0x1.ef020cp-2, -0x1.844e5ep0, 0x1.3c1f84p-4, 0x1.000414p0, 0x1.8a0438p0, 0x1.3cd396p0, -0x1.baf78cp-1, 0x1.52d6ecp0, -0x1.48193ap-1, 0x1.b388fp-1, -0x1.c7284cp0, 0x1.424e94p0, 0x1.059d08p-2, -0x1.4a599ap0, -0x1.5de0dap-2, -0x1.4153b6p0, -0x1.15a516p0, 0x1.68068cp0, 0x1.c88428p-1, 0x1.07945cp0, 0x1.19f4a2p0, -0x1.caf1dep0, 0x1.905ea4p0, -0x1.b96368p-3, -0x1.177afp-2, -0x1.0353b8p-3, -0x1.6d42b6p-2, -0x1.1a8d52p0, -0x1.a215bp0, -0x1.1e5bcep-3, 0x1.d6fa14p0, -0x1.c4ccb8p-1, -0x1.756548p-2, 0x1.e1110ep-2, 0x1.90b494p-7, 0x1.98f054p-2, -0x1.8e36d2p0, 0x1.d7dbe2p-1, -0x1.bf137ap0, -0x1.744654p-3, 0x1.4b8df6p0, -0x1.ad5be2p0, -0x1.d27032p-2, 0x1.63173ep-2, -0x1.1ab35ep-2, -0x1.11ad88p-1, -0x1.92a678p-2, -0x1.c92704p-3, 0x1.981618p0, 0x1.69286ep0, 0x1.73018cp-1, -0x1.a99bbep0, 0x1.3891a4p0, 0x1.449ce4p-2, 0x1.50eec4p-3, 0x1.e1700ap0, -0x1.c06e18p0, 0x1.869068p0, -0x1.2429d4p-2, 0x1.a4cbccp-5, -0x1.741ae8p-1, 0x1.867eb2p0, 0x1.d4103ep0, 0x1.849076p-1, 0x1.696bap0, 0x1.162f9ep-1, -0x1.b5ef1ap0, -0x1.f0819p-2, -0x1.cbab08p0, -0x1.da50fap0, 0x1.e3b8d2p-1, -0x1.3ab504p0, 0x1.3a5beep-1, -0x1.83bc86p-5, 0x1.119124p0, 0x1.377aeap0, -0x1.b8728ap-2, -0x1.1e82d8p-2, -0x1.80a174p0, -0x1.b6199ep0, 0x1.c69c2p0, -0x1.ae2c46p0, 0x1.8cfb18p-2, 0x1.200fb8p0, -0x1.ee3134p0, -0x1.377da4p-3, 0x1.e09536p0, 0x1.21a376p-1, -0x1.ae40e8p-3, -0x1.584ee8p0, -0x1.5b2a7ep-1, -0x1.4d7ec2p0, -0x1.15fdf2p0, 0x1.789be6p-1, -0x1.91c46cp0, -0x1.ee36b8p0, 0x1.345f22p0, -0x1.4e6e4p0, 0x1.076674p0, -0x1.2f6884p-2, 0x1.7eb01p-4, 0x1.3c7776p-1, -0x1.33a7fep-1, -0x1.ecdebap0, 0x1.09eab6p0, 0x1.03ad74p0, -0x1.bca5d8p-4, -0x1.742f5ap-2, -0x1.2cce2ap0, 0x1.49e668p-3, 0x1.b5d8bep0, 0x1.0cd52ep-1, 0x1.194f6ep-1, 0x1.0b038p0, -0x1.343136p-2, 0x1.9a5384p-1, 0x1.53500ep0, 0x1.a53b3p-1, 0x1.401a8ep-3, 0x1.daa4c2p-2, 0x1.070962p0, 0x1.781a52p-2, -0x1.9728dcp0, -0x1.b1e196p0, 0x1.0a8a82p0, -0x1.a70e1p-1, 0x1.fc8d54p0, 0x1.fc599cp0, -0x1.5951acp0, 0x1.61ceecp-7, -0x1.374d2cp0, -0x1.aa2e3p-2, -0x1.78a626p0, -0x1.0376b8p0, -0x1.2c99ep0, -0x1.223962p0, 0x1.29b854p-1, 0x1.906f24p0, 0x1.a1fb7p-1, -0x1.f83402p-2, 0x1.254042p-2, 0x1.f3c8aep0, 0x1.415226p-1, 0x1.12d0eep0, -0x1.d470d8p-1, 0x1.1096eep-4, -0x1.285f26p-4, 0x1.be3ec8p0, 0x1.6fa7fep-1, -0x1.0369c4p0, -0x1.5602ccp0, 0x1.183048p0, 0x1.bbf8cp0, -0x1.4ebc16p0, -0x1.3cbfb4p0, 0x1.0670fap-1, 0x1.24563ap0, 0x1.de6a2p0, -0x1.ac9d06p-6, 0x1.4a50b8p-1, 0x1.165cd6p-2, -0x1.0fe902p0, 0x1.d7f0d4p-3, 0x1.c25568p0, 0x1.a9d234p-1, -0x1.84210ep-1, -0x1.235528p0, -0x1.39d76cp-1, 0x1.3e2ebap0, -0x1.9578cp0, -0x1.477024p0, -0x1.eff634p0, 0x1.ed42cep0, -0x1.c1bf78p0, -0x1.ad934ap-2, -0x1.7a2974p0, -0x1.fdcbd8p0, -0x1.04a092p0, 0x1.ce4a8p-2, 0x1.ce13fp-1, 0x1.e230fap0, -0x1.0be074p-1, -0x1.c2d91cp0, 0x1.2d6cp0, -0x1.c11688p-1, 0x1.d47896p-1, 0x1.14d2fap0, -0x1.959588p-2, -0x1.3fbdap0, -0x1.5110bep-2, -0x1.6e7b56p-3, 0x1.f6cc2ap-1, -0x1.24908cp-1, 0x1.7150ap0, 0x1.96a036p-3, -0x1.0ffcfap0, -0x1.88a59ap0, 0x1.b59648p0, 0x1.239256p-2, -0x1.7c91e6p-2, 0x1.cbf11ep-3, 0x1.86edd4p0, 0x1.a2efa6p-2, -0x1.4e0adp-2, 0x1.d94252p-1, 0x1.141156p-1, 0x1.0f97aap0, 0x1.51c89p0, 0x1.9f361cp0, 0x1.d5ba08p0, -0x1.0d798p0, 0x1.be457ep-1, -0x1.7e905ap-1, 0x1.27d5b4p0, 0x1.fbb9f6p-1, -0x1.cd9a76p0, 0x1.104406p0, 0x1.09aebap-1, 0x1.3eeaf2p0, -0x1.07b686p0, 0x1.32384ap0, 0x1.40173ap-1, 0x1.aa03fep-4, -0x1.f10bdcp-2, -0x1.16f038p-5, -0x1.06a91ep0, -0x1.8a6aa2p-2, 0x1.2b045p-5, 0x1.6e8408p0, -0x1.6768f6p-1, -0x1.5227d8p0, -0x1.ab0b24p0, -0x1.76aa2p0, -0x1.243b1ep0, 0x1.9887a2p0, -0x1.b0bbeap-3, -0x1.ea674cp0, -0x1.c821c4p0, -0x1.8d86a6p0, 0x1.709f36p-3, 0x1.87b25ap0, -0x1.8e0c84p0, 0x1.da2accp-1, -0x1.9b27cap-7, 0x1.a6c338p-1, -0x1.e05bep-1, -0x1.eee496p-1, 0x1.4ce296p-1, -0x1.0a0f64p0, -0x1.02ecc2p0, -0x1.235b04p0, 0x1.2641ap0, -0x1.0ce0cp0, 0x1.1d28dcp-1, -0x1.f9d854p-3, 0x1.995d8p-2, -0x1.392c06p0, 0x1.7f4f9ap0, 0x1.416fcap0, 0x1.0306f2p-2, -0x1.9e61b4p0, -0x1.71d8e2p0, -0x1.1f074cp0, -0x1.390f8p-3, -0x1.f5021p0, 0x1.22ccdcp0, 0x1.100392p-2, 0x1.8efdap0, 0x1.56709ap-2, -0x1.d15a96p0, 0x1.0dcdb6p0, -0x1.9089a6p-3, 0x1.623926p-3, -0x1.a44b5ep0, -0x1.dbbc78p-3, 0x1.e40586p-2, -0x1.9a6494p-1, 0x1.ef021p0, 0x1.7374bep-1, 0x1.f4a526p0, -0x1.593a52p-1, 0x1.8190a8p0, 0x1.432a3p0, -0x1.ffea5cp-2, -0x1.1761c6p-1, -0x1.793c02p0, 0x1.698aeap0, -0x1.4bf714p0, 0x1.71c412p-1, -0x1.391646p-1, 0x1.f16688p0, -0x1.0c06cep-2, -0x1.5470b4p0, -0x1.c9a6acp0 };
float test7_input_1_input_array[784] = { 0x1.bf54bep0, 0x1.3c1526p0, -0x1.c05a96p-9, 0x1.97f524p0, 0x1.e4fa5ap-1, -0x1.43e2f6p-2, -0x1.f7f196p-2, 0x1.750d96p0, 0x1.a49efap0, -0x1.dd0778p0, -0x1.57984cp0, 0x1.b42a28p0, 0x1.5f0dacp0, -0x1.1a8828p0, -0x1.15e522p-1, -0x1.cffca6p-1, -0x1.6c4aep0, 0x1.f696cep-2, -0x1.5c573p-2, 0x1.61bfdap0, -0x1.7884a8p-1, 0x1.1a6d6ep-2, 0x1.9a748ep-2, 0x1.843138p0, -0x1.91c028p0, 0x1.b23652p-1, 0x1.e9b3ccp0, -0x1.c0eb2cp0, 0x1.d043b6p-1, -0x1.a8f738p-2, -0x1.9a1b7p0, -0x1.54ccecp-1, 0x1.b83678p-1, 0x1.2c061p-1, 0x1.1eb614p0, -0x1.a97406p-3, -0x1.b788ap0, 0x1.1f1adap0, 0x1.b28252p-1, 0x1.1543dp0, -0x1.117faap0, 0x1.663976p-2, 0x1.fe59bcp0, 0x1.9a41bcp0, -0x1.1009fp0, -0x1.39dbb4p-4, -0x1.fa40cp0, -0x1.fb9884p0, -0x1.6527aep0, -0x1.accdc8p0, 0x1.d3384ap0, -0x1.db4d92p-9, 0x1.224414p-1, 0x1.5282a2p-2, -0x1.3c2fa4p-1, -0x1.08cc98p0, -0x1.5a5658p0, -0x1.801a3p0, -0x1.a493f4p0, 0x1.b72fc4p0, -0x1.478574p0, -0x1.b71b3cp0, -0x1.705d74p-2, 0x1.dfaa46p-1, 0x1.c00422p-2, -0x1.f13e9cp0, 0x1.c4b17ep-9, 0x1.b9b446p0, 0x1.9c2242p0, -0x1.8f5842p-1, 0x1.e9fd16p0, 0x1.72d318p-2, 0x1.a1546p-5, -0x1.c7f748p0, 0x1.d35dcap-1, -0x1.e3e092p0, 0x1.995296p0, 0x1.a7349cp0, -0x1.04a9eep-1, 0x1.fc6796p0, 0x1.8ec31ap-4, -0x1.37a05ap0, -0x1.61887ap0, -0x1.f9c062p-1, -0x1.8f226ap-1, 0x1.f85e1cp-1, 0x1.b127dcp0, 0x1.c53468p-2, 0x1.63cdbap-2, 0x1.5f9a8p-2, -0x1.a66e66p-2, -0x1.27e7b2p-2, -0x1.a60a88p0, -0x1.9bc4cep0, -0x1.82d5fep0, 0x1.2516f8p-1, 0x1.cb3f4p0, -0x1.2a9284p0, -0x1.8b0b4cp-3, -0x1.16254p-2, -0x1.b5cf9ep0, 0x1.da4492p-1, -0x1.8039aap0, 0x1.65d648p0, -0x1.fcb3a8p0, -0x1.4bb132p0, 0x1.af5244p-1, -0x1.08f4ap-5, 0x1.7e28c8p-1, 0x1.81b1e2p-3, -0x1.f62dbep0, 0x1.d74d3ep0, -0x1.5ce27cp-2, -0x1.4a144p-2, 0x1.f3bfbp-4, 0x1.115d62p0, 0x1.4aab78p-2, 0x1.845fa2p-1, -0x1.a652eep-1, -0x1.bfbdfcp0, -0x1.a18c7cp-1, 0x1.76b2aap0, -0x1.4dfdep-1, -0x1.c69858p0, 0x1.39fd14p-7, -0x1.f17a8ap0, 0x1.a77fb4p0, -0x1.5ef9c6p-1, -0x1.311cdap-3, -0x1.a16258p-3, 0x1.0880eep0, 0x1.a3d63ap0, -0x1.8fc334p0, 0x1.af3cf6p-2, -0x1.76b6d2p0, 0x1.0076a2p0, 0x1.f65f9cp-4, 0x1.a8d33cp-1, 0x1.b4f206p-2, 0x1.91531ap-5, -0x1.c3711p0, -0x1.8d661cp0, 0x1.f54ad8p-2, -0x1.db3244p-2, -0x1.2f8412p-1, -0x1.a957cep-3, -0x1.2e29bcp0, -0x1.511904p0, -0x1.e2c30cp-1, 0x1.5d73eap-1, -0x1.ee09c6p0, -0x1.0f1404p-1, -0x1.166eeap0, 0x1.84a1cp-4, 0x1.04ad98p-5, 0x1.d2af56p0, 0x1.e63654p-1, -0x1.99956cp-1, -0x1.27979ep0, 0x1.ef4b2ep0, -0x1.9f2806p-3, -0x1.55a9f2p0, 0x1.508336p0, -0x1.96036ap-3, -0x1.77fb1ap0, -0x1.588738p0, 0x1.21e898p-2, 0x1.f1eedp0, 0x1.e7716p0, -0x1.db635ep0, -0x1.ab507ep-1, 0x1.e0df5ap-2, 0x1.dd53ecp0, -0x1.b7e1e8p-1, 0x1.acf05cp0, -0x1.063db6p0, 0x1.5f6e1p0, -0x1.5a634ap-2, 0x1.851b2ap0, 0x1.651c22p-1, 0x1.ac311ap0, 0x1.6d9bfap0, -0x1.c361f6p-2, -0x1.b988b4p-4, -0x1.f4e5bp0, -0x1.44aef6p-1, -0x1.046962p0, -0x1.437ffcp0, -0x1.1b483cp-2, -0x1.ea014cp-2, -0x1.91dbf4p-1, -0x1.822178p0, -0x1.6ffc0ap-1, -0x1.cfb738p-2, -0x1.ad4f22p-1, 0x1.ae4942p0, 0x1.519cfap-1, 0x1.8b5934p0, -0x1.bc4c6p0, -0x1.fa64c4p-2, -0x1.6ad006p-1, 0x1.1de54cp0, 0x1.c78dd6p-1, -0x1.30abbp0, -0x1.f021bcp0, -0x1.b7fd72p-2, 0x1.627f18p0, -0x1.4eefa8p0, -0x1.b23edcp-2, 0x1.9fc08ap-1, -0x1.7c71d4p-1, -0x1.f6e8a6p-6, 0x1.4210bep0, -0x1.3afeeep0, -0x1.498426p0, -0x1.c60f26p0, 0x1.002594p0, 0x1.8502cp-1, 0x1.7806b4p0, -0x1.1397dp-1, -0x1.d0c5f2p0, -0x1.ffe284p-1, 0x1.5b522ap0, -0x1.b1a48cp-5, 0x1.bc7142p0, -0x1.65b56cp0, 0x1.e3b9c4p-1, -0x1.150b44p-2, -0x1.50c304p0, -0x1.73574ep-3, -0x1.d8925cp0, -0x1.8e8c2cp0, -0x1.cedeccp-3, 0x1.7bc7e2p0, 0x1.2f961ep0, 0x1.d391fp-3, 0x1.ca6ec6p-3, 0x1.6a5d5p0, -0x1.b74994p-1, -0x1.03d26cp0, 0x1.43811p-1, -0x1.de683cp-1, -0x1.c4c64ap-8, 0x1.e16a3cp0, 0x1.e21d96p-4, 0x1.aedfdap0, 0x1.1ebc4ap0, -0x1.13f2cp-1, 0x1.d905bap-3, 0x1.1ef7p-3, 0x1.c91c04p0, 0x1.0e17eep-2, -0x1.60b796p-4, 0x1.8ef7e6p0, -0x1.cd54b4p0, 0x1.eb2d12p0, 0x1.fe70ecp0, 0x1.bf4bd4p0, 0x1.50ef0cp-2, -0x1.829d1cp0, 0x1.9ab206p-3, -0x1.367bbp-1, 0x1.4cc2dep-1, 0x1.d2175ep0, -0x1.bb066cp0, -0x1.7f13f8p0, 0x1.a32678p-1, 0x1.1aaf8ap0, 0x1.433948p0, -0x1.0484bp0, -0x1.22f38p-3, -0x1.e4ed58p0, 0x1.3b01c8p0, 0x1.a96bc4p0, -0x1.610e8cp-2, 0x1.ac8f46p0, -0x1.3ea23cp0, 0x1.98b3e8p0, -0x1.4d658ep0, 0x1.7b2246p0, 0x1.4c5802p-3, 0x1.c781cap-2, 0x1.01a3c4p-1, -0x1.1a600ep0, 0x1.ce9566p0, -0x1.62a0f4p-2, 0x1.bf2114p0, -0x1.6f8936p0, -0x1.017718p-2, 0x1.ce2948p-1, 0x1.b4d42p0, 0x1.73453p0, -0x1.b15056p-1, 0x1.ee87bcp0, -0x1.f27964p-1, 0x1.2388b4p-5, -0x1.2d39ap0, -0x1.88baeep0, -0x1.367294p0, 0x1.1b3bcp-2, 0x1.26d408p0, 0x1.483e9ep0, -0x1.f99b8ep0, -0x1.37576ap-4, -0x1.089b48p0, -0x1.2c681cp0, -0x1.fba8fap0, -0x1.b603f4p-3, -0x1.25ea3ep-1, -0x1.e8b61cp-1, 0x1.9ec7c4p0, 0x1.b7280ap0, -0x1.df3b76p0, -0x1.3effc6p-2, 0x1.be060ep0, 0x1.5c39d4p0, 0x1.4dbefep-1, 0x1.5c0ddp0, -0x1.3aa08p0, -0x1.e62c2ap0, 0x1.11001ep0, 0x1.59a7f4p0, 0x1.c2fd1ep0, -0x1.e9cb0ep0, 0x1.6ae76p-4, 0x1.9f05e4p-1, -0x1.a8f41p-1, -0x1.9e91d2p0, 0x1.a0eaa4p-1, -0x1.d4bbe2p-2, 0x1.5e9b02p-6, 0x1.a605fap0, -0x1.a44cccp0, 0x1.a90136p-6, 0x1.7430bp0, -0x1.298d84p0, -0x1.873922p-3, 0x1.ae8a26p0, 0x1.5f45ccp-3, -0x1.2d32fap0, -0x1.9dede4p0, -0x1.447f08p-1, 0x1.acde86p0, 0x1.783994p0, -0x1.474c76p0, -0x1.90333ap-1, -0x1.f3fbd4p-2, 0x1.886392p-2, -0x1.cd8498p-1, 0x1.547b26p-1, 0x1.94ab1ap-1, -0x1.f6731cp0, -0x1.fdbf0ep0, -0x1.089928p0, 0x1.4447fap0, -0x1.5dfa3p-2, -0x1.2e9ec2p-1, -0x1.642fa6p0, -0x1.f452bcp0, -0x1.a46672p0, 0x1.79a7dp-1, -0x1.57b45ep-1, -0x1.1093dp0, -0x1.e10948p0, -0x1.8c76dap0, -0x1.1f3786p-5, -0x1.a36602p-3, 0x1.92873p0, 0x1.79175ap0, -0x1.4150c2p0, -0x1.93bf9cp0, 0x1.61c2a2p0, -0x1.21418cp0, -0x1.42da36p0, 0x1.1ae9c8p0, -0x1.1d85e6p-2, 0x1.a2975cp0, -0x1.eab6cap0, -0x1.91a048p-4, 0x1.355a2ap-1, 0x1.bd7a3ap-1, 0x1.0d949p-2, 0x1.38705ap-2, 0x1.6cd2aap-4, 0x1.720246p-1, 0x1.029106p0, -0x1.a33766p-2, 0x1.a61442p-1, 0x1.ac6a6ep0, 0x1.9fb218p-1, 0x1.777428p0, -0x1.807864p-1, -0x1.a49cdep-2, -0x1.2077a8p0, 0x1.c6e76ap-1, 0x1.1cf99p0, 0x1.83166ep-2, 0x1.56ed5ep0, -0x1.f673acp-5, -0x1.19816p0, 0x1.fa320ep0, -0x1.dc31c6p0, -0x1.a47a02p0, 0x1.f23752p-2, -0x1.5365b4p-2, 0x1.897deap0, -0x1.386dc4p0, 0x1.84155cp-1, 0x1.2f945ep0, 0x1.08dbc2p-1, -0x1.f8f8f6p-3, -0x1.2e512ap0, -0x1.6749c4p-1, 0x1.683174p0, -0x1.35a36ap0, 0x1.69458p0, -0x1.45f80ep0, 0x1.2d5dc4p0, 0x1.876e86p-2, -0x1.945d26p0, 0x1.d1a00ap-4, 0x1.eedb9ap-1, 0x1.b5a0ap0, -0x1.b343e4p-1, 0x1.69fceep0, -0x1.5111f8p-1, -0x1.a17a36p0, -0x1.c89e04p0, 0x1.5076ap0, 0x1.11294ap-3, 0x1.c3348p-1, -0x1.bbc26cp0, -0x1.eb5762p0, -0x1.5f5c7p-2, 0x1.a20ee2p0, 0x1.5e786cp-1, -0x1.0a9674p-1, -0x1.45d356p0, 0x1.b79baap-1, -0x1.abd0d2p-2, -0x1.0805bep-1, -0x1.444f4ep-1, -0x1.955144p-1, -0x1.c5e92cp0, 0x1.78549ep-3, -0x1.98c80cp0, -0x1.285768p0, 0x1.366c28p-2, 0x1.11b67ep-2, 0x1.04e87cp0, -0x1.98f0b4p-1, 0x1.c13bp-3, -0x1.ccdf86p0, -0x1.d96838p-2, 0x1.ded7fap-2, -0x1.233afep0, -0x1.10331ap-1, -0x1.7bfbap0, 0x1.e4fb56p0, 0x1.e83a66p-3, -0x1.3f1f94p-3, 0x1.347586p0, 0x1.4b63e2p-1, -0x1.807564p-1, 0x1.f7b214p-6, 0x1.eae3aap-2, -0x1.89373ap-2, 0x1.0ee91ap-1, -0x1.4484ep-2, 0x1.8c7934p0, -0x1.90689ep-1, -0x1.622f0ep0, -0x1.2e5fe8p0, 0x1.d8988ap0, 0x1.644c04p0, 0x1.c965cep-1, -0x1.221eccp0, 0x1.743d34p0, -0x1.6c8c58p0, 0x1.633026p0, -0x1.ab0ef6p-2, 0x1.653684p0, -0x1.2fa91ep0, -0x1.01feaep-1, 0x1.0f3526p0, 0x1.d323fp-1, 0x1.8e9816p0, -0x1.5d5bd2p0, -0x1.0cb392p-5, -0x1.8e693ep-3, -0x1.923142p-2, -0x1.e03cbp-1, 0x1.d5619p0, 0x1.989548p-2, 0x1.8b52acp0, -0x1.79d4d4p-3, 0x1.b8c9bep-5, 0x1.f2e60ap-1, -0x1.6b2816p0, 0x1.76416cp-3, -0x1.e97cacp0, 0x1.f483fep-2, 0x1.dee062p-3, -0x1.5f821ap-1, 0x1.c107fp0, 0x1.bc7b36p-2, 0x1.3541a2p-1, -0x1.44adb8p0, -0x1.8d2fe6p-1, 0x1.c4b0f2p0, 0x1.a5c6e2p-2, -0x1.dbd76cp-1, 0x1.3635c4p0, 0x1.a76c74p-1, 0x1.a0c84cp0, -0x1.81af36p-1, 0x1.3ec6a8p-1, 0x1.b10272p0, -0x1.d6dc0ap0, 0x1.42edd4p-3, 0x1.d28a46p-2, -0x1.549356p0, 0x1.d07534p-1, -0x1.c46e46p0, 0x1.eb4ff4p0, -0x1.d47218p0, -0x1.ea4bb8p0, -0x1.29c6bp-1, 0x1.29e3eep-3, 0x1.1f6edap0, -0x1.54d2f6p-1, -0x1.ea7ce8p0, -0x1.8ffaf2p0, 0x1.4d788cp0, -0x1.e9f53ep-1, -0x1.2a08bp-2, -0x1.4c5976p-2, -0x1.eb6078p-2, 0x1.a7cdf2p-1, -0x1.5323fep0, -0x1.7618c2p-5, -0x1.beedc4p-1, 0x1.68cd4p0, -0x1.f55afap0, -0x1.37578ap0, 0x1.b67c92p-3, -0x1.4e3b9p0, 0x1.6bcdb4p-1, -0x1.86191ep0, 0x1.88f062p-3, 0x1.0492fp-5, 0x1.221216p-4, -0x1.8528dap-1, 0x1.c60386p0, -0x1.78da44p-1, 0x1.94a09p-1, -0x1.e607dcp0, 0x1.900f92p-1, -0x1.08292p-1, 0x1.cb1cap-2, 0x1.34d838p0, -0x1.73ec6cp0, -0x1.53af86p0, 0x1.07327ap0, -0x1.d1f6c4p-1, -0x1.06e086p0, -0x1.8e47fep0, 0x1.eaaf0ap0, 0x1.b2b39cp0, 0x1.3ba17p-1, 0x1.0c92dcp-4, 0x1.c041b8p0, -0x1.cea1cap0, 0x1.3e8df4p-1, -0x1.a3b2f4p-1, 0x1.73acc4p-2, -0x1.dccf34p0, 0x1.419a1cp0, -0x1.8b639ep0, -0x1.281598p0, 0x1.90c792p-1, -0x1.744c26p-1, -0x1.b30a62p0, -0x1.6e10ccp0, -0x1.0c6dfcp0, -0x1.7f6056p-2, -0x1.083ac8p0, -0x1.f79e52p0, 0x1.0fba6ep0, 0x1.62f9p0, -0x1.25065cp0, 0x1.f0a382p-3, -0x1.491036p0, -0x1.4284a8p-3, -0x1.2f8598p-1, -0x1.7a45f4p-6, -0x1.a58334p-7, 0x1.c3cdeep-2, -0x1.43d5d4p0, 0x1.04f99ap-1, -0x1.1263ecp-2, -0x1.aa1132p-2, -0x1.2fed08p0, -0x1.28025p0, 0x1.e67a3cp-2, -0x1.fcaf76p0, 0x1.b9eea6p-1, 0x1.cdacd4p0, -0x1.335c7cp0, 0x1.2cf8f8p-1, 0x1.f01ad8p-1, -0x1.ae3c2ep0, -0x1.7ab97cp-1, -0x1.31a726p0, 0x1.a5dff4p0, 0x1.64ed82p0, -0x1.d69a72p-3, 0x1.d0435p-1, 0x1.43e744p-1, 0x1.faaccp0, -0x1.eaafe8p-2, -0x1.ddc614p-1, 0x1.460152p0, 0x1.525d1p-1, 0x1.546d7ep0, -0x1.78297ap0, 0x1.f62214p0, 0x1.98327ep0, 0x1.016b0ep0, -0x1.6398c2p0, -0x1.81efa4p0, 0x1.1e0fa8p-3, 0x1.6941b8p-1, 0x1.a1320cp0, -0x1.7c48f2p-3, 0x1.d6e66p0, 0x1.aed006p0, 0x1.0ac274p0, -0x1.917a9cp-1, -0x1.1a9e4ap-2, 0x1.258e5cp-1, -0x1.db89bap-1, -0x1.32739ep-1, -0x1.6370c8p-1, 0x1.664716p0, -0x1.1bb7bp0, 0x1.646956p0, 0x1.42e3a8p-1, 0x1.81b44ep-1, 0x1.6ea6f8p-1, -0x1.1117d8p-1, 0x1.8fa1aep-1, 0x1.451a28p0, -0x1.c1ad9p-2, -0x1.b3a1eap-2, 0x1.756f16p0, 0x1.26b622p-3, -0x1.3ae30ap-1, 0x1.525ec2p-1, 0x1.e9ffd6p0, -0x1.8859dap0, -0x1.5a898ep0, 0x1.67c3eep-2, -0x1.579764p0, -0x1.a07beep-2, -0x1.3d40a2p0, -0x1.e20c9ap-1, -0x1.6e54b4p-1, -0x1.1c0378p0, -0x1.3f6c04p0, 0x1.291cfcp0, -0x1.075d86p-7, -0x1.bc5e66p-2, 0x1.bd4048p-3, -0x1.611f92p0, 0x1.88b728p-4, -0x1.5d4432p-1, -0x1.6fa24cp-4, 0x1.66edbep0, -0x1.d53f88p0, -0x1.267e9p-1, 0x1.87b7p-1, 0x1.263a78p-1, -0x1.2aa046p0, 0x1.01908ep0, 0x1.bca148p0, 0x1.970312p0, 0x1.05afep0, -0x1.59cfa4p-4, -0x1.df2cd4p-1, -0x1.ae2ba4p0, 0x1.aac438p0, 0x1.81cc2ap0, 0x1.19d7e8p0, -0x1.a2832p-2, -0x1.975b5ep-1, 0x1.c40a4ap-1, 0x1.651884p0, -0x1.350c0ep-3, -0x1.96d6aep-1, 0x1.b44a82p-2, 0x1.7ae75cp-3, -0x1.5b946p-1, 0x1.2286e2p0, -0x1.fb6b2p-2, 0x1.c4dd8ep-5, -0x1.e5a3d2p0, -0x1.4a913ep-2, 0x1.512f5p0, -0x1.4982f8p0, -0x1.82fc1cp-2, 0x1.523bccp0, 0x1.195838p0, -0x1.7b2128p0, -0x1.d49f68p0, 0x1.41c9c4p0, -0x1.233eb2p-3, -0x1.9468f6p0, 0x1.607fa8p-2, 0x1.7fba66p-3, -0x1.c904e2p-4, -0x1.0a9c3cp-2, -0x1.5cb51ap0, 0x1.81517p0, 0x1.9178e6p0, 0x1.6dcd04p-4, 0x1.77ffeap0, 0x1.a82aaep-4, 0x1.4369bp-3, -0x1.1c427ap0, 0x1.88de9cp-1, -0x1.594b32p-2, 0x1.dce35p0, 0x1.a1ab72p-5, -0x1.16e88cp0, -0x1.d04f7cp0, -0x1.e33f0cp0, -0x1.888e4ep0, -0x1.7fa92ep-1, 0x1.8183ap-3, -0x1.825fcp-2, -0x1.fef992p-1, 0x1.d91bc4p-3, -0x1.b72b22p0, 0x1.42cceap0, 0x1.512818p-1, -0x1.10b49cp-2, 0x1.59700cp0, 0x1.e78a68p-1, -0x1.fbcaf6p-1, 0x1.aabb88p0, -0x1.735e1ap-7, 0x1.f992dap-2, 0x1.44c5d4p-1, 0x1.caed44p-1, -0x1.b8a114p0, -0x1.23bf58p0, -0x1.5d3db4p-2, -0x1.e58a74p-1, -0x1.2dbaap-4, 0x1.739b16p-1, 0x1.183a12p-4, -0x1.872bbap-1, 0x1.3c5b2p-1, 0x1.b4cf4ap0, 0x1.125268p0, 0x1.f644bep-1, 0x1.923d92p0, -0x1.b3fbecp0, 0x1.9dd51p-1, 0x1.d85f44p0, 0x1.64e54ep0, 0x1.774fd4p-1, 0x1.4344bp-5, 0x1.9c8ac2p0, -0x1.fcb924p-2, 0x1.b0c338p-1, -0x1.a1db28p-2, 0x1.1de8b8p0, -0x1.9ee1ep0, 0x1.db17c4p-2, -0x1.5f3c18p-2, 0x1.00299ep0, -0x1.ef110cp-2 };
l_struct_OC_k2c_tensor keras_dense_test7;
float keras_dense_test9_array[10] = { 0x1.e8486p-7, 0x1.79c9c8p-3, 0x1.a0d344p-2, 0x1.bf20dap-5, 0x1.57881ep-4, 0x1.8b10e8p-5, 0x1.ff5d08p-5, 0x1.6b8eb6p-4, 0x1.7c3f84p-5, 0x1.30c30ap-7 };
l_struct_OC_k2c_tensor c_dense_test9;
float c_dense_test10_array[10];
static  char aesl_internal__OC_str1[38] = "Max absolute error for 10 tests: %e \n";
float keras_dense_test7_array[10] = { 0x1.fdeadcp-5, 0x1.2b34dcp-5, 0x1.80a3f8p-5, 0x1.9c7156p-2, 0x1.a81984p-6, 0x1.09d538p-4, 0x1.1245cap-5, 0x1.761d34p-5, 0x1.44863ep-3, 0x1.f83f36p-4 };
l_struct_OC_k2c_tensor keras_dense_test10;
float keras_dense_test8_array[10] = { 0x1.056f1cp-9, 0x1.74ee24p-11, 0x1.aaccep-1, 0x1.69f4c4p-6, 0x1.74a16ap-9, 0x1.53254ap-16, 0x1.74587p-12, 0x1.46ebd8p-11, 0x1.1a1ba4p-3, 0x1.2c3cp-16 };
float test10_input_1_input_array[784] = { 0x1.d3dbb6p-1, -0x1.cddfe4p-2, 0x1.626102p-1, -0x1.4adfdcp-1, -0x1.0e080cp-1, 0x1.0ae5ccp0, -0x1.609cep-1, 0x1.c1dc5ep-2, -0x1.185d8ap0, -0x1.2cc30cp-1, -0x1.b3bf4cp0, 0x1.b92e0cp0, 0x1.ef3ebcp-1, -0x1.8670b4p-1, 0x1.1a4d1p0, -0x1.ea621ep-1, -0x1.bb62fp0, -0x1.890eccp-1, 0x1.8025ccp0, 0x1.57c8dep0, -0x1.b4429ap-1, -0x1.c8255ap0, -0x1.ac0a1p0, 0x1.95efe2p-2, 0x1.e8564cp-1, 0x1.224076p0, -0x1.f81p-2, -0x1.8197fep0, 0x1.6dc116p-1, 0x1.8cec8ap-1, -0x1.f04cbp0, -0x1.80fe48p0, 0x1.298b76p-1, -0x1.2c2148p0, -0x1.8651bap-1, -0x1.97eeap0, -0x1.9055ep0, -0x1.b98efcp-1, -0x1.0a8904p-1, 0x1.5e98f2p0, -0x1.b436ep0, -0x1.ee0286p0, -0x1.08048p-4, -0x1.85659ep-5, -0x1.13e054p0, -0x1.3837dcp0, -0x1.9aaad2p0, -0x1.635b3ep-1, 0x1.55020ep-2, -0x1.fbfd06p-1, 0x1.42b65p0, -0x1.9badb2p0, 0x1.3039aap-1, -0x1.ef534ap-3, 0x1.5ffa88p-1, 0x1.fd807cp0, -0x1.88024p-1, -0x1.510f9ep0, 0x1.601636p0, -0x1.7afceap0, 0x1.28232ap0, 0x1.43ec42p0, 0x1.119584p-5, 0x1.48741cp-3, -0x1.f708aap0, 0x1.8e8c3cp0, 0x1.039be6p-1, 0x1.41ac3p0, 0x1.119996p-2, 0x1.8ae0ap-1, -0x1.d2ad68p-1, 0x1.19f392p0, 0x1.21d11p0, -0x1.4a2efcp0, -0x1.2a625ap-6, -0x1.6b5762p0, 0x1.edba84p0, -0x1.82ae86p-2, 0x1.352d96p-4, 0x1.73b9ep0, -0x1.368cb2p0, -0x1.33431ep-2, 0x1.d2076ap-3, 0x1.872e4p0, -0x1.862af6p-1, 0x1.2b964cp-1, -0x1.c60a4ep0, 0x1.5e1964p0, -0x1.ebccbep-2, 0x1.c0af76p0, -0x1.32bf04p-1, 0x1.6f91ep0, 0x1.78e3d6p0, -0x1.1e69aap-1, -0x1.1b57f4p0, -0x1.66ea9ap-2, 0x1.1cba36p-2, -0x1.ae9a7cp0, -0x1.9bdd2p-7, 0x1.3c0814p-1, -0x1.19fe9ap0, 0x1.a23ce6p-1, 0x1.e95134p0, 0x1.ed2576p0, 0x1.d98e94p-4, 0x1.c2df0cp-1, 0x1.658b92p-3, 0x1.5860a6p0, -0x1.36ec08p0, 0x1.988868p0, -0x1.8168e2p0, -0x1.0ec812p-3, -0x1.1116eep0, -0x1.9d07d6p0, -0x1.e3c4c8p0, -0x1.aee29cp-2, -0x1.564fb8p0, -0x1.a8b05p0, -0x1.dd6774p0, -0x1.74bf38p0, 0x1.c991c6p0, 0x1.daa90cp0, -0x1.bbfedep-1, 0x1.7b36fcp0, -0x1.a14072p0, 0x1.80acb6p0, -0x1.110454p-1, 0x1.6e398ep0, -0x1.d69a2p0, -0x1.d2b24ap-1, 0x1.dbb97ep0, -0x1.03bbb2p0, -0x1.61b764p0, -0x1.21704ep0, -0x1.d1a764p-2, -0x1.16e408p0, 0x1.40cf8ep0, 0x1.de75aep-1, 0x1.f660b8p0, 0x1.1b918ep0, -0x1.a5dab8p0, -0x1.9c928cp0, -0x1.252dcap-1, -0x1.fe7b1ep0, -0x1.91ec18p-3, 0x1.71d6c4p-4, 0x1.22172p0, -0x1.d5a8cp0, 0x1.4a36cap0, -0x1.a73864p0, -0x1.079782p-3, 0x1.4de1e4p-1, -0x1.ef4544p0, -0x1.f7ffdcp-1, -0x1.418348p-1, -0x1.3c1c94p-1, -0x1.a9b202p0, 0x1.c1a15p0, 0x1.3d25f8p0, 0x1.bfe22cp0, -0x1.80067ap0, 0x1.7ea114p-1, -0x1.2a2bd4p-8, 0x1.6ee9ap0, 0x1.bd67ap0, 0x1.92366ap0, -0x1.df2354p-1, -0x1.55f752p0, 0x1.acf04ap-1, 0x1.2ba8cp0, 0x1.2dea14p0, 0x1.81084p-2, -0x1.32d81ep-1, -0x1.13b88p0, -0x1.e3d66cp-1, 0x1.1c0942p-8, -0x1.160bbp0, 0x1.8f11bcp-2, 0x1.611b42p-2, 0x1.871398p0, -0x1.21ccb6p0, -0x1.bf53d6p-1, -0x1.e9dc14p-1, 0x1.cb527ap-1, 0x1.32422ap0, 0x1.f33158p-2, 0x1.36043ep-5, -0x1.81e04ep0, -0x1.baf946p-1, 0x1.6f788ep-1, -0x1.8ec89cp0, -0x1.a9570cp-1, -0x1.b939ecp0, 0x1.7183dep0, 0x1.6d0cap0, -0x1.1384bap0, -0x1.5cce8ep0, -0x1.e81fc4p-1, -0x1.081c3ep0, 0x1.d21e0ap-2, 0x1.8d9872p0, -0x1.eb96d8p-3, 0x1.3a0182p-1, 0x1.fc9292p-1, 0x1.a329c6p0, -0x1.0ca816p-3, -0x1.4dbb8cp0, -0x1.86daecp-2, 0x1.844784p-1, 0x1.7ffefp0, 0x1.fc4566p-1, 0x1.f30cfap0, 0x1.33072cp0, -0x1.a0c3b8p0, 0x1.2b98d2p-1, 0x1.169976p0, 0x1.92ec26p-1, 0x1.9b309ep-4, -0x1.7177c6p-1, -0x1.03a97cp0, 0x1.1c734cp-1, 0x1.eb9d78p0, -0x1.7a7d9ep-2, 0x1.03785ep0, 0x1.9758bap0, 0x1.6d61a4p0, -0x1.f331cp-1, 0x1.b06532p-1, 0x1.7f0cd6p0, 0x1.58a264p-1, 0x1.6b05c6p-2, -0x1.53fc5cp0, 0x1.92687ep-2, 0x1.274ef2p-1, -0x1.e2e80ep-1, 0x1.4ace1p-4, -0x1.dafaaep0, -0x1.7ff5c2p0, -0x1.f7f33ep-1, 0x1.ff9942p-1, -0x1.e8e8a8p-3, -0x1.f578aep0, -0x1.0f04d4p0, 0x1.fc5432p0, -0x1.fb3f6cp0, -0x1.7790aep0, 0x1.e00762p0, 0x1.9388b2p-3, -0x1.8837e2p0, -0x1.c6496p-1, -0x1.db4832p0, 0x1.742decp-1, 0x1.42d7e4p0, -0x1.8edbd4p0, 0x1.d9dab6p-1, 0x1.e62edap0, -0x1.b4d968p-1, -0x1.2e4526p0, 0x1.c3f8b4p0, -0x1.eff3ep-1, 0x1.7b44bcp0, 0x1.fe7b0ap-1, -0x1.43b8b2p-1, -0x1.69d014p-1, -0x1.d6af8ep-1, 0x1.33f73p-9, 0x1.69ff16p0, -0x1.a441a2p-1, -0x1.df4ca6p0, 0x1.beaab2p0, -0x1.5eb9c2p0, -0x1.d9a78cp0, 0x1.965dbep-2, 0x1.5b81fap-2, 0x1.346694p0, -0x1.4c32c8p0, -0x1.c5e4cap-2, -0x1.f9acap-1, 0x1.b4e6aap-3, -0x1.8a1886p0, 0x1.f9c838p-1, 0x1.027cc8p0, 0x1.61854ap-2, -0x1.d3c264p-1, 0x1.43357p0, -0x1.33a4dcp-10, 0x1.6478cap0, 0x1.b26f7p-1, -0x1.ecbe9p0, -0x1.57cc88p0, -0x1.26c132p0, 0x1.39287ep0, -0x1.ff956p-3, 0x1.483078p0, 0x1.ae749cp-4, 0x1.71ab1ep0, -0x1.29fea2p0, 0x1.ecf03cp-2, 0x1.39194cp-1, 0x1.aa7d1ep0, 0x1.33ad4ep0, -0x1.45f7bp0, -0x1.42e338p-3, -0x1.d5f2a4p0, 0x1.2d696ap0, -0x1.616104p0, -0x1.9a8218p-1, 0x1.b6c442p0, 0x1.ea338ap-5, 0x1.d148bcp-4, 0x1.e126f6p0, 0x1.10e042p0, -0x1.fbd98ap-2, 0x1.577904p-1, -0x1.4edb5ap0, 0x1.1229ep-1, 0x1.28409ep-1, 0x1.58e24ep0, 0x1.7a5b6ep0, 0x1.c84294p0, 0x1.4cb0f8p0, 0x1.4d7cbcp0, -0x1.83a14p-1, 0x1.c98a82p0, 0x1.684174p-3, -0x1.50410ap0, -0x1.a2aa5ap0, 0x1.411ed2p0, 0x1.950482p0, -0x1.7e9b24p-1, -0x1.e31f48p0, -0x1.633e2ep-3, -0x1.54a456p0, 0x1.8b2412p-2, -0x1.79c92ep-2, -0x1.7450eep-1, -0x1.867384p-2, 0x1.4e7a4ap0, -0x1.09c282p0, 0x1.baea4p0, 0x1.9da902p0, -0x1.9be582p0, -0x1.68fp-1, 0x1.340bbap-1, 0x1.4056b6p-3, -0x1.c55a72p0, 0x1.b494cap0, 0x1.e3e656p-1, -0x1.b99cc6p0, 0x1.88dabap-1, -0x1.7927c2p0, 0x1.6f4112p-1, -0x1.5a48a2p-1, 0x1.465b1ap0, 0x1.6b07cp-1, -0x1.91b7acp-2, -0x1.c4aaaap-2, -0x1.5f951p0, 0x1.8508e2p-3, -0x1.583668p0, 0x1.f461ep0, -0x1.df2296p-2, 0x1.cb179ap-3, 0x1.0b0826p-2, -0x1.aefeb6p-1, -0x1.ce0242p-2, -0x1.57673cp0, -0x1.472ebep-1, -0x1.f0a0f4p-3, -0x1.096b7ep0, -0x1.daee36p0, -0x1.7d8092p-3, -0x1.2b60b8p0, 0x1.1e8e72p-1, 0x1.ea928p-1, 0x1.33c4fep-1, 0x1.440792p0, 0x1.80fa58p-1, -0x1.2fe336p-2, -0x1.e89aeap0, 0x1.cfce5ap-1, 0x1.3eee2p-2, 0x1.d3317ap-2, 0x1.fd68ap-5, -0x1.139944p-1, 0x1.c7c184p0, -0x1.74e1b2p0, -0x1.155f74p-1, 0x1.7b9628p-2, -0x1.640faep0, -0x1.3bd508p0, 0x1.9a7e66p-1, -0x1.c30a52p-1, 0x1.7be03ap-3, 0x1.1f56c8p-1, 0x1.f5d1dp0, 0x1.78494p0, -0x1.f7dd08p-1, 0x1.8c39b2p0, 0x1.d2b1c2p-1, -0x1.9d5028p-2, 0x1.45116p0, -0x1.45e8f2p0, 0x1.6bbac2p0, -0x1.d928f4p-5, 0x1.8e4b36p-2, -0x1.b2549ep-1, -0x1.54b54ep-1, -0x1.c6ad78p0, 0x1.ea4008p-1, 0x1.264128p-1, 0x1.1374bap-1, 0x1.1d40fep0, -0x1.46402ap0, -0x1.10b67p0, -0x1.21462p-3, -0x1.fd2e44p-3, 0x1.aefe2p-1, -0x1.280c8cp0, -0x1.214ecp0, -0x1.fc7548p0, 0x1.c3bf72p0, 0x1.88e43cp-1, 0x1.c9c7fap-4, -0x1.862ae8p-1, 0x1.aa2d84p-1, 0x1.a50448p-1, 0x1.b2b528p-1, -0x1.af8a74p-1, -0x1.33e066p0, -0x1.de5ba2p0, 0x1.63e8dp0, -0x1.0d9f04p0, -0x1.0e0c22p-1, -0x1.42045ap-1, 0x1.5a74eap-3, 0x1.d241bep0, -0x1.e81f48p-3, 0x1.edd806p-2, -0x1.895436p0, -0x1.54df0ep-1, -0x1.894edep0, 0x1.ae8862p-1, 0x1.09478p-1, 0x1.51ae9ep-3, 0x1.08b316p-5, -0x1.02bca6p-1, 0x1.850c6ap0, 0x1.b92eap-4, 0x1.3a9ea8p-1, -0x1.96fcb8p-3, -0x1.2e0c4ep-1, -0x1.82c06p0, 0x1.49c62p-5, 0x1.315bccp-2, -0x1.d84e96p-1, 0x1.fb4aeep0, 0x1.be9786p0, 0x1.5ff874p0, -0x1.5ecffp0, 0x1.b5944ap-2, 0x1.9051eap0, -0x1.d02de2p0, 0x1.12a644p0, -0x1.de5406p0, 0x1.aa70bcp-2, 0x1.69f79ap-1, -0x1.ea1d5ap0, 0x1.6b2d0cp-1, -0x1.6443c4p0, -0x1.5e9832p0, 0x1.fffc52p-8, 0x1.b34e4p0, -0x1.b1fdacp-2, -0x1.33b666p-4, -0x1.d50938p-1, 0x1.69eb1ep-3, 0x1.3a0c7cp0, -0x1.5d9182p-2, 0x1.70cb3ep0, 0x1.ba3a46p-6, -0x1.576238p0, -0x1.d0294cp-1, -0x1.021554p0, 0x1.5cf2c4p0, 0x1.987f48p0, -0x1.156c94p-2, 0x1.c2d7c2p0, -0x1.94d806p-2, -0x1.1d198ep-1, -0x1.81fa5ep0, 0x1.996e82p0, 0x1.cf5f2p0, -0x1.7c468p-1, 0x1.fd8e38p-1, -0x1.610e8ap0, 0x1.236dfap0, -0x1.27f89p0, 0x1.8edd8p0, -0x1.050424p0, 0x1.c6cbbp0, -0x1.0502ccp-1, 0x1.b43638p0, 0x1.d8a9fep0, 0x1.91c16ap-2, 0x1.da098p-1, -0x1.3c7aacp-1, -0x1.33c5d4p0, -0x1.86ed42p0, 0x1.cde59ap-1, -0x1.8c5e04p0, -0x1.8078b2p-5, -0x1.796528p0, 0x1.d4475ap0, -0x1.0e5d18p-3, -0x1.c5089p-1, -0x1.9de5bep0, 0x1.99b722p-1, -0x1.4a977cp0, -0x1.633858p0, -0x1.0a141cp0, 0x1.b04dbap-1, 0x1.4adf52p0, -0x1.27435ap0, -0x1.32bb9p-1, -0x1.0941ap-2, -0x1.8450d2p0, 0x1.0b814p-4, 0x1.99f3c2p0, -0x1.24376ap-4, -0x1.aca642p-7, -0x1.b4a4d6p-1, 0x1.72870ap0, -0x1.8880d8p0, -0x1.2c4b38p-1, 0x1.3c151p0, -0x1.03f3p-3, -0x1.d09152p-7, 0x1.b1afc6p0, 0x1.78ec96p0, -0x1.1832aap-1, 0x1.51371ap0, 0x1.4dc51ap-1, 0x1.bd9afcp0, -0x1.d8a1f2p-1, 0x1.0486ecp0, -0x1.a343f4p0, -0x1.1aa23cp0, 0x1.774d04p0, 0x1.99b472p-8, -0x1.349ec4p0, 0x1.fd6e12p0, 0x1.4960c4p0, 0x1.d64118p-2, -0x1.83e5e4p0, -0x1.da7734p0, -0x1.729d44p0, 0x1.5fbcb6p0, -0x1.54f29ep0, 0x1.e0f72cp-1, -0x1.f73df2p-1, -0x1.872d5cp-1, -0x1.66b72ep-7, -0x1.b6c53p-1, 0x1.671d3cp0, -0x1.8fd89p0, 0x1.62f0d8p0, -0x1.06a404p-6, -0x1.b5f45ep-2, 0x1.93b234p0, -0x1.33efe4p-6, 0x1.3e8cep-6, -0x1.edf306p-1, 0x1.20cb52p0, 0x1.3d11ccp-1, -0x1.01b1dap0, -0x1.be83e4p-1, 0x1.3fdb7ep-2, 0x1.3a8384p-1, 0x1.ccee8p-3, 0x1.06165ap0, -0x1.6af518p0, -0x1.7802e6p-1, 0x1.01cb2ep0, 0x1.ee0df8p0, 0x1.462f0ap-1, 0x1.7d2c14p0, 0x1.29ff2ep0, 0x1.600b98p-3, -0x1.39148cp-2, -0x1.0cb0b6p0, -0x1.92d82ap0, 0x1.dfa5f4p-2, -0x1.412cap0, 0x1.7b94f4p-1, -0x1.9d2a32p0, 0x1.9862f4p0, 0x1.134e66p-1, 0x1.dcda2p0, 0x1.8be55ep0, -0x1.0cbb1p0, -0x1.0954a4p-2, -0x1.ea4cccp0, 0x1.303f64p0, -0x1.a2a8dp0, 0x1.c61c56p0, 0x1.f17ff2p-1, 0x1.9e2fe6p0, -0x1.71361ap0, -0x1.888e72p0, 0x1.4237f2p-1, -0x1.60e232p-2, 0x1.884fbp-1, -0x1.2403e8p0, 0x1.8031dap0, 0x1.fa0584p-1, 0x1.3f0256p-4, 0x1.c1c8aep0, -0x1.b105bp-2, -0x1.b9a3eep0, -0x1.4158e6p0, 0x1.a7bdb6p-2, -0x1.70a1b2p0, 0x1.805b14p0, -0x1.7b7b62p-2, 0x1.86cd14p-1, 0x1.afcdc6p0, 0x1.536aa8p-4, -0x1.96269ap-1, -0x1.7def74p-3, -0x1.e50a84p-1, -0x1.c594a2p0, 0x1.94cb06p0, -0x1.0a81dep-3, -0x1.97c954p0, 0x1.3539b4p0, 0x1.e31edcp0, 0x1.0205b8p0, -0x1.77fcbep0, -0x1.ff7336p-1, -0x1.00cadcp-1, 0x1.c0e954p0, -0x1.ba9fa6p0, -0x1.766ecp-1, 0x1.aad39cp-1, -0x1.e02918p-1, 0x1.7f02dap-3, -0x1.e86654p-2, -0x1.169b5ap0, 0x1.efbccp-1, 0x1.538f7ap0, 0x1.2ca50ep0, 0x1.a0da82p-1, 0x1.a14eccp0, -0x1.1b761ep-2, 0x1.e74636p0, -0x1.e098acp0, 0x1.c42ab4p-1, 0x1.971cp-1, 0x1.0a5da4p-1, 0x1.8f8de8p-2, 0x1.2f9ab8p-4, 0x1.315f8cp0, -0x1.e33bf6p0, -0x1.e706ccp0, 0x1.eadfdap-2, -0x1.87022cp0, -0x1.43441p-1, 0x1.889eb2p0, 0x1.65440ap-2, 0x1.85ad42p0, -0x1.f112f2p0, 0x1.369ea2p0, 0x1.2b3ef8p0, 0x1.78f9f8p-4, -0x1.e2a588p0, 0x1.22b45cp-2, 0x1.94e6d2p0, 0x1.27e21ep-1, -0x1.14f0b6p0, -0x1.948928p0, -0x1.7fa10ep0, -0x1.62228cp-2, -0x1.4ef36ep-3, -0x1.379ebap0, -0x1.44e084p-3, -0x1.b3fe5cp-1, -0x1.0b809ap0, 0x1.cb8afcp0, 0x1.115e8ap0, 0x1.941636p0, 0x1.c8a536p-3, 0x1.256e92p-1, -0x1.78b114p-1, -0x1.d70b24p-1, 0x1.6813fp-1, -0x1.f8bafap0, 0x1.610fb4p0, 0x1.ff66ap0, -0x1.988bacp-1, 0x1.61888p0, 0x1.ee77b4p0, 0x1.2a8124p-1, 0x1.ed5a5ep-2, 0x1.32cca4p0, 0x1.2d51dep-2, -0x1.4ec9fep0, -0x1.3d9124p-2, 0x1.726ab4p0, -0x1.d00ee2p-2, -0x1.c92634p0, -0x1.1b38c8p0, -0x1.33d084p0, -0x1.9b7858p0, -0x1.a10ffcp0, -0x1.0bf6b6p-2, -0x1.07506p-1, 0x1.1fa24p0, 0x1.a948c2p0, -0x1.3d3ac2p0, 0x1.e91506p0, 0x1.5a44dep-1, 0x1.4a838p-2, -0x1.e096e4p-3, 0x1.27431ep-4, 0x1.aedd9ap0, -0x1.87ea1p-1, 0x1.fe97fcp-2, 0x1.8d0dc2p-3, -0x1.55721ep0, -0x1.05118ep0, -0x1.ae7734p-5, 0x1.0f159p0, 0x1.b0c08p0, 0x1.9d5e52p0, 0x1.51c48ap-1, -0x1.4b21c8p0, -0x1.3296d2p0, 0x1.8aad24p-2, 0x1.292044p0, 0x1.4bfe1p-2, -0x1.205664p-2, 0x1.9e2f1cp0, -0x1.c4dbeep-1, 0x1.5e9e42p-2, 0x1.5ba3cap-3, -0x1.704542p-1, 0x1.39f2a4p0, 0x1.28b572p-3, 0x1.232814p0, 0x1.f97f0ap0, -0x1.603cf2p0, -0x1.9ec0eap0, 0x1.7a5e5ep-4, 0x1.350934p-2, -0x1.54a886p0, -0x1.61c3c4p0, 0x1.ef70a6p0, 0x1.d03586p0, 0x1.aa379p0, -0x1.c47e3cp0, 0x1.edb9b8p0, 0x1.81eeeep-1, -0x1.b7c93ap-2, 0x1.966148p-3, -0x1.aefd32p-1, -0x1.4d9bb6p-1, -0x1.ddfa66p-4, 0x1.314d7p0, -0x1.092226p0, 0x1.55028p-6, -0x1.d3ad0ep0, 0x1.6aff76p0, 0x1.431d8p-1, -0x1.260f7cp0, 0x1.cf5554p-3, 0x1.1a0fd4p0, -0x1.3fb0ecp-1, 0x1.61eec8p-1, 0x1.80f4e4p0, 0x1.62fae8p-1, 0x1.ed81ecp0, -0x1.453592p0, 0x1.d8736cp0 };
static  char aesl_internal__OC_str[35] = "Average time over 10 tests: %e s \n";


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

signed int main(void) {
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge62_count = 0;
  unsigned int llvm_cbe_storemerge62;
  unsigned int llvm_cbe_storemerge62__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  unsigned long long llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  float *llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  float llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  float *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  unsigned int llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond89_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  float llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  float llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  float llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  float llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  float llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  float llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  float llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  float llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  float llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  float llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  float llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  float llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  float llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  float llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  float llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  float llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  float llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  float llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  float llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  float llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge359_count = 0;
  unsigned int llvm_cbe_storemerge359;
  unsigned int llvm_cbe_storemerge359__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  unsigned long long llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  float *llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  float llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  float *llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  unsigned int llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond86_count = 0;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  float llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  float llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  float llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  float llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  float llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  float llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  float llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  float llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  float llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  float llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  float llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  float llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  float llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  float llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  float llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  float llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  float llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  float llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  float llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  float llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge656_count = 0;
  unsigned int llvm_cbe_storemerge656;
  unsigned int llvm_cbe_storemerge656__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  unsigned long long llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  float *llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  float llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  float *llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  unsigned int llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond83_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  float llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  float llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  float llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  float llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  float llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  float llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  float llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
  float llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  float llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  float llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  float llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  float llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  float llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  float llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  static  unsigned long long aesl_llvm_cbe_515_count = 0;
  static  unsigned long long aesl_llvm_cbe_516_count = 0;
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  float llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;
  static  unsigned long long aesl_llvm_cbe_521_count = 0;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
  float llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  float llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  float llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
  float llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;
  static  unsigned long long aesl_llvm_cbe_551_count = 0;
  static  unsigned long long aesl_llvm_cbe_552_count = 0;
  static  unsigned long long aesl_llvm_cbe_553_count = 0;
  static  unsigned long long aesl_llvm_cbe_554_count = 0;
  float llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_555_count = 0;
  static  unsigned long long aesl_llvm_cbe_556_count = 0;
  static  unsigned long long aesl_llvm_cbe_557_count = 0;
  static  unsigned long long aesl_llvm_cbe_558_count = 0;
  static  unsigned long long aesl_llvm_cbe_559_count = 0;
  static  unsigned long long aesl_llvm_cbe_560_count = 0;
  static  unsigned long long aesl_llvm_cbe_561_count = 0;
  static  unsigned long long aesl_llvm_cbe_562_count = 0;
  static  unsigned long long aesl_llvm_cbe_563_count = 0;
  static  unsigned long long aesl_llvm_cbe_564_count = 0;
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge953_count = 0;
  unsigned int llvm_cbe_storemerge953;
  unsigned int llvm_cbe_storemerge953__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  unsigned long long llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  float *llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  float llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  float *llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  unsigned int llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  static  unsigned long long aesl_llvm_cbe_583_count = 0;
  static  unsigned long long aesl_llvm_cbe_584_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond80_count = 0;
  static  unsigned long long aesl_llvm_cbe_585_count = 0;
  static  unsigned long long aesl_llvm_cbe_586_count = 0;
  static  unsigned long long aesl_llvm_cbe_587_count = 0;
  static  unsigned long long aesl_llvm_cbe_588_count = 0;
  static  unsigned long long aesl_llvm_cbe_589_count = 0;
  static  unsigned long long aesl_llvm_cbe_590_count = 0;
  static  unsigned long long aesl_llvm_cbe_591_count = 0;
  static  unsigned long long aesl_llvm_cbe_592_count = 0;
  static  unsigned long long aesl_llvm_cbe_593_count = 0;
  static  unsigned long long aesl_llvm_cbe_594_count = 0;
  static  unsigned long long aesl_llvm_cbe_595_count = 0;
  static  unsigned long long aesl_llvm_cbe_596_count = 0;
  static  unsigned long long aesl_llvm_cbe_597_count = 0;
  static  unsigned long long aesl_llvm_cbe_598_count = 0;
  float llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_599_count = 0;
  static  unsigned long long aesl_llvm_cbe_600_count = 0;
  static  unsigned long long aesl_llvm_cbe_601_count = 0;
  static  unsigned long long aesl_llvm_cbe_602_count = 0;
  static  unsigned long long aesl_llvm_cbe_603_count = 0;
  static  unsigned long long aesl_llvm_cbe_604_count = 0;
  static  unsigned long long aesl_llvm_cbe_605_count = 0;
  float llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_606_count = 0;
  static  unsigned long long aesl_llvm_cbe_607_count = 0;
  static  unsigned long long aesl_llvm_cbe_608_count = 0;
  static  unsigned long long aesl_llvm_cbe_609_count = 0;
  static  unsigned long long aesl_llvm_cbe_610_count = 0;
  static  unsigned long long aesl_llvm_cbe_611_count = 0;
  static  unsigned long long aesl_llvm_cbe_612_count = 0;
  float llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_613_count = 0;
  static  unsigned long long aesl_llvm_cbe_614_count = 0;
  static  unsigned long long aesl_llvm_cbe_615_count = 0;
  static  unsigned long long aesl_llvm_cbe_616_count = 0;
  static  unsigned long long aesl_llvm_cbe_617_count = 0;
  static  unsigned long long aesl_llvm_cbe_618_count = 0;
  static  unsigned long long aesl_llvm_cbe_619_count = 0;
  float llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_620_count = 0;
  static  unsigned long long aesl_llvm_cbe_621_count = 0;
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  static  unsigned long long aesl_llvm_cbe_623_count = 0;
  static  unsigned long long aesl_llvm_cbe_624_count = 0;
  static  unsigned long long aesl_llvm_cbe_625_count = 0;
  static  unsigned long long aesl_llvm_cbe_626_count = 0;
  float llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_627_count = 0;
  static  unsigned long long aesl_llvm_cbe_628_count = 0;
  static  unsigned long long aesl_llvm_cbe_629_count = 0;
  static  unsigned long long aesl_llvm_cbe_630_count = 0;
  static  unsigned long long aesl_llvm_cbe_631_count = 0;
  static  unsigned long long aesl_llvm_cbe_632_count = 0;
  static  unsigned long long aesl_llvm_cbe_633_count = 0;
  float llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_634_count = 0;
  static  unsigned long long aesl_llvm_cbe_635_count = 0;
  static  unsigned long long aesl_llvm_cbe_636_count = 0;
  static  unsigned long long aesl_llvm_cbe_637_count = 0;
  static  unsigned long long aesl_llvm_cbe_638_count = 0;
  static  unsigned long long aesl_llvm_cbe_639_count = 0;
  static  unsigned long long aesl_llvm_cbe_640_count = 0;
  float llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_641_count = 0;
  static  unsigned long long aesl_llvm_cbe_642_count = 0;
  static  unsigned long long aesl_llvm_cbe_643_count = 0;
  static  unsigned long long aesl_llvm_cbe_644_count = 0;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;
  static  unsigned long long aesl_llvm_cbe_646_count = 0;
  static  unsigned long long aesl_llvm_cbe_647_count = 0;
  float llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_648_count = 0;
  static  unsigned long long aesl_llvm_cbe_649_count = 0;
  static  unsigned long long aesl_llvm_cbe_650_count = 0;
  static  unsigned long long aesl_llvm_cbe_651_count = 0;
  static  unsigned long long aesl_llvm_cbe_652_count = 0;
  static  unsigned long long aesl_llvm_cbe_653_count = 0;
  static  unsigned long long aesl_llvm_cbe_654_count = 0;
  float llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_655_count = 0;
  static  unsigned long long aesl_llvm_cbe_656_count = 0;
  static  unsigned long long aesl_llvm_cbe_657_count = 0;
  static  unsigned long long aesl_llvm_cbe_658_count = 0;
  static  unsigned long long aesl_llvm_cbe_659_count = 0;
  static  unsigned long long aesl_llvm_cbe_660_count = 0;
  static  unsigned long long aesl_llvm_cbe_661_count = 0;
  float llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_662_count = 0;
  static  unsigned long long aesl_llvm_cbe_663_count = 0;
  static  unsigned long long aesl_llvm_cbe_664_count = 0;
  static  unsigned long long aesl_llvm_cbe_665_count = 0;
  static  unsigned long long aesl_llvm_cbe_666_count = 0;
  static  unsigned long long aesl_llvm_cbe_667_count = 0;
  static  unsigned long long aesl_llvm_cbe_668_count = 0;
  static  unsigned long long aesl_llvm_cbe_669_count = 0;
  static  unsigned long long aesl_llvm_cbe_670_count = 0;
  static  unsigned long long aesl_llvm_cbe_671_count = 0;
  static  unsigned long long aesl_llvm_cbe_672_count = 0;
  static  unsigned long long aesl_llvm_cbe_673_count = 0;
  static  unsigned long long aesl_llvm_cbe_674_count = 0;
  static  unsigned long long aesl_llvm_cbe_675_count = 0;
  static  unsigned long long aesl_llvm_cbe_676_count = 0;
  static  unsigned long long aesl_llvm_cbe_677_count = 0;
  static  unsigned long long aesl_llvm_cbe_678_count = 0;
  static  unsigned long long aesl_llvm_cbe_679_count = 0;
  static  unsigned long long aesl_llvm_cbe_680_count = 0;
  float llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_681_count = 0;
  static  unsigned long long aesl_llvm_cbe_682_count = 0;
  static  unsigned long long aesl_llvm_cbe_683_count = 0;
  static  unsigned long long aesl_llvm_cbe_684_count = 0;
  static  unsigned long long aesl_llvm_cbe_685_count = 0;
  static  unsigned long long aesl_llvm_cbe_686_count = 0;
  static  unsigned long long aesl_llvm_cbe_687_count = 0;
  float llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_688_count = 0;
  static  unsigned long long aesl_llvm_cbe_689_count = 0;
  static  unsigned long long aesl_llvm_cbe_690_count = 0;
  static  unsigned long long aesl_llvm_cbe_691_count = 0;
  static  unsigned long long aesl_llvm_cbe_692_count = 0;
  static  unsigned long long aesl_llvm_cbe_693_count = 0;
  static  unsigned long long aesl_llvm_cbe_694_count = 0;
  float llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_695_count = 0;
  static  unsigned long long aesl_llvm_cbe_696_count = 0;
  static  unsigned long long aesl_llvm_cbe_697_count = 0;
  static  unsigned long long aesl_llvm_cbe_698_count = 0;
  static  unsigned long long aesl_llvm_cbe_699_count = 0;
  static  unsigned long long aesl_llvm_cbe_700_count = 0;
  static  unsigned long long aesl_llvm_cbe_701_count = 0;
  float llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_702_count = 0;
  static  unsigned long long aesl_llvm_cbe_703_count = 0;
  static  unsigned long long aesl_llvm_cbe_704_count = 0;
  static  unsigned long long aesl_llvm_cbe_705_count = 0;
  static  unsigned long long aesl_llvm_cbe_706_count = 0;
  static  unsigned long long aesl_llvm_cbe_707_count = 0;
  static  unsigned long long aesl_llvm_cbe_708_count = 0;
  float llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_709_count = 0;
  static  unsigned long long aesl_llvm_cbe_710_count = 0;
  static  unsigned long long aesl_llvm_cbe_711_count = 0;
  static  unsigned long long aesl_llvm_cbe_712_count = 0;
  static  unsigned long long aesl_llvm_cbe_713_count = 0;
  static  unsigned long long aesl_llvm_cbe_714_count = 0;
  static  unsigned long long aesl_llvm_cbe_715_count = 0;
  float llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_716_count = 0;
  static  unsigned long long aesl_llvm_cbe_717_count = 0;
  static  unsigned long long aesl_llvm_cbe_718_count = 0;
  static  unsigned long long aesl_llvm_cbe_719_count = 0;
  static  unsigned long long aesl_llvm_cbe_720_count = 0;
  static  unsigned long long aesl_llvm_cbe_721_count = 0;
  static  unsigned long long aesl_llvm_cbe_722_count = 0;
  float llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_723_count = 0;
  static  unsigned long long aesl_llvm_cbe_724_count = 0;
  static  unsigned long long aesl_llvm_cbe_725_count = 0;
  static  unsigned long long aesl_llvm_cbe_726_count = 0;
  static  unsigned long long aesl_llvm_cbe_727_count = 0;
  static  unsigned long long aesl_llvm_cbe_728_count = 0;
  static  unsigned long long aesl_llvm_cbe_729_count = 0;
  float llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_730_count = 0;
  static  unsigned long long aesl_llvm_cbe_731_count = 0;
  static  unsigned long long aesl_llvm_cbe_732_count = 0;
  static  unsigned long long aesl_llvm_cbe_733_count = 0;
  static  unsigned long long aesl_llvm_cbe_734_count = 0;
  static  unsigned long long aesl_llvm_cbe_735_count = 0;
  static  unsigned long long aesl_llvm_cbe_736_count = 0;
  float llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_737_count = 0;
  static  unsigned long long aesl_llvm_cbe_738_count = 0;
  static  unsigned long long aesl_llvm_cbe_739_count = 0;
  static  unsigned long long aesl_llvm_cbe_740_count = 0;
  static  unsigned long long aesl_llvm_cbe_741_count = 0;
  static  unsigned long long aesl_llvm_cbe_742_count = 0;
  static  unsigned long long aesl_llvm_cbe_743_count = 0;
  float llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_744_count = 0;
  static  unsigned long long aesl_llvm_cbe_745_count = 0;
  static  unsigned long long aesl_llvm_cbe_746_count = 0;
  static  unsigned long long aesl_llvm_cbe_747_count = 0;
  static  unsigned long long aesl_llvm_cbe_748_count = 0;
  static  unsigned long long aesl_llvm_cbe_749_count = 0;
  static  unsigned long long aesl_llvm_cbe_750_count = 0;
  static  unsigned long long aesl_llvm_cbe_751_count = 0;
  static  unsigned long long aesl_llvm_cbe_752_count = 0;
  static  unsigned long long aesl_llvm_cbe_753_count = 0;
  static  unsigned long long aesl_llvm_cbe_754_count = 0;
  static  unsigned long long aesl_llvm_cbe_755_count = 0;
  static  unsigned long long aesl_llvm_cbe_756_count = 0;
  static  unsigned long long aesl_llvm_cbe_757_count = 0;
  static  unsigned long long aesl_llvm_cbe_758_count = 0;
  static  unsigned long long aesl_llvm_cbe_759_count = 0;
  static  unsigned long long aesl_llvm_cbe_760_count = 0;
  static  unsigned long long aesl_llvm_cbe_761_count = 0;
  static  unsigned long long aesl_llvm_cbe_762_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1250_count = 0;
  unsigned int llvm_cbe_storemerge1250;
  unsigned int llvm_cbe_storemerge1250__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_763_count = 0;
  unsigned long long llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_764_count = 0;
  float *llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_765_count = 0;
  float llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_766_count = 0;
  float *llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_767_count = 0;
  static  unsigned long long aesl_llvm_cbe_768_count = 0;
  unsigned int llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_769_count = 0;
  static  unsigned long long aesl_llvm_cbe_770_count = 0;
  static  unsigned long long aesl_llvm_cbe_771_count = 0;
  static  unsigned long long aesl_llvm_cbe_772_count = 0;
  static  unsigned long long aesl_llvm_cbe_773_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond77_count = 0;
  static  unsigned long long aesl_llvm_cbe_774_count = 0;
  static  unsigned long long aesl_llvm_cbe_775_count = 0;
  static  unsigned long long aesl_llvm_cbe_776_count = 0;
  static  unsigned long long aesl_llvm_cbe_777_count = 0;
  static  unsigned long long aesl_llvm_cbe_778_count = 0;
  static  unsigned long long aesl_llvm_cbe_779_count = 0;
  static  unsigned long long aesl_llvm_cbe_780_count = 0;
  static  unsigned long long aesl_llvm_cbe_781_count = 0;
  static  unsigned long long aesl_llvm_cbe_782_count = 0;
  static  unsigned long long aesl_llvm_cbe_783_count = 0;
  static  unsigned long long aesl_llvm_cbe_784_count = 0;
  static  unsigned long long aesl_llvm_cbe_785_count = 0;
  static  unsigned long long aesl_llvm_cbe_786_count = 0;
  static  unsigned long long aesl_llvm_cbe_787_count = 0;
  float llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_788_count = 0;
  static  unsigned long long aesl_llvm_cbe_789_count = 0;
  static  unsigned long long aesl_llvm_cbe_790_count = 0;
  static  unsigned long long aesl_llvm_cbe_791_count = 0;
  static  unsigned long long aesl_llvm_cbe_792_count = 0;
  static  unsigned long long aesl_llvm_cbe_793_count = 0;
  static  unsigned long long aesl_llvm_cbe_794_count = 0;
  float llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_795_count = 0;
  static  unsigned long long aesl_llvm_cbe_796_count = 0;
  static  unsigned long long aesl_llvm_cbe_797_count = 0;
  static  unsigned long long aesl_llvm_cbe_798_count = 0;
  static  unsigned long long aesl_llvm_cbe_799_count = 0;
  static  unsigned long long aesl_llvm_cbe_800_count = 0;
  static  unsigned long long aesl_llvm_cbe_801_count = 0;
  float llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_802_count = 0;
  static  unsigned long long aesl_llvm_cbe_803_count = 0;
  static  unsigned long long aesl_llvm_cbe_804_count = 0;
  static  unsigned long long aesl_llvm_cbe_805_count = 0;
  static  unsigned long long aesl_llvm_cbe_806_count = 0;
  static  unsigned long long aesl_llvm_cbe_807_count = 0;
  static  unsigned long long aesl_llvm_cbe_808_count = 0;
  float llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_809_count = 0;
  static  unsigned long long aesl_llvm_cbe_810_count = 0;
  static  unsigned long long aesl_llvm_cbe_811_count = 0;
  static  unsigned long long aesl_llvm_cbe_812_count = 0;
  static  unsigned long long aesl_llvm_cbe_813_count = 0;
  static  unsigned long long aesl_llvm_cbe_814_count = 0;
  static  unsigned long long aesl_llvm_cbe_815_count = 0;
  float llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_816_count = 0;
  static  unsigned long long aesl_llvm_cbe_817_count = 0;
  static  unsigned long long aesl_llvm_cbe_818_count = 0;
  static  unsigned long long aesl_llvm_cbe_819_count = 0;
  static  unsigned long long aesl_llvm_cbe_820_count = 0;
  static  unsigned long long aesl_llvm_cbe_821_count = 0;
  static  unsigned long long aesl_llvm_cbe_822_count = 0;
  float llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_823_count = 0;
  static  unsigned long long aesl_llvm_cbe_824_count = 0;
  static  unsigned long long aesl_llvm_cbe_825_count = 0;
  static  unsigned long long aesl_llvm_cbe_826_count = 0;
  static  unsigned long long aesl_llvm_cbe_827_count = 0;
  static  unsigned long long aesl_llvm_cbe_828_count = 0;
  static  unsigned long long aesl_llvm_cbe_829_count = 0;
  float llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_830_count = 0;
  static  unsigned long long aesl_llvm_cbe_831_count = 0;
  static  unsigned long long aesl_llvm_cbe_832_count = 0;
  static  unsigned long long aesl_llvm_cbe_833_count = 0;
  static  unsigned long long aesl_llvm_cbe_834_count = 0;
  static  unsigned long long aesl_llvm_cbe_835_count = 0;
  static  unsigned long long aesl_llvm_cbe_836_count = 0;
  float llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_837_count = 0;
  static  unsigned long long aesl_llvm_cbe_838_count = 0;
  static  unsigned long long aesl_llvm_cbe_839_count = 0;
  static  unsigned long long aesl_llvm_cbe_840_count = 0;
  static  unsigned long long aesl_llvm_cbe_841_count = 0;
  static  unsigned long long aesl_llvm_cbe_842_count = 0;
  static  unsigned long long aesl_llvm_cbe_843_count = 0;
  float llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_844_count = 0;
  static  unsigned long long aesl_llvm_cbe_845_count = 0;
  static  unsigned long long aesl_llvm_cbe_846_count = 0;
  static  unsigned long long aesl_llvm_cbe_847_count = 0;
  static  unsigned long long aesl_llvm_cbe_848_count = 0;
  static  unsigned long long aesl_llvm_cbe_849_count = 0;
  static  unsigned long long aesl_llvm_cbe_850_count = 0;
  float llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_851_count = 0;
  static  unsigned long long aesl_llvm_cbe_852_count = 0;
  static  unsigned long long aesl_llvm_cbe_853_count = 0;
  static  unsigned long long aesl_llvm_cbe_854_count = 0;
  static  unsigned long long aesl_llvm_cbe_855_count = 0;
  static  unsigned long long aesl_llvm_cbe_856_count = 0;
  static  unsigned long long aesl_llvm_cbe_857_count = 0;
  static  unsigned long long aesl_llvm_cbe_858_count = 0;
  static  unsigned long long aesl_llvm_cbe_859_count = 0;
  static  unsigned long long aesl_llvm_cbe_860_count = 0;
  static  unsigned long long aesl_llvm_cbe_861_count = 0;
  static  unsigned long long aesl_llvm_cbe_862_count = 0;
  static  unsigned long long aesl_llvm_cbe_863_count = 0;
  static  unsigned long long aesl_llvm_cbe_864_count = 0;
  static  unsigned long long aesl_llvm_cbe_865_count = 0;
  static  unsigned long long aesl_llvm_cbe_866_count = 0;
  static  unsigned long long aesl_llvm_cbe_867_count = 0;
  static  unsigned long long aesl_llvm_cbe_868_count = 0;
  static  unsigned long long aesl_llvm_cbe_869_count = 0;
  float llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_870_count = 0;
  static  unsigned long long aesl_llvm_cbe_871_count = 0;
  static  unsigned long long aesl_llvm_cbe_872_count = 0;
  static  unsigned long long aesl_llvm_cbe_873_count = 0;
  static  unsigned long long aesl_llvm_cbe_874_count = 0;
  static  unsigned long long aesl_llvm_cbe_875_count = 0;
  static  unsigned long long aesl_llvm_cbe_876_count = 0;
  float llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_877_count = 0;
  static  unsigned long long aesl_llvm_cbe_878_count = 0;
  static  unsigned long long aesl_llvm_cbe_879_count = 0;
  static  unsigned long long aesl_llvm_cbe_880_count = 0;
  static  unsigned long long aesl_llvm_cbe_881_count = 0;
  static  unsigned long long aesl_llvm_cbe_882_count = 0;
  static  unsigned long long aesl_llvm_cbe_883_count = 0;
  float llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_884_count = 0;
  static  unsigned long long aesl_llvm_cbe_885_count = 0;
  static  unsigned long long aesl_llvm_cbe_886_count = 0;
  static  unsigned long long aesl_llvm_cbe_887_count = 0;
  static  unsigned long long aesl_llvm_cbe_888_count = 0;
  static  unsigned long long aesl_llvm_cbe_889_count = 0;
  static  unsigned long long aesl_llvm_cbe_890_count = 0;
  float llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_891_count = 0;
  static  unsigned long long aesl_llvm_cbe_892_count = 0;
  static  unsigned long long aesl_llvm_cbe_893_count = 0;
  static  unsigned long long aesl_llvm_cbe_894_count = 0;
  static  unsigned long long aesl_llvm_cbe_895_count = 0;
  static  unsigned long long aesl_llvm_cbe_896_count = 0;
  static  unsigned long long aesl_llvm_cbe_897_count = 0;
  float llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_898_count = 0;
  static  unsigned long long aesl_llvm_cbe_899_count = 0;
  static  unsigned long long aesl_llvm_cbe_900_count = 0;
  static  unsigned long long aesl_llvm_cbe_901_count = 0;
  static  unsigned long long aesl_llvm_cbe_902_count = 0;
  static  unsigned long long aesl_llvm_cbe_903_count = 0;
  static  unsigned long long aesl_llvm_cbe_904_count = 0;
  float llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_905_count = 0;
  static  unsigned long long aesl_llvm_cbe_906_count = 0;
  static  unsigned long long aesl_llvm_cbe_907_count = 0;
  static  unsigned long long aesl_llvm_cbe_908_count = 0;
  static  unsigned long long aesl_llvm_cbe_909_count = 0;
  static  unsigned long long aesl_llvm_cbe_910_count = 0;
  static  unsigned long long aesl_llvm_cbe_911_count = 0;
  float llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_912_count = 0;
  static  unsigned long long aesl_llvm_cbe_913_count = 0;
  static  unsigned long long aesl_llvm_cbe_914_count = 0;
  static  unsigned long long aesl_llvm_cbe_915_count = 0;
  static  unsigned long long aesl_llvm_cbe_916_count = 0;
  static  unsigned long long aesl_llvm_cbe_917_count = 0;
  static  unsigned long long aesl_llvm_cbe_918_count = 0;
  float llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_919_count = 0;
  static  unsigned long long aesl_llvm_cbe_920_count = 0;
  static  unsigned long long aesl_llvm_cbe_921_count = 0;
  static  unsigned long long aesl_llvm_cbe_922_count = 0;
  static  unsigned long long aesl_llvm_cbe_923_count = 0;
  static  unsigned long long aesl_llvm_cbe_924_count = 0;
  static  unsigned long long aesl_llvm_cbe_925_count = 0;
  float llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_926_count = 0;
  static  unsigned long long aesl_llvm_cbe_927_count = 0;
  static  unsigned long long aesl_llvm_cbe_928_count = 0;
  static  unsigned long long aesl_llvm_cbe_929_count = 0;
  static  unsigned long long aesl_llvm_cbe_930_count = 0;
  static  unsigned long long aesl_llvm_cbe_931_count = 0;
  static  unsigned long long aesl_llvm_cbe_932_count = 0;
  float llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_933_count = 0;
  static  unsigned long long aesl_llvm_cbe_934_count = 0;
  static  unsigned long long aesl_llvm_cbe_935_count = 0;
  static  unsigned long long aesl_llvm_cbe_936_count = 0;
  static  unsigned long long aesl_llvm_cbe_937_count = 0;
  static  unsigned long long aesl_llvm_cbe_938_count = 0;
  static  unsigned long long aesl_llvm_cbe_939_count = 0;
  static  unsigned long long aesl_llvm_cbe_940_count = 0;
  static  unsigned long long aesl_llvm_cbe_941_count = 0;
  static  unsigned long long aesl_llvm_cbe_942_count = 0;
  static  unsigned long long aesl_llvm_cbe_943_count = 0;
  static  unsigned long long aesl_llvm_cbe_944_count = 0;
  static  unsigned long long aesl_llvm_cbe_945_count = 0;
  static  unsigned long long aesl_llvm_cbe_946_count = 0;
  static  unsigned long long aesl_llvm_cbe_947_count = 0;
  static  unsigned long long aesl_llvm_cbe_948_count = 0;
  static  unsigned long long aesl_llvm_cbe_949_count = 0;
  static  unsigned long long aesl_llvm_cbe_950_count = 0;
  static  unsigned long long aesl_llvm_cbe_951_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1547_count = 0;
  unsigned int llvm_cbe_storemerge1547;
  unsigned int llvm_cbe_storemerge1547__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_952_count = 0;
  unsigned long long llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_953_count = 0;
  float *llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_954_count = 0;
  float llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_955_count = 0;
  float *llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_956_count = 0;
  static  unsigned long long aesl_llvm_cbe_957_count = 0;
  unsigned int llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_958_count = 0;
  static  unsigned long long aesl_llvm_cbe_959_count = 0;
  static  unsigned long long aesl_llvm_cbe_960_count = 0;
  static  unsigned long long aesl_llvm_cbe_961_count = 0;
  static  unsigned long long aesl_llvm_cbe_962_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond74_count = 0;
  static  unsigned long long aesl_llvm_cbe_963_count = 0;
  static  unsigned long long aesl_llvm_cbe_964_count = 0;
  static  unsigned long long aesl_llvm_cbe_965_count = 0;
  static  unsigned long long aesl_llvm_cbe_966_count = 0;
  static  unsigned long long aesl_llvm_cbe_967_count = 0;
  static  unsigned long long aesl_llvm_cbe_968_count = 0;
  static  unsigned long long aesl_llvm_cbe_969_count = 0;
  static  unsigned long long aesl_llvm_cbe_970_count = 0;
  static  unsigned long long aesl_llvm_cbe_971_count = 0;
  static  unsigned long long aesl_llvm_cbe_972_count = 0;
  static  unsigned long long aesl_llvm_cbe_973_count = 0;
  static  unsigned long long aesl_llvm_cbe_974_count = 0;
  static  unsigned long long aesl_llvm_cbe_975_count = 0;
  static  unsigned long long aesl_llvm_cbe_976_count = 0;
  float llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_977_count = 0;
  static  unsigned long long aesl_llvm_cbe_978_count = 0;
  static  unsigned long long aesl_llvm_cbe_979_count = 0;
  static  unsigned long long aesl_llvm_cbe_980_count = 0;
  static  unsigned long long aesl_llvm_cbe_981_count = 0;
  static  unsigned long long aesl_llvm_cbe_982_count = 0;
  static  unsigned long long aesl_llvm_cbe_983_count = 0;
  float llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_984_count = 0;
  static  unsigned long long aesl_llvm_cbe_985_count = 0;
  static  unsigned long long aesl_llvm_cbe_986_count = 0;
  static  unsigned long long aesl_llvm_cbe_987_count = 0;
  static  unsigned long long aesl_llvm_cbe_988_count = 0;
  static  unsigned long long aesl_llvm_cbe_989_count = 0;
  static  unsigned long long aesl_llvm_cbe_990_count = 0;
  float llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_991_count = 0;
  static  unsigned long long aesl_llvm_cbe_992_count = 0;
  static  unsigned long long aesl_llvm_cbe_993_count = 0;
  static  unsigned long long aesl_llvm_cbe_994_count = 0;
  static  unsigned long long aesl_llvm_cbe_995_count = 0;
  static  unsigned long long aesl_llvm_cbe_996_count = 0;
  static  unsigned long long aesl_llvm_cbe_997_count = 0;
  float llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_998_count = 0;
  static  unsigned long long aesl_llvm_cbe_999_count = 0;
  static  unsigned long long aesl_llvm_cbe_1000_count = 0;
  static  unsigned long long aesl_llvm_cbe_1001_count = 0;
  static  unsigned long long aesl_llvm_cbe_1002_count = 0;
  static  unsigned long long aesl_llvm_cbe_1003_count = 0;
  static  unsigned long long aesl_llvm_cbe_1004_count = 0;
  float llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_1005_count = 0;
  static  unsigned long long aesl_llvm_cbe_1006_count = 0;
  static  unsigned long long aesl_llvm_cbe_1007_count = 0;
  static  unsigned long long aesl_llvm_cbe_1008_count = 0;
  static  unsigned long long aesl_llvm_cbe_1009_count = 0;
  static  unsigned long long aesl_llvm_cbe_1010_count = 0;
  static  unsigned long long aesl_llvm_cbe_1011_count = 0;
  float llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_1012_count = 0;
  static  unsigned long long aesl_llvm_cbe_1013_count = 0;
  static  unsigned long long aesl_llvm_cbe_1014_count = 0;
  static  unsigned long long aesl_llvm_cbe_1015_count = 0;
  static  unsigned long long aesl_llvm_cbe_1016_count = 0;
  static  unsigned long long aesl_llvm_cbe_1017_count = 0;
  static  unsigned long long aesl_llvm_cbe_1018_count = 0;
  float llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_1019_count = 0;
  static  unsigned long long aesl_llvm_cbe_1020_count = 0;
  static  unsigned long long aesl_llvm_cbe_1021_count = 0;
  static  unsigned long long aesl_llvm_cbe_1022_count = 0;
  static  unsigned long long aesl_llvm_cbe_1023_count = 0;
  static  unsigned long long aesl_llvm_cbe_1024_count = 0;
  static  unsigned long long aesl_llvm_cbe_1025_count = 0;
  float llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_1026_count = 0;
  static  unsigned long long aesl_llvm_cbe_1027_count = 0;
  static  unsigned long long aesl_llvm_cbe_1028_count = 0;
  static  unsigned long long aesl_llvm_cbe_1029_count = 0;
  static  unsigned long long aesl_llvm_cbe_1030_count = 0;
  static  unsigned long long aesl_llvm_cbe_1031_count = 0;
  static  unsigned long long aesl_llvm_cbe_1032_count = 0;
  float llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_1033_count = 0;
  static  unsigned long long aesl_llvm_cbe_1034_count = 0;
  static  unsigned long long aesl_llvm_cbe_1035_count = 0;
  static  unsigned long long aesl_llvm_cbe_1036_count = 0;
  static  unsigned long long aesl_llvm_cbe_1037_count = 0;
  static  unsigned long long aesl_llvm_cbe_1038_count = 0;
  static  unsigned long long aesl_llvm_cbe_1039_count = 0;
  float llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_1040_count = 0;
  static  unsigned long long aesl_llvm_cbe_1041_count = 0;
  static  unsigned long long aesl_llvm_cbe_1042_count = 0;
  static  unsigned long long aesl_llvm_cbe_1043_count = 0;
  static  unsigned long long aesl_llvm_cbe_1044_count = 0;
  static  unsigned long long aesl_llvm_cbe_1045_count = 0;
  static  unsigned long long aesl_llvm_cbe_1046_count = 0;
  static  unsigned long long aesl_llvm_cbe_1047_count = 0;
  static  unsigned long long aesl_llvm_cbe_1048_count = 0;
  static  unsigned long long aesl_llvm_cbe_1049_count = 0;
  static  unsigned long long aesl_llvm_cbe_1050_count = 0;
  static  unsigned long long aesl_llvm_cbe_1051_count = 0;
  static  unsigned long long aesl_llvm_cbe_1052_count = 0;
  static  unsigned long long aesl_llvm_cbe_1053_count = 0;
  static  unsigned long long aesl_llvm_cbe_1054_count = 0;
  static  unsigned long long aesl_llvm_cbe_1055_count = 0;
  static  unsigned long long aesl_llvm_cbe_1056_count = 0;
  static  unsigned long long aesl_llvm_cbe_1057_count = 0;
  static  unsigned long long aesl_llvm_cbe_1058_count = 0;
  float llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_1059_count = 0;
  static  unsigned long long aesl_llvm_cbe_1060_count = 0;
  static  unsigned long long aesl_llvm_cbe_1061_count = 0;
  static  unsigned long long aesl_llvm_cbe_1062_count = 0;
  static  unsigned long long aesl_llvm_cbe_1063_count = 0;
  static  unsigned long long aesl_llvm_cbe_1064_count = 0;
  static  unsigned long long aesl_llvm_cbe_1065_count = 0;
  float llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_1066_count = 0;
  static  unsigned long long aesl_llvm_cbe_1067_count = 0;
  static  unsigned long long aesl_llvm_cbe_1068_count = 0;
  static  unsigned long long aesl_llvm_cbe_1069_count = 0;
  static  unsigned long long aesl_llvm_cbe_1070_count = 0;
  static  unsigned long long aesl_llvm_cbe_1071_count = 0;
  static  unsigned long long aesl_llvm_cbe_1072_count = 0;
  float llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_1073_count = 0;
  static  unsigned long long aesl_llvm_cbe_1074_count = 0;
  static  unsigned long long aesl_llvm_cbe_1075_count = 0;
  static  unsigned long long aesl_llvm_cbe_1076_count = 0;
  static  unsigned long long aesl_llvm_cbe_1077_count = 0;
  static  unsigned long long aesl_llvm_cbe_1078_count = 0;
  static  unsigned long long aesl_llvm_cbe_1079_count = 0;
  float llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_1080_count = 0;
  static  unsigned long long aesl_llvm_cbe_1081_count = 0;
  static  unsigned long long aesl_llvm_cbe_1082_count = 0;
  static  unsigned long long aesl_llvm_cbe_1083_count = 0;
  static  unsigned long long aesl_llvm_cbe_1084_count = 0;
  static  unsigned long long aesl_llvm_cbe_1085_count = 0;
  static  unsigned long long aesl_llvm_cbe_1086_count = 0;
  float llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_1087_count = 0;
  static  unsigned long long aesl_llvm_cbe_1088_count = 0;
  static  unsigned long long aesl_llvm_cbe_1089_count = 0;
  static  unsigned long long aesl_llvm_cbe_1090_count = 0;
  static  unsigned long long aesl_llvm_cbe_1091_count = 0;
  static  unsigned long long aesl_llvm_cbe_1092_count = 0;
  static  unsigned long long aesl_llvm_cbe_1093_count = 0;
  float llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_1094_count = 0;
  static  unsigned long long aesl_llvm_cbe_1095_count = 0;
  static  unsigned long long aesl_llvm_cbe_1096_count = 0;
  static  unsigned long long aesl_llvm_cbe_1097_count = 0;
  static  unsigned long long aesl_llvm_cbe_1098_count = 0;
  static  unsigned long long aesl_llvm_cbe_1099_count = 0;
  static  unsigned long long aesl_llvm_cbe_1100_count = 0;
  float llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_1101_count = 0;
  static  unsigned long long aesl_llvm_cbe_1102_count = 0;
  static  unsigned long long aesl_llvm_cbe_1103_count = 0;
  static  unsigned long long aesl_llvm_cbe_1104_count = 0;
  static  unsigned long long aesl_llvm_cbe_1105_count = 0;
  static  unsigned long long aesl_llvm_cbe_1106_count = 0;
  static  unsigned long long aesl_llvm_cbe_1107_count = 0;
  float llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_1108_count = 0;
  static  unsigned long long aesl_llvm_cbe_1109_count = 0;
  static  unsigned long long aesl_llvm_cbe_1110_count = 0;
  static  unsigned long long aesl_llvm_cbe_1111_count = 0;
  static  unsigned long long aesl_llvm_cbe_1112_count = 0;
  static  unsigned long long aesl_llvm_cbe_1113_count = 0;
  static  unsigned long long aesl_llvm_cbe_1114_count = 0;
  float llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_1115_count = 0;
  static  unsigned long long aesl_llvm_cbe_1116_count = 0;
  static  unsigned long long aesl_llvm_cbe_1117_count = 0;
  static  unsigned long long aesl_llvm_cbe_1118_count = 0;
  static  unsigned long long aesl_llvm_cbe_1119_count = 0;
  static  unsigned long long aesl_llvm_cbe_1120_count = 0;
  static  unsigned long long aesl_llvm_cbe_1121_count = 0;
  float llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_1122_count = 0;
  static  unsigned long long aesl_llvm_cbe_1123_count = 0;
  static  unsigned long long aesl_llvm_cbe_1124_count = 0;
  static  unsigned long long aesl_llvm_cbe_1125_count = 0;
  static  unsigned long long aesl_llvm_cbe_1126_count = 0;
  static  unsigned long long aesl_llvm_cbe_1127_count = 0;
  static  unsigned long long aesl_llvm_cbe_1128_count = 0;
  static  unsigned long long aesl_llvm_cbe_1129_count = 0;
  static  unsigned long long aesl_llvm_cbe_1130_count = 0;
  static  unsigned long long aesl_llvm_cbe_1131_count = 0;
  static  unsigned long long aesl_llvm_cbe_1132_count = 0;
  static  unsigned long long aesl_llvm_cbe_1133_count = 0;
  static  unsigned long long aesl_llvm_cbe_1134_count = 0;
  static  unsigned long long aesl_llvm_cbe_1135_count = 0;
  static  unsigned long long aesl_llvm_cbe_1136_count = 0;
  static  unsigned long long aesl_llvm_cbe_1137_count = 0;
  static  unsigned long long aesl_llvm_cbe_1138_count = 0;
  static  unsigned long long aesl_llvm_cbe_1139_count = 0;
  static  unsigned long long aesl_llvm_cbe_1140_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1844_count = 0;
  unsigned int llvm_cbe_storemerge1844;
  unsigned int llvm_cbe_storemerge1844__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1141_count = 0;
  unsigned long long llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_1142_count = 0;
  float *llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_1143_count = 0;
  float llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe_1144_count = 0;
  float *llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_1145_count = 0;
  static  unsigned long long aesl_llvm_cbe_1146_count = 0;
  unsigned int llvm_cbe_tmp__155;
  static  unsigned long long aesl_llvm_cbe_1147_count = 0;
  static  unsigned long long aesl_llvm_cbe_1148_count = 0;
  static  unsigned long long aesl_llvm_cbe_1149_count = 0;
  static  unsigned long long aesl_llvm_cbe_1150_count = 0;
  static  unsigned long long aesl_llvm_cbe_1151_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond71_count = 0;
  static  unsigned long long aesl_llvm_cbe_1152_count = 0;
  static  unsigned long long aesl_llvm_cbe_1153_count = 0;
  static  unsigned long long aesl_llvm_cbe_1154_count = 0;
  static  unsigned long long aesl_llvm_cbe_1155_count = 0;
  static  unsigned long long aesl_llvm_cbe_1156_count = 0;
  static  unsigned long long aesl_llvm_cbe_1157_count = 0;
  static  unsigned long long aesl_llvm_cbe_1158_count = 0;
  static  unsigned long long aesl_llvm_cbe_1159_count = 0;
  static  unsigned long long aesl_llvm_cbe_1160_count = 0;
  static  unsigned long long aesl_llvm_cbe_1161_count = 0;
  static  unsigned long long aesl_llvm_cbe_1162_count = 0;
  static  unsigned long long aesl_llvm_cbe_1163_count = 0;
  static  unsigned long long aesl_llvm_cbe_1164_count = 0;
  static  unsigned long long aesl_llvm_cbe_1165_count = 0;
  float llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_1166_count = 0;
  static  unsigned long long aesl_llvm_cbe_1167_count = 0;
  static  unsigned long long aesl_llvm_cbe_1168_count = 0;
  static  unsigned long long aesl_llvm_cbe_1169_count = 0;
  static  unsigned long long aesl_llvm_cbe_1170_count = 0;
  static  unsigned long long aesl_llvm_cbe_1171_count = 0;
  static  unsigned long long aesl_llvm_cbe_1172_count = 0;
  float llvm_cbe_tmp__157;
  static  unsigned long long aesl_llvm_cbe_1173_count = 0;
  static  unsigned long long aesl_llvm_cbe_1174_count = 0;
  static  unsigned long long aesl_llvm_cbe_1175_count = 0;
  static  unsigned long long aesl_llvm_cbe_1176_count = 0;
  static  unsigned long long aesl_llvm_cbe_1177_count = 0;
  static  unsigned long long aesl_llvm_cbe_1178_count = 0;
  static  unsigned long long aesl_llvm_cbe_1179_count = 0;
  float llvm_cbe_tmp__158;
  static  unsigned long long aesl_llvm_cbe_1180_count = 0;
  static  unsigned long long aesl_llvm_cbe_1181_count = 0;
  static  unsigned long long aesl_llvm_cbe_1182_count = 0;
  static  unsigned long long aesl_llvm_cbe_1183_count = 0;
  static  unsigned long long aesl_llvm_cbe_1184_count = 0;
  static  unsigned long long aesl_llvm_cbe_1185_count = 0;
  static  unsigned long long aesl_llvm_cbe_1186_count = 0;
  float llvm_cbe_tmp__159;
  static  unsigned long long aesl_llvm_cbe_1187_count = 0;
  static  unsigned long long aesl_llvm_cbe_1188_count = 0;
  static  unsigned long long aesl_llvm_cbe_1189_count = 0;
  static  unsigned long long aesl_llvm_cbe_1190_count = 0;
  static  unsigned long long aesl_llvm_cbe_1191_count = 0;
  static  unsigned long long aesl_llvm_cbe_1192_count = 0;
  static  unsigned long long aesl_llvm_cbe_1193_count = 0;
  float llvm_cbe_tmp__160;
  static  unsigned long long aesl_llvm_cbe_1194_count = 0;
  static  unsigned long long aesl_llvm_cbe_1195_count = 0;
  static  unsigned long long aesl_llvm_cbe_1196_count = 0;
  static  unsigned long long aesl_llvm_cbe_1197_count = 0;
  static  unsigned long long aesl_llvm_cbe_1198_count = 0;
  static  unsigned long long aesl_llvm_cbe_1199_count = 0;
  static  unsigned long long aesl_llvm_cbe_1200_count = 0;
  float llvm_cbe_tmp__161;
  static  unsigned long long aesl_llvm_cbe_1201_count = 0;
  static  unsigned long long aesl_llvm_cbe_1202_count = 0;
  static  unsigned long long aesl_llvm_cbe_1203_count = 0;
  static  unsigned long long aesl_llvm_cbe_1204_count = 0;
  static  unsigned long long aesl_llvm_cbe_1205_count = 0;
  static  unsigned long long aesl_llvm_cbe_1206_count = 0;
  static  unsigned long long aesl_llvm_cbe_1207_count = 0;
  float llvm_cbe_tmp__162;
  static  unsigned long long aesl_llvm_cbe_1208_count = 0;
  static  unsigned long long aesl_llvm_cbe_1209_count = 0;
  static  unsigned long long aesl_llvm_cbe_1210_count = 0;
  static  unsigned long long aesl_llvm_cbe_1211_count = 0;
  static  unsigned long long aesl_llvm_cbe_1212_count = 0;
  static  unsigned long long aesl_llvm_cbe_1213_count = 0;
  static  unsigned long long aesl_llvm_cbe_1214_count = 0;
  float llvm_cbe_tmp__163;
  static  unsigned long long aesl_llvm_cbe_1215_count = 0;
  static  unsigned long long aesl_llvm_cbe_1216_count = 0;
  static  unsigned long long aesl_llvm_cbe_1217_count = 0;
  static  unsigned long long aesl_llvm_cbe_1218_count = 0;
  static  unsigned long long aesl_llvm_cbe_1219_count = 0;
  static  unsigned long long aesl_llvm_cbe_1220_count = 0;
  static  unsigned long long aesl_llvm_cbe_1221_count = 0;
  float llvm_cbe_tmp__164;
  static  unsigned long long aesl_llvm_cbe_1222_count = 0;
  static  unsigned long long aesl_llvm_cbe_1223_count = 0;
  static  unsigned long long aesl_llvm_cbe_1224_count = 0;
  static  unsigned long long aesl_llvm_cbe_1225_count = 0;
  static  unsigned long long aesl_llvm_cbe_1226_count = 0;
  static  unsigned long long aesl_llvm_cbe_1227_count = 0;
  static  unsigned long long aesl_llvm_cbe_1228_count = 0;
  float llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe_1229_count = 0;
  static  unsigned long long aesl_llvm_cbe_1230_count = 0;
  static  unsigned long long aesl_llvm_cbe_1231_count = 0;
  static  unsigned long long aesl_llvm_cbe_1232_count = 0;
  static  unsigned long long aesl_llvm_cbe_1233_count = 0;
  static  unsigned long long aesl_llvm_cbe_1234_count = 0;
  static  unsigned long long aesl_llvm_cbe_1235_count = 0;
  static  unsigned long long aesl_llvm_cbe_1236_count = 0;
  static  unsigned long long aesl_llvm_cbe_1237_count = 0;
  static  unsigned long long aesl_llvm_cbe_1238_count = 0;
  static  unsigned long long aesl_llvm_cbe_1239_count = 0;
  static  unsigned long long aesl_llvm_cbe_1240_count = 0;
  static  unsigned long long aesl_llvm_cbe_1241_count = 0;
  static  unsigned long long aesl_llvm_cbe_1242_count = 0;
  static  unsigned long long aesl_llvm_cbe_1243_count = 0;
  static  unsigned long long aesl_llvm_cbe_1244_count = 0;
  static  unsigned long long aesl_llvm_cbe_1245_count = 0;
  static  unsigned long long aesl_llvm_cbe_1246_count = 0;
  static  unsigned long long aesl_llvm_cbe_1247_count = 0;
  float llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_1248_count = 0;
  static  unsigned long long aesl_llvm_cbe_1249_count = 0;
  static  unsigned long long aesl_llvm_cbe_1250_count = 0;
  static  unsigned long long aesl_llvm_cbe_1251_count = 0;
  static  unsigned long long aesl_llvm_cbe_1252_count = 0;
  static  unsigned long long aesl_llvm_cbe_1253_count = 0;
  static  unsigned long long aesl_llvm_cbe_1254_count = 0;
  float llvm_cbe_tmp__167;
  static  unsigned long long aesl_llvm_cbe_1255_count = 0;
  static  unsigned long long aesl_llvm_cbe_1256_count = 0;
  static  unsigned long long aesl_llvm_cbe_1257_count = 0;
  static  unsigned long long aesl_llvm_cbe_1258_count = 0;
  static  unsigned long long aesl_llvm_cbe_1259_count = 0;
  static  unsigned long long aesl_llvm_cbe_1260_count = 0;
  static  unsigned long long aesl_llvm_cbe_1261_count = 0;
  float llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_1262_count = 0;
  static  unsigned long long aesl_llvm_cbe_1263_count = 0;
  static  unsigned long long aesl_llvm_cbe_1264_count = 0;
  static  unsigned long long aesl_llvm_cbe_1265_count = 0;
  static  unsigned long long aesl_llvm_cbe_1266_count = 0;
  static  unsigned long long aesl_llvm_cbe_1267_count = 0;
  static  unsigned long long aesl_llvm_cbe_1268_count = 0;
  float llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_1269_count = 0;
  static  unsigned long long aesl_llvm_cbe_1270_count = 0;
  static  unsigned long long aesl_llvm_cbe_1271_count = 0;
  static  unsigned long long aesl_llvm_cbe_1272_count = 0;
  static  unsigned long long aesl_llvm_cbe_1273_count = 0;
  static  unsigned long long aesl_llvm_cbe_1274_count = 0;
  static  unsigned long long aesl_llvm_cbe_1275_count = 0;
  float llvm_cbe_tmp__170;
  static  unsigned long long aesl_llvm_cbe_1276_count = 0;
  static  unsigned long long aesl_llvm_cbe_1277_count = 0;
  static  unsigned long long aesl_llvm_cbe_1278_count = 0;
  static  unsigned long long aesl_llvm_cbe_1279_count = 0;
  static  unsigned long long aesl_llvm_cbe_1280_count = 0;
  static  unsigned long long aesl_llvm_cbe_1281_count = 0;
  static  unsigned long long aesl_llvm_cbe_1282_count = 0;
  float llvm_cbe_tmp__171;
  static  unsigned long long aesl_llvm_cbe_1283_count = 0;
  static  unsigned long long aesl_llvm_cbe_1284_count = 0;
  static  unsigned long long aesl_llvm_cbe_1285_count = 0;
  static  unsigned long long aesl_llvm_cbe_1286_count = 0;
  static  unsigned long long aesl_llvm_cbe_1287_count = 0;
  static  unsigned long long aesl_llvm_cbe_1288_count = 0;
  static  unsigned long long aesl_llvm_cbe_1289_count = 0;
  float llvm_cbe_tmp__172;
  static  unsigned long long aesl_llvm_cbe_1290_count = 0;
  static  unsigned long long aesl_llvm_cbe_1291_count = 0;
  static  unsigned long long aesl_llvm_cbe_1292_count = 0;
  static  unsigned long long aesl_llvm_cbe_1293_count = 0;
  static  unsigned long long aesl_llvm_cbe_1294_count = 0;
  static  unsigned long long aesl_llvm_cbe_1295_count = 0;
  static  unsigned long long aesl_llvm_cbe_1296_count = 0;
  float llvm_cbe_tmp__173;
  static  unsigned long long aesl_llvm_cbe_1297_count = 0;
  static  unsigned long long aesl_llvm_cbe_1298_count = 0;
  static  unsigned long long aesl_llvm_cbe_1299_count = 0;
  static  unsigned long long aesl_llvm_cbe_1300_count = 0;
  static  unsigned long long aesl_llvm_cbe_1301_count = 0;
  static  unsigned long long aesl_llvm_cbe_1302_count = 0;
  static  unsigned long long aesl_llvm_cbe_1303_count = 0;
  float llvm_cbe_tmp__174;
  static  unsigned long long aesl_llvm_cbe_1304_count = 0;
  static  unsigned long long aesl_llvm_cbe_1305_count = 0;
  static  unsigned long long aesl_llvm_cbe_1306_count = 0;
  static  unsigned long long aesl_llvm_cbe_1307_count = 0;
  static  unsigned long long aesl_llvm_cbe_1308_count = 0;
  static  unsigned long long aesl_llvm_cbe_1309_count = 0;
  static  unsigned long long aesl_llvm_cbe_1310_count = 0;
  float llvm_cbe_tmp__175;
  static  unsigned long long aesl_llvm_cbe_1311_count = 0;
  static  unsigned long long aesl_llvm_cbe_1312_count = 0;
  static  unsigned long long aesl_llvm_cbe_1313_count = 0;
  static  unsigned long long aesl_llvm_cbe_1314_count = 0;
  static  unsigned long long aesl_llvm_cbe_1315_count = 0;
  static  unsigned long long aesl_llvm_cbe_1316_count = 0;
  static  unsigned long long aesl_llvm_cbe_1317_count = 0;
  static  unsigned long long aesl_llvm_cbe_1318_count = 0;
  static  unsigned long long aesl_llvm_cbe_1319_count = 0;
  static  unsigned long long aesl_llvm_cbe_1320_count = 0;
  static  unsigned long long aesl_llvm_cbe_1321_count = 0;
  static  unsigned long long aesl_llvm_cbe_1322_count = 0;
  static  unsigned long long aesl_llvm_cbe_1323_count = 0;
  static  unsigned long long aesl_llvm_cbe_1324_count = 0;
  static  unsigned long long aesl_llvm_cbe_1325_count = 0;
  static  unsigned long long aesl_llvm_cbe_1326_count = 0;
  static  unsigned long long aesl_llvm_cbe_1327_count = 0;
  static  unsigned long long aesl_llvm_cbe_1328_count = 0;
  static  unsigned long long aesl_llvm_cbe_1329_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge2141_count = 0;
  unsigned int llvm_cbe_storemerge2141;
  unsigned int llvm_cbe_storemerge2141__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1330_count = 0;
  unsigned long long llvm_cbe_tmp__176;
  static  unsigned long long aesl_llvm_cbe_1331_count = 0;
  float *llvm_cbe_tmp__177;
  static  unsigned long long aesl_llvm_cbe_1332_count = 0;
  float llvm_cbe_tmp__178;
  static  unsigned long long aesl_llvm_cbe_1333_count = 0;
  float *llvm_cbe_tmp__179;
  static  unsigned long long aesl_llvm_cbe_1334_count = 0;
  static  unsigned long long aesl_llvm_cbe_1335_count = 0;
  unsigned int llvm_cbe_tmp__180;
  static  unsigned long long aesl_llvm_cbe_1336_count = 0;
  static  unsigned long long aesl_llvm_cbe_1337_count = 0;
  static  unsigned long long aesl_llvm_cbe_1338_count = 0;
  static  unsigned long long aesl_llvm_cbe_1339_count = 0;
  static  unsigned long long aesl_llvm_cbe_1340_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond68_count = 0;
  static  unsigned long long aesl_llvm_cbe_1341_count = 0;
  static  unsigned long long aesl_llvm_cbe_1342_count = 0;
  static  unsigned long long aesl_llvm_cbe_1343_count = 0;
  static  unsigned long long aesl_llvm_cbe_1344_count = 0;
  static  unsigned long long aesl_llvm_cbe_1345_count = 0;
  static  unsigned long long aesl_llvm_cbe_1346_count = 0;
  static  unsigned long long aesl_llvm_cbe_1347_count = 0;
  static  unsigned long long aesl_llvm_cbe_1348_count = 0;
  static  unsigned long long aesl_llvm_cbe_1349_count = 0;
  static  unsigned long long aesl_llvm_cbe_1350_count = 0;
  static  unsigned long long aesl_llvm_cbe_1351_count = 0;
  static  unsigned long long aesl_llvm_cbe_1352_count = 0;
  static  unsigned long long aesl_llvm_cbe_1353_count = 0;
  static  unsigned long long aesl_llvm_cbe_1354_count = 0;
  float llvm_cbe_tmp__181;
  static  unsigned long long aesl_llvm_cbe_1355_count = 0;
  static  unsigned long long aesl_llvm_cbe_1356_count = 0;
  static  unsigned long long aesl_llvm_cbe_1357_count = 0;
  static  unsigned long long aesl_llvm_cbe_1358_count = 0;
  static  unsigned long long aesl_llvm_cbe_1359_count = 0;
  static  unsigned long long aesl_llvm_cbe_1360_count = 0;
  static  unsigned long long aesl_llvm_cbe_1361_count = 0;
  float llvm_cbe_tmp__182;
  static  unsigned long long aesl_llvm_cbe_1362_count = 0;
  static  unsigned long long aesl_llvm_cbe_1363_count = 0;
  static  unsigned long long aesl_llvm_cbe_1364_count = 0;
  static  unsigned long long aesl_llvm_cbe_1365_count = 0;
  static  unsigned long long aesl_llvm_cbe_1366_count = 0;
  static  unsigned long long aesl_llvm_cbe_1367_count = 0;
  static  unsigned long long aesl_llvm_cbe_1368_count = 0;
  float llvm_cbe_tmp__183;
  static  unsigned long long aesl_llvm_cbe_1369_count = 0;
  static  unsigned long long aesl_llvm_cbe_1370_count = 0;
  static  unsigned long long aesl_llvm_cbe_1371_count = 0;
  static  unsigned long long aesl_llvm_cbe_1372_count = 0;
  static  unsigned long long aesl_llvm_cbe_1373_count = 0;
  static  unsigned long long aesl_llvm_cbe_1374_count = 0;
  static  unsigned long long aesl_llvm_cbe_1375_count = 0;
  float llvm_cbe_tmp__184;
  static  unsigned long long aesl_llvm_cbe_1376_count = 0;
  static  unsigned long long aesl_llvm_cbe_1377_count = 0;
  static  unsigned long long aesl_llvm_cbe_1378_count = 0;
  static  unsigned long long aesl_llvm_cbe_1379_count = 0;
  static  unsigned long long aesl_llvm_cbe_1380_count = 0;
  static  unsigned long long aesl_llvm_cbe_1381_count = 0;
  static  unsigned long long aesl_llvm_cbe_1382_count = 0;
  float llvm_cbe_tmp__185;
  static  unsigned long long aesl_llvm_cbe_1383_count = 0;
  static  unsigned long long aesl_llvm_cbe_1384_count = 0;
  static  unsigned long long aesl_llvm_cbe_1385_count = 0;
  static  unsigned long long aesl_llvm_cbe_1386_count = 0;
  static  unsigned long long aesl_llvm_cbe_1387_count = 0;
  static  unsigned long long aesl_llvm_cbe_1388_count = 0;
  static  unsigned long long aesl_llvm_cbe_1389_count = 0;
  float llvm_cbe_tmp__186;
  static  unsigned long long aesl_llvm_cbe_1390_count = 0;
  static  unsigned long long aesl_llvm_cbe_1391_count = 0;
  static  unsigned long long aesl_llvm_cbe_1392_count = 0;
  static  unsigned long long aesl_llvm_cbe_1393_count = 0;
  static  unsigned long long aesl_llvm_cbe_1394_count = 0;
  static  unsigned long long aesl_llvm_cbe_1395_count = 0;
  static  unsigned long long aesl_llvm_cbe_1396_count = 0;
  float llvm_cbe_tmp__187;
  static  unsigned long long aesl_llvm_cbe_1397_count = 0;
  static  unsigned long long aesl_llvm_cbe_1398_count = 0;
  static  unsigned long long aesl_llvm_cbe_1399_count = 0;
  static  unsigned long long aesl_llvm_cbe_1400_count = 0;
  static  unsigned long long aesl_llvm_cbe_1401_count = 0;
  static  unsigned long long aesl_llvm_cbe_1402_count = 0;
  static  unsigned long long aesl_llvm_cbe_1403_count = 0;
  float llvm_cbe_tmp__188;
  static  unsigned long long aesl_llvm_cbe_1404_count = 0;
  static  unsigned long long aesl_llvm_cbe_1405_count = 0;
  static  unsigned long long aesl_llvm_cbe_1406_count = 0;
  static  unsigned long long aesl_llvm_cbe_1407_count = 0;
  static  unsigned long long aesl_llvm_cbe_1408_count = 0;
  static  unsigned long long aesl_llvm_cbe_1409_count = 0;
  static  unsigned long long aesl_llvm_cbe_1410_count = 0;
  float llvm_cbe_tmp__189;
  static  unsigned long long aesl_llvm_cbe_1411_count = 0;
  static  unsigned long long aesl_llvm_cbe_1412_count = 0;
  static  unsigned long long aesl_llvm_cbe_1413_count = 0;
  static  unsigned long long aesl_llvm_cbe_1414_count = 0;
  static  unsigned long long aesl_llvm_cbe_1415_count = 0;
  static  unsigned long long aesl_llvm_cbe_1416_count = 0;
  static  unsigned long long aesl_llvm_cbe_1417_count = 0;
  float llvm_cbe_tmp__190;
  static  unsigned long long aesl_llvm_cbe_1418_count = 0;
  static  unsigned long long aesl_llvm_cbe_1419_count = 0;
  static  unsigned long long aesl_llvm_cbe_1420_count = 0;
  static  unsigned long long aesl_llvm_cbe_1421_count = 0;
  static  unsigned long long aesl_llvm_cbe_1422_count = 0;
  static  unsigned long long aesl_llvm_cbe_1423_count = 0;
  static  unsigned long long aesl_llvm_cbe_1424_count = 0;
  static  unsigned long long aesl_llvm_cbe_1425_count = 0;
  static  unsigned long long aesl_llvm_cbe_1426_count = 0;
  static  unsigned long long aesl_llvm_cbe_1427_count = 0;
  static  unsigned long long aesl_llvm_cbe_1428_count = 0;
  static  unsigned long long aesl_llvm_cbe_1429_count = 0;
  static  unsigned long long aesl_llvm_cbe_1430_count = 0;
  static  unsigned long long aesl_llvm_cbe_1431_count = 0;
  static  unsigned long long aesl_llvm_cbe_1432_count = 0;
  static  unsigned long long aesl_llvm_cbe_1433_count = 0;
  static  unsigned long long aesl_llvm_cbe_1434_count = 0;
  static  unsigned long long aesl_llvm_cbe_1435_count = 0;
  static  unsigned long long aesl_llvm_cbe_1436_count = 0;
  float llvm_cbe_tmp__191;
  static  unsigned long long aesl_llvm_cbe_1437_count = 0;
  static  unsigned long long aesl_llvm_cbe_1438_count = 0;
  static  unsigned long long aesl_llvm_cbe_1439_count = 0;
  static  unsigned long long aesl_llvm_cbe_1440_count = 0;
  static  unsigned long long aesl_llvm_cbe_1441_count = 0;
  static  unsigned long long aesl_llvm_cbe_1442_count = 0;
  static  unsigned long long aesl_llvm_cbe_1443_count = 0;
  float llvm_cbe_tmp__192;
  static  unsigned long long aesl_llvm_cbe_1444_count = 0;
  static  unsigned long long aesl_llvm_cbe_1445_count = 0;
  static  unsigned long long aesl_llvm_cbe_1446_count = 0;
  static  unsigned long long aesl_llvm_cbe_1447_count = 0;
  static  unsigned long long aesl_llvm_cbe_1448_count = 0;
  static  unsigned long long aesl_llvm_cbe_1449_count = 0;
  static  unsigned long long aesl_llvm_cbe_1450_count = 0;
  float llvm_cbe_tmp__193;
  static  unsigned long long aesl_llvm_cbe_1451_count = 0;
  static  unsigned long long aesl_llvm_cbe_1452_count = 0;
  static  unsigned long long aesl_llvm_cbe_1453_count = 0;
  static  unsigned long long aesl_llvm_cbe_1454_count = 0;
  static  unsigned long long aesl_llvm_cbe_1455_count = 0;
  static  unsigned long long aesl_llvm_cbe_1456_count = 0;
  static  unsigned long long aesl_llvm_cbe_1457_count = 0;
  float llvm_cbe_tmp__194;
  static  unsigned long long aesl_llvm_cbe_1458_count = 0;
  static  unsigned long long aesl_llvm_cbe_1459_count = 0;
  static  unsigned long long aesl_llvm_cbe_1460_count = 0;
  static  unsigned long long aesl_llvm_cbe_1461_count = 0;
  static  unsigned long long aesl_llvm_cbe_1462_count = 0;
  static  unsigned long long aesl_llvm_cbe_1463_count = 0;
  static  unsigned long long aesl_llvm_cbe_1464_count = 0;
  float llvm_cbe_tmp__195;
  static  unsigned long long aesl_llvm_cbe_1465_count = 0;
  static  unsigned long long aesl_llvm_cbe_1466_count = 0;
  static  unsigned long long aesl_llvm_cbe_1467_count = 0;
  static  unsigned long long aesl_llvm_cbe_1468_count = 0;
  static  unsigned long long aesl_llvm_cbe_1469_count = 0;
  static  unsigned long long aesl_llvm_cbe_1470_count = 0;
  static  unsigned long long aesl_llvm_cbe_1471_count = 0;
  float llvm_cbe_tmp__196;
  static  unsigned long long aesl_llvm_cbe_1472_count = 0;
  static  unsigned long long aesl_llvm_cbe_1473_count = 0;
  static  unsigned long long aesl_llvm_cbe_1474_count = 0;
  static  unsigned long long aesl_llvm_cbe_1475_count = 0;
  static  unsigned long long aesl_llvm_cbe_1476_count = 0;
  static  unsigned long long aesl_llvm_cbe_1477_count = 0;
  static  unsigned long long aesl_llvm_cbe_1478_count = 0;
  float llvm_cbe_tmp__197;
  static  unsigned long long aesl_llvm_cbe_1479_count = 0;
  static  unsigned long long aesl_llvm_cbe_1480_count = 0;
  static  unsigned long long aesl_llvm_cbe_1481_count = 0;
  static  unsigned long long aesl_llvm_cbe_1482_count = 0;
  static  unsigned long long aesl_llvm_cbe_1483_count = 0;
  static  unsigned long long aesl_llvm_cbe_1484_count = 0;
  static  unsigned long long aesl_llvm_cbe_1485_count = 0;
  float llvm_cbe_tmp__198;
  static  unsigned long long aesl_llvm_cbe_1486_count = 0;
  static  unsigned long long aesl_llvm_cbe_1487_count = 0;
  static  unsigned long long aesl_llvm_cbe_1488_count = 0;
  static  unsigned long long aesl_llvm_cbe_1489_count = 0;
  static  unsigned long long aesl_llvm_cbe_1490_count = 0;
  static  unsigned long long aesl_llvm_cbe_1491_count = 0;
  static  unsigned long long aesl_llvm_cbe_1492_count = 0;
  float llvm_cbe_tmp__199;
  static  unsigned long long aesl_llvm_cbe_1493_count = 0;
  static  unsigned long long aesl_llvm_cbe_1494_count = 0;
  static  unsigned long long aesl_llvm_cbe_1495_count = 0;
  static  unsigned long long aesl_llvm_cbe_1496_count = 0;
  static  unsigned long long aesl_llvm_cbe_1497_count = 0;
  static  unsigned long long aesl_llvm_cbe_1498_count = 0;
  static  unsigned long long aesl_llvm_cbe_1499_count = 0;
  float llvm_cbe_tmp__200;
  static  unsigned long long aesl_llvm_cbe_1500_count = 0;
  static  unsigned long long aesl_llvm_cbe_1501_count = 0;
  static  unsigned long long aesl_llvm_cbe_1502_count = 0;
  static  unsigned long long aesl_llvm_cbe_1503_count = 0;
  static  unsigned long long aesl_llvm_cbe_1504_count = 0;
  static  unsigned long long aesl_llvm_cbe_1505_count = 0;
  static  unsigned long long aesl_llvm_cbe_1506_count = 0;
  static  unsigned long long aesl_llvm_cbe_1507_count = 0;
  static  unsigned long long aesl_llvm_cbe_1508_count = 0;
  static  unsigned long long aesl_llvm_cbe_1509_count = 0;
  static  unsigned long long aesl_llvm_cbe_1510_count = 0;
  static  unsigned long long aesl_llvm_cbe_1511_count = 0;
  static  unsigned long long aesl_llvm_cbe_1512_count = 0;
  static  unsigned long long aesl_llvm_cbe_1513_count = 0;
  static  unsigned long long aesl_llvm_cbe_1514_count = 0;
  static  unsigned long long aesl_llvm_cbe_1515_count = 0;
  static  unsigned long long aesl_llvm_cbe_1516_count = 0;
  static  unsigned long long aesl_llvm_cbe_1517_count = 0;
  static  unsigned long long aesl_llvm_cbe_1518_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge2438_count = 0;
  unsigned int llvm_cbe_storemerge2438;
  unsigned int llvm_cbe_storemerge2438__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1519_count = 0;
  unsigned long long llvm_cbe_tmp__201;
  static  unsigned long long aesl_llvm_cbe_1520_count = 0;
  float *llvm_cbe_tmp__202;
  static  unsigned long long aesl_llvm_cbe_1521_count = 0;
  float llvm_cbe_tmp__203;
  static  unsigned long long aesl_llvm_cbe_1522_count = 0;
  float *llvm_cbe_tmp__204;
  static  unsigned long long aesl_llvm_cbe_1523_count = 0;
  static  unsigned long long aesl_llvm_cbe_1524_count = 0;
  unsigned int llvm_cbe_tmp__205;
  static  unsigned long long aesl_llvm_cbe_1525_count = 0;
  static  unsigned long long aesl_llvm_cbe_1526_count = 0;
  static  unsigned long long aesl_llvm_cbe_1527_count = 0;
  static  unsigned long long aesl_llvm_cbe_1528_count = 0;
  static  unsigned long long aesl_llvm_cbe_1529_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond65_count = 0;
  static  unsigned long long aesl_llvm_cbe_1530_count = 0;
  static  unsigned long long aesl_llvm_cbe_1531_count = 0;
  static  unsigned long long aesl_llvm_cbe_1532_count = 0;
  static  unsigned long long aesl_llvm_cbe_1533_count = 0;
  static  unsigned long long aesl_llvm_cbe_1534_count = 0;
  static  unsigned long long aesl_llvm_cbe_1535_count = 0;
  static  unsigned long long aesl_llvm_cbe_1536_count = 0;
  static  unsigned long long aesl_llvm_cbe_1537_count = 0;
  static  unsigned long long aesl_llvm_cbe_1538_count = 0;
  static  unsigned long long aesl_llvm_cbe_1539_count = 0;
  static  unsigned long long aesl_llvm_cbe_1540_count = 0;
  static  unsigned long long aesl_llvm_cbe_1541_count = 0;
  static  unsigned long long aesl_llvm_cbe_1542_count = 0;
  static  unsigned long long aesl_llvm_cbe_1543_count = 0;
  float llvm_cbe_tmp__206;
  static  unsigned long long aesl_llvm_cbe_1544_count = 0;
  static  unsigned long long aesl_llvm_cbe_1545_count = 0;
  static  unsigned long long aesl_llvm_cbe_1546_count = 0;
  static  unsigned long long aesl_llvm_cbe_1547_count = 0;
  static  unsigned long long aesl_llvm_cbe_1548_count = 0;
  static  unsigned long long aesl_llvm_cbe_1549_count = 0;
  static  unsigned long long aesl_llvm_cbe_1550_count = 0;
  float llvm_cbe_tmp__207;
  static  unsigned long long aesl_llvm_cbe_1551_count = 0;
  static  unsigned long long aesl_llvm_cbe_1552_count = 0;
  static  unsigned long long aesl_llvm_cbe_1553_count = 0;
  static  unsigned long long aesl_llvm_cbe_1554_count = 0;
  static  unsigned long long aesl_llvm_cbe_1555_count = 0;
  static  unsigned long long aesl_llvm_cbe_1556_count = 0;
  static  unsigned long long aesl_llvm_cbe_1557_count = 0;
  float llvm_cbe_tmp__208;
  static  unsigned long long aesl_llvm_cbe_1558_count = 0;
  static  unsigned long long aesl_llvm_cbe_1559_count = 0;
  static  unsigned long long aesl_llvm_cbe_1560_count = 0;
  static  unsigned long long aesl_llvm_cbe_1561_count = 0;
  static  unsigned long long aesl_llvm_cbe_1562_count = 0;
  static  unsigned long long aesl_llvm_cbe_1563_count = 0;
  static  unsigned long long aesl_llvm_cbe_1564_count = 0;
  float llvm_cbe_tmp__209;
  static  unsigned long long aesl_llvm_cbe_1565_count = 0;
  static  unsigned long long aesl_llvm_cbe_1566_count = 0;
  static  unsigned long long aesl_llvm_cbe_1567_count = 0;
  static  unsigned long long aesl_llvm_cbe_1568_count = 0;
  static  unsigned long long aesl_llvm_cbe_1569_count = 0;
  static  unsigned long long aesl_llvm_cbe_1570_count = 0;
  static  unsigned long long aesl_llvm_cbe_1571_count = 0;
  float llvm_cbe_tmp__210;
  static  unsigned long long aesl_llvm_cbe_1572_count = 0;
  static  unsigned long long aesl_llvm_cbe_1573_count = 0;
  static  unsigned long long aesl_llvm_cbe_1574_count = 0;
  static  unsigned long long aesl_llvm_cbe_1575_count = 0;
  static  unsigned long long aesl_llvm_cbe_1576_count = 0;
  static  unsigned long long aesl_llvm_cbe_1577_count = 0;
  static  unsigned long long aesl_llvm_cbe_1578_count = 0;
  float llvm_cbe_tmp__211;
  static  unsigned long long aesl_llvm_cbe_1579_count = 0;
  static  unsigned long long aesl_llvm_cbe_1580_count = 0;
  static  unsigned long long aesl_llvm_cbe_1581_count = 0;
  static  unsigned long long aesl_llvm_cbe_1582_count = 0;
  static  unsigned long long aesl_llvm_cbe_1583_count = 0;
  static  unsigned long long aesl_llvm_cbe_1584_count = 0;
  static  unsigned long long aesl_llvm_cbe_1585_count = 0;
  float llvm_cbe_tmp__212;
  static  unsigned long long aesl_llvm_cbe_1586_count = 0;
  static  unsigned long long aesl_llvm_cbe_1587_count = 0;
  static  unsigned long long aesl_llvm_cbe_1588_count = 0;
  static  unsigned long long aesl_llvm_cbe_1589_count = 0;
  static  unsigned long long aesl_llvm_cbe_1590_count = 0;
  static  unsigned long long aesl_llvm_cbe_1591_count = 0;
  static  unsigned long long aesl_llvm_cbe_1592_count = 0;
  float llvm_cbe_tmp__213;
  static  unsigned long long aesl_llvm_cbe_1593_count = 0;
  static  unsigned long long aesl_llvm_cbe_1594_count = 0;
  static  unsigned long long aesl_llvm_cbe_1595_count = 0;
  static  unsigned long long aesl_llvm_cbe_1596_count = 0;
  static  unsigned long long aesl_llvm_cbe_1597_count = 0;
  static  unsigned long long aesl_llvm_cbe_1598_count = 0;
  static  unsigned long long aesl_llvm_cbe_1599_count = 0;
  float llvm_cbe_tmp__214;
  static  unsigned long long aesl_llvm_cbe_1600_count = 0;
  static  unsigned long long aesl_llvm_cbe_1601_count = 0;
  static  unsigned long long aesl_llvm_cbe_1602_count = 0;
  static  unsigned long long aesl_llvm_cbe_1603_count = 0;
  static  unsigned long long aesl_llvm_cbe_1604_count = 0;
  static  unsigned long long aesl_llvm_cbe_1605_count = 0;
  static  unsigned long long aesl_llvm_cbe_1606_count = 0;
  float llvm_cbe_tmp__215;
  static  unsigned long long aesl_llvm_cbe_1607_count = 0;
  static  unsigned long long aesl_llvm_cbe_1608_count = 0;
  static  unsigned long long aesl_llvm_cbe_1609_count = 0;
  static  unsigned long long aesl_llvm_cbe_1610_count = 0;
  static  unsigned long long aesl_llvm_cbe_1611_count = 0;
  static  unsigned long long aesl_llvm_cbe_1612_count = 0;
  static  unsigned long long aesl_llvm_cbe_1613_count = 0;
  static  unsigned long long aesl_llvm_cbe_1614_count = 0;
  static  unsigned long long aesl_llvm_cbe_1615_count = 0;
  static  unsigned long long aesl_llvm_cbe_1616_count = 0;
  static  unsigned long long aesl_llvm_cbe_1617_count = 0;
  static  unsigned long long aesl_llvm_cbe_1618_count = 0;
  static  unsigned long long aesl_llvm_cbe_1619_count = 0;
  static  unsigned long long aesl_llvm_cbe_1620_count = 0;
  static  unsigned long long aesl_llvm_cbe_1621_count = 0;
  static  unsigned long long aesl_llvm_cbe_1622_count = 0;
  static  unsigned long long aesl_llvm_cbe_1623_count = 0;
  static  unsigned long long aesl_llvm_cbe_1624_count = 0;
  static  unsigned long long aesl_llvm_cbe_1625_count = 0;
  float llvm_cbe_tmp__216;
  static  unsigned long long aesl_llvm_cbe_1626_count = 0;
  static  unsigned long long aesl_llvm_cbe_1627_count = 0;
  static  unsigned long long aesl_llvm_cbe_1628_count = 0;
  static  unsigned long long aesl_llvm_cbe_1629_count = 0;
  static  unsigned long long aesl_llvm_cbe_1630_count = 0;
  static  unsigned long long aesl_llvm_cbe_1631_count = 0;
  static  unsigned long long aesl_llvm_cbe_1632_count = 0;
  float llvm_cbe_tmp__217;
  static  unsigned long long aesl_llvm_cbe_1633_count = 0;
  static  unsigned long long aesl_llvm_cbe_1634_count = 0;
  static  unsigned long long aesl_llvm_cbe_1635_count = 0;
  static  unsigned long long aesl_llvm_cbe_1636_count = 0;
  static  unsigned long long aesl_llvm_cbe_1637_count = 0;
  static  unsigned long long aesl_llvm_cbe_1638_count = 0;
  static  unsigned long long aesl_llvm_cbe_1639_count = 0;
  float llvm_cbe_tmp__218;
  static  unsigned long long aesl_llvm_cbe_1640_count = 0;
  static  unsigned long long aesl_llvm_cbe_1641_count = 0;
  static  unsigned long long aesl_llvm_cbe_1642_count = 0;
  static  unsigned long long aesl_llvm_cbe_1643_count = 0;
  static  unsigned long long aesl_llvm_cbe_1644_count = 0;
  static  unsigned long long aesl_llvm_cbe_1645_count = 0;
  static  unsigned long long aesl_llvm_cbe_1646_count = 0;
  float llvm_cbe_tmp__219;
  static  unsigned long long aesl_llvm_cbe_1647_count = 0;
  static  unsigned long long aesl_llvm_cbe_1648_count = 0;
  static  unsigned long long aesl_llvm_cbe_1649_count = 0;
  static  unsigned long long aesl_llvm_cbe_1650_count = 0;
  static  unsigned long long aesl_llvm_cbe_1651_count = 0;
  static  unsigned long long aesl_llvm_cbe_1652_count = 0;
  static  unsigned long long aesl_llvm_cbe_1653_count = 0;
  float llvm_cbe_tmp__220;
  static  unsigned long long aesl_llvm_cbe_1654_count = 0;
  static  unsigned long long aesl_llvm_cbe_1655_count = 0;
  static  unsigned long long aesl_llvm_cbe_1656_count = 0;
  static  unsigned long long aesl_llvm_cbe_1657_count = 0;
  static  unsigned long long aesl_llvm_cbe_1658_count = 0;
  static  unsigned long long aesl_llvm_cbe_1659_count = 0;
  static  unsigned long long aesl_llvm_cbe_1660_count = 0;
  float llvm_cbe_tmp__221;
  static  unsigned long long aesl_llvm_cbe_1661_count = 0;
  static  unsigned long long aesl_llvm_cbe_1662_count = 0;
  static  unsigned long long aesl_llvm_cbe_1663_count = 0;
  static  unsigned long long aesl_llvm_cbe_1664_count = 0;
  static  unsigned long long aesl_llvm_cbe_1665_count = 0;
  static  unsigned long long aesl_llvm_cbe_1666_count = 0;
  static  unsigned long long aesl_llvm_cbe_1667_count = 0;
  float llvm_cbe_tmp__222;
  static  unsigned long long aesl_llvm_cbe_1668_count = 0;
  static  unsigned long long aesl_llvm_cbe_1669_count = 0;
  static  unsigned long long aesl_llvm_cbe_1670_count = 0;
  static  unsigned long long aesl_llvm_cbe_1671_count = 0;
  static  unsigned long long aesl_llvm_cbe_1672_count = 0;
  static  unsigned long long aesl_llvm_cbe_1673_count = 0;
  static  unsigned long long aesl_llvm_cbe_1674_count = 0;
  float llvm_cbe_tmp__223;
  static  unsigned long long aesl_llvm_cbe_1675_count = 0;
  static  unsigned long long aesl_llvm_cbe_1676_count = 0;
  static  unsigned long long aesl_llvm_cbe_1677_count = 0;
  static  unsigned long long aesl_llvm_cbe_1678_count = 0;
  static  unsigned long long aesl_llvm_cbe_1679_count = 0;
  static  unsigned long long aesl_llvm_cbe_1680_count = 0;
  static  unsigned long long aesl_llvm_cbe_1681_count = 0;
  float llvm_cbe_tmp__224;
  static  unsigned long long aesl_llvm_cbe_1682_count = 0;
  static  unsigned long long aesl_llvm_cbe_1683_count = 0;
  static  unsigned long long aesl_llvm_cbe_1684_count = 0;
  static  unsigned long long aesl_llvm_cbe_1685_count = 0;
  static  unsigned long long aesl_llvm_cbe_1686_count = 0;
  static  unsigned long long aesl_llvm_cbe_1687_count = 0;
  static  unsigned long long aesl_llvm_cbe_1688_count = 0;
  float llvm_cbe_tmp__225;
  static  unsigned long long aesl_llvm_cbe_1689_count = 0;
  static  unsigned long long aesl_llvm_cbe_1690_count = 0;
  static  unsigned long long aesl_llvm_cbe_1691_count = 0;
  static  unsigned long long aesl_llvm_cbe_1692_count = 0;
  static  unsigned long long aesl_llvm_cbe_1693_count = 0;
  static  unsigned long long aesl_llvm_cbe_1694_count = 0;
  static  unsigned long long aesl_llvm_cbe_1695_count = 0;
  static  unsigned long long aesl_llvm_cbe_1696_count = 0;
  static  unsigned long long aesl_llvm_cbe_1697_count = 0;
  static  unsigned long long aesl_llvm_cbe_1698_count = 0;
  static  unsigned long long aesl_llvm_cbe_1699_count = 0;
  static  unsigned long long aesl_llvm_cbe_1700_count = 0;
  static  unsigned long long aesl_llvm_cbe_1701_count = 0;
  static  unsigned long long aesl_llvm_cbe_1702_count = 0;
  static  unsigned long long aesl_llvm_cbe_1703_count = 0;
  static  unsigned long long aesl_llvm_cbe_1704_count = 0;
  static  unsigned long long aesl_llvm_cbe_1705_count = 0;
  static  unsigned long long aesl_llvm_cbe_1706_count = 0;
  static  unsigned long long aesl_llvm_cbe_1707_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge2735_count = 0;
  unsigned int llvm_cbe_storemerge2735;
  unsigned int llvm_cbe_storemerge2735__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1708_count = 0;
  unsigned long long llvm_cbe_tmp__226;
  static  unsigned long long aesl_llvm_cbe_1709_count = 0;
  float *llvm_cbe_tmp__227;
  static  unsigned long long aesl_llvm_cbe_1710_count = 0;
  float llvm_cbe_tmp__228;
  static  unsigned long long aesl_llvm_cbe_1711_count = 0;
  float *llvm_cbe_tmp__229;
  static  unsigned long long aesl_llvm_cbe_1712_count = 0;
  static  unsigned long long aesl_llvm_cbe_1713_count = 0;
  unsigned int llvm_cbe_tmp__230;
  static  unsigned long long aesl_llvm_cbe_1714_count = 0;
  static  unsigned long long aesl_llvm_cbe_1715_count = 0;
  static  unsigned long long aesl_llvm_cbe_1716_count = 0;
  static  unsigned long long aesl_llvm_cbe_1717_count = 0;
  static  unsigned long long aesl_llvm_cbe_1718_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_1719_count = 0;
  static  unsigned long long aesl_llvm_cbe_1720_count = 0;
  static  unsigned long long aesl_llvm_cbe_1721_count = 0;
  static  unsigned long long aesl_llvm_cbe_1722_count = 0;
  static  unsigned long long aesl_llvm_cbe_1723_count = 0;
  static  unsigned long long aesl_llvm_cbe_1724_count = 0;
  static  unsigned long long aesl_llvm_cbe_1725_count = 0;
  static  unsigned long long aesl_llvm_cbe_1726_count = 0;
  static  unsigned long long aesl_llvm_cbe_1727_count = 0;
  static  unsigned long long aesl_llvm_cbe_1728_count = 0;
  static  unsigned long long aesl_llvm_cbe_1729_count = 0;
  static  unsigned long long aesl_llvm_cbe_1730_count = 0;
  static  unsigned long long aesl_llvm_cbe_1731_count = 0;
  static  unsigned long long aesl_llvm_cbe_1732_count = 0;
  static  unsigned long long aesl_llvm_cbe_1733_count = 0;
  static  unsigned long long aesl_llvm_cbe_1734_count = 0;
  static  unsigned long long aesl_llvm_cbe_1735_count = 0;
  static  unsigned long long aesl_llvm_cbe_1736_count = 0;
  static  unsigned long long aesl_llvm_cbe_1737_count = 0;
  static  unsigned long long aesl_llvm_cbe_1738_count = 0;
  static  unsigned long long aesl_llvm_cbe_1739_count = 0;
  static  unsigned long long aesl_llvm_cbe_1740_count = 0;
  static  unsigned long long aesl_llvm_cbe_1741_count = 0;
  static  unsigned long long aesl_llvm_cbe_1742_count = 0;
  static  unsigned long long aesl_llvm_cbe_1743_count = 0;
  static  unsigned long long aesl_llvm_cbe_1744_count = 0;
  static  unsigned long long aesl_llvm_cbe_1745_count = 0;
  static  unsigned long long aesl_llvm_cbe_1746_count = 0;
  static  unsigned long long aesl_llvm_cbe_1747_count = 0;
  static  unsigned long long aesl_llvm_cbe_1748_count = 0;
  static  unsigned long long aesl_llvm_cbe_1749_count = 0;
  static  unsigned long long aesl_llvm_cbe_1750_count = 0;
  static  unsigned long long aesl_llvm_cbe_1751_count = 0;
  static  unsigned long long aesl_llvm_cbe_1752_count = 0;
  static  unsigned long long aesl_llvm_cbe_1753_count = 0;
  static  unsigned long long aesl_llvm_cbe_1754_count = 0;
  static  unsigned long long aesl_llvm_cbe_1755_count = 0;
  static  unsigned long long aesl_llvm_cbe_1756_count = 0;
  static  unsigned long long aesl_llvm_cbe_1757_count = 0;
  static  unsigned long long aesl_llvm_cbe_1758_count = 0;
  static  unsigned long long aesl_llvm_cbe_1759_count = 0;
  static  unsigned long long aesl_llvm_cbe_1760_count = 0;
  static  unsigned long long aesl_llvm_cbe_1761_count = 0;
  static  unsigned long long aesl_llvm_cbe_1762_count = 0;
  static  unsigned long long aesl_llvm_cbe_1763_count = 0;
  static  unsigned long long aesl_llvm_cbe_1764_count = 0;
  static  unsigned long long aesl_llvm_cbe_1765_count = 0;
  static  unsigned long long aesl_llvm_cbe_1766_count = 0;
  static  unsigned long long aesl_llvm_cbe_1767_count = 0;
  static  unsigned long long aesl_llvm_cbe_1768_count = 0;
  static  unsigned long long aesl_llvm_cbe_1769_count = 0;
  static  unsigned long long aesl_llvm_cbe_1770_count = 0;
  static  unsigned long long aesl_llvm_cbe_1771_count = 0;
  static  unsigned long long aesl_llvm_cbe_1772_count = 0;
  static  unsigned long long aesl_llvm_cbe_1773_count = 0;
  static  unsigned long long aesl_llvm_cbe_1774_count = 0;
  static  unsigned long long aesl_llvm_cbe_1775_count = 0;
  static  unsigned long long aesl_llvm_cbe_1776_count = 0;
  static  unsigned long long aesl_llvm_cbe_1777_count = 0;
  static  unsigned long long aesl_llvm_cbe_1778_count = 0;
  static  unsigned long long aesl_llvm_cbe_1779_count = 0;
  static  unsigned long long aesl_llvm_cbe_1780_count = 0;
  static  unsigned long long aesl_llvm_cbe_1781_count = 0;
  static  unsigned long long aesl_llvm_cbe_1782_count = 0;
  static  unsigned long long aesl_llvm_cbe_1783_count = 0;
  static  unsigned long long aesl_llvm_cbe_1784_count = 0;
  static  unsigned long long aesl_llvm_cbe_1785_count = 0;
  static  unsigned long long aesl_llvm_cbe_1786_count = 0;
  static  unsigned long long aesl_llvm_cbe_1787_count = 0;
  static  unsigned long long aesl_llvm_cbe_1788_count = 0;
  static  unsigned long long aesl_llvm_cbe_1789_count = 0;
  static  unsigned long long aesl_llvm_cbe_1790_count = 0;
  static  unsigned long long aesl_llvm_cbe_1791_count = 0;
  static  unsigned long long aesl_llvm_cbe_1792_count = 0;
  static  unsigned long long aesl_llvm_cbe_1793_count = 0;
  static  unsigned long long aesl_llvm_cbe_1794_count = 0;
  static  unsigned long long aesl_llvm_cbe_1795_count = 0;
  static  unsigned long long aesl_llvm_cbe_1796_count = 0;
  static  unsigned long long aesl_llvm_cbe_1797_count = 0;
  static  unsigned long long aesl_llvm_cbe_1798_count = 0;
  static  unsigned long long aesl_llvm_cbe_1799_count = 0;
  static  unsigned long long aesl_llvm_cbe_1800_count = 0;
  static  unsigned long long aesl_llvm_cbe_1801_count = 0;
  static  unsigned long long aesl_llvm_cbe_1802_count = 0;
  static  unsigned long long aesl_llvm_cbe_1803_count = 0;
  static  unsigned long long aesl_llvm_cbe_1804_count = 0;
  float llvm_cbe_tmp__231;
  static  unsigned long long aesl_llvm_cbe_1805_count = 0;
  static  unsigned long long aesl_llvm_cbe_1806_count = 0;
  static  unsigned long long aesl_llvm_cbe_1807_count = 0;
  static  unsigned long long aesl_llvm_cbe_1808_count = 0;
  static  unsigned long long aesl_llvm_cbe_1809_count = 0;
  static  unsigned long long aesl_llvm_cbe_1810_count = 0;
  static  unsigned long long aesl_llvm_cbe_1811_count = 0;
  float llvm_cbe_tmp__232;
  static  unsigned long long aesl_llvm_cbe_1812_count = 0;
  static  unsigned long long aesl_llvm_cbe_1813_count = 0;
  static  unsigned long long aesl_llvm_cbe_1814_count = 0;
  static  unsigned long long aesl_llvm_cbe_1815_count = 0;
  static  unsigned long long aesl_llvm_cbe_1816_count = 0;
  static  unsigned long long aesl_llvm_cbe_1817_count = 0;
  static  unsigned long long aesl_llvm_cbe_1818_count = 0;
  float llvm_cbe_tmp__233;
  static  unsigned long long aesl_llvm_cbe_1819_count = 0;
  static  unsigned long long aesl_llvm_cbe_1820_count = 0;
  static  unsigned long long aesl_llvm_cbe_1821_count = 0;
  static  unsigned long long aesl_llvm_cbe_1822_count = 0;
  static  unsigned long long aesl_llvm_cbe_1823_count = 0;
  static  unsigned long long aesl_llvm_cbe_1824_count = 0;
  static  unsigned long long aesl_llvm_cbe_1825_count = 0;
  float llvm_cbe_tmp__234;
  static  unsigned long long aesl_llvm_cbe_1826_count = 0;
  static  unsigned long long aesl_llvm_cbe_1827_count = 0;
  static  unsigned long long aesl_llvm_cbe_1828_count = 0;
  static  unsigned long long aesl_llvm_cbe_1829_count = 0;
  static  unsigned long long aesl_llvm_cbe_1830_count = 0;
  static  unsigned long long aesl_llvm_cbe_1831_count = 0;
  static  unsigned long long aesl_llvm_cbe_1832_count = 0;
  float llvm_cbe_tmp__235;
  static  unsigned long long aesl_llvm_cbe_1833_count = 0;
  static  unsigned long long aesl_llvm_cbe_1834_count = 0;
  static  unsigned long long aesl_llvm_cbe_1835_count = 0;
  static  unsigned long long aesl_llvm_cbe_1836_count = 0;
  static  unsigned long long aesl_llvm_cbe_1837_count = 0;
  static  unsigned long long aesl_llvm_cbe_1838_count = 0;
  static  unsigned long long aesl_llvm_cbe_1839_count = 0;
  float llvm_cbe_tmp__236;
  static  unsigned long long aesl_llvm_cbe_1840_count = 0;
  static  unsigned long long aesl_llvm_cbe_1841_count = 0;
  static  unsigned long long aesl_llvm_cbe_1842_count = 0;
  static  unsigned long long aesl_llvm_cbe_1843_count = 0;
  static  unsigned long long aesl_llvm_cbe_1844_count = 0;
  static  unsigned long long aesl_llvm_cbe_1845_count = 0;
  static  unsigned long long aesl_llvm_cbe_1846_count = 0;
  float llvm_cbe_tmp__237;
  static  unsigned long long aesl_llvm_cbe_1847_count = 0;
  static  unsigned long long aesl_llvm_cbe_1848_count = 0;
  static  unsigned long long aesl_llvm_cbe_1849_count = 0;
  static  unsigned long long aesl_llvm_cbe_1850_count = 0;
  static  unsigned long long aesl_llvm_cbe_1851_count = 0;
  static  unsigned long long aesl_llvm_cbe_1852_count = 0;
  static  unsigned long long aesl_llvm_cbe_1853_count = 0;
  float llvm_cbe_tmp__238;
  static  unsigned long long aesl_llvm_cbe_1854_count = 0;
  static  unsigned long long aesl_llvm_cbe_1855_count = 0;
  static  unsigned long long aesl_llvm_cbe_1856_count = 0;
  static  unsigned long long aesl_llvm_cbe_1857_count = 0;
  static  unsigned long long aesl_llvm_cbe_1858_count = 0;
  static  unsigned long long aesl_llvm_cbe_1859_count = 0;
  static  unsigned long long aesl_llvm_cbe_1860_count = 0;
  float llvm_cbe_tmp__239;
  static  unsigned long long aesl_llvm_cbe_1861_count = 0;
  static  unsigned long long aesl_llvm_cbe_1862_count = 0;
  static  unsigned long long aesl_llvm_cbe_1863_count = 0;
  static  unsigned long long aesl_llvm_cbe_1864_count = 0;
  static  unsigned long long aesl_llvm_cbe_1865_count = 0;
  static  unsigned long long aesl_llvm_cbe_1866_count = 0;
  static  unsigned long long aesl_llvm_cbe_1867_count = 0;
  float llvm_cbe_tmp__240;
  static  unsigned long long aesl_llvm_cbe_1868_count = 0;
  static  unsigned long long aesl_llvm_cbe_1869_count = 0;
  static  unsigned long long aesl_llvm_cbe_1870_count = 0;
  static  unsigned long long aesl_llvm_cbe_1871_count = 0;
  static  unsigned long long aesl_llvm_cbe_1872_count = 0;
  static  unsigned long long aesl_llvm_cbe_1873_count = 0;
  static  unsigned long long aesl_llvm_cbe_1874_count = 0;
  static  unsigned long long aesl_llvm_cbe_1875_count = 0;
  static  unsigned long long aesl_llvm_cbe_1876_count = 0;
  static  unsigned long long aesl_llvm_cbe_1877_count = 0;
  static  unsigned long long aesl_llvm_cbe_1878_count = 0;
  static  unsigned long long aesl_llvm_cbe_1879_count = 0;
  static  unsigned long long aesl_llvm_cbe_1880_count = 0;
  static  unsigned long long aesl_llvm_cbe_1881_count = 0;
  static  unsigned long long aesl_llvm_cbe_1882_count = 0;
  static  unsigned long long aesl_llvm_cbe_1883_count = 0;
  static  unsigned long long aesl_llvm_cbe_1884_count = 0;
  static  unsigned long long aesl_llvm_cbe_1885_count = 0;
  static  unsigned long long aesl_llvm_cbe_1886_count = 0;
  static  unsigned long long aesl_llvm_cbe_1887_count = 0;
  unsigned int llvm_cbe_tmp__241;
  static  unsigned long long aesl_llvm_cbe_1888_count = 0;
  static  unsigned long long aesl_llvm_cbe_1889_count = 0;
  static  unsigned long long aesl_llvm_cbe_1890_count = 0;
  static  unsigned long long aesl_llvm_cbe_1891_count = 0;
  static  unsigned long long aesl_llvm_cbe_1892_count = 0;
  static  unsigned long long aesl_llvm_cbe_1893_count = 0;
  static  unsigned long long aesl_llvm_cbe_1894_count = 0;
  static  unsigned long long aesl_llvm_cbe_1895_count = 0;
  static  unsigned long long aesl_llvm_cbe_1896_count = 0;
  static  unsigned long long aesl_llvm_cbe_1897_count = 0;
  static  unsigned long long aesl_llvm_cbe_1898_count = 0;
  static  unsigned long long aesl_llvm_cbe_1899_count = 0;
  static  unsigned long long aesl_llvm_cbe_1900_count = 0;
  unsigned int llvm_cbe_tmp__242;
  static  unsigned long long aesl_llvm_cbe_1901_count = 0;
  static  unsigned long long aesl_llvm_cbe_1902_count = 0;
  static  unsigned long long aesl_llvm_cbe_1903_count = 0;
  double llvm_cbe_tmp__243;
  static  unsigned long long aesl_llvm_cbe_1904_count = 0;
  double llvm_cbe_tmp__244;
  static  unsigned long long aesl_llvm_cbe_1905_count = 0;
  double llvm_cbe_tmp__245;
  static  unsigned long long aesl_llvm_cbe_1906_count = 0;
  double llvm_cbe_tmp__246;
  static  unsigned long long aesl_llvm_cbe_1907_count = 0;
  double llvm_cbe_tmp__247;
  static  unsigned long long aesl_llvm_cbe_1908_count = 0;
  unsigned int llvm_cbe_tmp__248;
  static  unsigned long long aesl_llvm_cbe_1909_count = 0;
  float llvm_cbe_tmp__249;
  static  unsigned long long aesl_llvm_cbe_1910_count = 0;
  float llvm_cbe_tmp__250;
  static  unsigned long long aesl_llvm_cbe_1911_count = 0;
  float llvm_cbe_tmp__251;
  static  unsigned long long aesl_llvm_cbe_1912_count = 0;
  float llvm_cbe_tmp__252;
  static  unsigned long long aesl_llvm_cbe_1913_count = 0;
  float llvm_cbe_tmp__253;
  static  unsigned long long aesl_llvm_cbe_1914_count = 0;
  float llvm_cbe_tmp__254;
  static  unsigned long long aesl_llvm_cbe_1915_count = 0;
  float llvm_cbe_tmp__255;
  static  unsigned long long aesl_llvm_cbe_1916_count = 0;
  float llvm_cbe_tmp__256;
  static  unsigned long long aesl_llvm_cbe_1917_count = 0;
  float llvm_cbe_tmp__257;
  static  unsigned long long aesl_llvm_cbe_1918_count = 0;
  float llvm_cbe_tmp__258;
  static  unsigned long long aesl_llvm_cbe_1919_count = 0;
  static  unsigned long long aesl_llvm_cbe_1920_count = 0;
  static  unsigned long long aesl_llvm_cbe_1921_count = 0;
  static  unsigned long long aesl_llvm_cbe_1922_count = 0;
  static  unsigned long long aesl_llvm_cbe_1923_count = 0;
  static  unsigned long long aesl_llvm_cbe_1924_count = 0;
  static  unsigned long long aesl_llvm_cbe_1925_count = 0;
  static  unsigned long long aesl_llvm_cbe_1926_count = 0;
  static  unsigned long long aesl_llvm_cbe_1927_count = 0;
  static  unsigned long long aesl_llvm_cbe_1928_count = 0;
  static  unsigned long long aesl_llvm_cbe_1929_count = 0;
  static  unsigned long long aesl_llvm_cbe_1930_count = 0;
  static  unsigned long long aesl_llvm_cbe_1931_count = 0;
  static  unsigned long long aesl_llvm_cbe_1932_count = 0;
  static  unsigned long long aesl_llvm_cbe_1933_count = 0;
  float llvm_cbe_tmp__259;
  static  unsigned long long aesl_llvm_cbe_1934_count = 0;
  static  unsigned long long aesl_llvm_cbe_1935_count = 0;
  static  unsigned long long aesl_llvm_cbe_1936_count = 0;
  static  unsigned long long aesl_llvm_cbe_1937_count = 0;
  static  unsigned long long aesl_llvm_cbe_1938_count = 0;
  static  unsigned long long aesl_llvm_cbe_1939_count = 0;
  static  unsigned long long aesl_llvm_cbe_1940_count = 0;
  static  unsigned long long aesl_llvm_cbe_1941_count = 0;
  static  unsigned long long aesl_llvm_cbe_1942_count = 0;
  static  unsigned long long aesl_llvm_cbe_1943_count = 0;
  static  unsigned long long aesl_llvm_cbe_1944_count = 0;
  static  unsigned long long aesl_llvm_cbe_1945_count = 0;
  float llvm_cbe_tmp__260;
  static  unsigned long long aesl_llvm_cbe_1946_count = 0;
  static  unsigned long long aesl_llvm_cbe_1947_count = 0;
  static  unsigned long long aesl_llvm_cbe_1948_count = 0;
  static  unsigned long long aesl_llvm_cbe_1949_count = 0;
  static  unsigned long long aesl_llvm_cbe_1950_count = 0;
  static  unsigned long long aesl_llvm_cbe_1951_count = 0;
  static  unsigned long long aesl_llvm_cbe_1952_count = 0;
  static  unsigned long long aesl_llvm_cbe_1953_count = 0;
  static  unsigned long long aesl_llvm_cbe_1954_count = 0;
  static  unsigned long long aesl_llvm_cbe_1955_count = 0;
  static  unsigned long long aesl_llvm_cbe_1956_count = 0;
  static  unsigned long long aesl_llvm_cbe_1957_count = 0;
  float llvm_cbe_tmp__261;
  static  unsigned long long aesl_llvm_cbe_1958_count = 0;
  static  unsigned long long aesl_llvm_cbe_1959_count = 0;
  static  unsigned long long aesl_llvm_cbe_1960_count = 0;
  static  unsigned long long aesl_llvm_cbe_1961_count = 0;
  static  unsigned long long aesl_llvm_cbe_1962_count = 0;
  static  unsigned long long aesl_llvm_cbe_1963_count = 0;
  static  unsigned long long aesl_llvm_cbe_1964_count = 0;
  static  unsigned long long aesl_llvm_cbe_1965_count = 0;
  static  unsigned long long aesl_llvm_cbe_1966_count = 0;
  static  unsigned long long aesl_llvm_cbe_1967_count = 0;
  static  unsigned long long aesl_llvm_cbe_1968_count = 0;
  static  unsigned long long aesl_llvm_cbe_1969_count = 0;
  float llvm_cbe_tmp__262;
  static  unsigned long long aesl_llvm_cbe_1970_count = 0;
  static  unsigned long long aesl_llvm_cbe_1971_count = 0;
  static  unsigned long long aesl_llvm_cbe_1972_count = 0;
  static  unsigned long long aesl_llvm_cbe_1973_count = 0;
  static  unsigned long long aesl_llvm_cbe_1974_count = 0;
  static  unsigned long long aesl_llvm_cbe_1975_count = 0;
  static  unsigned long long aesl_llvm_cbe_1976_count = 0;
  static  unsigned long long aesl_llvm_cbe_1977_count = 0;
  static  unsigned long long aesl_llvm_cbe_1978_count = 0;
  static  unsigned long long aesl_llvm_cbe_1979_count = 0;
  static  unsigned long long aesl_llvm_cbe_1980_count = 0;
  static  unsigned long long aesl_llvm_cbe_1981_count = 0;
  float llvm_cbe_tmp__263;
  static  unsigned long long aesl_llvm_cbe_1982_count = 0;
  static  unsigned long long aesl_llvm_cbe_1983_count = 0;
  static  unsigned long long aesl_llvm_cbe_1984_count = 0;
  static  unsigned long long aesl_llvm_cbe_1985_count = 0;
  static  unsigned long long aesl_llvm_cbe_1986_count = 0;
  static  unsigned long long aesl_llvm_cbe_1987_count = 0;
  static  unsigned long long aesl_llvm_cbe_1988_count = 0;
  static  unsigned long long aesl_llvm_cbe_1989_count = 0;
  static  unsigned long long aesl_llvm_cbe_1990_count = 0;
  static  unsigned long long aesl_llvm_cbe_1991_count = 0;
  static  unsigned long long aesl_llvm_cbe_1992_count = 0;
  static  unsigned long long aesl_llvm_cbe_1993_count = 0;
  float llvm_cbe_tmp__264;
  static  unsigned long long aesl_llvm_cbe_1994_count = 0;
  static  unsigned long long aesl_llvm_cbe_1995_count = 0;
  static  unsigned long long aesl_llvm_cbe_1996_count = 0;
  static  unsigned long long aesl_llvm_cbe_1997_count = 0;
  static  unsigned long long aesl_llvm_cbe_1998_count = 0;
  static  unsigned long long aesl_llvm_cbe_1999_count = 0;
  static  unsigned long long aesl_llvm_cbe_2000_count = 0;
  static  unsigned long long aesl_llvm_cbe_2001_count = 0;
  static  unsigned long long aesl_llvm_cbe_2002_count = 0;
  static  unsigned long long aesl_llvm_cbe_2003_count = 0;
  static  unsigned long long aesl_llvm_cbe_2004_count = 0;
  static  unsigned long long aesl_llvm_cbe_2005_count = 0;
  float llvm_cbe_tmp__265;
  static  unsigned long long aesl_llvm_cbe_2006_count = 0;
  static  unsigned long long aesl_llvm_cbe_2007_count = 0;
  static  unsigned long long aesl_llvm_cbe_2008_count = 0;
  static  unsigned long long aesl_llvm_cbe_2009_count = 0;
  static  unsigned long long aesl_llvm_cbe_2010_count = 0;
  static  unsigned long long aesl_llvm_cbe_2011_count = 0;
  static  unsigned long long aesl_llvm_cbe_2012_count = 0;
  static  unsigned long long aesl_llvm_cbe_2013_count = 0;
  static  unsigned long long aesl_llvm_cbe_2014_count = 0;
  static  unsigned long long aesl_llvm_cbe_2015_count = 0;
  static  unsigned long long aesl_llvm_cbe_2016_count = 0;
  static  unsigned long long aesl_llvm_cbe_2017_count = 0;
  float llvm_cbe_tmp__266;
  static  unsigned long long aesl_llvm_cbe_2018_count = 0;
  static  unsigned long long aesl_llvm_cbe_2019_count = 0;
  static  unsigned long long aesl_llvm_cbe_2020_count = 0;
  static  unsigned long long aesl_llvm_cbe_2021_count = 0;
  static  unsigned long long aesl_llvm_cbe_2022_count = 0;
  static  unsigned long long aesl_llvm_cbe_2023_count = 0;
  static  unsigned long long aesl_llvm_cbe_2024_count = 0;
  static  unsigned long long aesl_llvm_cbe_2025_count = 0;
  static  unsigned long long aesl_llvm_cbe_2026_count = 0;
  static  unsigned long long aesl_llvm_cbe_2027_count = 0;
  static  unsigned long long aesl_llvm_cbe_2028_count = 0;
  static  unsigned long long aesl_llvm_cbe_2029_count = 0;
  float llvm_cbe_tmp__267;
  static  unsigned long long aesl_llvm_cbe_2030_count = 0;
  static  unsigned long long aesl_llvm_cbe_2031_count = 0;
  static  unsigned long long aesl_llvm_cbe_2032_count = 0;
  static  unsigned long long aesl_llvm_cbe_2033_count = 0;
  static  unsigned long long aesl_llvm_cbe_2034_count = 0;
  static  unsigned long long aesl_llvm_cbe_2035_count = 0;
  static  unsigned long long aesl_llvm_cbe_2036_count = 0;
  double llvm_cbe_tmp__268;
  static  unsigned long long aesl_llvm_cbe_2037_count = 0;
  unsigned int llvm_cbe_tmp__269;
  static  unsigned long long aesl_llvm_cbe_2038_count = 0;
  static  unsigned long long aesl_llvm_cbe_2039_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge31_count = 0;
  unsigned int llvm_cbe_storemerge31;
  static  unsigned long long aesl_llvm_cbe_2040_count = 0;

  CODE_FOR_MAIN();
const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @main\n");
  llvm_cbe_storemerge62__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__270;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__270:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge62 = phi i32 [ 0, %%0 ], [ %%6, %%1  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge62_count);
  llvm_cbe_storemerge62 = (unsigned int )llvm_cbe_storemerge62__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge62 = 0x%X",llvm_cbe_storemerge62);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__5);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = sext i32 %%storemerge62 to i64, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_7_count);
  llvm_cbe_tmp__1 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge62);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [784 x float]* @test1_input_1_input_array, i64 0, i64 %%2, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_8_count);
  llvm_cbe_tmp__2 = (float *)(&test1_input_1_input_array[(((signed long long )llvm_cbe_tmp__1))
#ifdef AESL_BC_SIM
 % 784
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__1) < 784)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test1_input_1_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = load float* %%3, align 4, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_9_count);
  llvm_cbe_tmp__3 = (float )*llvm_cbe_tmp__2;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__3, *(int*)(&llvm_cbe_tmp__3));
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.k2c_tensor* @test1_input_1_input, i64 0, i32 0, i64 %%2, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_10_count);
  llvm_cbe_tmp__4 = (float *)(&test1_input_1_input.field0[(((signed long long )llvm_cbe_tmp__1))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%4, float* %%5, align 4, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_11_count);
  *llvm_cbe_tmp__4 = llvm_cbe_tmp__3;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add nsw i32 %%storemerge62, 1, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_12_count);
  llvm_cbe_tmp__5 = (unsigned int )((unsigned int )(llvm_cbe_storemerge62&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__5&4294967295ull)));
  if (((llvm_cbe_tmp__5&4294967295U) == (784u&4294967295U))) {
    goto llvm_cbe_tmp__271;
  } else {
    llvm_cbe_storemerge62__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__5;   /* for PHI node */
    goto llvm_cbe_tmp__270;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__271:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 3, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_input_1_input, i64 0, i32 1), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_19_count);
  *((&test1_input_1_input.field1)) = 3ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 3ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 784, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_input_1_input, i64 0, i32 2), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_20_count);
  *((&test1_input_1_input.field2)) = 784ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 784ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_input_1_input, i64 0, i32 3, i64 0), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_21_count);
  *((&test1_input_1_input.field3[(((signed long long )0ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_input_1_input, i64 0, i32 3, i64 1), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_22_count);
  *((&test1_input_1_input.field3[(((signed long long )1ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_input_1_input, i64 0, i32 3, i64 2), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_23_count);
  *((&test1_input_1_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_input_1_input, i64 0, i32 3, i64 3), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_24_count);
  *((&test1_input_1_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test1_input_1_input, i64 0, i32 3, i64 4), align 8, !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_25_count);
  *((&test1_input_1_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test1_array, i64 0, i64 0), align 16, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_31_count);
  llvm_cbe_tmp__6 = (float )*((&keras_dense_test1_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__6, *(int*)(&llvm_cbe_tmp__6));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%8, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test1, i64 0, i32 0, i64 0), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_32_count);
  *((&keras_dense_test1.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__6;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test1_array, i64 0, i64 1), align 4, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_38_count);
  llvm_cbe_tmp__7 = (float )*((&keras_dense_test1_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__7, *(int*)(&llvm_cbe_tmp__7));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%9, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test1, i64 0, i32 0, i64 1), align 4, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_39_count);
  *((&keras_dense_test1.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__7;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test1_array, i64 0, i64 2), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_45_count);
  llvm_cbe_tmp__8 = (float )*((&keras_dense_test1_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__8, *(int*)(&llvm_cbe_tmp__8));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%10, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test1, i64 0, i32 0, i64 2), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_46_count);
  *((&keras_dense_test1.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__8;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__8);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test1_array, i64 0, i64 3), align 4, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__9 = (float )*((&keras_dense_test1_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__9, *(int*)(&llvm_cbe_tmp__9));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%11, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test1, i64 0, i32 0, i64 3), align 4, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_53_count);
  *((&keras_dense_test1.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__9;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test1_array, i64 0, i64 4), align 16, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_59_count);
  llvm_cbe_tmp__10 = (float )*((&keras_dense_test1_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__10, *(int*)(&llvm_cbe_tmp__10));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%12, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test1, i64 0, i32 0, i64 4), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_60_count);
  *((&keras_dense_test1.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__10;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test1_array, i64 0, i64 5), align 4, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_66_count);
  llvm_cbe_tmp__11 = (float )*((&keras_dense_test1_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__11, *(int*)(&llvm_cbe_tmp__11));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%13, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test1, i64 0, i32 0, i64 5), align 4, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_67_count);
  *((&keras_dense_test1.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__11;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test1_array, i64 0, i64 6), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_73_count);
  llvm_cbe_tmp__12 = (float )*((&keras_dense_test1_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__12, *(int*)(&llvm_cbe_tmp__12));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%14, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test1, i64 0, i32 0, i64 6), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_74_count);
  *((&keras_dense_test1.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__12;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test1_array, i64 0, i64 7), align 4, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_80_count);
  llvm_cbe_tmp__13 = (float )*((&keras_dense_test1_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__13, *(int*)(&llvm_cbe_tmp__13));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%15, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test1, i64 0, i32 0, i64 7), align 4, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_81_count);
  *((&keras_dense_test1.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__13;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test1_array, i64 0, i64 8), align 16, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_87_count);
  llvm_cbe_tmp__14 = (float )*((&keras_dense_test1_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__14, *(int*)(&llvm_cbe_tmp__14));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%16, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test1, i64 0, i32 0, i64 8), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_88_count);
  *((&keras_dense_test1.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__14;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__14);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test1_array, i64 0, i64 9), align 4, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_94_count);
  llvm_cbe_tmp__15 = (float )*((&keras_dense_test1_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__15, *(int*)(&llvm_cbe_tmp__15));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%17, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test1, i64 0, i32 0, i64 9), align 4, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_95_count);
  *((&keras_dense_test1.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__15;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test1, i64 0, i32 1), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_101_count);
  *((&keras_dense_test1.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test1, i64 0, i32 2), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_102_count);
  *((&keras_dense_test1.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test1, i64 0, i32 3, i64 0), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_103_count);
  *((&keras_dense_test1.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test1, i64 0, i32 3, i64 1), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_104_count);
  *((&keras_dense_test1.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test1, i64 0, i32 3, i64 2), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_105_count);
  *((&keras_dense_test1.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test1, i64 0, i32 3, i64 3), align 8, !dbg !14 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_106_count);
  *((&keras_dense_test1.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test1, i64 0, i32 3, i64 4), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_107_count);
  *((&keras_dense_test1.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = load float* getelementptr inbounds ([10 x float]* @c_dense_test1_array, i64 0, i64 0), align 16, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_113_count);
  llvm_cbe_tmp__16 = (float )*((&c_dense_test1_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__16, *(int*)(&llvm_cbe_tmp__16));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%18, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test1, i64 0, i32 0, i64 0), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_114_count);
  *((&c_dense_test1.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__16;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = load float* getelementptr inbounds ([10 x float]* @c_dense_test1_array, i64 0, i64 1), align 4, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_120_count);
  llvm_cbe_tmp__17 = (float )*((&c_dense_test1_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__17, *(int*)(&llvm_cbe_tmp__17));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%19, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test1, i64 0, i32 0, i64 1), align 4, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_121_count);
  *((&c_dense_test1.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__17;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = load float* getelementptr inbounds ([10 x float]* @c_dense_test1_array, i64 0, i64 2), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_127_count);
  llvm_cbe_tmp__18 = (float )*((&c_dense_test1_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__18, *(int*)(&llvm_cbe_tmp__18));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%20, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test1, i64 0, i32 0, i64 2), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_128_count);
  *((&c_dense_test1.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__18;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = load float* getelementptr inbounds ([10 x float]* @c_dense_test1_array, i64 0, i64 3), align 4, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_134_count);
  llvm_cbe_tmp__19 = (float )*((&c_dense_test1_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__19, *(int*)(&llvm_cbe_tmp__19));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%21, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test1, i64 0, i32 0, i64 3), align 4, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_135_count);
  *((&c_dense_test1.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__19;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = load float* getelementptr inbounds ([10 x float]* @c_dense_test1_array, i64 0, i64 4), align 16, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_141_count);
  llvm_cbe_tmp__20 = (float )*((&c_dense_test1_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__20, *(int*)(&llvm_cbe_tmp__20));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%22, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test1, i64 0, i32 0, i64 4), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_142_count);
  *((&c_dense_test1.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__20);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = load float* getelementptr inbounds ([10 x float]* @c_dense_test1_array, i64 0, i64 5), align 4, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_148_count);
  llvm_cbe_tmp__21 = (float )*((&c_dense_test1_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__21, *(int*)(&llvm_cbe_tmp__21));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%23, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test1, i64 0, i32 0, i64 5), align 4, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_149_count);
  *((&c_dense_test1.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__21;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = load float* getelementptr inbounds ([10 x float]* @c_dense_test1_array, i64 0, i64 6), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_155_count);
  llvm_cbe_tmp__22 = (float )*((&c_dense_test1_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__22, *(int*)(&llvm_cbe_tmp__22));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%24, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test1, i64 0, i32 0, i64 6), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_156_count);
  *((&c_dense_test1.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__22;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = load float* getelementptr inbounds ([10 x float]* @c_dense_test1_array, i64 0, i64 7), align 4, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_162_count);
  llvm_cbe_tmp__23 = (float )*((&c_dense_test1_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__23, *(int*)(&llvm_cbe_tmp__23));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%25, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test1, i64 0, i32 0, i64 7), align 4, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_163_count);
  *((&c_dense_test1.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__23;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = load float* getelementptr inbounds ([10 x float]* @c_dense_test1_array, i64 0, i64 8), align 16, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_169_count);
  llvm_cbe_tmp__24 = (float )*((&c_dense_test1_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__24, *(int*)(&llvm_cbe_tmp__24));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%26, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test1, i64 0, i32 0, i64 8), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_170_count);
  *((&c_dense_test1.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__24;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__24);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = load float* getelementptr inbounds ([10 x float]* @c_dense_test1_array, i64 0, i64 9), align 4, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_176_count);
  llvm_cbe_tmp__25 = (float )*((&c_dense_test1_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__25, *(int*)(&llvm_cbe_tmp__25));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%27, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test1, i64 0, i32 0, i64 9), align 4, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_177_count);
  *((&c_dense_test1.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__25;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test1, i64 0, i32 1), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_183_count);
  *((&c_dense_test1.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test1, i64 0, i32 2), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_184_count);
  *((&c_dense_test1.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test1, i64 0, i32 3, i64 0), align 8, !dbg !15 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_185_count);
  *((&c_dense_test1.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test1, i64 0, i32 3, i64 1), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_186_count);
  *((&c_dense_test1.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test1, i64 0, i32 3, i64 2), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_187_count);
  *((&c_dense_test1.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test1, i64 0, i32 3, i64 3), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_188_count);
  *((&c_dense_test1.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test1, i64 0, i32 3, i64 4), align 8, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_189_count);
  *((&c_dense_test1.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  llvm_cbe_storemerge359__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__272;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__272:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge359 = phi i32 [ 0, %%7 ], [ %%33, %%28  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge359_count);
  llvm_cbe_storemerge359 = (unsigned int )llvm_cbe_storemerge359__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge359 = 0x%X",llvm_cbe_storemerge359);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__30);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = sext i32 %%storemerge359 to i64, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_196_count);
  llvm_cbe_tmp__26 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge359);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = getelementptr inbounds [784 x float]* @test2_input_1_input_array, i64 0, i64 %%29, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_197_count);
  llvm_cbe_tmp__27 = (float *)(&test2_input_1_input_array[(((signed long long )llvm_cbe_tmp__26))
#ifdef AESL_BC_SIM
 % 784
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__26));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__26) < 784)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test2_input_1_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = load float* %%30, align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_198_count);
  llvm_cbe_tmp__28 = (float )*llvm_cbe_tmp__27;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__28, *(int*)(&llvm_cbe_tmp__28));
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = getelementptr inbounds %%struct.k2c_tensor* @test2_input_1_input, i64 0, i32 0, i64 %%29, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_199_count);
  llvm_cbe_tmp__29 = (float *)(&test2_input_1_input.field0[(((signed long long )llvm_cbe_tmp__26))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__26));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%31, float* %%32, align 4, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_200_count);
  *llvm_cbe_tmp__29 = llvm_cbe_tmp__28;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = add nsw i32 %%storemerge359, 1, !dbg !16 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_201_count);
  llvm_cbe_tmp__30 = (unsigned int )((unsigned int )(llvm_cbe_storemerge359&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__30&4294967295ull)));
  if (((llvm_cbe_tmp__30&4294967295U) == (784u&4294967295U))) {
    goto llvm_cbe_tmp__273;
  } else {
    llvm_cbe_storemerge359__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__30;   /* for PHI node */
    goto llvm_cbe_tmp__272;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__273:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 3, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_input_1_input, i64 0, i32 1), align 8, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_208_count);
  *((&test2_input_1_input.field1)) = 3ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 3ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 784, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_input_1_input, i64 0, i32 2), align 8, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_209_count);
  *((&test2_input_1_input.field2)) = 784ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 784ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_input_1_input, i64 0, i32 3, i64 0), align 8, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_210_count);
  *((&test2_input_1_input.field3[(((signed long long )0ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_input_1_input, i64 0, i32 3, i64 1), align 8, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_211_count);
  *((&test2_input_1_input.field3[(((signed long long )1ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_input_1_input, i64 0, i32 3, i64 2), align 8, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_212_count);
  *((&test2_input_1_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_input_1_input, i64 0, i32 3, i64 3), align 8, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_213_count);
  *((&test2_input_1_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test2_input_1_input, i64 0, i32 3, i64 4), align 8, !dbg !17 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_214_count);
  *((&test2_input_1_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test2_array, i64 0, i64 0), align 16, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_220_count);
  llvm_cbe_tmp__31 = (float )*((&keras_dense_test2_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__31, *(int*)(&llvm_cbe_tmp__31));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%35, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test2, i64 0, i32 0, i64 0), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_221_count);
  *((&keras_dense_test2.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__31;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test2_array, i64 0, i64 1), align 4, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_227_count);
  llvm_cbe_tmp__32 = (float )*((&keras_dense_test2_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__32, *(int*)(&llvm_cbe_tmp__32));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%36, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test2, i64 0, i32 0, i64 1), align 4, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_228_count);
  *((&keras_dense_test2.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__32;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test2_array, i64 0, i64 2), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_234_count);
  llvm_cbe_tmp__33 = (float )*((&keras_dense_test2_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__33, *(int*)(&llvm_cbe_tmp__33));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%37, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test2, i64 0, i32 0, i64 2), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_235_count);
  *((&keras_dense_test2.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__33;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test2_array, i64 0, i64 3), align 4, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_241_count);
  llvm_cbe_tmp__34 = (float )*((&keras_dense_test2_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__34, *(int*)(&llvm_cbe_tmp__34));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%38, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test2, i64 0, i32 0, i64 3), align 4, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_242_count);
  *((&keras_dense_test2.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__34;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test2_array, i64 0, i64 4), align 16, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_248_count);
  llvm_cbe_tmp__35 = (float )*((&keras_dense_test2_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__35, *(int*)(&llvm_cbe_tmp__35));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%39, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test2, i64 0, i32 0, i64 4), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_249_count);
  *((&keras_dense_test2.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__35;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test2_array, i64 0, i64 5), align 4, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_255_count);
  llvm_cbe_tmp__36 = (float )*((&keras_dense_test2_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__36, *(int*)(&llvm_cbe_tmp__36));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%40, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test2, i64 0, i32 0, i64 5), align 4, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_256_count);
  *((&keras_dense_test2.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__36;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test2_array, i64 0, i64 6), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_262_count);
  llvm_cbe_tmp__37 = (float )*((&keras_dense_test2_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__37, *(int*)(&llvm_cbe_tmp__37));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%41, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test2, i64 0, i32 0, i64 6), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_263_count);
  *((&keras_dense_test2.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__37;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test2_array, i64 0, i64 7), align 4, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_269_count);
  llvm_cbe_tmp__38 = (float )*((&keras_dense_test2_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__38, *(int*)(&llvm_cbe_tmp__38));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%42, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test2, i64 0, i32 0, i64 7), align 4, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_270_count);
  *((&keras_dense_test2.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__38;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test2_array, i64 0, i64 8), align 16, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_276_count);
  llvm_cbe_tmp__39 = (float )*((&keras_dense_test2_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__39, *(int*)(&llvm_cbe_tmp__39));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%43, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test2, i64 0, i32 0, i64 8), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_277_count);
  *((&keras_dense_test2.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__39;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test2_array, i64 0, i64 9), align 4, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_283_count);
  llvm_cbe_tmp__40 = (float )*((&keras_dense_test2_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__40, *(int*)(&llvm_cbe_tmp__40));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%44, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test2, i64 0, i32 0, i64 9), align 4, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_284_count);
  *((&keras_dense_test2.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__40;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test2, i64 0, i32 1), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_290_count);
  *((&keras_dense_test2.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test2, i64 0, i32 2), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_291_count);
  *((&keras_dense_test2.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test2, i64 0, i32 3, i64 0), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_292_count);
  *((&keras_dense_test2.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test2, i64 0, i32 3, i64 1), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_293_count);
  *((&keras_dense_test2.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test2, i64 0, i32 3, i64 2), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_294_count);
  *((&keras_dense_test2.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test2, i64 0, i32 3, i64 3), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_295_count);
  *((&keras_dense_test2.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test2, i64 0, i32 3, i64 4), align 8, !dbg !18 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_296_count);
  *((&keras_dense_test2.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = load float* getelementptr inbounds ([10 x float]* @c_dense_test2_array, i64 0, i64 0), align 16, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_302_count);
  llvm_cbe_tmp__41 = (float )*((&c_dense_test2_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__41, *(int*)(&llvm_cbe_tmp__41));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%45, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test2, i64 0, i32 0, i64 0), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_303_count);
  *((&c_dense_test2.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__41;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__41);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = load float* getelementptr inbounds ([10 x float]* @c_dense_test2_array, i64 0, i64 1), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_309_count);
  llvm_cbe_tmp__42 = (float )*((&c_dense_test2_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__42, *(int*)(&llvm_cbe_tmp__42));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%46, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test2, i64 0, i32 0, i64 1), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_310_count);
  *((&c_dense_test2.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__42;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__42);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = load float* getelementptr inbounds ([10 x float]* @c_dense_test2_array, i64 0, i64 2), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_316_count);
  llvm_cbe_tmp__43 = (float )*((&c_dense_test2_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__43, *(int*)(&llvm_cbe_tmp__43));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%47, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test2, i64 0, i32 0, i64 2), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_317_count);
  *((&c_dense_test2.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__43;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__43);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = load float* getelementptr inbounds ([10 x float]* @c_dense_test2_array, i64 0, i64 3), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_323_count);
  llvm_cbe_tmp__44 = (float )*((&c_dense_test2_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__44, *(int*)(&llvm_cbe_tmp__44));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%48, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test2, i64 0, i32 0, i64 3), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_324_count);
  *((&c_dense_test2.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__44;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = load float* getelementptr inbounds ([10 x float]* @c_dense_test2_array, i64 0, i64 4), align 16, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_330_count);
  llvm_cbe_tmp__45 = (float )*((&c_dense_test2_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__45, *(int*)(&llvm_cbe_tmp__45));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%49, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test2, i64 0, i32 0, i64 4), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_331_count);
  *((&c_dense_test2.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__45;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__45);
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = load float* getelementptr inbounds ([10 x float]* @c_dense_test2_array, i64 0, i64 5), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_337_count);
  llvm_cbe_tmp__46 = (float )*((&c_dense_test2_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__46, *(int*)(&llvm_cbe_tmp__46));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%50, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test2, i64 0, i32 0, i64 5), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_338_count);
  *((&c_dense_test2.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__46;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__46);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = load float* getelementptr inbounds ([10 x float]* @c_dense_test2_array, i64 0, i64 6), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_344_count);
  llvm_cbe_tmp__47 = (float )*((&c_dense_test2_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__47, *(int*)(&llvm_cbe_tmp__47));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%51, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test2, i64 0, i32 0, i64 6), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_345_count);
  *((&c_dense_test2.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__47;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__47);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = load float* getelementptr inbounds ([10 x float]* @c_dense_test2_array, i64 0, i64 7), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_351_count);
  llvm_cbe_tmp__48 = (float )*((&c_dense_test2_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__48, *(int*)(&llvm_cbe_tmp__48));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%52, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test2, i64 0, i32 0, i64 7), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_352_count);
  *((&c_dense_test2.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__48;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__48);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = load float* getelementptr inbounds ([10 x float]* @c_dense_test2_array, i64 0, i64 8), align 16, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_358_count);
  llvm_cbe_tmp__49 = (float )*((&c_dense_test2_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__49, *(int*)(&llvm_cbe_tmp__49));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%53, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test2, i64 0, i32 0, i64 8), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_359_count);
  *((&c_dense_test2.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__49;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__49);
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = load float* getelementptr inbounds ([10 x float]* @c_dense_test2_array, i64 0, i64 9), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_365_count);
  llvm_cbe_tmp__50 = (float )*((&c_dense_test2_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__50, *(int*)(&llvm_cbe_tmp__50));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%54, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test2, i64 0, i32 0, i64 9), align 4, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_366_count);
  *((&c_dense_test2.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__50;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test2, i64 0, i32 1), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_372_count);
  *((&c_dense_test2.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test2, i64 0, i32 2), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_373_count);
  *((&c_dense_test2.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test2, i64 0, i32 3, i64 0), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_374_count);
  *((&c_dense_test2.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test2, i64 0, i32 3, i64 1), align 8, !dbg !19 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_375_count);
  *((&c_dense_test2.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test2, i64 0, i32 3, i64 2), align 8, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_376_count);
  *((&c_dense_test2.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test2, i64 0, i32 3, i64 3), align 8, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_377_count);
  *((&c_dense_test2.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test2, i64 0, i32 3, i64 4), align 8, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_378_count);
  *((&c_dense_test2.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  llvm_cbe_storemerge656__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__274;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__274:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge656 = phi i32 [ 0, %%34 ], [ %%60, %%55  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge656_count);
  llvm_cbe_storemerge656 = (unsigned int )llvm_cbe_storemerge656__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge656 = 0x%X",llvm_cbe_storemerge656);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__55);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = sext i32 %%storemerge656 to i64, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_385_count);
  llvm_cbe_tmp__51 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge656);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__51);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = getelementptr inbounds [784 x float]* @test3_input_1_input_array, i64 0, i64 %%56, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_386_count);
  llvm_cbe_tmp__52 = (float *)(&test3_input_1_input_array[(((signed long long )llvm_cbe_tmp__51))
#ifdef AESL_BC_SIM
 % 784
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__51));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__51) < 784)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test3_input_1_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = load float* %%57, align 4, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_387_count);
  llvm_cbe_tmp__53 = (float )*llvm_cbe_tmp__52;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__53, *(int*)(&llvm_cbe_tmp__53));
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = getelementptr inbounds %%struct.k2c_tensor* @test3_input_1_input, i64 0, i32 0, i64 %%56, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_388_count);
  llvm_cbe_tmp__54 = (float *)(&test3_input_1_input.field0[(((signed long long )llvm_cbe_tmp__51))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__51));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%58, float* %%59, align 4, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_389_count);
  *llvm_cbe_tmp__54 = llvm_cbe_tmp__53;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = add nsw i32 %%storemerge656, 1, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_390_count);
  llvm_cbe_tmp__55 = (unsigned int )((unsigned int )(llvm_cbe_storemerge656&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__55&4294967295ull)));
  if (((llvm_cbe_tmp__55&4294967295U) == (784u&4294967295U))) {
    goto llvm_cbe_tmp__275;
  } else {
    llvm_cbe_storemerge656__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__55;   /* for PHI node */
    goto llvm_cbe_tmp__274;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__275:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 3, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_input_1_input, i64 0, i32 1), align 8, !dbg !20 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_397_count);
  *((&test3_input_1_input.field1)) = 3ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 3ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 784, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_input_1_input, i64 0, i32 2), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_398_count);
  *((&test3_input_1_input.field2)) = 784ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 784ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_input_1_input, i64 0, i32 3, i64 0), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_399_count);
  *((&test3_input_1_input.field3[(((signed long long )0ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_input_1_input, i64 0, i32 3, i64 1), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_400_count);
  *((&test3_input_1_input.field3[(((signed long long )1ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_input_1_input, i64 0, i32 3, i64 2), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_401_count);
  *((&test3_input_1_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_input_1_input, i64 0, i32 3, i64 3), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_402_count);
  *((&test3_input_1_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test3_input_1_input, i64 0, i32 3, i64 4), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_403_count);
  *((&test3_input_1_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test3_array, i64 0, i64 0), align 16, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_409_count);
  llvm_cbe_tmp__56 = (float )*((&keras_dense_test3_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__56, *(int*)(&llvm_cbe_tmp__56));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%62, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test3, i64 0, i32 0, i64 0), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_410_count);
  *((&keras_dense_test3.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__56;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test3_array, i64 0, i64 1), align 4, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_416_count);
  llvm_cbe_tmp__57 = (float )*((&keras_dense_test3_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__57, *(int*)(&llvm_cbe_tmp__57));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%63, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test3, i64 0, i32 0, i64 1), align 4, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_417_count);
  *((&keras_dense_test3.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__57;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__57);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test3_array, i64 0, i64 2), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_423_count);
  llvm_cbe_tmp__58 = (float )*((&keras_dense_test3_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__58, *(int*)(&llvm_cbe_tmp__58));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%64, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test3, i64 0, i32 0, i64 2), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_424_count);
  *((&keras_dense_test3.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__58;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__58);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test3_array, i64 0, i64 3), align 4, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_430_count);
  llvm_cbe_tmp__59 = (float )*((&keras_dense_test3_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__59, *(int*)(&llvm_cbe_tmp__59));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%65, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test3, i64 0, i32 0, i64 3), align 4, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_431_count);
  *((&keras_dense_test3.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__59;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test3_array, i64 0, i64 4), align 16, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_437_count);
  llvm_cbe_tmp__60 = (float )*((&keras_dense_test3_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__60, *(int*)(&llvm_cbe_tmp__60));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%66, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test3, i64 0, i32 0, i64 4), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_438_count);
  *((&keras_dense_test3.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__60;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__60);
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test3_array, i64 0, i64 5), align 4, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_444_count);
  llvm_cbe_tmp__61 = (float )*((&keras_dense_test3_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__61, *(int*)(&llvm_cbe_tmp__61));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%67, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test3, i64 0, i32 0, i64 5), align 4, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_445_count);
  *((&keras_dense_test3.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__61;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__61);
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test3_array, i64 0, i64 6), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_451_count);
  llvm_cbe_tmp__62 = (float )*((&keras_dense_test3_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__62, *(int*)(&llvm_cbe_tmp__62));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%68, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test3, i64 0, i32 0, i64 6), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_452_count);
  *((&keras_dense_test3.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__62;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test3_array, i64 0, i64 7), align 4, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_458_count);
  llvm_cbe_tmp__63 = (float )*((&keras_dense_test3_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__63, *(int*)(&llvm_cbe_tmp__63));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%69, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test3, i64 0, i32 0, i64 7), align 4, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_459_count);
  *((&keras_dense_test3.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__63;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__63);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test3_array, i64 0, i64 8), align 16, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_465_count);
  llvm_cbe_tmp__64 = (float )*((&keras_dense_test3_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__64, *(int*)(&llvm_cbe_tmp__64));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%70, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test3, i64 0, i32 0, i64 8), align 8, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_466_count);
  *((&keras_dense_test3.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__64;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__64);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test3_array, i64 0, i64 9), align 4, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_472_count);
  llvm_cbe_tmp__65 = (float )*((&keras_dense_test3_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__65, *(int*)(&llvm_cbe_tmp__65));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%71, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test3, i64 0, i32 0, i64 9), align 4, !dbg !21 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_473_count);
  *((&keras_dense_test3.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__65;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test3, i64 0, i32 1), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_479_count);
  *((&keras_dense_test3.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test3, i64 0, i32 2), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_480_count);
  *((&keras_dense_test3.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test3, i64 0, i32 3, i64 0), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_481_count);
  *((&keras_dense_test3.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test3, i64 0, i32 3, i64 1), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_482_count);
  *((&keras_dense_test3.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test3, i64 0, i32 3, i64 2), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_483_count);
  *((&keras_dense_test3.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test3, i64 0, i32 3, i64 3), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_484_count);
  *((&keras_dense_test3.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test3, i64 0, i32 3, i64 4), align 8, !dbg !22 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_485_count);
  *((&keras_dense_test3.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = load float* getelementptr inbounds ([10 x float]* @c_dense_test3_array, i64 0, i64 0), align 16, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_491_count);
  llvm_cbe_tmp__66 = (float )*((&c_dense_test3_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__66, *(int*)(&llvm_cbe_tmp__66));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%72, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test3, i64 0, i32 0, i64 0), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_492_count);
  *((&c_dense_test3.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__66;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__66);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = load float* getelementptr inbounds ([10 x float]* @c_dense_test3_array, i64 0, i64 1), align 4, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_498_count);
  llvm_cbe_tmp__67 = (float )*((&c_dense_test3_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__67, *(int*)(&llvm_cbe_tmp__67));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%73, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test3, i64 0, i32 0, i64 1), align 4, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_499_count);
  *((&c_dense_test3.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__67;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = load float* getelementptr inbounds ([10 x float]* @c_dense_test3_array, i64 0, i64 2), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_505_count);
  llvm_cbe_tmp__68 = (float )*((&c_dense_test3_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__68, *(int*)(&llvm_cbe_tmp__68));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%74, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test3, i64 0, i32 0, i64 2), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_506_count);
  *((&c_dense_test3.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__68;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__68);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = load float* getelementptr inbounds ([10 x float]* @c_dense_test3_array, i64 0, i64 3), align 4, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_512_count);
  llvm_cbe_tmp__69 = (float )*((&c_dense_test3_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__69, *(int*)(&llvm_cbe_tmp__69));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%75, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test3, i64 0, i32 0, i64 3), align 4, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_513_count);
  *((&c_dense_test3.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__69;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__69);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = load float* getelementptr inbounds ([10 x float]* @c_dense_test3_array, i64 0, i64 4), align 16, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_519_count);
  llvm_cbe_tmp__70 = (float )*((&c_dense_test3_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__70, *(int*)(&llvm_cbe_tmp__70));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%76, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test3, i64 0, i32 0, i64 4), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_520_count);
  *((&c_dense_test3.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__70;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = load float* getelementptr inbounds ([10 x float]* @c_dense_test3_array, i64 0, i64 5), align 4, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_526_count);
  llvm_cbe_tmp__71 = (float )*((&c_dense_test3_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__71, *(int*)(&llvm_cbe_tmp__71));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%77, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test3, i64 0, i32 0, i64 5), align 4, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_527_count);
  *((&c_dense_test3.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__71;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = load float* getelementptr inbounds ([10 x float]* @c_dense_test3_array, i64 0, i64 6), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_533_count);
  llvm_cbe_tmp__72 = (float )*((&c_dense_test3_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__72, *(int*)(&llvm_cbe_tmp__72));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%78, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test3, i64 0, i32 0, i64 6), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_534_count);
  *((&c_dense_test3.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__72;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__72);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = load float* getelementptr inbounds ([10 x float]* @c_dense_test3_array, i64 0, i64 7), align 4, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_540_count);
  llvm_cbe_tmp__73 = (float )*((&c_dense_test3_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__73, *(int*)(&llvm_cbe_tmp__73));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%79, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test3, i64 0, i32 0, i64 7), align 4, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_541_count);
  *((&c_dense_test3.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__73;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__73);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = load float* getelementptr inbounds ([10 x float]* @c_dense_test3_array, i64 0, i64 8), align 16, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_547_count);
  llvm_cbe_tmp__74 = (float )*((&c_dense_test3_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__74, *(int*)(&llvm_cbe_tmp__74));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%80, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test3, i64 0, i32 0, i64 8), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_548_count);
  *((&c_dense_test3.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__74;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__74);
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = load float* getelementptr inbounds ([10 x float]* @c_dense_test3_array, i64 0, i64 9), align 4, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_554_count);
  llvm_cbe_tmp__75 = (float )*((&c_dense_test3_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__75, *(int*)(&llvm_cbe_tmp__75));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%81, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test3, i64 0, i32 0, i64 9), align 4, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_555_count);
  *((&c_dense_test3.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__75;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__75);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test3, i64 0, i32 1), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_561_count);
  *((&c_dense_test3.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test3, i64 0, i32 2), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_562_count);
  *((&c_dense_test3.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test3, i64 0, i32 3, i64 0), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_563_count);
  *((&c_dense_test3.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test3, i64 0, i32 3, i64 1), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_564_count);
  *((&c_dense_test3.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test3, i64 0, i32 3, i64 2), align 8, !dbg !23 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_565_count);
  *((&c_dense_test3.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test3, i64 0, i32 3, i64 3), align 8, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_566_count);
  *((&c_dense_test3.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test3, i64 0, i32 3, i64 4), align 8, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_567_count);
  *((&c_dense_test3.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  llvm_cbe_storemerge953__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__276;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__276:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge953 = phi i32 [ 0, %%61 ], [ %%87, %%82  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge953_count);
  llvm_cbe_storemerge953 = (unsigned int )llvm_cbe_storemerge953__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge953 = 0x%X",llvm_cbe_storemerge953);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__80);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = sext i32 %%storemerge953 to i64, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_574_count);
  llvm_cbe_tmp__76 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge953);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = getelementptr inbounds [784 x float]* @test4_input_1_input_array, i64 0, i64 %%83, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_575_count);
  llvm_cbe_tmp__77 = (float *)(&test4_input_1_input_array[(((signed long long )llvm_cbe_tmp__76))
#ifdef AESL_BC_SIM
 % 784
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__76));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__76) < 784)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test4_input_1_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = load float* %%84, align 4, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_576_count);
  llvm_cbe_tmp__78 = (float )*llvm_cbe_tmp__77;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__78, *(int*)(&llvm_cbe_tmp__78));
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = getelementptr inbounds %%struct.k2c_tensor* @test4_input_1_input, i64 0, i32 0, i64 %%83, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_577_count);
  llvm_cbe_tmp__79 = (float *)(&test4_input_1_input.field0[(((signed long long )llvm_cbe_tmp__76))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__76));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%85, float* %%86, align 4, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_578_count);
  *llvm_cbe_tmp__79 = llvm_cbe_tmp__78;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__78);
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = add nsw i32 %%storemerge953, 1, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_579_count);
  llvm_cbe_tmp__80 = (unsigned int )((unsigned int )(llvm_cbe_storemerge953&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__80&4294967295ull)));
  if (((llvm_cbe_tmp__80&4294967295U) == (784u&4294967295U))) {
    goto llvm_cbe_tmp__277;
  } else {
    llvm_cbe_storemerge953__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__80;   /* for PHI node */
    goto llvm_cbe_tmp__276;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__277:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 3, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_input_1_input, i64 0, i32 1), align 8, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_586_count);
  *((&test4_input_1_input.field1)) = 3ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 3ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 784, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_input_1_input, i64 0, i32 2), align 8, !dbg !24 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_587_count);
  *((&test4_input_1_input.field2)) = 784ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 784ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_input_1_input, i64 0, i32 3, i64 0), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_588_count);
  *((&test4_input_1_input.field3[(((signed long long )0ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_input_1_input, i64 0, i32 3, i64 1), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_589_count);
  *((&test4_input_1_input.field3[(((signed long long )1ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_input_1_input, i64 0, i32 3, i64 2), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_590_count);
  *((&test4_input_1_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_input_1_input, i64 0, i32 3, i64 3), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_591_count);
  *((&test4_input_1_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test4_input_1_input, i64 0, i32 3, i64 4), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_592_count);
  *((&test4_input_1_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test4_array, i64 0, i64 0), align 16, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_598_count);
  llvm_cbe_tmp__81 = (float )*((&keras_dense_test4_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__81, *(int*)(&llvm_cbe_tmp__81));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%89, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test4, i64 0, i32 0, i64 0), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_599_count);
  *((&keras_dense_test4.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__81;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__81);
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test4_array, i64 0, i64 1), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_605_count);
  llvm_cbe_tmp__82 = (float )*((&keras_dense_test4_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__82, *(int*)(&llvm_cbe_tmp__82));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%90, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test4, i64 0, i32 0, i64 1), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_606_count);
  *((&keras_dense_test4.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__82;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test4_array, i64 0, i64 2), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_612_count);
  llvm_cbe_tmp__83 = (float )*((&keras_dense_test4_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__83, *(int*)(&llvm_cbe_tmp__83));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%91, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test4, i64 0, i32 0, i64 2), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_613_count);
  *((&keras_dense_test4.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__83;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__83);
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test4_array, i64 0, i64 3), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_619_count);
  llvm_cbe_tmp__84 = (float )*((&keras_dense_test4_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__84, *(int*)(&llvm_cbe_tmp__84));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%92, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test4, i64 0, i32 0, i64 3), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_620_count);
  *((&keras_dense_test4.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__84;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__84);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test4_array, i64 0, i64 4), align 16, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_626_count);
  llvm_cbe_tmp__85 = (float )*((&keras_dense_test4_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__85, *(int*)(&llvm_cbe_tmp__85));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%93, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test4, i64 0, i32 0, i64 4), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_627_count);
  *((&keras_dense_test4.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__85;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__85);
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test4_array, i64 0, i64 5), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_633_count);
  llvm_cbe_tmp__86 = (float )*((&keras_dense_test4_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__86, *(int*)(&llvm_cbe_tmp__86));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%94, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test4, i64 0, i32 0, i64 5), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_634_count);
  *((&keras_dense_test4.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__86;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__86);
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test4_array, i64 0, i64 6), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_640_count);
  llvm_cbe_tmp__87 = (float )*((&keras_dense_test4_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__87, *(int*)(&llvm_cbe_tmp__87));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%95, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test4, i64 0, i32 0, i64 6), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_641_count);
  *((&keras_dense_test4.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__87;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__87);
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test4_array, i64 0, i64 7), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_647_count);
  llvm_cbe_tmp__88 = (float )*((&keras_dense_test4_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__88, *(int*)(&llvm_cbe_tmp__88));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%96, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test4, i64 0, i32 0, i64 7), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_648_count);
  *((&keras_dense_test4.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__88;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__88);
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test4_array, i64 0, i64 8), align 16, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_654_count);
  llvm_cbe_tmp__89 = (float )*((&keras_dense_test4_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__89, *(int*)(&llvm_cbe_tmp__89));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%97, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test4, i64 0, i32 0, i64 8), align 8, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_655_count);
  *((&keras_dense_test4.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__89;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__89);
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test4_array, i64 0, i64 9), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_661_count);
  llvm_cbe_tmp__90 = (float )*((&keras_dense_test4_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__90, *(int*)(&llvm_cbe_tmp__90));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%98, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test4, i64 0, i32 0, i64 9), align 4, !dbg !25 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_662_count);
  *((&keras_dense_test4.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__90;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__90);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test4, i64 0, i32 1), align 8, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_668_count);
  *((&keras_dense_test4.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test4, i64 0, i32 2), align 8, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_669_count);
  *((&keras_dense_test4.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test4, i64 0, i32 3, i64 0), align 8, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_670_count);
  *((&keras_dense_test4.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test4, i64 0, i32 3, i64 1), align 8, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_671_count);
  *((&keras_dense_test4.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test4, i64 0, i32 3, i64 2), align 8, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_672_count);
  *((&keras_dense_test4.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test4, i64 0, i32 3, i64 3), align 8, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_673_count);
  *((&keras_dense_test4.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test4, i64 0, i32 3, i64 4), align 8, !dbg !26 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_674_count);
  *((&keras_dense_test4.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = load float* getelementptr inbounds ([10 x float]* @c_dense_test4_array, i64 0, i64 0), align 16, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_680_count);
  llvm_cbe_tmp__91 = (float )*((&c_dense_test4_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__91, *(int*)(&llvm_cbe_tmp__91));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%99, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test4, i64 0, i32 0, i64 0), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_681_count);
  *((&c_dense_test4.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__91;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__91);
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = load float* getelementptr inbounds ([10 x float]* @c_dense_test4_array, i64 0, i64 1), align 4, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_687_count);
  llvm_cbe_tmp__92 = (float )*((&c_dense_test4_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__92, *(int*)(&llvm_cbe_tmp__92));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%100, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test4, i64 0, i32 0, i64 1), align 4, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_688_count);
  *((&c_dense_test4.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__92;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__92);
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = load float* getelementptr inbounds ([10 x float]* @c_dense_test4_array, i64 0, i64 2), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_694_count);
  llvm_cbe_tmp__93 = (float )*((&c_dense_test4_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__93, *(int*)(&llvm_cbe_tmp__93));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%101, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test4, i64 0, i32 0, i64 2), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_695_count);
  *((&c_dense_test4.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__93;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__93);
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = load float* getelementptr inbounds ([10 x float]* @c_dense_test4_array, i64 0, i64 3), align 4, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_701_count);
  llvm_cbe_tmp__94 = (float )*((&c_dense_test4_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__94, *(int*)(&llvm_cbe_tmp__94));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%102, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test4, i64 0, i32 0, i64 3), align 4, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_702_count);
  *((&c_dense_test4.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__94;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = load float* getelementptr inbounds ([10 x float]* @c_dense_test4_array, i64 0, i64 4), align 16, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_708_count);
  llvm_cbe_tmp__95 = (float )*((&c_dense_test4_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__95, *(int*)(&llvm_cbe_tmp__95));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%103, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test4, i64 0, i32 0, i64 4), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_709_count);
  *((&c_dense_test4.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__95;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__95);
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = load float* getelementptr inbounds ([10 x float]* @c_dense_test4_array, i64 0, i64 5), align 4, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_715_count);
  llvm_cbe_tmp__96 = (float )*((&c_dense_test4_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__96, *(int*)(&llvm_cbe_tmp__96));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%104, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test4, i64 0, i32 0, i64 5), align 4, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_716_count);
  *((&c_dense_test4.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__96;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__96);
if (AESL_DEBUG_TRACE)
printf("\n  %%105 = load float* getelementptr inbounds ([10 x float]* @c_dense_test4_array, i64 0, i64 6), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_722_count);
  llvm_cbe_tmp__97 = (float )*((&c_dense_test4_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__97, *(int*)(&llvm_cbe_tmp__97));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%105, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test4, i64 0, i32 0, i64 6), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_723_count);
  *((&c_dense_test4.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__97;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__97);
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = load float* getelementptr inbounds ([10 x float]* @c_dense_test4_array, i64 0, i64 7), align 4, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_729_count);
  llvm_cbe_tmp__98 = (float )*((&c_dense_test4_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__98, *(int*)(&llvm_cbe_tmp__98));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%106, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test4, i64 0, i32 0, i64 7), align 4, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_730_count);
  *((&c_dense_test4.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__98;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__98);
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = load float* getelementptr inbounds ([10 x float]* @c_dense_test4_array, i64 0, i64 8), align 16, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_736_count);
  llvm_cbe_tmp__99 = (float )*((&c_dense_test4_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__99, *(int*)(&llvm_cbe_tmp__99));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%107, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test4, i64 0, i32 0, i64 8), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_737_count);
  *((&c_dense_test4.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__99;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__99);
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = load float* getelementptr inbounds ([10 x float]* @c_dense_test4_array, i64 0, i64 9), align 4, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_743_count);
  llvm_cbe_tmp__100 = (float )*((&c_dense_test4_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__100, *(int*)(&llvm_cbe_tmp__100));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%108, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test4, i64 0, i32 0, i64 9), align 4, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_744_count);
  *((&c_dense_test4.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__100;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__100);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test4, i64 0, i32 1), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_750_count);
  *((&c_dense_test4.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test4, i64 0, i32 2), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_751_count);
  *((&c_dense_test4.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test4, i64 0, i32 3, i64 0), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_752_count);
  *((&c_dense_test4.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test4, i64 0, i32 3, i64 1), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_753_count);
  *((&c_dense_test4.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test4, i64 0, i32 3, i64 2), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_754_count);
  *((&c_dense_test4.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test4, i64 0, i32 3, i64 3), align 8, !dbg !27 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_755_count);
  *((&c_dense_test4.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test4, i64 0, i32 3, i64 4), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_756_count);
  *((&c_dense_test4.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  llvm_cbe_storemerge1250__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__278;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__278:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1250 = phi i32 [ 0, %%88 ], [ %%114, %%109  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge1250_count);
  llvm_cbe_storemerge1250 = (unsigned int )llvm_cbe_storemerge1250__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1250 = 0x%X",llvm_cbe_storemerge1250);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__105);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = sext i32 %%storemerge1250 to i64, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_763_count);
  llvm_cbe_tmp__101 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1250);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__101);
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = getelementptr inbounds [784 x float]* @test5_input_1_input_array, i64 0, i64 %%110, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_764_count);
  llvm_cbe_tmp__102 = (float *)(&test5_input_1_input_array[(((signed long long )llvm_cbe_tmp__101))
#ifdef AESL_BC_SIM
 % 784
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__101));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__101) < 784)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test5_input_1_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = load float* %%111, align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_765_count);
  llvm_cbe_tmp__103 = (float )*llvm_cbe_tmp__102;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__103, *(int*)(&llvm_cbe_tmp__103));
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = getelementptr inbounds %%struct.k2c_tensor* @test5_input_1_input, i64 0, i32 0, i64 %%110, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_766_count);
  llvm_cbe_tmp__104 = (float *)(&test5_input_1_input.field0[(((signed long long )llvm_cbe_tmp__101))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__101));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%112, float* %%113, align 4, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_767_count);
  *llvm_cbe_tmp__104 = llvm_cbe_tmp__103;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__103);
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = add nsw i32 %%storemerge1250, 1, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_768_count);
  llvm_cbe_tmp__105 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1250&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__105&4294967295ull)));
  if (((llvm_cbe_tmp__105&4294967295U) == (784u&4294967295U))) {
    goto llvm_cbe_tmp__279;
  } else {
    llvm_cbe_storemerge1250__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__105;   /* for PHI node */
    goto llvm_cbe_tmp__278;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__279:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 3, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_input_1_input, i64 0, i32 1), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_775_count);
  *((&test5_input_1_input.field1)) = 3ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 3ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 784, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_input_1_input, i64 0, i32 2), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_776_count);
  *((&test5_input_1_input.field2)) = 784ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 784ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_input_1_input, i64 0, i32 3, i64 0), align 8, !dbg !28 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_777_count);
  *((&test5_input_1_input.field3[(((signed long long )0ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_input_1_input, i64 0, i32 3, i64 1), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_778_count);
  *((&test5_input_1_input.field3[(((signed long long )1ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_input_1_input, i64 0, i32 3, i64 2), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_779_count);
  *((&test5_input_1_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_input_1_input, i64 0, i32 3, i64 3), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_780_count);
  *((&test5_input_1_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test5_input_1_input, i64 0, i32 3, i64 4), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_781_count);
  *((&test5_input_1_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test5_array, i64 0, i64 0), align 16, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_787_count);
  llvm_cbe_tmp__106 = (float )*((&keras_dense_test5_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__106, *(int*)(&llvm_cbe_tmp__106));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%116, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test5, i64 0, i32 0, i64 0), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_788_count);
  *((&keras_dense_test5.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__106;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__106);
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test5_array, i64 0, i64 1), align 4, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_794_count);
  llvm_cbe_tmp__107 = (float )*((&keras_dense_test5_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__107, *(int*)(&llvm_cbe_tmp__107));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%117, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test5, i64 0, i32 0, i64 1), align 4, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_795_count);
  *((&keras_dense_test5.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__107;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__107);
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test5_array, i64 0, i64 2), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_801_count);
  llvm_cbe_tmp__108 = (float )*((&keras_dense_test5_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__108, *(int*)(&llvm_cbe_tmp__108));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%118, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test5, i64 0, i32 0, i64 2), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_802_count);
  *((&keras_dense_test5.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__108;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__108);
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test5_array, i64 0, i64 3), align 4, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_808_count);
  llvm_cbe_tmp__109 = (float )*((&keras_dense_test5_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__109, *(int*)(&llvm_cbe_tmp__109));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%119, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test5, i64 0, i32 0, i64 3), align 4, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_809_count);
  *((&keras_dense_test5.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__109;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__109);
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test5_array, i64 0, i64 4), align 16, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_815_count);
  llvm_cbe_tmp__110 = (float )*((&keras_dense_test5_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__110, *(int*)(&llvm_cbe_tmp__110));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%120, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test5, i64 0, i32 0, i64 4), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_816_count);
  *((&keras_dense_test5.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__110;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__110);
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test5_array, i64 0, i64 5), align 4, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_822_count);
  llvm_cbe_tmp__111 = (float )*((&keras_dense_test5_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__111, *(int*)(&llvm_cbe_tmp__111));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%121, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test5, i64 0, i32 0, i64 5), align 4, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_823_count);
  *((&keras_dense_test5.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__111;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__111);
if (AESL_DEBUG_TRACE)
printf("\n  %%122 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test5_array, i64 0, i64 6), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_829_count);
  llvm_cbe_tmp__112 = (float )*((&keras_dense_test5_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__112, *(int*)(&llvm_cbe_tmp__112));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%122, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test5, i64 0, i32 0, i64 6), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_830_count);
  *((&keras_dense_test5.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__112;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__112);
if (AESL_DEBUG_TRACE)
printf("\n  %%123 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test5_array, i64 0, i64 7), align 4, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_836_count);
  llvm_cbe_tmp__113 = (float )*((&keras_dense_test5_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__113, *(int*)(&llvm_cbe_tmp__113));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%123, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test5, i64 0, i32 0, i64 7), align 4, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_837_count);
  *((&keras_dense_test5.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__113;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__113);
if (AESL_DEBUG_TRACE)
printf("\n  %%124 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test5_array, i64 0, i64 8), align 16, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_843_count);
  llvm_cbe_tmp__114 = (float )*((&keras_dense_test5_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__114, *(int*)(&llvm_cbe_tmp__114));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%124, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test5, i64 0, i32 0, i64 8), align 8, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_844_count);
  *((&keras_dense_test5.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__114;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__114);
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test5_array, i64 0, i64 9), align 4, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_850_count);
  llvm_cbe_tmp__115 = (float )*((&keras_dense_test5_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__115, *(int*)(&llvm_cbe_tmp__115));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%125, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test5, i64 0, i32 0, i64 9), align 4, !dbg !29 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_851_count);
  *((&keras_dense_test5.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__115;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__115);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test5, i64 0, i32 1), align 8, !dbg !30 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_857_count);
  *((&keras_dense_test5.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test5, i64 0, i32 2), align 8, !dbg !30 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_858_count);
  *((&keras_dense_test5.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test5, i64 0, i32 3, i64 0), align 8, !dbg !30 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_859_count);
  *((&keras_dense_test5.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test5, i64 0, i32 3, i64 1), align 8, !dbg !30 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_860_count);
  *((&keras_dense_test5.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test5, i64 0, i32 3, i64 2), align 8, !dbg !30 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_861_count);
  *((&keras_dense_test5.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test5, i64 0, i32 3, i64 3), align 8, !dbg !30 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_862_count);
  *((&keras_dense_test5.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test5, i64 0, i32 3, i64 4), align 8, !dbg !30 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_863_count);
  *((&keras_dense_test5.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%126 = load float* getelementptr inbounds ([10 x float]* @c_dense_test5_array, i64 0, i64 0), align 16, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_869_count);
  llvm_cbe_tmp__116 = (float )*((&c_dense_test5_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__116, *(int*)(&llvm_cbe_tmp__116));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%126, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test5, i64 0, i32 0, i64 0), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_870_count);
  *((&c_dense_test5.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__116;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__116);
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = load float* getelementptr inbounds ([10 x float]* @c_dense_test5_array, i64 0, i64 1), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_876_count);
  llvm_cbe_tmp__117 = (float )*((&c_dense_test5_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__117, *(int*)(&llvm_cbe_tmp__117));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%127, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test5, i64 0, i32 0, i64 1), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_877_count);
  *((&c_dense_test5.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__117;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__117);
if (AESL_DEBUG_TRACE)
printf("\n  %%128 = load float* getelementptr inbounds ([10 x float]* @c_dense_test5_array, i64 0, i64 2), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_883_count);
  llvm_cbe_tmp__118 = (float )*((&c_dense_test5_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__118, *(int*)(&llvm_cbe_tmp__118));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%128, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test5, i64 0, i32 0, i64 2), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_884_count);
  *((&c_dense_test5.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__118;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__118);
if (AESL_DEBUG_TRACE)
printf("\n  %%129 = load float* getelementptr inbounds ([10 x float]* @c_dense_test5_array, i64 0, i64 3), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_890_count);
  llvm_cbe_tmp__119 = (float )*((&c_dense_test5_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__119, *(int*)(&llvm_cbe_tmp__119));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%129, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test5, i64 0, i32 0, i64 3), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_891_count);
  *((&c_dense_test5.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__119;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__119);
if (AESL_DEBUG_TRACE)
printf("\n  %%130 = load float* getelementptr inbounds ([10 x float]* @c_dense_test5_array, i64 0, i64 4), align 16, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_897_count);
  llvm_cbe_tmp__120 = (float )*((&c_dense_test5_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__120, *(int*)(&llvm_cbe_tmp__120));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%130, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test5, i64 0, i32 0, i64 4), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_898_count);
  *((&c_dense_test5.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__120;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__120);
if (AESL_DEBUG_TRACE)
printf("\n  %%131 = load float* getelementptr inbounds ([10 x float]* @c_dense_test5_array, i64 0, i64 5), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_904_count);
  llvm_cbe_tmp__121 = (float )*((&c_dense_test5_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__121, *(int*)(&llvm_cbe_tmp__121));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%131, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test5, i64 0, i32 0, i64 5), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_905_count);
  *((&c_dense_test5.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__121;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__121);
if (AESL_DEBUG_TRACE)
printf("\n  %%132 = load float* getelementptr inbounds ([10 x float]* @c_dense_test5_array, i64 0, i64 6), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_911_count);
  llvm_cbe_tmp__122 = (float )*((&c_dense_test5_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__122, *(int*)(&llvm_cbe_tmp__122));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%132, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test5, i64 0, i32 0, i64 6), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_912_count);
  *((&c_dense_test5.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__122;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__122);
if (AESL_DEBUG_TRACE)
printf("\n  %%133 = load float* getelementptr inbounds ([10 x float]* @c_dense_test5_array, i64 0, i64 7), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_918_count);
  llvm_cbe_tmp__123 = (float )*((&c_dense_test5_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__123, *(int*)(&llvm_cbe_tmp__123));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%133, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test5, i64 0, i32 0, i64 7), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_919_count);
  *((&c_dense_test5.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__123;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__123);
if (AESL_DEBUG_TRACE)
printf("\n  %%134 = load float* getelementptr inbounds ([10 x float]* @c_dense_test5_array, i64 0, i64 8), align 16, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_925_count);
  llvm_cbe_tmp__124 = (float )*((&c_dense_test5_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__124, *(int*)(&llvm_cbe_tmp__124));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%134, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test5, i64 0, i32 0, i64 8), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_926_count);
  *((&c_dense_test5.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__124;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__124);
if (AESL_DEBUG_TRACE)
printf("\n  %%135 = load float* getelementptr inbounds ([10 x float]* @c_dense_test5_array, i64 0, i64 9), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_932_count);
  llvm_cbe_tmp__125 = (float )*((&c_dense_test5_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__125, *(int*)(&llvm_cbe_tmp__125));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%135, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test5, i64 0, i32 0, i64 9), align 4, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_933_count);
  *((&c_dense_test5.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__125;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__125);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test5, i64 0, i32 1), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_939_count);
  *((&c_dense_test5.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test5, i64 0, i32 2), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_940_count);
  *((&c_dense_test5.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test5, i64 0, i32 3, i64 0), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_941_count);
  *((&c_dense_test5.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test5, i64 0, i32 3, i64 1), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_942_count);
  *((&c_dense_test5.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test5, i64 0, i32 3, i64 2), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_943_count);
  *((&c_dense_test5.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test5, i64 0, i32 3, i64 3), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_944_count);
  *((&c_dense_test5.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test5, i64 0, i32 3, i64 4), align 8, !dbg !31 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_945_count);
  *((&c_dense_test5.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  llvm_cbe_storemerge1547__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__280;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__280:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1547 = phi i32 [ 0, %%115 ], [ %%141, %%136  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge1547_count);
  llvm_cbe_storemerge1547 = (unsigned int )llvm_cbe_storemerge1547__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1547 = 0x%X",llvm_cbe_storemerge1547);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__130);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%137 = sext i32 %%storemerge1547 to i64, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_952_count);
  llvm_cbe_tmp__126 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1547);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__126);
if (AESL_DEBUG_TRACE)
printf("\n  %%138 = getelementptr inbounds [784 x float]* @test6_input_1_input_array, i64 0, i64 %%137, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_953_count);
  llvm_cbe_tmp__127 = (float *)(&test6_input_1_input_array[(((signed long long )llvm_cbe_tmp__126))
#ifdef AESL_BC_SIM
 % 784
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__126));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__126) < 784)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test6_input_1_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%139 = load float* %%138, align 4, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_954_count);
  llvm_cbe_tmp__128 = (float )*llvm_cbe_tmp__127;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__128, *(int*)(&llvm_cbe_tmp__128));
if (AESL_DEBUG_TRACE)
printf("\n  %%140 = getelementptr inbounds %%struct.k2c_tensor* @test6_input_1_input, i64 0, i32 0, i64 %%137, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_955_count);
  llvm_cbe_tmp__129 = (float *)(&test6_input_1_input.field0[(((signed long long )llvm_cbe_tmp__126))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__126));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%139, float* %%140, align 4, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_956_count);
  *llvm_cbe_tmp__129 = llvm_cbe_tmp__128;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__128);
if (AESL_DEBUG_TRACE)
printf("\n  %%141 = add nsw i32 %%storemerge1547, 1, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_957_count);
  llvm_cbe_tmp__130 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1547&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__130&4294967295ull)));
  if (((llvm_cbe_tmp__130&4294967295U) == (784u&4294967295U))) {
    goto llvm_cbe_tmp__281;
  } else {
    llvm_cbe_storemerge1547__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__130;   /* for PHI node */
    goto llvm_cbe_tmp__280;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__281:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 3, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_input_1_input, i64 0, i32 1), align 8, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_964_count);
  *((&test6_input_1_input.field1)) = 3ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 3ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 784, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_input_1_input, i64 0, i32 2), align 8, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_965_count);
  *((&test6_input_1_input.field2)) = 784ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 784ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_input_1_input, i64 0, i32 3, i64 0), align 8, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_966_count);
  *((&test6_input_1_input.field3[(((signed long long )0ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_input_1_input, i64 0, i32 3, i64 1), align 8, !dbg !32 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_967_count);
  *((&test6_input_1_input.field3[(((signed long long )1ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_input_1_input, i64 0, i32 3, i64 2), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_968_count);
  *((&test6_input_1_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_input_1_input, i64 0, i32 3, i64 3), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_969_count);
  *((&test6_input_1_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test6_input_1_input, i64 0, i32 3, i64 4), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_970_count);
  *((&test6_input_1_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%143 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test6_array, i64 0, i64 0), align 16, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_976_count);
  llvm_cbe_tmp__131 = (float )*((&keras_dense_test6_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__131, *(int*)(&llvm_cbe_tmp__131));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%143, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test6, i64 0, i32 0, i64 0), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_977_count);
  *((&keras_dense_test6.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__131;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__131);
if (AESL_DEBUG_TRACE)
printf("\n  %%144 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test6_array, i64 0, i64 1), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_983_count);
  llvm_cbe_tmp__132 = (float )*((&keras_dense_test6_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__132, *(int*)(&llvm_cbe_tmp__132));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%144, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test6, i64 0, i32 0, i64 1), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_984_count);
  *((&keras_dense_test6.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__132;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__132);
if (AESL_DEBUG_TRACE)
printf("\n  %%145 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test6_array, i64 0, i64 2), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_990_count);
  llvm_cbe_tmp__133 = (float )*((&keras_dense_test6_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__133, *(int*)(&llvm_cbe_tmp__133));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%145, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test6, i64 0, i32 0, i64 2), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_991_count);
  *((&keras_dense_test6.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__133;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__133);
if (AESL_DEBUG_TRACE)
printf("\n  %%146 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test6_array, i64 0, i64 3), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_997_count);
  llvm_cbe_tmp__134 = (float )*((&keras_dense_test6_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__134, *(int*)(&llvm_cbe_tmp__134));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%146, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test6, i64 0, i32 0, i64 3), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_998_count);
  *((&keras_dense_test6.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__134;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__134);
if (AESL_DEBUG_TRACE)
printf("\n  %%147 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test6_array, i64 0, i64 4), align 16, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1004_count);
  llvm_cbe_tmp__135 = (float )*((&keras_dense_test6_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__135, *(int*)(&llvm_cbe_tmp__135));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%147, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test6, i64 0, i32 0, i64 4), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1005_count);
  *((&keras_dense_test6.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__135;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__135);
if (AESL_DEBUG_TRACE)
printf("\n  %%148 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test6_array, i64 0, i64 5), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1011_count);
  llvm_cbe_tmp__136 = (float )*((&keras_dense_test6_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__136, *(int*)(&llvm_cbe_tmp__136));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%148, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test6, i64 0, i32 0, i64 5), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1012_count);
  *((&keras_dense_test6.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__136;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__136);
if (AESL_DEBUG_TRACE)
printf("\n  %%149 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test6_array, i64 0, i64 6), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1018_count);
  llvm_cbe_tmp__137 = (float )*((&keras_dense_test6_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__137, *(int*)(&llvm_cbe_tmp__137));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%149, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test6, i64 0, i32 0, i64 6), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1019_count);
  *((&keras_dense_test6.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__137;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__137);
if (AESL_DEBUG_TRACE)
printf("\n  %%150 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test6_array, i64 0, i64 7), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1025_count);
  llvm_cbe_tmp__138 = (float )*((&keras_dense_test6_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__138, *(int*)(&llvm_cbe_tmp__138));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%150, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test6, i64 0, i32 0, i64 7), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1026_count);
  *((&keras_dense_test6.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__138;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__138);
if (AESL_DEBUG_TRACE)
printf("\n  %%151 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test6_array, i64 0, i64 8), align 16, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1032_count);
  llvm_cbe_tmp__139 = (float )*((&keras_dense_test6_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__139, *(int*)(&llvm_cbe_tmp__139));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%151, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test6, i64 0, i32 0, i64 8), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1033_count);
  *((&keras_dense_test6.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__139;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__139);
if (AESL_DEBUG_TRACE)
printf("\n  %%152 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test6_array, i64 0, i64 9), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1039_count);
  llvm_cbe_tmp__140 = (float )*((&keras_dense_test6_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__140, *(int*)(&llvm_cbe_tmp__140));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%152, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test6, i64 0, i32 0, i64 9), align 4, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1040_count);
  *((&keras_dense_test6.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__140;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__140);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test6, i64 0, i32 1), align 8, !dbg !33 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1046_count);
  *((&keras_dense_test6.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test6, i64 0, i32 2), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1047_count);
  *((&keras_dense_test6.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test6, i64 0, i32 3, i64 0), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1048_count);
  *((&keras_dense_test6.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test6, i64 0, i32 3, i64 1), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1049_count);
  *((&keras_dense_test6.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test6, i64 0, i32 3, i64 2), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1050_count);
  *((&keras_dense_test6.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test6, i64 0, i32 3, i64 3), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1051_count);
  *((&keras_dense_test6.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test6, i64 0, i32 3, i64 4), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1052_count);
  *((&keras_dense_test6.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%153 = load float* getelementptr inbounds ([10 x float]* @c_dense_test6_array, i64 0, i64 0), align 16, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1058_count);
  llvm_cbe_tmp__141 = (float )*((&c_dense_test6_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__141, *(int*)(&llvm_cbe_tmp__141));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%153, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test6, i64 0, i32 0, i64 0), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1059_count);
  *((&c_dense_test6.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__141;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__141);
if (AESL_DEBUG_TRACE)
printf("\n  %%154 = load float* getelementptr inbounds ([10 x float]* @c_dense_test6_array, i64 0, i64 1), align 4, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1065_count);
  llvm_cbe_tmp__142 = (float )*((&c_dense_test6_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__142, *(int*)(&llvm_cbe_tmp__142));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%154, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test6, i64 0, i32 0, i64 1), align 4, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1066_count);
  *((&c_dense_test6.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__142;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__142);
if (AESL_DEBUG_TRACE)
printf("\n  %%155 = load float* getelementptr inbounds ([10 x float]* @c_dense_test6_array, i64 0, i64 2), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1072_count);
  llvm_cbe_tmp__143 = (float )*((&c_dense_test6_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__143, *(int*)(&llvm_cbe_tmp__143));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%155, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test6, i64 0, i32 0, i64 2), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1073_count);
  *((&c_dense_test6.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__143;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__143);
if (AESL_DEBUG_TRACE)
printf("\n  %%156 = load float* getelementptr inbounds ([10 x float]* @c_dense_test6_array, i64 0, i64 3), align 4, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1079_count);
  llvm_cbe_tmp__144 = (float )*((&c_dense_test6_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__144, *(int*)(&llvm_cbe_tmp__144));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%156, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test6, i64 0, i32 0, i64 3), align 4, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1080_count);
  *((&c_dense_test6.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__144;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__144);
if (AESL_DEBUG_TRACE)
printf("\n  %%157 = load float* getelementptr inbounds ([10 x float]* @c_dense_test6_array, i64 0, i64 4), align 16, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1086_count);
  llvm_cbe_tmp__145 = (float )*((&c_dense_test6_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__145, *(int*)(&llvm_cbe_tmp__145));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%157, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test6, i64 0, i32 0, i64 4), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1087_count);
  *((&c_dense_test6.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__145;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__145);
if (AESL_DEBUG_TRACE)
printf("\n  %%158 = load float* getelementptr inbounds ([10 x float]* @c_dense_test6_array, i64 0, i64 5), align 4, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1093_count);
  llvm_cbe_tmp__146 = (float )*((&c_dense_test6_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__146, *(int*)(&llvm_cbe_tmp__146));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%158, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test6, i64 0, i32 0, i64 5), align 4, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1094_count);
  *((&c_dense_test6.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__146;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__146);
if (AESL_DEBUG_TRACE)
printf("\n  %%159 = load float* getelementptr inbounds ([10 x float]* @c_dense_test6_array, i64 0, i64 6), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1100_count);
  llvm_cbe_tmp__147 = (float )*((&c_dense_test6_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__147, *(int*)(&llvm_cbe_tmp__147));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%159, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test6, i64 0, i32 0, i64 6), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1101_count);
  *((&c_dense_test6.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__147;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__147);
if (AESL_DEBUG_TRACE)
printf("\n  %%160 = load float* getelementptr inbounds ([10 x float]* @c_dense_test6_array, i64 0, i64 7), align 4, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1107_count);
  llvm_cbe_tmp__148 = (float )*((&c_dense_test6_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__148, *(int*)(&llvm_cbe_tmp__148));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%160, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test6, i64 0, i32 0, i64 7), align 4, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1108_count);
  *((&c_dense_test6.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__148;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__148);
if (AESL_DEBUG_TRACE)
printf("\n  %%161 = load float* getelementptr inbounds ([10 x float]* @c_dense_test6_array, i64 0, i64 8), align 16, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1114_count);
  llvm_cbe_tmp__149 = (float )*((&c_dense_test6_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__149, *(int*)(&llvm_cbe_tmp__149));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%161, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test6, i64 0, i32 0, i64 8), align 8, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1115_count);
  *((&c_dense_test6.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__149;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__149);
if (AESL_DEBUG_TRACE)
printf("\n  %%162 = load float* getelementptr inbounds ([10 x float]* @c_dense_test6_array, i64 0, i64 9), align 4, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1121_count);
  llvm_cbe_tmp__150 = (float )*((&c_dense_test6_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__150, *(int*)(&llvm_cbe_tmp__150));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%162, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test6, i64 0, i32 0, i64 9), align 4, !dbg !34 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1122_count);
  *((&c_dense_test6.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__150;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__150);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test6, i64 0, i32 1), align 8, !dbg !35 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1128_count);
  *((&c_dense_test6.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test6, i64 0, i32 2), align 8, !dbg !35 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1129_count);
  *((&c_dense_test6.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test6, i64 0, i32 3, i64 0), align 8, !dbg !35 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1130_count);
  *((&c_dense_test6.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test6, i64 0, i32 3, i64 1), align 8, !dbg !35 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1131_count);
  *((&c_dense_test6.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test6, i64 0, i32 3, i64 2), align 8, !dbg !35 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1132_count);
  *((&c_dense_test6.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test6, i64 0, i32 3, i64 3), align 8, !dbg !35 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1133_count);
  *((&c_dense_test6.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test6, i64 0, i32 3, i64 4), align 8, !dbg !35 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1134_count);
  *((&c_dense_test6.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  llvm_cbe_storemerge1844__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__282;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__282:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1844 = phi i32 [ 0, %%142 ], [ %%168, %%163  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge1844_count);
  llvm_cbe_storemerge1844 = (unsigned int )llvm_cbe_storemerge1844__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1844 = 0x%X",llvm_cbe_storemerge1844);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__155);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%164 = sext i32 %%storemerge1844 to i64, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1141_count);
  llvm_cbe_tmp__151 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1844);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__151);
if (AESL_DEBUG_TRACE)
printf("\n  %%165 = getelementptr inbounds [784 x float]* @test7_input_1_input_array, i64 0, i64 %%164, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1142_count);
  llvm_cbe_tmp__152 = (float *)(&test7_input_1_input_array[(((signed long long )llvm_cbe_tmp__151))
#ifdef AESL_BC_SIM
 % 784
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__151));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__151) < 784)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test7_input_1_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%166 = load float* %%165, align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1143_count);
  llvm_cbe_tmp__153 = (float )*llvm_cbe_tmp__152;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__153, *(int*)(&llvm_cbe_tmp__153));
if (AESL_DEBUG_TRACE)
printf("\n  %%167 = getelementptr inbounds %%struct.k2c_tensor* @test7_input_1_input, i64 0, i32 0, i64 %%164, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1144_count);
  llvm_cbe_tmp__154 = (float *)(&test7_input_1_input.field0[(((signed long long )llvm_cbe_tmp__151))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__151));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%166, float* %%167, align 4, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1145_count);
  *llvm_cbe_tmp__154 = llvm_cbe_tmp__153;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__153);
if (AESL_DEBUG_TRACE)
printf("\n  %%168 = add nsw i32 %%storemerge1844, 1, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1146_count);
  llvm_cbe_tmp__155 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1844&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__155&4294967295ull)));
  if (((llvm_cbe_tmp__155&4294967295U) == (784u&4294967295U))) {
    goto llvm_cbe_tmp__283;
  } else {
    llvm_cbe_storemerge1844__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__155;   /* for PHI node */
    goto llvm_cbe_tmp__282;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__283:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 3, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_input_1_input, i64 0, i32 1), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1153_count);
  *((&test7_input_1_input.field1)) = 3ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 3ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 784, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_input_1_input, i64 0, i32 2), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1154_count);
  *((&test7_input_1_input.field2)) = 784ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 784ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_input_1_input, i64 0, i32 3, i64 0), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1155_count);
  *((&test7_input_1_input.field3[(((signed long long )0ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_input_1_input, i64 0, i32 3, i64 1), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1156_count);
  *((&test7_input_1_input.field3[(((signed long long )1ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_input_1_input, i64 0, i32 3, i64 2), align 8, !dbg !36 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1157_count);
  *((&test7_input_1_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_input_1_input, i64 0, i32 3, i64 3), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1158_count);
  *((&test7_input_1_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test7_input_1_input, i64 0, i32 3, i64 4), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1159_count);
  *((&test7_input_1_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%170 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test7_array, i64 0, i64 0), align 16, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1165_count);
  llvm_cbe_tmp__156 = (float )*((&keras_dense_test7_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__156, *(int*)(&llvm_cbe_tmp__156));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%170, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test7, i64 0, i32 0, i64 0), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1166_count);
  *((&keras_dense_test7.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__156;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__156);
if (AESL_DEBUG_TRACE)
printf("\n  %%171 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test7_array, i64 0, i64 1), align 4, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1172_count);
  llvm_cbe_tmp__157 = (float )*((&keras_dense_test7_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__157, *(int*)(&llvm_cbe_tmp__157));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%171, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test7, i64 0, i32 0, i64 1), align 4, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1173_count);
  *((&keras_dense_test7.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__157;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__157);
if (AESL_DEBUG_TRACE)
printf("\n  %%172 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test7_array, i64 0, i64 2), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1179_count);
  llvm_cbe_tmp__158 = (float )*((&keras_dense_test7_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__158, *(int*)(&llvm_cbe_tmp__158));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%172, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test7, i64 0, i32 0, i64 2), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1180_count);
  *((&keras_dense_test7.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__158;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__158);
if (AESL_DEBUG_TRACE)
printf("\n  %%173 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test7_array, i64 0, i64 3), align 4, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1186_count);
  llvm_cbe_tmp__159 = (float )*((&keras_dense_test7_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__159, *(int*)(&llvm_cbe_tmp__159));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%173, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test7, i64 0, i32 0, i64 3), align 4, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1187_count);
  *((&keras_dense_test7.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__159;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__159);
if (AESL_DEBUG_TRACE)
printf("\n  %%174 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test7_array, i64 0, i64 4), align 16, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1193_count);
  llvm_cbe_tmp__160 = (float )*((&keras_dense_test7_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__160, *(int*)(&llvm_cbe_tmp__160));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%174, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test7, i64 0, i32 0, i64 4), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1194_count);
  *((&keras_dense_test7.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__160;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__160);
if (AESL_DEBUG_TRACE)
printf("\n  %%175 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test7_array, i64 0, i64 5), align 4, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1200_count);
  llvm_cbe_tmp__161 = (float )*((&keras_dense_test7_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__161, *(int*)(&llvm_cbe_tmp__161));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%175, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test7, i64 0, i32 0, i64 5), align 4, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1201_count);
  *((&keras_dense_test7.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__161;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__161);
if (AESL_DEBUG_TRACE)
printf("\n  %%176 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test7_array, i64 0, i64 6), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1207_count);
  llvm_cbe_tmp__162 = (float )*((&keras_dense_test7_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__162, *(int*)(&llvm_cbe_tmp__162));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%176, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test7, i64 0, i32 0, i64 6), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1208_count);
  *((&keras_dense_test7.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__162;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__162);
if (AESL_DEBUG_TRACE)
printf("\n  %%177 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test7_array, i64 0, i64 7), align 4, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1214_count);
  llvm_cbe_tmp__163 = (float )*((&keras_dense_test7_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__163, *(int*)(&llvm_cbe_tmp__163));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%177, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test7, i64 0, i32 0, i64 7), align 4, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1215_count);
  *((&keras_dense_test7.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__163;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__163);
if (AESL_DEBUG_TRACE)
printf("\n  %%178 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test7_array, i64 0, i64 8), align 16, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1221_count);
  llvm_cbe_tmp__164 = (float )*((&keras_dense_test7_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__164, *(int*)(&llvm_cbe_tmp__164));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%178, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test7, i64 0, i32 0, i64 8), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1222_count);
  *((&keras_dense_test7.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__164;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__164);
if (AESL_DEBUG_TRACE)
printf("\n  %%179 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test7_array, i64 0, i64 9), align 4, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1228_count);
  llvm_cbe_tmp__165 = (float )*((&keras_dense_test7_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__165, *(int*)(&llvm_cbe_tmp__165));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%179, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test7, i64 0, i32 0, i64 9), align 4, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1229_count);
  *((&keras_dense_test7.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__165;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__165);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test7, i64 0, i32 1), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1235_count);
  *((&keras_dense_test7.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test7, i64 0, i32 2), align 8, !dbg !37 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1236_count);
  *((&keras_dense_test7.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test7, i64 0, i32 3, i64 0), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1237_count);
  *((&keras_dense_test7.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test7, i64 0, i32 3, i64 1), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1238_count);
  *((&keras_dense_test7.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test7, i64 0, i32 3, i64 2), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1239_count);
  *((&keras_dense_test7.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test7, i64 0, i32 3, i64 3), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1240_count);
  *((&keras_dense_test7.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test7, i64 0, i32 3, i64 4), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1241_count);
  *((&keras_dense_test7.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%180 = load float* getelementptr inbounds ([10 x float]* @c_dense_test7_array, i64 0, i64 0), align 16, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1247_count);
  llvm_cbe_tmp__166 = (float )*((&c_dense_test7_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__166, *(int*)(&llvm_cbe_tmp__166));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%180, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test7, i64 0, i32 0, i64 0), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1248_count);
  *((&c_dense_test7.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__166;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__166);
if (AESL_DEBUG_TRACE)
printf("\n  %%181 = load float* getelementptr inbounds ([10 x float]* @c_dense_test7_array, i64 0, i64 1), align 4, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1254_count);
  llvm_cbe_tmp__167 = (float )*((&c_dense_test7_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__167, *(int*)(&llvm_cbe_tmp__167));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%181, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test7, i64 0, i32 0, i64 1), align 4, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1255_count);
  *((&c_dense_test7.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__167;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__167);
if (AESL_DEBUG_TRACE)
printf("\n  %%182 = load float* getelementptr inbounds ([10 x float]* @c_dense_test7_array, i64 0, i64 2), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1261_count);
  llvm_cbe_tmp__168 = (float )*((&c_dense_test7_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__168, *(int*)(&llvm_cbe_tmp__168));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%182, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test7, i64 0, i32 0, i64 2), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1262_count);
  *((&c_dense_test7.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__168;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__168);
if (AESL_DEBUG_TRACE)
printf("\n  %%183 = load float* getelementptr inbounds ([10 x float]* @c_dense_test7_array, i64 0, i64 3), align 4, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1268_count);
  llvm_cbe_tmp__169 = (float )*((&c_dense_test7_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__169, *(int*)(&llvm_cbe_tmp__169));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%183, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test7, i64 0, i32 0, i64 3), align 4, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1269_count);
  *((&c_dense_test7.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__169;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__169);
if (AESL_DEBUG_TRACE)
printf("\n  %%184 = load float* getelementptr inbounds ([10 x float]* @c_dense_test7_array, i64 0, i64 4), align 16, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1275_count);
  llvm_cbe_tmp__170 = (float )*((&c_dense_test7_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__170, *(int*)(&llvm_cbe_tmp__170));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%184, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test7, i64 0, i32 0, i64 4), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1276_count);
  *((&c_dense_test7.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__170;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__170);
if (AESL_DEBUG_TRACE)
printf("\n  %%185 = load float* getelementptr inbounds ([10 x float]* @c_dense_test7_array, i64 0, i64 5), align 4, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1282_count);
  llvm_cbe_tmp__171 = (float )*((&c_dense_test7_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__171, *(int*)(&llvm_cbe_tmp__171));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%185, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test7, i64 0, i32 0, i64 5), align 4, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1283_count);
  *((&c_dense_test7.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__171;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__171);
if (AESL_DEBUG_TRACE)
printf("\n  %%186 = load float* getelementptr inbounds ([10 x float]* @c_dense_test7_array, i64 0, i64 6), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1289_count);
  llvm_cbe_tmp__172 = (float )*((&c_dense_test7_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__172, *(int*)(&llvm_cbe_tmp__172));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%186, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test7, i64 0, i32 0, i64 6), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1290_count);
  *((&c_dense_test7.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__172;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__172);
if (AESL_DEBUG_TRACE)
printf("\n  %%187 = load float* getelementptr inbounds ([10 x float]* @c_dense_test7_array, i64 0, i64 7), align 4, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1296_count);
  llvm_cbe_tmp__173 = (float )*((&c_dense_test7_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__173, *(int*)(&llvm_cbe_tmp__173));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%187, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test7, i64 0, i32 0, i64 7), align 4, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1297_count);
  *((&c_dense_test7.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__173;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__173);
if (AESL_DEBUG_TRACE)
printf("\n  %%188 = load float* getelementptr inbounds ([10 x float]* @c_dense_test7_array, i64 0, i64 8), align 16, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1303_count);
  llvm_cbe_tmp__174 = (float )*((&c_dense_test7_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__174, *(int*)(&llvm_cbe_tmp__174));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%188, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test7, i64 0, i32 0, i64 8), align 8, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1304_count);
  *((&c_dense_test7.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__174;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__174);
if (AESL_DEBUG_TRACE)
printf("\n  %%189 = load float* getelementptr inbounds ([10 x float]* @c_dense_test7_array, i64 0, i64 9), align 4, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1310_count);
  llvm_cbe_tmp__175 = (float )*((&c_dense_test7_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__175, *(int*)(&llvm_cbe_tmp__175));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%189, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test7, i64 0, i32 0, i64 9), align 4, !dbg !38 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1311_count);
  *((&c_dense_test7.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__175;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__175);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test7, i64 0, i32 1), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1317_count);
  *((&c_dense_test7.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test7, i64 0, i32 2), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1318_count);
  *((&c_dense_test7.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test7, i64 0, i32 3, i64 0), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1319_count);
  *((&c_dense_test7.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test7, i64 0, i32 3, i64 1), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1320_count);
  *((&c_dense_test7.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test7, i64 0, i32 3, i64 2), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1321_count);
  *((&c_dense_test7.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test7, i64 0, i32 3, i64 3), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1322_count);
  *((&c_dense_test7.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test7, i64 0, i32 3, i64 4), align 8, !dbg !39 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1323_count);
  *((&c_dense_test7.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  llvm_cbe_storemerge2141__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__284;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__284:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2141 = phi i32 [ 0, %%169 ], [ %%195, %%190  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge2141_count);
  llvm_cbe_storemerge2141 = (unsigned int )llvm_cbe_storemerge2141__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2141 = 0x%X",llvm_cbe_storemerge2141);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__180);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%191 = sext i32 %%storemerge2141 to i64, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1330_count);
  llvm_cbe_tmp__176 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge2141);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__176);
if (AESL_DEBUG_TRACE)
printf("\n  %%192 = getelementptr inbounds [784 x float]* @test8_input_1_input_array, i64 0, i64 %%191, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1331_count);
  llvm_cbe_tmp__177 = (float *)(&test8_input_1_input_array[(((signed long long )llvm_cbe_tmp__176))
#ifdef AESL_BC_SIM
 % 784
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__176));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__176) < 784)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test8_input_1_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%193 = load float* %%192, align 4, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1332_count);
  llvm_cbe_tmp__178 = (float )*llvm_cbe_tmp__177;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__178, *(int*)(&llvm_cbe_tmp__178));
if (AESL_DEBUG_TRACE)
printf("\n  %%194 = getelementptr inbounds %%struct.k2c_tensor* @test8_input_1_input, i64 0, i32 0, i64 %%191, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1333_count);
  llvm_cbe_tmp__179 = (float *)(&test8_input_1_input.field0[(((signed long long )llvm_cbe_tmp__176))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__176));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%193, float* %%194, align 4, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1334_count);
  *llvm_cbe_tmp__179 = llvm_cbe_tmp__178;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__178);
if (AESL_DEBUG_TRACE)
printf("\n  %%195 = add nsw i32 %%storemerge2141, 1, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1335_count);
  llvm_cbe_tmp__180 = (unsigned int )((unsigned int )(llvm_cbe_storemerge2141&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__180&4294967295ull)));
  if (((llvm_cbe_tmp__180&4294967295U) == (784u&4294967295U))) {
    goto llvm_cbe_tmp__285;
  } else {
    llvm_cbe_storemerge2141__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__180;   /* for PHI node */
    goto llvm_cbe_tmp__284;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__285:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 3, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_input_1_input, i64 0, i32 1), align 8, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1342_count);
  *((&test8_input_1_input.field1)) = 3ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 3ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 784, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_input_1_input, i64 0, i32 2), align 8, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1343_count);
  *((&test8_input_1_input.field2)) = 784ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 784ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_input_1_input, i64 0, i32 3, i64 0), align 8, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1344_count);
  *((&test8_input_1_input.field3[(((signed long long )0ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_input_1_input, i64 0, i32 3, i64 1), align 8, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1345_count);
  *((&test8_input_1_input.field3[(((signed long long )1ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_input_1_input, i64 0, i32 3, i64 2), align 8, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1346_count);
  *((&test8_input_1_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_input_1_input, i64 0, i32 3, i64 3), align 8, !dbg !40 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1347_count);
  *((&test8_input_1_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test8_input_1_input, i64 0, i32 3, i64 4), align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1348_count);
  *((&test8_input_1_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%197 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test8_array, i64 0, i64 0), align 16, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1354_count);
  llvm_cbe_tmp__181 = (float )*((&keras_dense_test8_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__181, *(int*)(&llvm_cbe_tmp__181));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%197, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test8, i64 0, i32 0, i64 0), align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1355_count);
  *((&keras_dense_test8.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__181;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__181);
if (AESL_DEBUG_TRACE)
printf("\n  %%198 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test8_array, i64 0, i64 1), align 4, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1361_count);
  llvm_cbe_tmp__182 = (float )*((&keras_dense_test8_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__182, *(int*)(&llvm_cbe_tmp__182));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%198, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test8, i64 0, i32 0, i64 1), align 4, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1362_count);
  *((&keras_dense_test8.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__182;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__182);
if (AESL_DEBUG_TRACE)
printf("\n  %%199 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test8_array, i64 0, i64 2), align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1368_count);
  llvm_cbe_tmp__183 = (float )*((&keras_dense_test8_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__183, *(int*)(&llvm_cbe_tmp__183));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%199, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test8, i64 0, i32 0, i64 2), align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1369_count);
  *((&keras_dense_test8.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__183;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__183);
if (AESL_DEBUG_TRACE)
printf("\n  %%200 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test8_array, i64 0, i64 3), align 4, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1375_count);
  llvm_cbe_tmp__184 = (float )*((&keras_dense_test8_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__184, *(int*)(&llvm_cbe_tmp__184));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%200, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test8, i64 0, i32 0, i64 3), align 4, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1376_count);
  *((&keras_dense_test8.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__184;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__184);
if (AESL_DEBUG_TRACE)
printf("\n  %%201 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test8_array, i64 0, i64 4), align 16, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1382_count);
  llvm_cbe_tmp__185 = (float )*((&keras_dense_test8_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__185, *(int*)(&llvm_cbe_tmp__185));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%201, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test8, i64 0, i32 0, i64 4), align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1383_count);
  *((&keras_dense_test8.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__185;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__185);
if (AESL_DEBUG_TRACE)
printf("\n  %%202 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test8_array, i64 0, i64 5), align 4, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1389_count);
  llvm_cbe_tmp__186 = (float )*((&keras_dense_test8_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__186, *(int*)(&llvm_cbe_tmp__186));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%202, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test8, i64 0, i32 0, i64 5), align 4, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1390_count);
  *((&keras_dense_test8.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__186;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__186);
if (AESL_DEBUG_TRACE)
printf("\n  %%203 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test8_array, i64 0, i64 6), align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1396_count);
  llvm_cbe_tmp__187 = (float )*((&keras_dense_test8_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__187, *(int*)(&llvm_cbe_tmp__187));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%203, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test8, i64 0, i32 0, i64 6), align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1397_count);
  *((&keras_dense_test8.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__187;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__187);
if (AESL_DEBUG_TRACE)
printf("\n  %%204 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test8_array, i64 0, i64 7), align 4, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1403_count);
  llvm_cbe_tmp__188 = (float )*((&keras_dense_test8_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__188, *(int*)(&llvm_cbe_tmp__188));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%204, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test8, i64 0, i32 0, i64 7), align 4, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1404_count);
  *((&keras_dense_test8.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__188;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__188);
if (AESL_DEBUG_TRACE)
printf("\n  %%205 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test8_array, i64 0, i64 8), align 16, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1410_count);
  llvm_cbe_tmp__189 = (float )*((&keras_dense_test8_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__189, *(int*)(&llvm_cbe_tmp__189));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%205, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test8, i64 0, i32 0, i64 8), align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1411_count);
  *((&keras_dense_test8.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__189;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__189);
if (AESL_DEBUG_TRACE)
printf("\n  %%206 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test8_array, i64 0, i64 9), align 4, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1417_count);
  llvm_cbe_tmp__190 = (float )*((&keras_dense_test8_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__190, *(int*)(&llvm_cbe_tmp__190));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%206, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test8, i64 0, i32 0, i64 9), align 4, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1418_count);
  *((&keras_dense_test8.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__190;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__190);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test8, i64 0, i32 1), align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1424_count);
  *((&keras_dense_test8.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test8, i64 0, i32 2), align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1425_count);
  *((&keras_dense_test8.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test8, i64 0, i32 3, i64 0), align 8, !dbg !41 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1426_count);
  *((&keras_dense_test8.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test8, i64 0, i32 3, i64 1), align 8, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1427_count);
  *((&keras_dense_test8.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test8, i64 0, i32 3, i64 2), align 8, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1428_count);
  *((&keras_dense_test8.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test8, i64 0, i32 3, i64 3), align 8, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1429_count);
  *((&keras_dense_test8.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test8, i64 0, i32 3, i64 4), align 8, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1430_count);
  *((&keras_dense_test8.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%207 = load float* getelementptr inbounds ([10 x float]* @c_dense_test8_array, i64 0, i64 0), align 16, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1436_count);
  llvm_cbe_tmp__191 = (float )*((&c_dense_test8_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__191, *(int*)(&llvm_cbe_tmp__191));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%207, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test8, i64 0, i32 0, i64 0), align 8, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1437_count);
  *((&c_dense_test8.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__191;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__191);
if (AESL_DEBUG_TRACE)
printf("\n  %%208 = load float* getelementptr inbounds ([10 x float]* @c_dense_test8_array, i64 0, i64 1), align 4, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1443_count);
  llvm_cbe_tmp__192 = (float )*((&c_dense_test8_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__192, *(int*)(&llvm_cbe_tmp__192));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%208, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test8, i64 0, i32 0, i64 1), align 4, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1444_count);
  *((&c_dense_test8.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__192;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__192);
if (AESL_DEBUG_TRACE)
printf("\n  %%209 = load float* getelementptr inbounds ([10 x float]* @c_dense_test8_array, i64 0, i64 2), align 8, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1450_count);
  llvm_cbe_tmp__193 = (float )*((&c_dense_test8_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__193, *(int*)(&llvm_cbe_tmp__193));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%209, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test8, i64 0, i32 0, i64 2), align 8, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1451_count);
  *((&c_dense_test8.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__193;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__193);
if (AESL_DEBUG_TRACE)
printf("\n  %%210 = load float* getelementptr inbounds ([10 x float]* @c_dense_test8_array, i64 0, i64 3), align 4, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1457_count);
  llvm_cbe_tmp__194 = (float )*((&c_dense_test8_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__194, *(int*)(&llvm_cbe_tmp__194));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%210, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test8, i64 0, i32 0, i64 3), align 4, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1458_count);
  *((&c_dense_test8.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__194;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__194);
if (AESL_DEBUG_TRACE)
printf("\n  %%211 = load float* getelementptr inbounds ([10 x float]* @c_dense_test8_array, i64 0, i64 4), align 16, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1464_count);
  llvm_cbe_tmp__195 = (float )*((&c_dense_test8_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__195, *(int*)(&llvm_cbe_tmp__195));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%211, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test8, i64 0, i32 0, i64 4), align 8, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1465_count);
  *((&c_dense_test8.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__195;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__195);
if (AESL_DEBUG_TRACE)
printf("\n  %%212 = load float* getelementptr inbounds ([10 x float]* @c_dense_test8_array, i64 0, i64 5), align 4, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1471_count);
  llvm_cbe_tmp__196 = (float )*((&c_dense_test8_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__196, *(int*)(&llvm_cbe_tmp__196));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%212, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test8, i64 0, i32 0, i64 5), align 4, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1472_count);
  *((&c_dense_test8.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__196;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__196);
if (AESL_DEBUG_TRACE)
printf("\n  %%213 = load float* getelementptr inbounds ([10 x float]* @c_dense_test8_array, i64 0, i64 6), align 8, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1478_count);
  llvm_cbe_tmp__197 = (float )*((&c_dense_test8_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__197, *(int*)(&llvm_cbe_tmp__197));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%213, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test8, i64 0, i32 0, i64 6), align 8, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1479_count);
  *((&c_dense_test8.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__197;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__197);
if (AESL_DEBUG_TRACE)
printf("\n  %%214 = load float* getelementptr inbounds ([10 x float]* @c_dense_test8_array, i64 0, i64 7), align 4, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1485_count);
  llvm_cbe_tmp__198 = (float )*((&c_dense_test8_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__198, *(int*)(&llvm_cbe_tmp__198));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%214, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test8, i64 0, i32 0, i64 7), align 4, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1486_count);
  *((&c_dense_test8.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__198;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__198);
if (AESL_DEBUG_TRACE)
printf("\n  %%215 = load float* getelementptr inbounds ([10 x float]* @c_dense_test8_array, i64 0, i64 8), align 16, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1492_count);
  llvm_cbe_tmp__199 = (float )*((&c_dense_test8_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__199, *(int*)(&llvm_cbe_tmp__199));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%215, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test8, i64 0, i32 0, i64 8), align 8, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1493_count);
  *((&c_dense_test8.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__199;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__199);
if (AESL_DEBUG_TRACE)
printf("\n  %%216 = load float* getelementptr inbounds ([10 x float]* @c_dense_test8_array, i64 0, i64 9), align 4, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1499_count);
  llvm_cbe_tmp__200 = (float )*((&c_dense_test8_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__200, *(int*)(&llvm_cbe_tmp__200));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%216, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test8, i64 0, i32 0, i64 9), align 4, !dbg !42 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1500_count);
  *((&c_dense_test8.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__200;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__200);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test8, i64 0, i32 1), align 8, !dbg !43 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1506_count);
  *((&c_dense_test8.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test8, i64 0, i32 2), align 8, !dbg !43 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1507_count);
  *((&c_dense_test8.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test8, i64 0, i32 3, i64 0), align 8, !dbg !43 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1508_count);
  *((&c_dense_test8.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test8, i64 0, i32 3, i64 1), align 8, !dbg !43 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1509_count);
  *((&c_dense_test8.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test8, i64 0, i32 3, i64 2), align 8, !dbg !43 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1510_count);
  *((&c_dense_test8.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test8, i64 0, i32 3, i64 3), align 8, !dbg !43 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1511_count);
  *((&c_dense_test8.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test8, i64 0, i32 3, i64 4), align 8, !dbg !43 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1512_count);
  *((&c_dense_test8.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  llvm_cbe_storemerge2438__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__286;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__286:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2438 = phi i32 [ 0, %%196 ], [ %%222, %%217  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge2438_count);
  llvm_cbe_storemerge2438 = (unsigned int )llvm_cbe_storemerge2438__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2438 = 0x%X",llvm_cbe_storemerge2438);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__205);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%218 = sext i32 %%storemerge2438 to i64, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1519_count);
  llvm_cbe_tmp__201 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge2438);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__201);
if (AESL_DEBUG_TRACE)
printf("\n  %%219 = getelementptr inbounds [784 x float]* @test9_input_1_input_array, i64 0, i64 %%218, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1520_count);
  llvm_cbe_tmp__202 = (float *)(&test9_input_1_input_array[(((signed long long )llvm_cbe_tmp__201))
#ifdef AESL_BC_SIM
 % 784
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__201));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__201) < 784)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test9_input_1_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%220 = load float* %%219, align 4, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1521_count);
  llvm_cbe_tmp__203 = (float )*llvm_cbe_tmp__202;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__203, *(int*)(&llvm_cbe_tmp__203));
if (AESL_DEBUG_TRACE)
printf("\n  %%221 = getelementptr inbounds %%struct.k2c_tensor* @test9_input_1_input, i64 0, i32 0, i64 %%218, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1522_count);
  llvm_cbe_tmp__204 = (float *)(&test9_input_1_input.field0[(((signed long long )llvm_cbe_tmp__201))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__201));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%220, float* %%221, align 4, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1523_count);
  *llvm_cbe_tmp__204 = llvm_cbe_tmp__203;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__203);
if (AESL_DEBUG_TRACE)
printf("\n  %%222 = add nsw i32 %%storemerge2438, 1, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1524_count);
  llvm_cbe_tmp__205 = (unsigned int )((unsigned int )(llvm_cbe_storemerge2438&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__205&4294967295ull)));
  if (((llvm_cbe_tmp__205&4294967295U) == (784u&4294967295U))) {
    goto llvm_cbe_tmp__287;
  } else {
    llvm_cbe_storemerge2438__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__205;   /* for PHI node */
    goto llvm_cbe_tmp__286;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__287:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 3, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_input_1_input, i64 0, i32 1), align 8, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1531_count);
  *((&test9_input_1_input.field1)) = 3ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 3ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 784, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_input_1_input, i64 0, i32 2), align 8, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1532_count);
  *((&test9_input_1_input.field2)) = 784ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 784ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_input_1_input, i64 0, i32 3, i64 0), align 8, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1533_count);
  *((&test9_input_1_input.field3[(((signed long long )0ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_input_1_input, i64 0, i32 3, i64 1), align 8, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1534_count);
  *((&test9_input_1_input.field3[(((signed long long )1ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_input_1_input, i64 0, i32 3, i64 2), align 8, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1535_count);
  *((&test9_input_1_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_input_1_input, i64 0, i32 3, i64 3), align 8, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1536_count);
  *((&test9_input_1_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test9_input_1_input, i64 0, i32 3, i64 4), align 8, !dbg !44 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1537_count);
  *((&test9_input_1_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%224 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test9_array, i64 0, i64 0), align 16, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1543_count);
  llvm_cbe_tmp__206 = (float )*((&keras_dense_test9_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__206, *(int*)(&llvm_cbe_tmp__206));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%224, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test9, i64 0, i32 0, i64 0), align 8, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1544_count);
  *((&keras_dense_test9.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__206;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__206);
if (AESL_DEBUG_TRACE)
printf("\n  %%225 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test9_array, i64 0, i64 1), align 4, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1550_count);
  llvm_cbe_tmp__207 = (float )*((&keras_dense_test9_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__207, *(int*)(&llvm_cbe_tmp__207));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%225, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test9, i64 0, i32 0, i64 1), align 4, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1551_count);
  *((&keras_dense_test9.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__207;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__207);
if (AESL_DEBUG_TRACE)
printf("\n  %%226 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test9_array, i64 0, i64 2), align 8, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1557_count);
  llvm_cbe_tmp__208 = (float )*((&keras_dense_test9_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__208, *(int*)(&llvm_cbe_tmp__208));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%226, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test9, i64 0, i32 0, i64 2), align 8, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1558_count);
  *((&keras_dense_test9.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__208;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__208);
if (AESL_DEBUG_TRACE)
printf("\n  %%227 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test9_array, i64 0, i64 3), align 4, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1564_count);
  llvm_cbe_tmp__209 = (float )*((&keras_dense_test9_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__209, *(int*)(&llvm_cbe_tmp__209));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%227, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test9, i64 0, i32 0, i64 3), align 4, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1565_count);
  *((&keras_dense_test9.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__209;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__209);
if (AESL_DEBUG_TRACE)
printf("\n  %%228 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test9_array, i64 0, i64 4), align 16, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1571_count);
  llvm_cbe_tmp__210 = (float )*((&keras_dense_test9_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__210, *(int*)(&llvm_cbe_tmp__210));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%228, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test9, i64 0, i32 0, i64 4), align 8, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1572_count);
  *((&keras_dense_test9.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__210;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__210);
if (AESL_DEBUG_TRACE)
printf("\n  %%229 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test9_array, i64 0, i64 5), align 4, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1578_count);
  llvm_cbe_tmp__211 = (float )*((&keras_dense_test9_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__211, *(int*)(&llvm_cbe_tmp__211));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%229, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test9, i64 0, i32 0, i64 5), align 4, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1579_count);
  *((&keras_dense_test9.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__211;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__211);
if (AESL_DEBUG_TRACE)
printf("\n  %%230 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test9_array, i64 0, i64 6), align 8, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1585_count);
  llvm_cbe_tmp__212 = (float )*((&keras_dense_test9_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__212, *(int*)(&llvm_cbe_tmp__212));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%230, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test9, i64 0, i32 0, i64 6), align 8, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1586_count);
  *((&keras_dense_test9.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__212;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__212);
if (AESL_DEBUG_TRACE)
printf("\n  %%231 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test9_array, i64 0, i64 7), align 4, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1592_count);
  llvm_cbe_tmp__213 = (float )*((&keras_dense_test9_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__213, *(int*)(&llvm_cbe_tmp__213));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%231, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test9, i64 0, i32 0, i64 7), align 4, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1593_count);
  *((&keras_dense_test9.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__213;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__213);
if (AESL_DEBUG_TRACE)
printf("\n  %%232 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test9_array, i64 0, i64 8), align 16, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1599_count);
  llvm_cbe_tmp__214 = (float )*((&keras_dense_test9_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__214, *(int*)(&llvm_cbe_tmp__214));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%232, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test9, i64 0, i32 0, i64 8), align 8, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1600_count);
  *((&keras_dense_test9.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__214;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__214);
if (AESL_DEBUG_TRACE)
printf("\n  %%233 = load float* getelementptr inbounds ([10 x float]* @keras_dense_test9_array, i64 0, i64 9), align 4, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1606_count);
  llvm_cbe_tmp__215 = (float )*((&keras_dense_test9_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__215, *(int*)(&llvm_cbe_tmp__215));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%233, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test9, i64 0, i32 0, i64 9), align 4, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1607_count);
  *((&keras_dense_test9.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__215;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__215);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test9, i64 0, i32 1), align 8, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1613_count);
  *((&keras_dense_test9.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test9, i64 0, i32 2), align 8, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1614_count);
  *((&keras_dense_test9.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test9, i64 0, i32 3, i64 0), align 8, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1615_count);
  *((&keras_dense_test9.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test9, i64 0, i32 3, i64 1), align 8, !dbg !45 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1616_count);
  *((&keras_dense_test9.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test9, i64 0, i32 3, i64 2), align 8, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1617_count);
  *((&keras_dense_test9.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test9, i64 0, i32 3, i64 3), align 8, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1618_count);
  *((&keras_dense_test9.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test9, i64 0, i32 3, i64 4), align 8, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1619_count);
  *((&keras_dense_test9.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%234 = load float* getelementptr inbounds ([10 x float]* @c_dense_test9_array, i64 0, i64 0), align 16, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1625_count);
  llvm_cbe_tmp__216 = (float )*((&c_dense_test9_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__216, *(int*)(&llvm_cbe_tmp__216));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%234, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test9, i64 0, i32 0, i64 0), align 8, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1626_count);
  *((&c_dense_test9.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__216;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__216);
if (AESL_DEBUG_TRACE)
printf("\n  %%235 = load float* getelementptr inbounds ([10 x float]* @c_dense_test9_array, i64 0, i64 1), align 4, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1632_count);
  llvm_cbe_tmp__217 = (float )*((&c_dense_test9_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__217, *(int*)(&llvm_cbe_tmp__217));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%235, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test9, i64 0, i32 0, i64 1), align 4, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1633_count);
  *((&c_dense_test9.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__217;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__217);
if (AESL_DEBUG_TRACE)
printf("\n  %%236 = load float* getelementptr inbounds ([10 x float]* @c_dense_test9_array, i64 0, i64 2), align 8, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1639_count);
  llvm_cbe_tmp__218 = (float )*((&c_dense_test9_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__218, *(int*)(&llvm_cbe_tmp__218));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%236, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test9, i64 0, i32 0, i64 2), align 8, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1640_count);
  *((&c_dense_test9.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__218;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__218);
if (AESL_DEBUG_TRACE)
printf("\n  %%237 = load float* getelementptr inbounds ([10 x float]* @c_dense_test9_array, i64 0, i64 3), align 4, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1646_count);
  llvm_cbe_tmp__219 = (float )*((&c_dense_test9_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__219, *(int*)(&llvm_cbe_tmp__219));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%237, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test9, i64 0, i32 0, i64 3), align 4, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1647_count);
  *((&c_dense_test9.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__219;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__219);
if (AESL_DEBUG_TRACE)
printf("\n  %%238 = load float* getelementptr inbounds ([10 x float]* @c_dense_test9_array, i64 0, i64 4), align 16, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1653_count);
  llvm_cbe_tmp__220 = (float )*((&c_dense_test9_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__220, *(int*)(&llvm_cbe_tmp__220));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%238, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test9, i64 0, i32 0, i64 4), align 8, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1654_count);
  *((&c_dense_test9.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__220;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__220);
if (AESL_DEBUG_TRACE)
printf("\n  %%239 = load float* getelementptr inbounds ([10 x float]* @c_dense_test9_array, i64 0, i64 5), align 4, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1660_count);
  llvm_cbe_tmp__221 = (float )*((&c_dense_test9_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__221, *(int*)(&llvm_cbe_tmp__221));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%239, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test9, i64 0, i32 0, i64 5), align 4, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1661_count);
  *((&c_dense_test9.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__221;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__221);
if (AESL_DEBUG_TRACE)
printf("\n  %%240 = load float* getelementptr inbounds ([10 x float]* @c_dense_test9_array, i64 0, i64 6), align 8, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1667_count);
  llvm_cbe_tmp__222 = (float )*((&c_dense_test9_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__222, *(int*)(&llvm_cbe_tmp__222));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%240, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test9, i64 0, i32 0, i64 6), align 8, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1668_count);
  *((&c_dense_test9.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__222;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__222);
if (AESL_DEBUG_TRACE)
printf("\n  %%241 = load float* getelementptr inbounds ([10 x float]* @c_dense_test9_array, i64 0, i64 7), align 4, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1674_count);
  llvm_cbe_tmp__223 = (float )*((&c_dense_test9_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__223, *(int*)(&llvm_cbe_tmp__223));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%241, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test9, i64 0, i32 0, i64 7), align 4, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1675_count);
  *((&c_dense_test9.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__223;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__223);
if (AESL_DEBUG_TRACE)
printf("\n  %%242 = load float* getelementptr inbounds ([10 x float]* @c_dense_test9_array, i64 0, i64 8), align 16, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1681_count);
  llvm_cbe_tmp__224 = (float )*((&c_dense_test9_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__224, *(int*)(&llvm_cbe_tmp__224));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%242, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test9, i64 0, i32 0, i64 8), align 8, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1682_count);
  *((&c_dense_test9.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__224;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__224);
if (AESL_DEBUG_TRACE)
printf("\n  %%243 = load float* getelementptr inbounds ([10 x float]* @c_dense_test9_array, i64 0, i64 9), align 4, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1688_count);
  llvm_cbe_tmp__225 = (float )*((&c_dense_test9_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__225, *(int*)(&llvm_cbe_tmp__225));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%243, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test9, i64 0, i32 0, i64 9), align 4, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1689_count);
  *((&c_dense_test9.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__225;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__225);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test9, i64 0, i32 1), align 8, !dbg !46 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1695_count);
  *((&c_dense_test9.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test9, i64 0, i32 2), align 8, !dbg !47 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1696_count);
  *((&c_dense_test9.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test9, i64 0, i32 3, i64 0), align 8, !dbg !47 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1697_count);
  *((&c_dense_test9.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test9, i64 0, i32 3, i64 1), align 8, !dbg !47 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1698_count);
  *((&c_dense_test9.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test9, i64 0, i32 3, i64 2), align 8, !dbg !47 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1699_count);
  *((&c_dense_test9.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test9, i64 0, i32 3, i64 3), align 8, !dbg !47 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1700_count);
  *((&c_dense_test9.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test9, i64 0, i32 3, i64 4), align 8, !dbg !47 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1701_count);
  *((&c_dense_test9.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
  llvm_cbe_storemerge2735__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__288;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__288:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge2735 = phi i32 [ 0, %%223 ], [ %%249, %%244  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge2735_count);
  llvm_cbe_storemerge2735 = (unsigned int )llvm_cbe_storemerge2735__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge2735 = 0x%X",llvm_cbe_storemerge2735);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__230);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%245 = sext i32 %%storemerge2735 to i64, !dbg !47 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1708_count);
  llvm_cbe_tmp__226 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge2735);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__226);
if (AESL_DEBUG_TRACE)
printf("\n  %%246 = getelementptr inbounds [784 x float]* @test10_input_1_input_array, i64 0, i64 %%245, !dbg !47 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1709_count);
  llvm_cbe_tmp__227 = (float *)(&test10_input_1_input_array[(((signed long long )llvm_cbe_tmp__226))
#ifdef AESL_BC_SIM
 % 784
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__226));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__226) < 784)) fprintf(stderr, "%s:%d: warning: Read access out of array 'test10_input_1_input_array' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%247 = load float* %%246, align 4, !dbg !47 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1710_count);
  llvm_cbe_tmp__228 = (float )*llvm_cbe_tmp__227;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__228, *(int*)(&llvm_cbe_tmp__228));
if (AESL_DEBUG_TRACE)
printf("\n  %%248 = getelementptr inbounds %%struct.k2c_tensor* @test10_input_1_input, i64 0, i32 0, i64 %%245, !dbg !47 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1711_count);
  llvm_cbe_tmp__229 = (float *)(&test10_input_1_input.field0[(((signed long long )llvm_cbe_tmp__226))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__226));
}
if (AESL_DEBUG_TRACE)
printf("\n  store float %%247, float* %%248, align 4, !dbg !47 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1712_count);
  *llvm_cbe_tmp__229 = llvm_cbe_tmp__228;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__228);
if (AESL_DEBUG_TRACE)
printf("\n  %%249 = add nsw i32 %%storemerge2735, 1, !dbg !48 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1713_count);
  llvm_cbe_tmp__230 = (unsigned int )((unsigned int )(llvm_cbe_storemerge2735&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__230&4294967295ull)));
  if (((llvm_cbe_tmp__230&4294967295U) == (784u&4294967295U))) {
    goto llvm_cbe_tmp__289;
  } else {
    llvm_cbe_storemerge2735__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__230;   /* for PHI node */
    goto llvm_cbe_tmp__288;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__289:
if (AESL_DEBUG_TRACE)
printf("\n  store i64 3, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_input_1_input, i64 0, i32 1), align 8, !dbg !48 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1720_count);
  *((&test10_input_1_input.field1)) = 3ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 3ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 784, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_input_1_input, i64 0, i32 2), align 8, !dbg !48 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1721_count);
  *((&test10_input_1_input.field2)) = 784ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 784ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_input_1_input, i64 0, i32 3, i64 0), align 8, !dbg !48 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1722_count);
  *((&test10_input_1_input.field3[(((signed long long )0ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 28, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_input_1_input, i64 0, i32 3, i64 1), align 8, !dbg !48 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1723_count);
  *((&test10_input_1_input.field3[(((signed long long )1ull))])) = 28ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 28ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_input_1_input, i64 0, i32 3, i64 2), align 8, !dbg !48 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1724_count);
  *((&test10_input_1_input.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_input_1_input, i64 0, i32 3, i64 3), align 8, !dbg !48 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1725_count);
  *((&test10_input_1_input.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @test10_input_1_input, i64 0, i32 3, i64 4), align 8, !dbg !48 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1726_count);
  *((&test10_input_1_input.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store float %%224, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test10, i64 0, i32 0, i64 0), align 8, !dbg !49 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1732_count);
  *((&keras_dense_test10.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__206;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__206);
if (AESL_DEBUG_TRACE)
printf("\n  store float %%225, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test10, i64 0, i32 0, i64 1), align 4, !dbg !49 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1738_count);
  *((&keras_dense_test10.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__207;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__207);
if (AESL_DEBUG_TRACE)
printf("\n  store float %%226, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test10, i64 0, i32 0, i64 2), align 8, !dbg !49 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1744_count);
  *((&keras_dense_test10.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__208;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__208);
if (AESL_DEBUG_TRACE)
printf("\n  store float %%227, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test10, i64 0, i32 0, i64 3), align 4, !dbg !49 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1750_count);
  *((&keras_dense_test10.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__209;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__209);
if (AESL_DEBUG_TRACE)
printf("\n  store float %%228, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test10, i64 0, i32 0, i64 4), align 8, !dbg !49 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1756_count);
  *((&keras_dense_test10.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__210;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__210);
if (AESL_DEBUG_TRACE)
printf("\n  store float %%229, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test10, i64 0, i32 0, i64 5), align 4, !dbg !49 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1762_count);
  *((&keras_dense_test10.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__211;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__211);
if (AESL_DEBUG_TRACE)
printf("\n  store float %%230, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test10, i64 0, i32 0, i64 6), align 8, !dbg !49 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1768_count);
  *((&keras_dense_test10.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__212;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__212);
if (AESL_DEBUG_TRACE)
printf("\n  store float %%231, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test10, i64 0, i32 0, i64 7), align 4, !dbg !49 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1774_count);
  *((&keras_dense_test10.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__213;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__213);
if (AESL_DEBUG_TRACE)
printf("\n  store float %%232, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test10, i64 0, i32 0, i64 8), align 8, !dbg !49 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1780_count);
  *((&keras_dense_test10.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__214;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__214);
if (AESL_DEBUG_TRACE)
printf("\n  store float %%233, float* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test10, i64 0, i32 0, i64 9), align 4, !dbg !49 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1786_count);
  *((&keras_dense_test10.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__215;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__215);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test10, i64 0, i32 1), align 8, !dbg !49 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1792_count);
  *((&keras_dense_test10.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test10, i64 0, i32 2), align 8, !dbg !49 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1793_count);
  *((&keras_dense_test10.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test10, i64 0, i32 3, i64 0), align 8, !dbg !49 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1794_count);
  *((&keras_dense_test10.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test10, i64 0, i32 3, i64 1), align 8, !dbg !49 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1795_count);
  *((&keras_dense_test10.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test10, i64 0, i32 3, i64 2), align 8, !dbg !49 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1796_count);
  *((&keras_dense_test10.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test10, i64 0, i32 3, i64 3), align 8, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1797_count);
  *((&keras_dense_test10.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @keras_dense_test10, i64 0, i32 3, i64 4), align 8, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1798_count);
  *((&keras_dense_test10.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  %%251 = load float* getelementptr inbounds ([10 x float]* @c_dense_test10_array, i64 0, i64 0), align 16, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1804_count);
  llvm_cbe_tmp__231 = (float )*((&c_dense_test10_array[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__231, *(int*)(&llvm_cbe_tmp__231));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%251, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test10, i64 0, i32 0, i64 0), align 8, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1805_count);
  *((&c_dense_test10.field0[(((signed long long )0ull))])) = llvm_cbe_tmp__231;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__231);
if (AESL_DEBUG_TRACE)
printf("\n  %%252 = load float* getelementptr inbounds ([10 x float]* @c_dense_test10_array, i64 0, i64 1), align 4, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1811_count);
  llvm_cbe_tmp__232 = (float )*((&c_dense_test10_array[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__232, *(int*)(&llvm_cbe_tmp__232));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%252, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test10, i64 0, i32 0, i64 1), align 4, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1812_count);
  *((&c_dense_test10.field0[(((signed long long )1ull))])) = llvm_cbe_tmp__232;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__232);
if (AESL_DEBUG_TRACE)
printf("\n  %%253 = load float* getelementptr inbounds ([10 x float]* @c_dense_test10_array, i64 0, i64 2), align 8, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1818_count);
  llvm_cbe_tmp__233 = (float )*((&c_dense_test10_array[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__233, *(int*)(&llvm_cbe_tmp__233));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%253, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test10, i64 0, i32 0, i64 2), align 8, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1819_count);
  *((&c_dense_test10.field0[(((signed long long )2ull))])) = llvm_cbe_tmp__233;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__233);
if (AESL_DEBUG_TRACE)
printf("\n  %%254 = load float* getelementptr inbounds ([10 x float]* @c_dense_test10_array, i64 0, i64 3), align 4, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1825_count);
  llvm_cbe_tmp__234 = (float )*((&c_dense_test10_array[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__234, *(int*)(&llvm_cbe_tmp__234));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%254, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test10, i64 0, i32 0, i64 3), align 4, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1826_count);
  *((&c_dense_test10.field0[(((signed long long )3ull))])) = llvm_cbe_tmp__234;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__234);
if (AESL_DEBUG_TRACE)
printf("\n  %%255 = load float* getelementptr inbounds ([10 x float]* @c_dense_test10_array, i64 0, i64 4), align 16, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1832_count);
  llvm_cbe_tmp__235 = (float )*((&c_dense_test10_array[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__235, *(int*)(&llvm_cbe_tmp__235));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%255, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test10, i64 0, i32 0, i64 4), align 8, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1833_count);
  *((&c_dense_test10.field0[(((signed long long )4ull))])) = llvm_cbe_tmp__235;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__235);
if (AESL_DEBUG_TRACE)
printf("\n  %%256 = load float* getelementptr inbounds ([10 x float]* @c_dense_test10_array, i64 0, i64 5), align 4, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1839_count);
  llvm_cbe_tmp__236 = (float )*((&c_dense_test10_array[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__236, *(int*)(&llvm_cbe_tmp__236));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%256, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test10, i64 0, i32 0, i64 5), align 4, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1840_count);
  *((&c_dense_test10.field0[(((signed long long )5ull))])) = llvm_cbe_tmp__236;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__236);
if (AESL_DEBUG_TRACE)
printf("\n  %%257 = load float* getelementptr inbounds ([10 x float]* @c_dense_test10_array, i64 0, i64 6), align 8, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1846_count);
  llvm_cbe_tmp__237 = (float )*((&c_dense_test10_array[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__237, *(int*)(&llvm_cbe_tmp__237));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%257, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test10, i64 0, i32 0, i64 6), align 8, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1847_count);
  *((&c_dense_test10.field0[(((signed long long )6ull))])) = llvm_cbe_tmp__237;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__237);
if (AESL_DEBUG_TRACE)
printf("\n  %%258 = load float* getelementptr inbounds ([10 x float]* @c_dense_test10_array, i64 0, i64 7), align 4, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1853_count);
  llvm_cbe_tmp__238 = (float )*((&c_dense_test10_array[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__238, *(int*)(&llvm_cbe_tmp__238));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%258, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test10, i64 0, i32 0, i64 7), align 4, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1854_count);
  *((&c_dense_test10.field0[(((signed long long )7ull))])) = llvm_cbe_tmp__238;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__238);
if (AESL_DEBUG_TRACE)
printf("\n  %%259 = load float* getelementptr inbounds ([10 x float]* @c_dense_test10_array, i64 0, i64 8), align 16, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1860_count);
  llvm_cbe_tmp__239 = (float )*((&c_dense_test10_array[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__239, *(int*)(&llvm_cbe_tmp__239));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%259, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test10, i64 0, i32 0, i64 8), align 8, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1861_count);
  *((&c_dense_test10.field0[(((signed long long )8ull))])) = llvm_cbe_tmp__239;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__239);
if (AESL_DEBUG_TRACE)
printf("\n  %%260 = load float* getelementptr inbounds ([10 x float]* @c_dense_test10_array, i64 0, i64 9), align 4, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1867_count);
  llvm_cbe_tmp__240 = (float )*((&c_dense_test10_array[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 10
#endif
]));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__240, *(int*)(&llvm_cbe_tmp__240));
if (AESL_DEBUG_TRACE)
printf("\n  store float %%260, float* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test10, i64 0, i32 0, i64 9), align 4, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1868_count);
  *((&c_dense_test10.field0[(((signed long long )9ull))])) = llvm_cbe_tmp__240;
if (AESL_DEBUG_TRACE)
printf("\n = %f\n", llvm_cbe_tmp__240);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test10, i64 0, i32 1), align 8, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1874_count);
  *((&c_dense_test10.field1)) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test10, i64 0, i32 2), align 8, !dbg !50 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1875_count);
  *((&c_dense_test10.field2)) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 10, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test10, i64 0, i32 3, i64 0), align 8, !dbg !51 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1876_count);
  *((&c_dense_test10.field3[(((signed long long )0ull))])) = 10ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 10ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test10, i64 0, i32 3, i64 1), align 8, !dbg !51 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1877_count);
  *((&c_dense_test10.field3[(((signed long long )1ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test10, i64 0, i32 3, i64 2), align 8, !dbg !51 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1878_count);
  *((&c_dense_test10.field3[(((signed long long )2ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test10, i64 0, i32 3, i64 3), align 8, !dbg !51 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1879_count);
  *((&c_dense_test10.field3[(((signed long long )3ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  store i64 1, i64* getelementptr inbounds (%%struct.k2c_tensor* @c_dense_test10, i64 0, i32 3, i64 4), align 8, !dbg !51 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1880_count);
  *((&c_dense_test10.field3[(((signed long long )4ull))])) = 1ull;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", 1ull);
if (AESL_DEBUG_TRACE)
printf("\n  call void bitcast (void (...)* @mnist_original_initialize to void ()*)() nounwind, !dbg !52 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1886_count);
  mnist_original_initialize();
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%261 = call i32 @clock() nounwind, !dbg !52 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1887_count);
  llvm_cbe_tmp__241 = (unsigned int )clock();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__241);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @mnist_original(%%struct.k2c_tensor* @test1_input_1_input, %%struct.k2c_tensor* @c_dense_test1) nounwind, !dbg !53 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1890_count);
  mnist_original((l_struct_OC_k2c_tensor *)(&test1_input_1_input), (l_struct_OC_k2c_tensor *)(&c_dense_test1));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @mnist_original(%%struct.k2c_tensor* @test2_input_1_input, %%struct.k2c_tensor* @c_dense_test2) nounwind, !dbg !53 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1891_count);
  mnist_original((l_struct_OC_k2c_tensor *)(&test2_input_1_input), (l_struct_OC_k2c_tensor *)(&c_dense_test2));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @mnist_original(%%struct.k2c_tensor* @test3_input_1_input, %%struct.k2c_tensor* @c_dense_test3) nounwind, !dbg !53 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1892_count);
  mnist_original((l_struct_OC_k2c_tensor *)(&test3_input_1_input), (l_struct_OC_k2c_tensor *)(&c_dense_test3));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @mnist_original(%%struct.k2c_tensor* @test4_input_1_input, %%struct.k2c_tensor* @c_dense_test4) nounwind, !dbg !53 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1893_count);
  mnist_original((l_struct_OC_k2c_tensor *)(&test4_input_1_input), (l_struct_OC_k2c_tensor *)(&c_dense_test4));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @mnist_original(%%struct.k2c_tensor* @test5_input_1_input, %%struct.k2c_tensor* @c_dense_test5) nounwind, !dbg !53 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1894_count);
  mnist_original((l_struct_OC_k2c_tensor *)(&test5_input_1_input), (l_struct_OC_k2c_tensor *)(&c_dense_test5));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @mnist_original(%%struct.k2c_tensor* @test6_input_1_input, %%struct.k2c_tensor* @c_dense_test6) nounwind, !dbg !53 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1895_count);
  mnist_original((l_struct_OC_k2c_tensor *)(&test6_input_1_input), (l_struct_OC_k2c_tensor *)(&c_dense_test6));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @mnist_original(%%struct.k2c_tensor* @test7_input_1_input, %%struct.k2c_tensor* @c_dense_test7) nounwind, !dbg !53 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1896_count);
  mnist_original((l_struct_OC_k2c_tensor *)(&test7_input_1_input), (l_struct_OC_k2c_tensor *)(&c_dense_test7));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @mnist_original(%%struct.k2c_tensor* @test8_input_1_input, %%struct.k2c_tensor* @c_dense_test8) nounwind, !dbg !53 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1897_count);
  mnist_original((l_struct_OC_k2c_tensor *)(&test8_input_1_input), (l_struct_OC_k2c_tensor *)(&c_dense_test8));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @mnist_original(%%struct.k2c_tensor* @test9_input_1_input, %%struct.k2c_tensor* @c_dense_test9) nounwind, !dbg !53 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1898_count);
  mnist_original((l_struct_OC_k2c_tensor *)(&test9_input_1_input), (l_struct_OC_k2c_tensor *)(&c_dense_test9));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @mnist_original(%%struct.k2c_tensor* @test10_input_1_input, %%struct.k2c_tensor* @c_dense_test10) nounwind, !dbg !54 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1899_count);
  mnist_original((l_struct_OC_k2c_tensor *)(&test10_input_1_input), (l_struct_OC_k2c_tensor *)(&c_dense_test10));
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%262 = call i32 @clock() nounwind, !dbg !54 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1900_count);
  llvm_cbe_tmp__242 = (unsigned int )clock();
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__242);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%263 = sitofp i32 %%262 to double, !dbg !53 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1903_count);
  llvm_cbe_tmp__243 = (double )((double )(signed int )llvm_cbe_tmp__242);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__243, *(long long*)(&llvm_cbe_tmp__243));
if (AESL_DEBUG_TRACE)
printf("\n  %%264 = sitofp i32 %%261 to double, !dbg !53 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1904_count);
  llvm_cbe_tmp__244 = (double )((double )(signed int )llvm_cbe_tmp__241);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__244, *(long long*)(&llvm_cbe_tmp__244));
if (AESL_DEBUG_TRACE)
printf("\n  %%265 = fsub double %%263, %%264, !dbg !53 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1905_count);
  llvm_cbe_tmp__245 = (double )llvm_cbe_tmp__243 - llvm_cbe_tmp__244;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__245, *(long long*)(&llvm_cbe_tmp__245));
if (AESL_DEBUG_TRACE)
printf("\n  %%266 = fdiv double %%265, 1.000000e+03, !dbg !53 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1906_count);
  llvm_cbe_tmp__246 = (double )llvm_cbe_tmp__245 / 0x1.f4p9;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__246, *(long long*)(&llvm_cbe_tmp__246));
if (AESL_DEBUG_TRACE)
printf("\n  %%267 = fdiv double %%266, 1.000000e+01, !dbg !53 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1907_count);
  llvm_cbe_tmp__247 = (double )llvm_cbe_tmp__246 / 0x1.4p3;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__247, *(long long*)(&llvm_cbe_tmp__247));
if (AESL_DEBUG_TRACE)
printf("\n  %%268 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([35 x i8]* @aesl_internal_.str, i64 0, i64 0), double %%267) nounwind, !dbg !53 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1908_count);
  printf(( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 35
#endif
])), llvm_cbe_tmp__247);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__247, *(long long*)(&llvm_cbe_tmp__247));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__248);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%269 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_test1, %%struct.k2c_tensor* @c_dense_test1), !dbg !54 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1909_count);
  llvm_cbe_tmp__249 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_test1), (l_struct_OC_k2c_tensor *)(&c_dense_test1));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__249);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%270 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_test2, %%struct.k2c_tensor* @c_dense_test2), !dbg !54 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1910_count);
  llvm_cbe_tmp__250 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_test2), (l_struct_OC_k2c_tensor *)(&c_dense_test2));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__250);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%271 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_test3, %%struct.k2c_tensor* @c_dense_test3), !dbg !54 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1911_count);
  llvm_cbe_tmp__251 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_test3), (l_struct_OC_k2c_tensor *)(&c_dense_test3));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__251);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%272 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_test4, %%struct.k2c_tensor* @c_dense_test4), !dbg !54 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1912_count);
  llvm_cbe_tmp__252 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_test4), (l_struct_OC_k2c_tensor *)(&c_dense_test4));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__252);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%273 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_test5, %%struct.k2c_tensor* @c_dense_test5), !dbg !54 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1913_count);
  llvm_cbe_tmp__253 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_test5), (l_struct_OC_k2c_tensor *)(&c_dense_test5));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__253);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%274 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_test6, %%struct.k2c_tensor* @c_dense_test6), !dbg !54 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1914_count);
  llvm_cbe_tmp__254 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_test6), (l_struct_OC_k2c_tensor *)(&c_dense_test6));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__254);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%275 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_test7, %%struct.k2c_tensor* @c_dense_test7), !dbg !55 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1915_count);
  llvm_cbe_tmp__255 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_test7), (l_struct_OC_k2c_tensor *)(&c_dense_test7));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__255);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%276 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_test8, %%struct.k2c_tensor* @c_dense_test8), !dbg !55 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1916_count);
  llvm_cbe_tmp__256 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_test8), (l_struct_OC_k2c_tensor *)(&c_dense_test8));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__256);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%277 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_test9, %%struct.k2c_tensor* @c_dense_test9), !dbg !55 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1917_count);
  llvm_cbe_tmp__257 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_test9), (l_struct_OC_k2c_tensor *)(&c_dense_test9));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__257);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%278 = call float @maxabs(%%struct.k2c_tensor* @keras_dense_test10, %%struct.k2c_tensor* @c_dense_test10), !dbg !55 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1918_count);
  llvm_cbe_tmp__258 = (float )maxabs((l_struct_OC_k2c_tensor *)(&keras_dense_test10), (l_struct_OC_k2c_tensor *)(&c_dense_test10));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = %f",llvm_cbe_tmp__258);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%280 = select i1 %%279, float %%270, float %%269, !dbg !55 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1933_count);
  llvm_cbe_tmp__259 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__250, llvm_cbe_tmp__249))) ? ((float )llvm_cbe_tmp__250) : ((float )llvm_cbe_tmp__249));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__259, *(int*)(&llvm_cbe_tmp__259));
if (AESL_DEBUG_TRACE)
printf("\n  %%282 = select i1 %%281, float %%271, float %%280, !dbg !55 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1945_count);
  llvm_cbe_tmp__260 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__251, llvm_cbe_tmp__259))) ? ((float )llvm_cbe_tmp__251) : ((float )llvm_cbe_tmp__259));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__260, *(int*)(&llvm_cbe_tmp__260));
if (AESL_DEBUG_TRACE)
printf("\n  %%284 = select i1 %%283, float %%272, float %%282, !dbg !55 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1957_count);
  llvm_cbe_tmp__261 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__252, llvm_cbe_tmp__260))) ? ((float )llvm_cbe_tmp__252) : ((float )llvm_cbe_tmp__260));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__261, *(int*)(&llvm_cbe_tmp__261));
if (AESL_DEBUG_TRACE)
printf("\n  %%286 = select i1 %%285, float %%273, float %%284, !dbg !55 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1969_count);
  llvm_cbe_tmp__262 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__253, llvm_cbe_tmp__261))) ? ((float )llvm_cbe_tmp__253) : ((float )llvm_cbe_tmp__261));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__262, *(int*)(&llvm_cbe_tmp__262));
if (AESL_DEBUG_TRACE)
printf("\n  %%288 = select i1 %%287, float %%274, float %%286, !dbg !55 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1981_count);
  llvm_cbe_tmp__263 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__254, llvm_cbe_tmp__262))) ? ((float )llvm_cbe_tmp__254) : ((float )llvm_cbe_tmp__262));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__263, *(int*)(&llvm_cbe_tmp__263));
if (AESL_DEBUG_TRACE)
printf("\n  %%290 = select i1 %%289, float %%275, float %%288, !dbg !55 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_1993_count);
  llvm_cbe_tmp__264 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__255, llvm_cbe_tmp__263))) ? ((float )llvm_cbe_tmp__255) : ((float )llvm_cbe_tmp__263));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__264, *(int*)(&llvm_cbe_tmp__264));
if (AESL_DEBUG_TRACE)
printf("\n  %%292 = select i1 %%291, float %%276, float %%290, !dbg !55 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_2005_count);
  llvm_cbe_tmp__265 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__256, llvm_cbe_tmp__264))) ? ((float )llvm_cbe_tmp__256) : ((float )llvm_cbe_tmp__264));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__265, *(int*)(&llvm_cbe_tmp__265));
if (AESL_DEBUG_TRACE)
printf("\n  %%294 = select i1 %%293, float %%277, float %%292, !dbg !55 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_2017_count);
  llvm_cbe_tmp__266 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__257, llvm_cbe_tmp__265))) ? ((float )llvm_cbe_tmp__257) : ((float )llvm_cbe_tmp__265));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__266, *(int*)(&llvm_cbe_tmp__266));
if (AESL_DEBUG_TRACE)
printf("\n  %%296 = select i1 %%295, float %%278, float %%294, !dbg !55 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_2029_count);
  llvm_cbe_tmp__267 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__258, llvm_cbe_tmp__266))) ? ((float )llvm_cbe_tmp__258) : ((float )llvm_cbe_tmp__266));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__267, *(int*)(&llvm_cbe_tmp__267));
if (AESL_DEBUG_TRACE)
printf("\n  %%297 = fpext float %%296 to double, !dbg !55 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_2036_count);
  llvm_cbe_tmp__268 = (double )((double )llvm_cbe_tmp__267);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__268, *(long long*)(&llvm_cbe_tmp__268));
if (AESL_DEBUG_TRACE)
printf("\n  %%298 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([38 x i8]* @aesl_internal_.str1, i64 0, i64 0), double %%297) nounwind, !dbg !55 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_2037_count);
  printf(( char *)((&aesl_internal__OC_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 38
#endif
])), llvm_cbe_tmp__268);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__268, *(long long*)(&llvm_cbe_tmp__268));
printf("\nReturn  = 0x%X",llvm_cbe_tmp__269);
}
if (AESL_DEBUG_TRACE)
printf("\n  call void bitcast (void (...)* @mnist_original_terminate to void ()*)() nounwind, !dbg !56 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_2038_count);
  mnist_original_terminate();
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge31 = zext i1 %%299 to i32, !dbg !55 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge31_count);
  llvm_cbe_storemerge31 = (unsigned int )((unsigned int )(bool )(llvm_fcmp_ogt(llvm_cbe_tmp__268, 0x1.4f8b588e368f1p-17))&1U);
if (AESL_DEBUG_TRACE)
printf("\nstoremerge31 = 0x%X\n", llvm_cbe_storemerge31);
  if (AESL_DEBUG_TRACE)
      printf("\nEND @main}\n");
  return llvm_cbe_storemerge31;
}


float maxabs(l_struct_OC_k2c_tensor *llvm_cbe_tensor1, l_struct_OC_k2c_tensor *llvm_cbe_tensor2) {
  static  unsigned long long aesl_llvm_cbe_2041_count = 0;
  static  unsigned long long aesl_llvm_cbe_2042_count = 0;
  static  unsigned long long aesl_llvm_cbe_2043_count = 0;
  static  unsigned long long aesl_llvm_cbe_2044_count = 0;
  static  unsigned long long aesl_llvm_cbe_2045_count = 0;
  static  unsigned long long aesl_llvm_cbe_2046_count = 0;
  static  unsigned long long aesl_llvm_cbe_2047_count = 0;
  static  unsigned long long aesl_llvm_cbe_2048_count = 0;
  static  unsigned long long aesl_llvm_cbe_2049_count = 0;
  static  unsigned long long aesl_llvm_cbe_2050_count = 0;
  static  unsigned long long aesl_llvm_cbe_2051_count = 0;
  static  unsigned long long aesl_llvm_cbe_2052_count = 0;
  static  unsigned long long aesl_llvm_cbe_2053_count = 0;
  static  unsigned long long aesl_llvm_cbe_2054_count = 0;
  static  unsigned long long aesl_llvm_cbe_2055_count = 0;
  static  unsigned long long aesl_llvm_cbe_2056_count = 0;
  static  unsigned long long aesl_llvm_cbe_2057_count = 0;
  signed long long *llvm_cbe_tmp__290;
  static  unsigned long long aesl_llvm_cbe_2058_count = 0;
  unsigned long long llvm_cbe_tmp__291;
  static  unsigned long long aesl_llvm_cbe_2059_count = 0;
  static  unsigned long long aesl_llvm_cbe_2060_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1_count = 0;
  unsigned long long llvm_cbe_storemerge1;
  unsigned long long llvm_cbe_storemerge1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2061_count = 0;
  float llvm_cbe_tmp__292;
  float llvm_cbe_tmp__292__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2062_count = 0;
  float *llvm_cbe_tmp__293;
  static  unsigned long long aesl_llvm_cbe_2063_count = 0;
  float llvm_cbe_tmp__294;
  static  unsigned long long aesl_llvm_cbe_2064_count = 0;
  float *llvm_cbe_tmp__295;
  static  unsigned long long aesl_llvm_cbe_2065_count = 0;
  float llvm_cbe_tmp__296;
  static  unsigned long long aesl_llvm_cbe_2066_count = 0;
  float llvm_cbe_tmp__297;
  static  unsigned long long aesl_llvm_cbe_2067_count = 0;
  float llvm_cbe_tmp__298;
  static  unsigned long long aesl_llvm_cbe_2068_count = 0;
  static  unsigned long long aesl_llvm_cbe_2069_count = 0;
  static  unsigned long long aesl_llvm_cbe_2070_count = 0;
  static  unsigned long long aesl_llvm_cbe_2071_count = 0;
  static  unsigned long long aesl_llvm_cbe_2072_count = 0;
  static  unsigned long long aesl_llvm_cbe_2073_count = 0;
  static  unsigned long long aesl_llvm_cbe_2074_count = 0;
  static  unsigned long long aesl_llvm_cbe_2075_count = 0;
  float llvm_cbe_tmp__299;
  static  unsigned long long aesl_llvm_cbe_2076_count = 0;
  static  unsigned long long aesl_llvm_cbe_2077_count = 0;
  unsigned long long llvm_cbe_tmp__300;
  static  unsigned long long aesl_llvm_cbe_2078_count = 0;
  static  unsigned long long aesl_llvm_cbe_2079_count = 0;
  static  unsigned long long aesl_llvm_cbe_2080_count = 0;
  static  unsigned long long aesl_llvm_cbe_2081_count = 0;
  static  unsigned long long aesl_llvm_cbe_2082_count = 0;
  static  unsigned long long aesl_llvm_cbe_2083_count = 0;
  unsigned long long llvm_cbe_tmp__301;
  static  unsigned long long aesl_llvm_cbe_2084_count = 0;
  static  unsigned long long aesl_llvm_cbe_2085_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e_lcssa_count = 0;
  float llvm_cbe__2e_lcssa;
  float llvm_cbe__2e_lcssa__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2086_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @maxabs\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds %%struct.k2c_tensor* %%tensor1, i64 0, i32 2, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_2057_count);
  llvm_cbe_tmp__290 = (signed long long *)(&llvm_cbe_tensor1->field2);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = load i64* %%1, align 8, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_2058_count);
  llvm_cbe_tmp__291 = (unsigned long long )*llvm_cbe_tmp__290;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__291);
  if (((llvm_cbe_tmp__291&18446744073709551615ULL) == (0ull&18446744073709551615ULL))) {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (float )0x0p0;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  } else {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )0ull;   /* for PHI node */
    llvm_cbe_tmp__292__PHI_TEMPORARY = (float )0x0p0;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  }

  do {     /* Syntactic loop '.lr.ph' to make GCC happy */
llvm_cbe__2e_lr_2e_ph:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1 = phi i64 [ %%13, %%.lr.ph ], [ 0, %%0  for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_storemerge1_count);
  llvm_cbe_storemerge1 = (unsigned long long )llvm_cbe_storemerge1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",llvm_cbe_storemerge1);
printf("\n = 0x%I64X",llvm_cbe_tmp__300);
printf("\n = 0x%I64X",0ull);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = phi float [ %%12, %%.lr.ph ], [ 0.000000e+00, %%0  for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_2061_count);
  llvm_cbe_tmp__292 = (float )llvm_cbe_tmp__292__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %f",llvm_cbe_tmp__292);
printf("\n = %f",llvm_cbe_tmp__299);
printf("\n = %f",0x0p0);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds %%struct.k2c_tensor* %%tensor1, i64 0, i32 0, i64 %%storemerge1, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_2062_count);
  llvm_cbe_tmp__293 = (float *)(&llvm_cbe_tensor1->field0[(((signed long long )llvm_cbe_storemerge1))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",((signed long long )llvm_cbe_storemerge1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = load float* %%5, align 4, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_2063_count);
  llvm_cbe_tmp__294 = (float )*llvm_cbe_tmp__293;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__294, *(int*)(&llvm_cbe_tmp__294));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds %%struct.k2c_tensor* %%tensor2, i64 0, i32 0, i64 %%storemerge1, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_2064_count);
  llvm_cbe_tmp__295 = (float *)(&llvm_cbe_tensor2->field0[(((signed long long )llvm_cbe_storemerge1))]);
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1 = 0x%I64X",((signed long long )llvm_cbe_storemerge1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = load float* %%7, align 4, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_2065_count);
  llvm_cbe_tmp__296 = (float )*llvm_cbe_tmp__295;
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__296, *(int*)(&llvm_cbe_tmp__296));
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = fsub float %%6, %%8, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_2066_count);
  llvm_cbe_tmp__297 = (float )((float )(llvm_cbe_tmp__294 - llvm_cbe_tmp__296));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__297, *(int*)(&llvm_cbe_tmp__297));
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = tail call float @fabsf(float %%9) nounwind, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_2067_count);
  llvm_cbe_tmp__298 = (float ) /*tail*/ fabsf(llvm_cbe_tmp__297);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %f,  0x%x",llvm_cbe_tmp__297, *(int*)(&llvm_cbe_tmp__297));
printf("\nReturn  = %f",llvm_cbe_tmp__298);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = select i1 %%11, float %%10, float %%4, !dbg !13 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_2075_count);
  llvm_cbe_tmp__299 = (float )(((llvm_fcmp_ogt(llvm_cbe_tmp__298, llvm_cbe_tmp__292))) ? ((float )llvm_cbe_tmp__298) : ((float )llvm_cbe_tmp__292));
if (AESL_DEBUG_TRACE)
printf("\n = %f,  0x%x\n", llvm_cbe_tmp__299, *(int*)(&llvm_cbe_tmp__299));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = add i64 %%storemerge1, 1, !dbg !14 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_2077_count);
  llvm_cbe_tmp__300 = (unsigned long long )((unsigned long long )(llvm_cbe_storemerge1&18446744073709551615ull)) + ((unsigned long long )(1ull&18446744073709551615ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", ((unsigned long long )(llvm_cbe_tmp__300&18446744073709551615ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = load i64* %%1, align 8, !dbg !12 for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe_2083_count);
  llvm_cbe_tmp__301 = (unsigned long long )*llvm_cbe_tmp__290;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__301);
  if ((((unsigned long long )llvm_cbe_tmp__300&18446744073709551615ULL) < ((unsigned long long )llvm_cbe_tmp__301&18446744073709551615ULL))) {
    llvm_cbe_storemerge1__PHI_TEMPORARY = (unsigned long long )llvm_cbe_tmp__300;   /* for PHI node */
    llvm_cbe_tmp__292__PHI_TEMPORARY = (float )llvm_cbe_tmp__299;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph;
  } else {
    llvm_cbe__2e_lcssa__PHI_TEMPORARY = (float )llvm_cbe_tmp__299;   /* for PHI node */
    goto llvm_cbe__2e__crit_edge;
  }

  } while (1); /* end of syntactic loop '.lr.ph' */
llvm_cbe__2e__crit_edge:
if (AESL_DEBUG_TRACE)
printf("\n  %%.lcssa = phi float [ 0.000000e+00, %%0 ], [ %%12, %%.lr.ph  for 0x%I64xth hint within @maxabs  --> \n", ++aesl_llvm_cbe__2e_lcssa_count);
  llvm_cbe__2e_lcssa = (float )llvm_cbe__2e_lcssa__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n.lcssa = %f",llvm_cbe__2e_lcssa);
printf("\n = %f",0x0p0);
printf("\n = %f",llvm_cbe_tmp__299);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @maxabs}\n");
  return llvm_cbe__2e_lcssa;
}

