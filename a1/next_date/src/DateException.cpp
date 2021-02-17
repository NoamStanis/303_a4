#include <exception>
#include "DateException.h"

DateException::DateException() { }
const char *DateException::what() const throw() {
    return "THIS IS DATE EXCEPTION";
}

