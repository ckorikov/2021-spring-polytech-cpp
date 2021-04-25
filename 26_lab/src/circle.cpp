#include "circle.h"

void Circle::draw() {
    char **const arr = createArr(2 * radius, 2 * radius);

    for (int i = 0; i < 2 * radius; ++i) {
        for (int j = 0; j < 2 * radius; ++j) {
            float x = std::abs(radius - 0.5 - j);
            float y = std::abs(radius - 0.5 - i);
            if ((radius - 0.5) * (radius - 0.5) >= (x * x + y * y)) {
                arr[i][j] = '*';
            }
        }
    }
    outArr(arr,2 * radius, 2 * radius);
}

void Circle::SetRadius(float r) {
    radius = r;
}
