#include "ieee_754.h"

int main(int argc, char const *argv[]) {
    ieee_754_num number;
    number.fl = -10;
    union_cast(number);
    return 0;
}
