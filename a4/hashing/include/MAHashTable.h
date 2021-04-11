/*
 * Noam Stanislawski
 * CSCI 303: Algorithms
 * 4/10/2021
 */

#ifndef A4_MAHASHTABLE_H
#define A4_MAHASHTABLE_H

#include <vector>
#include <string>
#include "MailingAddress.h"

using namespace std;

class MAHashTable {
private:
    static const int R = 31;
    static const int M = 97; //size of the hash table (vector)
    int N = 0; // number of values stored, used for load factor calculation

    vector<vector<MailingAddress>> table;

public:

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

    /*
     * Computes the correct hash value via hashAddress(),
     * Then stores the addr at said value.
     */
    void insert(MailingAddress addr);

    /*
     * Uses a nested loop to check if the value is within the table
     * Returns true or false values (0 or 1 respectively) depending on if
     * the address is found.
     */
    bool contains(MailingAddress addr);

    /*
     * Computes the load factor: N/M
     * Returns the value as a float.
     */
    float getLoadFactor();

    /*
     * Prints the values within the hash table.
     *
     */
    void print();
};


#endif //A4_MAHASHTABLE_H
