#pragma once
#include <stdint.h>

#ifndef RBGOTYPEDEFS
#define RBGOTYPEDEFS	0x0000
#endif

#define	RTDF_Ti8	0x0001
#define	RTDF_Ti16	0x0002
#define	RTDF_Ti		0x0004
#define	RTDF_Ti32	0x0008
#define	RTDF_Ti64	0x0001
#define	RTDF_TfLD	0x2000
#define	RTDF_Tf64	0x4000
#define	RTDF_Tf32	0x8000

#define RTDF(f)			(!!(RBGOTYPEDEFS & (f)))
#define RTDFa2(f,g)		(RTDF(f) && RTDF(g))
#define RTDFa3(f,g,h)	(RTDF(f) && RTDF(g) && RTDF(h))
#define RTDFa4(f,g,h,i)	(RTDF(f) && RTDF(g) && RTDF(h) && RTDF(i))
#define RTDFo2(f,g)		(RTDF(f) || RTDF(g))
#define RTDFo3(f,g,h)	(RTDF(f) || RTDF(g) || RTDF(h))
#define RTDFo4(f,g,h,i)	(RTDF(f) || RTDF(g) || RTDF(h) || RTDF(i))

namespace rbgo {

//==== INTEGER TYPEDEFS ====

#if RBGOTYPEDEFS & RTDF_Ti8
typedef	int8_t			Ti8;
typedef uint8_t			Tu8;
#endif

#if RBGOTYPEDEFS & RTDF_Ti16
typedef int16_t			Ti16;
typedef uint16_t		Tu16;
#endif

#if RBGOTYPEDEFS & RTDF_Ti
typedef int				Ti;
typedef unsigned int	Tu;
#endif

#if RBGOTYPEDEFS & RTDF_Ti32
typedef int32_t			Ti32;
typedef uint32_t		Tu32;
#endif

#if RBGOTYPEDEFS & RTDF_Ti64
typedef int64_t			Ti64;
typedef uint64_t		Tu64;
#endif

//==== FLOATING POINT TYPEDEFS ====

#if RBGOTYPEDEFS & RTDF_TfLD
typedef long double		TfLD;
#endif

#if RBGOTYPEDEFS & RTDF_Tf64
typedef double			Tf64;
#endif

#if RBGOTYPEDEFS & RTDF_Tf32
typedef float			Tf32;
#endif

}//ns
