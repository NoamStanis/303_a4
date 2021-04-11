//
// Created by Noam Stanislawski on 4/10/21.
//

#ifndef A4_MAILINGADDRESS_H
#define A4_MAILINGADDRESS_H

#include <string>

/*
 * An address object used in the hash table.
 */
class MailingAddress {
public:
    std::string street,city,state;
    int zipcode{};

    /*
     * Null constructor.
     */
    MailingAddress();

    /*
     * Constructor method.
     */
    explicit MailingAddress(std::string street, std::string city, std::string state, int zip);

    /*
     * Returns true if addr is the exact same address as the current address, otherwise, it returns false.
     */
    bool equals(MailingAddress addr);

    /*
     * Returns string of the address in the following format:
     *  {street, city, state, zipcode}
     */
    std::string toString();
};




#endif //A4_MAILINGADDRESS_H
