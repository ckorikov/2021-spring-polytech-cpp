#ifndef INC_26_LAB_RECTANGLE_H
#define INC_26_LAB_RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
    uint32_t width;
    uint32_t height;
public:
    Rectangle(uint32_t width, uint32_t height) : width(width), height(height) {}

    void draw() override;

    void SetSize(uint32_t w, uint32_t h);
};

#endif //INC_26_LAB_RECTANGLE_H
