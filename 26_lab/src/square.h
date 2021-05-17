#ifndef INC_26_LAB_SQUARE_H
#define INC_26_LAB_SQUARE_H

#include "shape.h"

class Square : public Shape {
    uint32_t size;
public:
    explicit Square(uint32_t s) : size(s) {}

    void draw() override;

    void SetSize(uint32_t s);
};

#endif //INC_26_LAB_SQUARE_H
