#pragma once
/*
rbgo-types.h

TODO LIST BEFORE INCLUDING:

(1) Include header of the target platform that defines int8_t...int64_t and their
unsigned versions. Else define these basic typedefs yourself; make sure that the
bit width is according to the bit width in their names.

(2) Define rbgoINTBITS and rbgoFLTBITS to the max bit width available on
choosen target platform/framework.

(3) Examples:
---- platformio.ini ----(a)
platform = linux_x86_64
---- main.cpp
#include <stdint.h>
#define rbgoINTBITS 64
#define rbgoFLTBITS 128
#include <rbgo-types.h>
---

---- platformio.ini ----(b)
platform = espressif32
framework = arduino
---- main.cpp
#include <Arduino.h>
#define rbgoINTBITS 32
#define rbgoFLTBITS 32
#include <rbgo-types.h>
---

(4) Notes:
All rbgotech libraries that rely on this header, will not compile or compile
with error, if the bit width is not sufficient for that library.
*/

namespace rbgo {

typedef	int8_t			Ti8;
typedef uint8_t			Tu8;

typedef int				Ti;
typedef unsigned int	Tu;

#if rbgoINTBITS >= 16
typedef int16_t			Ti16;
typedef uint16_t		Tu16;
#endif

#if rbgoINTBITS >= 32
typedef int32_t			Ti32;
typedef uint32_t		Tu32;
#endif

#if rbgoINTBITS >= 64
typedef int64_t			Ti64;
typedef uint64_t		Tu64;
#endif


#if rbgoFLTBITS >= 32
typedef float			Tf32;
#endif

#if rbgoFLTBITS >= 64
typedef double			Tf64;
#endif

#if rbgoFLTBITS >= 80
typedef long double		TfLD;
#endif

}//ns
