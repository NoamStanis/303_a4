#ifndef FIGURES_DIAMONDPRINTER_H
#define FIGURES_DIAMONDPRINTER_H

#include "TrianglePrinter.h"

class DiamondPrinter: public TrianglePrinter {
private:
    int n;

public:
    DiamondPrinter(int &n0);
    void printFigure();

protected:
    void printUpwardTriangle();
};

#endif //FIGURES_DIAMONDPRINTER_H
