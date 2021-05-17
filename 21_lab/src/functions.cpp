#include "functions.h"

// Реализации функций тут
int Max_number(int number[], int length) {
    int max = number[0];
    for (int index = 0; index < length; index++) {
        if (number[index] > max) max = number[index];
    }
    return max;
}

int Min_number(int number[], int length) {
    int min = number[0];
    for (int index = 0; index < length; index++) {
        if (number[index] < min) min = number[index];
    }
    return min;
}

int Number_repetition(int number[], int length, int target) {
    int repetition{0};
    for (int index = 0; index < length; index++) {
        if (target == number[index]) repetition++;
    }
    return repetition;
}