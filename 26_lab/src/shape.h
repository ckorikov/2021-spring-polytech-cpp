#ifndef INC_26_LAB_SHAPE_H
#define INC_26_LAB_SHAPE_H

#include <iostream>
#include <cmath>

class Shape {
protected:
    virtual void draw() = 0;

    static void draftLine(char**  pShape, int x1, int y1, int x2, int y2);

    static char** createArr(int height, int width);

    static void outArr(char** arr, int height, int width);
};

#endif //INC_26_LAB_SHAPE_H