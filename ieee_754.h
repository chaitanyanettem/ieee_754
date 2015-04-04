#ifndef ieee_754_h
#define ieee_754_h
union ieee_754_num
{
    int integer;
    float fl;
};
#include <iostream>
#include <cmath>
#endif

void union_cast(ieee_754_num number){

	std::cout<<number.integer<<"\n";
	for (int i = 31; i >= 0; i--) {
		if (number.integer & (1<<i))
			std::cout<<1;
		else
			std::cout<<0;
	}
	std::cout<<std::endl;


}