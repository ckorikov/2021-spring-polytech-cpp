#ifndef INC_26_LAB_SQUARE_H
#define INC_26_LAB_SQUARE_H

#include "shape.h"

class Square : public Shape {
    int size;
public:
    Square(int s): size(s) {}

    void draw() override;

    void SetSize(int s);
};

#endif //INC_26_LAB_SQUARE_H
