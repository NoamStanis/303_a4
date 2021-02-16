//
// Created by Noam Stanislawski on 2/15/21.
//

#include "SimpleDate.h"
#include <iostream>
#include <string>

SimpleDate::SimpleDate(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

std::string SimpleDate::toString() {
    return "This is SimpleDate's toString";
}
