#include "DiamondPrinter.h"

DiamondPrinter::DiamondPrinter(int n0) {
    &n = n0;
}

void DiamondPrinter::printFigure() {
    printUpwardTriangle();
    printDownwardtTriangle();
}

void DiamondPrinter::printUpwardTriangle() {
    int rows = ceil(n/2);

    int k = n % 2;
    if(k == 0)
        k = 2;

    char star  = '*';
    char space =  ' ';

    for(int i = rows; i >= 0; i--) {
        std::cout << std::string(i,space);
        std::cout << std::string(k,star) << endl;
        k += 2;
    }
}