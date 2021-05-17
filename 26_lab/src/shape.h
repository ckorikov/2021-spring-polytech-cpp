#ifndef INC_26_LAB_SHAPE_H
#define INC_26_LAB_SHAPE_H

#include <iostream>
#include <cmath>

class Shape {
protected:
    virtual void draw() = 0;

    static void LineInArray(char **pShape, int x1, int y1, int x2, int y2);

    static char **createArr(uint32_t height, uint32_t width);

    static void outArr(char **arr, uint32_t height, uint32_t width);
};

#endif //INC_26_LAB_SHAPE_H