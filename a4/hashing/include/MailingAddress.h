//
// Created by Noam Stanislawski on 4/10/21.
//

#ifndef A4_MAILINGADDRESS_H
#define A4_MAILINGADDRESS_H

#include <string>

class MailingAddress {
public:
    std::string street,city,state;
    int zipcode{};

    /*
     * Returns true if addr is the exact same address as the current address, otherwise, it returns false.
     */
    explicit MailingAddress(std::string street, std::string city, std::string state, int zip);

    bool equals(MailingAddress addr);

    std::string toString();
};




#endif //A4_MAILINGADDRESS_H
