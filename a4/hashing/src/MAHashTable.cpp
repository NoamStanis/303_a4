//
// Created by Noam Stanislawski on 4/10/21.
//

#include <iostream>
#include "MAHashTable.h"

MAHashTable::MAHashTable() {

    vector<MailingAddress> null_vector(1);
    table.assign(97, null_vector);
}

 long MAHashTable::hashInt(int i) {
    long hash = i % M;
    return hash;
}

long MAHashTable::hashString(string s) {
    long hash = 0;
    for (char c : s) {
        hash =  (R * hash + c) % M;
    }

    return hash;
}

long MAHashTable::hashAddress(MailingAddress addr) {
    long streetHash,cityHash,stateHash,zipHash;
    long hash = 0;

    streetHash = hashString(addr.street);
    cityHash = hashString(addr.city);
    stateHash = hashString(addr.state);
    zipHash = hashInt(addr.zipcode);

    hash = (((((streetHash * R + cityHash) % M) * R + stateHash) %M) * R + zipHash) % M;

    return hash;
}

void MAHashTable::insert(MailingAddress addr) {
    long index = hashAddress(addr);
    table.at(index).push_back(addr);
    N++;

}

bool MAHashTable::contains(MailingAddress addr) {
    int i,j;
    for(i = 0; i < table.size(); i++) {
        for(j = 0; j < table.at(i).size(); j++) {
            if(table.at(i).at(j).equals(addr)) {
                return true;
            }
        }
    }
    return false;
}

float MAHashTable::getLoadFactor() {
    float lf = (float)N / (float)M;
    return lf;
}

void MAHashTable::print() {
    int i,j;
    for(i = 0; i < table.size(); i++) {
        cout << i << "->" << "[";
        for(j = 0; j < table.at(i).size(); j++) {
            if(table.at(i).size() == 1 && table.at(i).at(j).toString() == "{, , , 0}") { //empty vector
                cout << "]" << endl;
            }

            else {

                if(j == table.at(i).size() - 1) {
                    cout << table.at(i).at(j).toString() << "]" << endl;
                }

                else {
                    if(table.at(i).at(j).toString() == "{, , , 0}") {
                        continue;
                    }
                    cout << table.at(i).at(j).toString() << "; ";
                }
            }

        }
    }

}


