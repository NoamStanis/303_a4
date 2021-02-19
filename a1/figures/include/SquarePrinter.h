#ifndef A1_FIGURES_SQUAREPRINTER_H
#define A1_FIGURES_SQUAREPRINTER_H

#include "FigurePrinter.h"

class SquarePrinter: public FigurePrinter {
private:
    int n;

public:
    SquarePrinter(int &n0);
    void printFigure();

protected:
    void printSquare();
};


#endif //A1_FIGURES_SQUAREPRINTER_H
