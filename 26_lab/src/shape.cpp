#include "shape.h"

void swap(int &x1, int &x2) {
    int temp = x1;
    x1 = x2;
    x2 = temp;
}

void Shape::LineInArray(char **pShape, int x1, int y1, int x2, int y2) {
    bool steep = abs(y2 - y1) > abs(x2 - x1);
    if (steep) {
        swap(x1, y1);
        swap(x2, y2);
    }

    if (x1 > x2) {
        swap(x1, x2);
        swap(y1, y2);
    }

    int dx = x2 - x1;
    int dy = abs(y2 - y1);
    int error = dx / 2;
    int yStep = (y1 < y2) ? 1 : -1;
    int y = y1;
    for (int x = x1; x <= x2; ++x) {
        pShape[steep ? x : y][steep ? y : x] = '*';
        error -= dy;
        if (error < 0) {
            y += yStep;
            error += dx;
        }
    }
}

char **Shape::createArr(uint32_t height, uint32_t width) {
    char **const arr = new char *[height];
    for (int i = 0; i < height; ++i) {
        arr[i] = new char[width];
        for (int g = 0; g < width; ++g) {
            arr[i][g] = ' ';
        }
    }
    return arr;
}

void Shape::outArr(char **arr, uint32_t height, uint32_t width) {
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