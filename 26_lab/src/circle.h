#ifndef INC_26_LAB_CIRCLE_H
#define INC_26_LAB_CIRCLE_H

#include "shape.h"

class Circle : public Shape {
    float radius;
public:
    explicit Circle(float r) : radius(r) {}

    void draw() override;

    void SetRadius(float r);
};

#endif //INC_26_LAB_CIRCLE_H