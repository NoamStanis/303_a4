//
// Created by Noam Stanislawski on 2/17/21.
//

#ifndef FIGURES_DIAMONDPRINTER_H
#define FIGURES_DIAMONDPRINTER_H

class DiamondPrinter: public TrianglePrinter {
public:
    int &n;
    DiamondPrinter(int n0);
    void printFigure();

protected:
    void printUpwardTriangle();
};

#endif //FIGURES_DIAMONDPRINTER_H
