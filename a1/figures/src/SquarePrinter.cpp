#include <iostream>
#include "SquarePrinter.h"

SquarePrinter::SquarePrinter(int &n0): FigurePrinter::FigurePrinter(n0) {
    n = n0;
}

void SquarePrinter::printSquare() {
    char star = '*';
    for(int i = 0; i < n; i++) {
        std::cout << std::string(n,star) << std::endl;
    }
}

void SquarePrinter::printFigure() {
    printSquare();
}