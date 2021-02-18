#include <iostream>
#include <FigurePrinter.h>
#include "TrianglePrinter.h"
#include "DiamondPrinter.h"
#include "SquarePrinter.h"

using namespace std;

int main(int argc, char* argv[]) {
    int i = atoi(argv[1]);

    cout << endl;

    FigurePrinter* printer = new TrianglePrinter(i);
    printer->printFigure();

    cout << endl;

    printer =  new DiamondPrinter(i);
    printer->printFigure();

    cout << endl;

    printer =  new SquarePrinter(i);
    printer->printFigure();

    return 0;
}