#include "converter.h"

int Converter::yearToCentury(int year) {
    //2000 - 20 century, 2001 - 21 century
    return (year-1)/100 + 1;
}
