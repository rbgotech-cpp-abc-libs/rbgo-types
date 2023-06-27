#pragma once

#include <stdlib.h> //Rnd(srand,rand)
#include <time.h>	//Rnd(time)

namespace rbgo {

typedef	char					Ti8;
typedef short					Ti16;
typedef int						Ti0;
typedef long					Ti32;
typedef long long				Ti64;
typedef unsigned char			Tu8;
typedef unsigned short			Tu16;
typedef unsigned int			Tu0;
typedef unsigned long			Tu32;
typedef unsigned long long		Tu64;
typedef float					Tf32;
typedef double					Tf64;
typedef long double				Tf96;


class Rnd {
	Tu32 mn, mx;
	Tu8 p256;
	Tu32 r10th, ri;
public:
	Rnd(Tu32 mn, Tu32 mx);
	void altmn(Tu32 mn);
	void altmx(Tu32 mx);
	Tu32 get();
private:
	Tu32 gen();
};

}//ns