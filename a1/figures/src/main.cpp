#include <iostream>
#include <FigurePrinter.h>
#include "TrianglePrinter.h"
#include "DiamondPrinter.h"
#include "SquarePrinter.h"

using namespace std;

int main(int argc, char* argv[]) {
    int i = atoi(argv[1]);

    cout << "The triangle:" << endl;

    FigurePrinter* printer = new TrianglePrinter(i);
    printer->printFigure();

    cout << "The diamond:" << endl;

    printer =  new DiamondPrinter(i);
    printer->printFigure();

    cout << "The square:" << endl;

    printer =  new SquarePrinter(i);
    printer->printFigure();

    delete printer;
    return 0;
}