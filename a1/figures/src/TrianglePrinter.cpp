#include <math.h>
#include "TrianglePrinter.h"


TrianglePrinter::TrianglePrinter(int n0) {
    &n = n0;
}
void TrianglePrinter::printFigure() {
    printDownwardTriangle();
}
void TrianglePrinter::printDownwardTriangle() {
    int rows = ceil(n/2);
    char star  = '*';
    char space =  ' ';
    for(int i = 0; i <= rows; i++) {
        std::cout << std::string(i,space);
        std::cout << std::string(n,star) << endl;
        n -= 2;
    }

}

