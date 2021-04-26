#include "circle.h"

void Circle::draw() {
    if (!static_cast<int>(radius))
        std::cout << ' ' << std::endl;
    else {
        const float diameter = 2 * radius;
        const float correctRadius = radius - static_cast<float>(0.5);

        char **const arr = createArr(diameter, diameter);

        for (int i = 0; i < diameter; ++i) {
            for (int j = 0; j < diameter; ++j) {
                float x = std::abs(correctRadius - j);
                float y = std::abs(correctRadius - i);
                if (correctRadius * correctRadius >= (x * x + y * y)) {
                    arr[i][j] = '*';
                }
            }
        }
        outArr(arr, diameter, diameter);
    }

}

void Circle::SetRadius(float r) {
    radius = r;
}
