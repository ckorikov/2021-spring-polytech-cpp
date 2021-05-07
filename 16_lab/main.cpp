// Допишите программу, которая вычисляет расстояние Хэмминга бинарных представлений двух целых положительных чисел. 

#include <iostream>
int hamming(int x, int y) {
    int hamming{0};
    int size = sizeof(x)*8;
    for(int i=0; i<size; ++i)
    {
        int bitx=x%2;
        int bity=y%2;
        x=x/2;
        y=y/2;
        if (bitx!=bity)
            hamming++;
    }
    return hamming;
}
int main() {
    std::cout << hamming(7, 3) << std::endl;
    return 0;
}
