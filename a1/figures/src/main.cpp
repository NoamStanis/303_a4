#include <iostream>
#include "FigurePrinter.h"
#include "TrianglePrinter.h"

int main(int argc, char *argv[]) {
    FigurePrinter* printer = new TrianglePrinter(5);
    printer->printFigure();
    return 0;
}