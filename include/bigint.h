#include "config.h"

#ifndef _BIGINT_H_
#define _BIGINT_H_

#define WORD_BITLEN 32

#if WORD_BITLEN == 8
typedef w8      word;
#elif WORD_BITLEN == 32
typedef w32     word;
#else
typedef w64     word;
#endif

typedef struct {
    int wordlen;    // wordlen >= 0
    int sign;       
    word* array;
} bigint;

#define MAXIMUM(x1, x2) ((x1) > (x2) ? (x1) : (x2))
#define MINIMUM(x1, x2) ((x1) < (x2) ? (x1) : (x2))

#endif  // _Bigint_h_