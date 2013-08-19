/*
 * Copyright 2013 Jung-Sang Ahn <jungsang.ahn@gmail.com>.
 * All Rights Reserved.
 */

#ifndef _JSAHN_COMMON_H
#define _JSAHN_COMMON_H

#include <stdlib.h>
#include <stdint.h>
#include <assert.h>

#include "option.h"
#include "arch.h"
#include "debug.h"
#include "bitwise_utils.h"
#include "time_utils.h"

#ifndef _MEMPOOL
    #define mempool_alloc malloc
    #define mempool_free free
#endif


#define seq_memcpy(dest, src, size, offset_var) \
    memcpy(dest, src, size); \
    offset_var += size

typedef uint64_t bid_t;
#define BLK_NOT_FOUND (0xffffffffffffffff)

#define BLK_MARKER_BNODE (0xff)
#define BLK_MARKER_DBHEADER (0xee)
#define BLK_MARKER_DOC (0xdd)
#define BLK_MARKER_SIZE (1)

#define randomize() srand((unsigned)time(NULL))
#define random(num) ((rand())%(num))

#define random_custom(prev, num) (prev) = ((prev)+811)&((num)-1)

#endif
