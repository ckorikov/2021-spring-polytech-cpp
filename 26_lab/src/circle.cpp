#include "circle.h"

void Circle::draw() {
    char **const arr = createArr(2 * radius + 1, 2 * radius + 1);

//    for (int x = 0; x <= 2 * radius; ++x) {
//        float y = sqrt(radius * radius - ((x - radius) * (x - radius)));
//        draftLine(arr, radius, radius, x, radius - y);
//        draftLine(arr, radius, radius, x, radius + y);
//    }

    for (int i = 0; i <= 2 * radius; ++i) {
        for (int j = 0; j <= 2 * radius; ++j) {
            float x = std::abs(radius - j);
            float y = std::abs(radius - i);
            if (radius * radius >= (x * x + y * y)) {
                arr[i][j] = '*';
            }
        }
    }

    outArr(arr,2 * radius + 1, 2 * radius + 1);
}

void Circle::SetRadius(float r) {
    radius = r;
}
