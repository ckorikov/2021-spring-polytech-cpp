#include "shape.h"

void Shape::draftLine(char** const pShape, int x1, int y1, int x2, int y2) {
    float a = static_cast<float>((y2 - y1)) / (x2 - x1);
    if (abs(x2 - x1) >= abs(y2 - y1)) {
        for (int i = x1; (x2 > x1) ? (i <= x2) : (i >= x2); (x2 > x1) ? ++i : --i) {
            pShape[static_cast<int>(a * (i - x1)) + y1][i] = '*';
        }
    } else {
        for (int i = y1; (y2 > y1) ? (i <= y2) : (i >= y2); (y2 > y1) ? ++i : --i) {
            pShape[i][static_cast<int>((1 / a) * (i - y1)) + x1] = '*';
        }
    }
}

char **Shape::createArr(int height, int width) {
    char** const arr = new char *[height];
    for (int i = 0; i < height; ++i) {
        arr[i] = new char[width];
        for (int g = 0; g < width; ++g) {
            arr[i][g] = ' ';
        }
    }
    return arr;
}

void Shape::outArr(char **arr, int height, int width) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << arr[i][j] << "  ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < height; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
}
