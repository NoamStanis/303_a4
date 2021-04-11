//
// Created by Noam Stanislawski on 4/10/21.
//

#ifndef A4_MAHASHTABLE_H
#define A4_MAHASHTABLE_H

#include <vector>
#include <string>
#include "MailingAddress.h"

using namespace std;

class MAHashTable {
private:
    static const int R = 31;

    vector<vector<MailingAddress>> table;

public:
    static const int M = 97;
    int N = 0;
    MAHashTable();

    /*
     * This returns the hash of the integer i using the function h(i) = i % M.
     */
    static long hashInt(int i);

    /*
     *  c_i is the ith character of s
     *  h(c_i) = (R * h(c_i-1) + c_i) % M
     */
    static long hashString(string s);

    /*
     * Computes the hash of a given address object.
     * Uses the hash values
     */
    static long hashAddress( MailingAddress addr);

    void insert(MailingAddress addr);

    bool contains(MailingAddress addr);

    float getLoadFactor();

    void print();
};


#endif //A4_MAHASHTABLE_H
