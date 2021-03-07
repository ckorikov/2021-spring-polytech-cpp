// Допишите программу, которая вычисляет расстояние Хэмминга бинарных представлений двух целых положительных чисел. 

#include <iostream>

int hamming(int m, int n) {
    int size, difference = 0;
    size = sizeof(m) * 8;
    for (int i = 0; i < size; i++) {
        int bit_m = m % 2;
        int bit_n = n % 2;
        if (bit_n != bit_m) {
            if (m != 0 || n != 0) {
                difference = difference + 1;
            }
        }
        m = m / 2;
        n = n / 2;
    }
    return difference;
}

int main() {
    std::cout << "Result: ";
    std::cout << hamming(45, 1567) << std::endl;
    return 0;
}
