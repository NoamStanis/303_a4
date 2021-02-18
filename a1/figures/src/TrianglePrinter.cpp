#include <iostream>
#include <math.h>
#include "TrianglePrinter.h"

using namespace std;

TrianglePrinter::TrianglePrinter(int n0): FigurePrinter::FigurePrinter(n0) {
    n = n0;
}
void TrianglePrinter::printDownwardTriangle() {
    int rows = ceil(n / 2);
    char star = '*';
    char space = ' ';
    for (int i = 0; i <= rows; i++) {
        std::cout << std::string(i, space);
        std::cout << std::string(n, star) << std::endl;
        n -= 2;
    }
}

void TrianglePrinter::printFigure() {
    printDownwardTriangle();
}


