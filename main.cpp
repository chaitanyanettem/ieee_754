#include "ieee_754.h"

int main(int argc, char const *argv[]) {
    ieee_754_num number;
    number.fl = -100;
    std::string converted = union_cast(number);
    std::cout<<converted<<std::endl;
    return 0;
}
