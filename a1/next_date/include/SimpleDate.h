
#ifndef REPO_NCSTANISLAWSKI_SIMPLEDATE_H
#define REPO_NCSTANISLAWSKI_SIMPLEDATE_H


#include <string>

class SimpleDate {
private:
    int month;
    int day;
    int year;

public:
    SimpleDate(std::string date);
    std::string toString();

    SimpleDate nextDate();

};


#endif //REPO_NCSTANISLAWSKI_SIMPLEDATE_H
