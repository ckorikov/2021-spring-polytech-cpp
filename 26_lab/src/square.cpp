#include "square.h"

void Square::draw() {
    if (!size)
        std::cout << ' ' << std::endl;
    else {
        char **const arr = createArr(size, size);

        LineInArray(arr, 0, 0, size - 1, 0);
        LineInArray(arr, size - 1, 0, size - 1, size - 1);
        LineInArray(arr, 0, size - 1, size - 1, size - 1);
        LineInArray(arr, 0, 0, 0, size - 1);

        outArr(arr, size, size);
    }
}

void Square::SetSize(uint32_t s) {
    size = s;
}
