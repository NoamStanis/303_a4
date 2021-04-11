//
// Created by Noam Stanislawski on 4/10/21.
//

#include "MAHashTable.h"

long MAHashTable::hashInt(int i) {
    return 0;
}

long MAHashTable::hashString(string s) {
    return 0;
}

long MAHashTable::hashAddress(MailingAddress addr) {
    return 0;
}

void MAHashTable::insert(MailingAddress addr) {
    hashAddress(addr);
}

bool MAHashTable::contains(MailingAddress addr) {
    return false;
}

float MAHashTable::getLoadFactor() {
    return 0;
}

void MAHashTable::print() {

}
