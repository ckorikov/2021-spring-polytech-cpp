#ifndef INC_26_LAB_LINE_H
#define INC_26_LAB_LINE_H

#include "shape.h"

class Line : public Shape {
    int x1, y1, x2, y2;
public:
    Line(int x1t, int y1t, int x2t, int y2t) : x1(x1t), y1(y1t), x2(x2t), y2(y2t) {}

    void draw() override;

    void SetXY(int x1t, int y1t, int x2t, int y2t);
};

#endif //INC_26_LAB_LINE_H
