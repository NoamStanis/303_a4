//
// Created by Noam Stanislawski on 4/10/21.
//

#include <iostream>
#include "MAHashTable.h"

MAHashTable::MAHashTable() {

    vector<MailingAddress> null_vector(0);
    table.assign(97, null_vector); //fill up with empty vectors
}

 long MAHashTable::hashInt(int i) {
    long hash = i % M;
    return hash;
}

long MAHashTable::hashString(string s) {
    long hash = 0;
    for (char c : s) {
        hash =  (R * hash + c) % M; //equation taken from slides
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

    // modified equation from the slides
    hash = (((((streetHash * R + cityHash) % M) * R + stateHash) %M) * R + zipHash) % M;

    return hash;
}

void MAHashTable::insert(MailingAddress addr) {
    long index = hashAddress(addr);
    table.at(index).push_back(addr); //pushing at the back for separate chaining via vector
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
    float lf = (float)N/ (float)M;
    return lf;
}

void MAHashTable::print() {
    int i,j,k; //i and j are iterators, k stores the size of each index (for separate chaining)
    string s;
    for(i = 0; i < table.size(); i++) {
        cout << i << "->" << "[";

        k = table.at(i).size();
        if(k == 0) { //empty index
            cout << "]" << endl;
            continue;
        }
        else if (k == 1) { //a single value at this index
            cout << table.at(i).at(0).toString() << "]" << endl;
        }

        else { //separate chaining of values occures here
            for(j = 0; j < k; j++) {
                if(j == k-1) {
                    cout << table.at(i).at(j).toString() << "]" << endl;
                }
                else {
                    cout << table.at(i).at(j).toString() << "; ";
                }
            }
        }


        }
    }



