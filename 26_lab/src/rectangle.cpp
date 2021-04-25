#include "rectangle.h"

void Rectangle::draw() {
    char** const arr = createArr(height, width);

    draftLine(arr, 0, 0, width - 1, 0);
    draftLine(arr, width - 1, 0, width - 1, height - 1);
    draftLine(arr, 0, height - 1, width - 1, height - 1);
    draftLine(arr, 0, 0, 0, height - 1);

    outArr(arr, height, width);
}

void Rectangle::SetSize(int w, int h) {
    width = w;
    height = h;
}
