#include <iostream>
#include "SimpleDate.h"
#include "DateException.h"
#include <algorithm>
#include <string>

std::string date;

void validateInput(SimpleDate &sd) {
    DateException e;
    int month = stoi(date.substr(0,2));
    int day = stoi(date.substr(3,2));
    int year = stoi(date.substr(6,4));

    bool isLeapYear = sd.leapYearCheck();
    if(isLeapYear) {
        if(month == 2 && day > 29) {
            e = DateException("Invalid leap year date");
            throw e;
        }
    }

    else if(month == 2 && day > 28) {
        e = DateException("Invalid February date");
        throw e;

    }

    if(year < 1812 || year > 2030) {
        e = DateException("Invalid Year");
        throw e;
    }

    if(month < 1 || month > 12) {
        e = DateException("Invalid Month");
        throw e;
    }

    int months30 [4] = {9,4,6,11};
    int *monthCheck = std::find(std::begin(months30),std::end(months30), month);
    if(monthCheck != std::end(months30)) {
        if(day < 1 || day > 30) {
            e = DateException("Invalid Day");
            throw e;
        }
    }
    //31 days
    else {
        if(day < 1 || day > 31) {
            e = DateException("Invalid Day");
            throw e;
        }
    }

}

int main(int argc, char *argv[]) {
    date = argv[1];
    SimpleDate sd = SimpleDate(date);
    validateInput(sd);
    SimpleDate nd =  sd.nextDate();
    std::cout << nd.toString() << std::endl;
    return 0;
}