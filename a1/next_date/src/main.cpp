#include <iostream>
#include "SimpleDate.h"
#include "DateException.h"

using namespace std;

string date;

void validateInput() {
    int month = std::stoi(date.substr(0,2));
    int day = std::stoi(date.substr(3,2));
    int year = std::stoi(date.substr(6,4));

    if(year < 1812 || year > 2030) {
        DateException e = DateException();
        throw e;
        }
    }

int main(int argc, char *argv[]) {
    date = argv[1];
    validateInput();
    SimpleDate sd = SimpleDate(date);
    cout << sd.toString() << endl;
    return 0;
}