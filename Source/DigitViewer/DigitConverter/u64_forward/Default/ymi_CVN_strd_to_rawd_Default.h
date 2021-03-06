/* ymi_CVN_strd_to_rawd_Default.h
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 01/30/2011
 * Last Modified    : 04/06/2012
 * 
 * 
 *      ymi             =   Micro-Intrinsic
 *      CVN             =   Format Conversion Unit
 *      strd_to_rawd    =   Decimal String -> Decimal Raw
 *      Default         =   Default Instruction Set
 * 
 */

#ifndef _ymi_CVN_strd_to_rawd_Default_H
#define _ymi_CVN_strd_to_rawd_Default_H
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#define ymi_CVN_strd_to_rawd_u0_Default(T, bad){ \
    register char _r0;  \
    \
    _r0 = ((const char*)(T))[0];    \
    \
    if (_r0 < '0')  \
        bad = 1;    \
    if (_r0 > '9')  \
        bad = 1;    \
    _r0 -= '0'; \
    \
    ((char*)(T))[0] = _r0;  \
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#define ymi_CVN_strd_to_rawd_u2_Default32(T, bad){   \
    register u32_t _a0, _b0; \
    \
    _a0 = ((const u32_t*)(T))[0];   \
    \
    _b0 = _a0 & 0x80808080ull;  \
    bad |= _b0; \
    \
    _b0 = _a0 + 0x46464646ull;  \
    _b0 &= 0x80808080ull;   \
    bad |= _b0; \
    \
    _b0 = _a0 + 0x50505050ull;  \
    _b0 = ~_b0; \
    _b0 &= 0x80808080ull;   \
    bad |= _b0; \
    \
    _a0 -= 0x30303030ull;   \
    ((u32_t*)(T))[0] = _a0; \
}
#define ymi_CVN_strd_to_rawd_u3_Default32(T, bad){   \
    register u32_t _a0, _b0; \
    register u32_t _a1, _b1; \
    \
    _a0 = ((const u32_t*)(T))[0];   \
    _a1 = ((const u32_t*)(T))[1];   \
    \
    _b0 = _a0 & 0x80808080ull;  \
    _b1 = _a1 & 0x80808080ull;  \
    bad |= _b0; \
    bad |= _b1; \
    \
    _b0 = _a0 + 0x46464646ull;  \
    _b1 = _a1 + 0x46464646ull;  \
    _b0 &= 0x80808080ull;   \
    _b1 &= 0x80808080ull;   \
    bad |= _b0; \
    bad |= _b1; \
    \
    _b0 = _a0 + 0x50505050ull;  \
    _b1 = _a1 + 0x50505050ull;  \
    _b0 = ~_b0; \
    _b1 = ~_b1; \
    _b0 &= 0x80808080ull;   \
    _b1 &= 0x80808080ull;   \
    bad |= _b0; \
    bad |= _b1; \
    \
    _a0 -= 0x30303030ull;   \
    _a1 -= 0x30303030ull;   \
    ((u32_t*)(T))[0] = _a0; \
    ((u32_t*)(T))[1] = _a1; \
}
#define ymi_CVN_strd_to_rawd_u4_Default32(T, bad){   \
    register u32_t _a0, _b0; \
    register u32_t _a1, _b1; \
    register u32_t _a2, _b2; \
    register u32_t _a3, _b3; \
    \
    _a0 = ((const u32_t*)(T))[0];   \
    _a1 = ((const u32_t*)(T))[1];   \
    _a2 = ((const u32_t*)(T))[2];   \
    _a3 = ((const u32_t*)(T))[3];   \
    \
    _b0 = _a0 & 0x80808080ull;  \
    _b1 = _a1 & 0x80808080ull;  \
    _b2 = _a2 & 0x80808080ull;  \
    _b3 = _a3 & 0x80808080ull;  \
    _b0 |= _b1; \
    _b2 |= _b3; \
    _b0 |= _b2; \
    bad |= _b0; \
    \
    _b0 = _a0 + 0x46464646ull;  \
    _b1 = _a1 + 0x46464646ull;  \
    _b2 = _a2 + 0x46464646ull;  \
    _b3 = _a3 + 0x46464646ull;  \
    _b0 &= 0x80808080ull;   \
    _b1 &= 0x80808080ull;   \
    _b2 &= 0x80808080ull;   \
    _b3 &= 0x80808080ull;   \
    _b0 |= _b1; \
    _b2 |= _b3; \
    _b0 |= _b2; \
    bad |= _b0; \
    \
    _b0 = _a0 + 0x50505050ull;  \
    _b1 = _a1 + 0x50505050ull;  \
    _b2 = _a2 + 0x50505050ull;  \
    _b3 = _a3 + 0x50505050ull;  \
    _b0 = ~_b0; \
    _b1 = ~_b1; \
    _b2 = ~_b2; \
    _b3 = ~_b3; \
    _b0 &= 0x80808080ull;   \
    _b1 &= 0x80808080ull;   \
    _b2 &= 0x80808080ull;   \
    _b3 &= 0x80808080ull;   \
    _b0 |= _b1; \
    _b2 |= _b3; \
    _b0 |= _b2; \
    bad |= _b0; \
    \
    _a0 -= 0x30303030ull;   \
    _a1 -= 0x30303030ull;   \
    _a2 -= 0x30303030ull;   \
    _a3 -= 0x30303030ull;   \
    ((u32_t*)(T))[0] = _a0; \
    ((u32_t*)(T))[1] = _a1; \
    ((u32_t*)(T))[2] = _a2; \
    ((u32_t*)(T))[3] = _a3; \
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#define ymi_CVN_strd_to_rawd_u3_Default64(T, bad){   \
    register u64_t _a0, _b0; \
    \
    _a0 = ((const u64_t*)(T))[0];   \
    \
    _b0 = _a0 & 0x8080808080808080ull;  \
    bad |= _b0; \
    \
    _b0 = _a0 + 0x4646464646464646ull;  \
    _b0 &= 0x8080808080808080ull;   \
    bad |= _b0; \
    \
    _b0 = _a0 + 0x5050505050505050ull;  \
    _b0 = ~_b0; \
    _b0 &= 0x8080808080808080ull;   \
    bad |= _b0; \
    \
    _a0 -= 0x3030303030303030ull;   \
    ((u64_t*)(T))[0] = _a0; \
}
#define ymi_CVN_strd_to_rawd_u4_Default64(T, bad){   \
    register u64_t _a0, _b0; \
    register u64_t _a1, _b1; \
    \
    _a0 = ((const u64_t*)(T))[0];   \
    _a1 = ((const u64_t*)(T))[1];   \
    \
    _b0 = _a0 & 0x8080808080808080ull;  \
    _b1 = _a1 & 0x8080808080808080ull;  \
    bad |= _b0; \
    bad |= _b1; \
    \
    _b0 = _a0 + 0x4646464646464646ull;  \
    _b1 = _a1 + 0x4646464646464646ull;  \
    _b0 &= 0x8080808080808080ull;   \
    _b1 &= 0x8080808080808080ull;   \
    bad |= _b0; \
    bad |= _b1; \
    \
    _b0 = _a0 + 0x5050505050505050ull;  \
    _b1 = _a1 + 0x5050505050505050ull;  \
    _b0 = ~_b0; \
    _b1 = ~_b1; \
    _b0 &= 0x8080808080808080ull;   \
    _b1 &= 0x8080808080808080ull;   \
    bad |= _b0; \
    bad |= _b1; \
    \
    _a0 -= 0x3030303030303030ull;   \
    _a1 -= 0x3030303030303030ull;   \
    ((u64_t*)(T))[0] = _a0; \
    ((u64_t*)(T))[1] = _a1; \
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#endif
