#include <rbgo-types.h>

namespace rbgo {

Rnd::Rnd(Tu32 _mn, Tu32 _mx){

	mn = _mn;
	mx = _mx;

	Tu32 rng = mx - mn;

	//8 | 16 | 24 | 32 bits range
	p256 = (rng < 256) ? 1 : (
		(rng < 65535) ? 2 : (
		(rng < 16777216) ? 3 : (
	/*(rng < 4294967296)*/ 4)));


	r10th = rng / 10;
	ri = 0;

	srand(time(0));
}

Tu32 Rnd::get(){
	return gen() % (mx - mn + 1) + mn;
}

Tu32 Rnd::gen(){

	Tu32 g, i=1;

	//(to prevent 1 on 256 chance all get zeroed out no mather what range...)
	//every 10th the range
	if(ri == r10th){
		//one 10th chance on 0; fabricated but still random enough
		g = rand() % 10;//0...9
		ri = 0;
	}else{
		//usual proc
		g = rand() % 256 + 1;//1...256
		ri++;
	}

	while(i < p256){
		g *= rand() % 256 + 1;
		i++;
	}

	return (g) ? g - 1 : 0;
}

}//ns
