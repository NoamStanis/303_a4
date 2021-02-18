#ifndef A1_FIGURES_SQUAREPRINTER_H
#define A1_FIGURES_SQUAREPRINTER_H

#include "FigurePrinter.h"

class SquarePrinter: public FigurePrinter {
public:
    SquarePrinter(int n0);
    int n;
    void printFigure();

protected:
    void printSquare();
};


#endif //A1_FIGURES_SQUAREPRINTER_H
