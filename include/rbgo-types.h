#pragma once
#include <stdint.h>

#ifndef RBGOTYPEDEFS
#define RBGOTYPEDEFS	0x0000
#endif

namespace rbgo {

//==== INTEGER TYPEDEFS ====

#if RBGOTYPEDEFS & 0x0001
typedef	int8_t			Ti8;
typedef uint8_t			Tu8;
#endif

#if RBGOTYPEDEFS & 0x0002
typedef int16_t			Ti16;
typedef uint16_t		Tu16;
#endif

#if RBGOTYPEDEFS & 0x0004
typedef int				Ti;
typedef unsigned int	Tu;
#endif

#if RBGOTYPEDEFS & 0x0008
typedef int32_t			Ti32;
typedef uint32_t		Tu32;
#endif

#if RBGOTYPEDEFS & 0x0010
typedef int64_t			Ti64;
typedef uint64_t		Tu64;
#endif

//==== FLOATING POINT TYPEDEFS ====

#if RBGOTYPEDEFS & 0x2000
typedef long double		TfLD;
#endif

#if RBGOTYPEDEFS & 0x4000
typedef double			Tf64;
#endif

#if RBGOTYPEDEFS & 0x8000
typedef float			Tf32;
#endif

}//ns
