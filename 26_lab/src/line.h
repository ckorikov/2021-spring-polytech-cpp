#ifndef INC_26_LAB_LINE_H
#define INC_26_LAB_LINE_H

#include "shape.h"

class Line : public Shape {
    uint32_t x1, y1, x2, y2;
public:
    Line(uint32_t x1t, uint32_t y1t, uint32_t x2t, uint32_t y2t) : x1(x1t), y1(y1t), x2(x2t), y2(y2t) {}

    void draw() override;

    void SetXY(uint32_t x1t, uint32_t y1t, uint32_t x2t, uint32_t y2t);
};

#endif //INC_26_LAB_LINE_H
