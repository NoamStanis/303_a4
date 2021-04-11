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
    static const int M = 97;
    static const int R = 31;

    vector<vector<MailingAddress>> table;

public:
    static long hashInt(int i);
    static long hashString(string s);
    static long hashAddress( MailingAddress addr);

    void insert(MailingAddress addr);

    bool contains(MailingAddress addr);

    float getLoadFactor();

    void print();
};


#endif //A4_MAHASHTABLE_H
