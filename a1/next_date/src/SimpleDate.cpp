#include <iostream>
#include "../include/SimpleDate.h"
#include <algorithm>


//SimpleDate constructor
SimpleDate::SimpleDate(std::string &date) {
    month = std::stoi(date.substr(0,2));
    day = std::stoi(date.substr(3,2));
    year = std::stoi(date.substr(6,4));
}

SimpleDate::SimpleDate(int &m, int &d, int &y) {
    month = m;
    day = d;
    year = y;
}

/* Method for checking leap year
 * If year is divisible by 100, it is not a leap year.
 * If year is divisble by 4 or 400, it is.
 * Every other year is not a leap year.
*/
bool SimpleDate::leapYearCheck() {
    if(year % 4 == 0){

        if(year % 400 == 0) {
            return true;
        }

        if(year % 100 == 0) {
            return false;
        }

        return true;
    }
    return false;
}


//toString method
std::string SimpleDate::toString() {
    char dateBuffer[11];
    if(month < 10 || day < 10) {
        snprintf(dateBuffer,sizeof(dateBuffer),"%02d/%02d/%d",month,day,year);
    }
    else {
        snprintf(dateBuffer,sizeof(dateBuffer),"%d/%d/%d",month,day,year);
    }
    std::string dateString = dateBuffer;
    return dateString;
}


//returns a new SimpleDate object holding the following day in it.
SimpleDate SimpleDate::nextDate() {
    // local variables for new date
    int m, d, y;
    m = month;
    y = year;
    d = day;

    if(m == 2) {
        //leap year case
        if(leapYearCheck()) {
            if(d < 29) {
                d++;
            }
            else {
                m++;
                d = 1;
            }
        }

        //non leap year
        else {
            if(d < 28) {
                d++;
            }
            else {
                m++;
                d = 1;
            }
        }

        SimpleDate toReturn = SimpleDate(m,d,y);
        return toReturn;
    }

    int months30 [4] = {9,4,6,11};
    int *monthCheck = std::find(std::begin(months30), std::end(months30), month);
    //case: 30 days
    if(monthCheck != std::end(months30)) {
        if(d < 30) {
            d++;
        }
        else {
            m++;
            d = 1;
        }
    }
    // 31 days
    else{
        if(d < 31) {
            d++;
        }
        else {

            // december 31st
            if(m == 12) {
                y++;
                m = 1;
                d = 1;
            }

                //end of other 31 day months
            else {
                m++;
                d = 1;
            }
        }
    }
    SimpleDate toReturn = SimpleDate(m,d,y);
    return toReturn;
}