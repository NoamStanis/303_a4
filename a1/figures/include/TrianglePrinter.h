//
// Created by Noam Stanislawski on 2/17/21.
//

#ifndef FIGURES_TRIANGLEPRINTER_H
#define FIGURES_TRIANGLEPRINTER_H


class TrianglePrinter: public FigurePrinter {
public:
    int &n;
    TrianglePrinter(int n0);

protected:
    void printDownwardTriangle();
};


#endif //FIGURES_TRIANGLEPRINTER_H
