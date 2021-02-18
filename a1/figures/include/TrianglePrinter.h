#ifndef FIGURES_TRIANGLEPRINTER_H
#define FIGURES_TRIANGLEPRINTER_H

#include "FigurePrinter.h"

class TrianglePrinter: public FigurePrinter {
public:
    TrianglePrinter(int n0);
    int n;
    void printFigure();

protected:
    void printDownwardTriangle();
};


#endif //FIGURES_TRIANGLEPRINTER_H
