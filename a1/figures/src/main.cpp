#include <iostream>
#include "FigurePrinter.h"
#include "TrianglePrinter.h"

using namespace std;

int main(int argc, char* argv[]) {
    int i = atoi(argv[1]);
    FigurePrinter* printer = new TrianglePrinter(i);
    printer->printFigure();
    return 0;
}