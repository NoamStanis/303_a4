#ifndef FIGURES_FIGUREPRINTER_H
#define FIGURES_FIGUREPRINTER_H


class FigurePrinter {
private:
    int n;

public:
    FigurePrinter(int &n0);
    virtual void printFigure();
};


#endif //FIGURES_FIGUREPRINTER_H
