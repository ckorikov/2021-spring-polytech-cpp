#include "line.h"

void Line::draw() {
    uint32_t yMax = ((y2 > y1) ? y2 : y1);
    uint32_t xMax = ((x2 > x1) ? x2 : x1);
    char **const arr = createArr(yMax + 1, xMax + 1);

    LineInArray(arr, x1, y1, x2, y2);

    outArr(arr, yMax + 1, xMax + 1);
}

void Line::SetXY(uint32_t x1t, uint32_t y1t, uint32_t x2t, uint32_t y2t) {
    x1 = x1t;
    y1 = y1t;
    x2 = x2t;
    y2 = y2t;
}
