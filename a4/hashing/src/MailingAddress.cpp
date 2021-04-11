//
// Created by Noam Stanislawski on 4/10/21.
//

#include "MailingAddress.h"

#include <utility>

using namespace std;

MailingAddress::MailingAddress(string street, string city, string state, int zip) {
    this->street = street;
    this->city = move(city);
    this->state = move(state);
    this->zipcode = zip;

}

bool MailingAddress::equals(MailingAddress addr) {
    if(addr.street == this->street & addr.city == this->city &&
       addr.state == this->state && addr.zipcode == this->zipcode) {
        return true;
    }
    return false;
}

string MailingAddress::toString() {
    string toReturn = "{" + street + ", " + city + ", " + state + ", " + to_string(zipcode) + "}";

    return toReturn;
}
