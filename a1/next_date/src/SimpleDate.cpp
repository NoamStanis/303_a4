#include <iostream>
#include "../include/SimpleDate.h"

//SimpleDate constructor
SimpleDate::SimpleDate(std::string date) {
    month = std::stoi(date.substr(0,2));
    day = std::stoi(date.substr(3,2));
    year = std::stoi(date.substr(6,4));
}

//toString method
std::string SimpleDate::toString() {
//    char dateBuffer[11];
//    if(month < 10 || day < 10) {
//        snprintf(dateBuffer,sizeof(dateBuffer),"%02d/%02d/%d",month,day,year);
//    }
//    else {
//        snprintf(dateBuffer,sizeof(dateBuffer),"%d/%d/%d",month,day,year);
//    }
//    std::string dateString = dateBuffer;
//    return dateString;
        return "Hello";
}

SimpleDate SimpleDate::nextDate() {
    SimpleDate toReturn("02/24/1968");
    return toReturn;
}