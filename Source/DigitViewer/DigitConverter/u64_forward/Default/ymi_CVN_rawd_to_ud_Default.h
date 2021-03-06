/* ymi_CVN_rawd_to_ub_Default.h
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 01/22/2011
 * Last Modified    : 01/22/2011
 * 
 * 
 *      ymi         =   Micro-Intrinsic
 *      CVN         =   Format Conversion Unit
 *      rawd_to_ud  =   Decimal Raw -> Binary Integer
 *      Default     =   Default Instruction Set
 * 
 */

#ifndef _ymi_CVN_rawd_to_ud_Default_H
#define _ymi_CVN_rawd_to_ud_Default_H
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#define ymi_CVN_rawd_to_u64d19_u0_Default(T, A){   \
    register u32_t _a0; \
    register u32_t _b0; \
    register u64_t _c0; \
    \
    _a0 = ((const char*)(A))[ 0];   \
    _b0 = ((const char*)(A))[ 8];   \
    _a0 *= 10;  \
    _b0 *= 10;  \
    _a0 += ((const char*)(A))[ 1];  \
    _b0 += ((const char*)(A))[ 9];  \
    _a0 *= 10;  \
    _b0 *= 10;  \
    _a0 += ((const char*)(A))[ 2];  \
    _b0 += ((const char*)(A))[10];  \
    _a0 *= 10;  \
    _b0 *= 10;  \
    _a0 += ((const char*)(A))[ 3];  \
    _b0 += ((const char*)(A))[11];  \
    _a0 *= 10;  \
    _b0 *= 10;  \
    _a0 += ((const char*)(A))[ 4];  \
    _b0 += ((const char*)(A))[12];  \
    _a0 *= 10;  \
    _b0 *= 10;  \
    _a0 += ((const char*)(A))[ 5];  \
    _b0 += ((const char*)(A))[13];  \
    _a0 *= 10;  \
    _b0 *= 10;  \
    _a0 += ((const char*)(A))[ 6];  \
    _b0 += ((const char*)(A))[14];  \
    _a0 *= 10;  \
    _b0 *= 10;  \
    _a0 += ((const char*)(A))[ 7];  \
    _b0 += ((const char*)(A))[15];  \
    _c0 = (u64_t)_a0 * 100000000 + _b0; \
    _a0 = ((const char*)(A))[16];   \
    _a0 *= 10;  \
    _a0 += ((const char*)(A))[17];  \
    _a0 *= 10;  \
    _a0 += ((const char*)(A))[18];  \
    _c0 *= 1000;    \
    _c0 += _a0; \
    ((u64_t*)(T))[0] = _c0; \
}
#define ymi_CVN_rawd_to_u64d19_u1_Default(T, A){   \
    register u32_t _a0, _a1; \
    register u32_t _b0, _b1; \
    register u64_t _c0, _c1; \
    \
    _a0 = ((const char*)(A))[ 0];   \
    _a1 = ((const char*)(A))[19];   \
    _b0 = ((const char*)(A))[ 8];   \
    _b1 = ((const char*)(A))[27];   \
    _a0 *= 10;  \
    _a1 *= 10;  \
    _b0 *= 10;  \
    _b1 *= 10;  \
    _a0 += ((const char*)(A))[ 1];  \
    _a1 += ((const char*)(A))[20];  \
    _b0 += ((const char*)(A))[ 9];  \
    _b1 += ((const char*)(A))[28];  \
    _a0 *= 10;  \
    _a1 *= 10;  \
    _b0 *= 10;  \
    _b1 *= 10;  \
    _a0 += ((const char*)(A))[ 2];  \
    _a1 += ((const char*)(A))[21];  \
    _b0 += ((const char*)(A))[10];  \
    _b1 += ((const char*)(A))[29];  \
    _a0 *= 10;  \
    _a1 *= 10;  \
    _b0 *= 10;  \
    _b1 *= 10;  \
    _a0 += ((const char*)(A))[ 3];  \
    _a1 += ((const char*)(A))[22];  \
    _b0 += ((const char*)(A))[11];  \
    _b1 += ((const char*)(A))[30];  \
    _a0 *= 10;  \
    _a1 *= 10;  \
    _b0 *= 10;  \
    _b1 *= 10;  \
    _a0 += ((const char*)(A))[ 4];  \
    _a1 += ((const char*)(A))[23];  \
    _b0 += ((const char*)(A))[12];  \
    _b1 += ((const char*)(A))[31];  \
    _a0 *= 10;  \
    _a1 *= 10;  \
    _b0 *= 10;  \
    _b1 *= 10;  \
    _a0 += ((const char*)(A))[ 5];  \
    _a1 += ((const char*)(A))[24];  \
    _b0 += ((const char*)(A))[13];  \
    _b1 += ((const char*)(A))[32];  \
    _a0 *= 10;  \
    _a1 *= 10;  \
    _b0 *= 10;  \
    _b1 *= 10;  \
    _a0 += ((const char*)(A))[ 6];  \
    _a1 += ((const char*)(A))[25];  \
    _b0 += ((const char*)(A))[14];  \
    _b1 += ((const char*)(A))[33];  \
    _a0 *= 10;  \
    _a1 *= 10;  \
    _b0 *= 10;  \
    _b1 *= 10;  \
    _a0 += ((const char*)(A))[ 7];  \
    _a1 += ((const char*)(A))[26];  \
    _b0 += ((const char*)(A))[15];  \
    _b1 += ((const char*)(A))[34];  \
    _c0 = (u64_t)_a0 * 100000000 + _b0; \
    _c1 = (u64_t)_a1 * 100000000 + _b1; \
    _a0 = ((const char*)(A))[16];   \
    _a1 = ((const char*)(A))[35];   \
    _a0 *= 10;  \
    _a1 *= 10;  \
    _a0 += ((const char*)(A))[17];  \
    _a1 += ((const char*)(A))[36];  \
    _a0 *= 10;  \
    _a1 *= 10;  \
    _a0 += ((const char*)(A))[18];  \
    _a1 += ((const char*)(A))[37];  \
    _c0 *= 1000;    \
    _c1 *= 1000;    \
    _c0 += _a0; \
    _c1 += _a1; \
    ((u64_t*)(T))[0] = _c0; \
    ((u64_t*)(T))[1] = _c1; \
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#define ymi_CVN_rawd_to_u64d19_u0_Default_disabled(T, A){    \
    register u64_t _r0, _r1, _r2, _r3; \
    \
    _r0 = ((const u64_t*)(A))[0];   \
    _r1 = ((const u64_t*)(A))[1];   \
    \
    _r2 = _r0 & 0xff00ff00ff00ff00ull;  \
    _r3 = _r1 & 0xff00ff00ff00ff00ull;  \
    _r0 &= 0x00ff00ff00ff00ffull;   \
    _r1 &= 0x00ff00ff00ff00ffull;   \
    _r2 >>= 8;  \
    _r3 >>= 8;  \
    _r0 *= 10;  \
    _r1 *= 10;  \
    _r0 += _r2; \
    _r1 += _r3; \
    \
    _r2 = _r0 & 0xffff0000ffff0000ull;  \
    _r3 = _r1 & 0xffff0000ffff0000ull;  \
    _r0 &= 0x0000ffff0000ffffull;   \
    _r1 &= 0x0000ffff0000ffffull;   \
    _r2 >>= 16; \
    _r3 >>= 16; \
    _r0 *= 100; \
    _r1 *= 100; \
    _r0 += _r2; \
    _r1 += _r3; \
    \
    _r2 = _r0 & 0xffffffff00000000ull;  \
    _r3 = _r1 & 0xffffffff00000000ull;  \
    _r0 &= 0x00000000ffffffffull;   \
    _r1 &= 0x00000000ffffffffull;   \
    _r2 >>= 32; \
    _r3 >>= 32; \
    _r0 *= 10000;   \
    _r1 *= 10000;   \
    _r0 += _r2; \
    _r1 += _r3; \
    \
    _r0 *= 100000000;   \
    _r0 += _r1; \
    _r0 *= 1000;    \
    \
    _r1 = ((const u32_t*)(A))[4];   \
    _r2 = _r1 >>  8;    \
    _r3 = _r1 >> 16;    \
    _r1 &= 0xff;    \
    _r2 &= 0xff;    \
    _r3 &= 0xff;    \
    _r1 *= 100;     \
    _r2 *= 10;      \
    \
    _r1 += _r2 + _r3;   \
    _r0 += _r1; \
    \
    ((u64_t*)(T))[0] = _r0; \
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#endif
