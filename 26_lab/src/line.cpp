#include "line.h"

void Line::draw() {
    int yMax = ((y2 > y1) ? y2 : y1);
    int xMax = ((x2 > x1) ? x2 : x1);
    char **const arr = createArr(yMax + 1, xMax + 1);

    draftLine(arr, x1, y1, x2, y2);

    outArr(arr, yMax + 1, xMax + 1);
}

void Line::SetXY(int x1t, int y1t, int x2t, int y2t) {
    x1 = x1t;
    y1 = y1t;
    x2 = x2t;
    y2 = y2t;
}
