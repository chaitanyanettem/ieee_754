#ifndef ieee_754_h
#define ieee_754_h
union ieee_754_num
{
    int integer;
    float fl;
};
#include <string>
#include <iostream>
#include <cmath>
#include <sstream>
#endif

std::string union_cast(ieee_754_num number) {
	std::ostringstream converted_stream;
	std::cout<<"Value of int in union = "<<number.integer<<"\n";
	for (int i = 31; i >= 0; i--) {
		std::cout<<(number.integer&(1<<i))<<"\n";
		if (number.integer & (1<<i))
			converted_stream<<1;
		else
			converted_stream<<0;
	}
	return converted_stream.str();
}

void frexp_convert(ieee_754_num) {

}