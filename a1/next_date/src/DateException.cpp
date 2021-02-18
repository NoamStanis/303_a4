#include <exception>
#include <iostream>
#include "DateException.h"

DateException::DateException(const std::string &message){
    m = message;
}

DateException::DateException() {}

const char *DateException::what() const throw() {
    return m.c_str();
}

