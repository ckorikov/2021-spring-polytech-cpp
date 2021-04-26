#include "rectangle.h"

void Rectangle::draw() {
    if (!height && !width)
        std::cout << ' ' << std::endl;
    else {
        char **const arr = createArr(height, width);

        LineInArray(arr, 0, 0, width - 1, 0);
        LineInArray(arr, width - 1, 0, width - 1, height - 1);
        LineInArray(arr, 0, height - 1, width - 1, height - 1);
        LineInArray(arr, 0, 0, 0, height - 1);

        outArr(arr, height, width);
    }
}

void Rectangle::SetSize(uint32_t w, uint32_t h) {
    width = w;
    height = h;
}
