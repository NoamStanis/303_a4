#include <iostream>
#include <fstream>
#include "MAHashTable.h"

using namespace std;

int main(int argc, char *argv[]) {
    string line,street,city,state;
    string delimiter = ",";
    int zip;
    ifstream addresses (argv[1]);

    auto *table = new MAHashTable();

    if (addresses.is_open()) {
        while (getline(addresses, line) ) {
            street = line.substr(0,line.find(delimiter));
            line.erase(0, line.find(delimiter) + delimiter.length());

            city = line.substr(0,line.find(delimiter));
            line.erase(0, line.find(delimiter) + delimiter.length());

            state = line.substr(0,line.find(delimiter));
            line.erase(0, line.find(delimiter) + delimiter.length());

            zip = stoi(line.substr(0,line.find(delimiter)));

            auto *new_address = new MailingAddress(street, city, state, zip);

            table->insert(*new_address);
        }
        addresses.close();
    }

    table->print();
    cout  << "\nLoad factor: " << table->getLoadFactor() << endl;

    auto *comparisonAddress = new MailingAddress("450 Highland Ave","Salem","MA",1970);
    cout << "First comparison address check: " <<table->contains(*comparisonAddress) << endl;

    comparisonAddress->street = "450 Highland Avenue";
    cout << "Second comparison address check:" << table->contains(*comparisonAddress) << endl;

    return 0;
}

