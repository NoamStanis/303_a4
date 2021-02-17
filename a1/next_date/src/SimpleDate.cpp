#include "include/SimpleDate.h"
#include <iostream>
#include <string>

SimpleDate::SimpleDate(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

std::string SimpleDate::toString() {
    return "mm/dd/yyyy";
}

SimpleDate SimpleDate::nextDate() {
    SimpleDate toReturn(0,0,0);
    return toReturn;
}