#include "square.h"

void Square::draw() {
    char** const arr = createArr(size, size);

    draftLine(arr, 0, 0, size - 1, 0);
    draftLine(arr, size - 1, 0, size - 1, size - 1);
    draftLine(arr, 0, size - 1, size - 1, size - 1);
    draftLine(arr, 0, 0, 0, size - 1);

    outArr(arr, size, size);
}

void Square::SetSize(int s) {
    size = s;
}
