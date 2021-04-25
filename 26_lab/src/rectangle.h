#ifndef INC_26_LAB_RECTANGLE_H
#define INC_26_LAB_RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
    int width;
    int height;
public:
    Rectangle(int width, int height): width(width), height(height) {}

    void draw() override;

    void SetSize(int w, int h);
};

#endif //INC_26_LAB_RECTANGLE_H
