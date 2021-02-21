// Напишите программу, демонстрирующую, что размер беззнакового целого числа и
// обычного целого числа одинаков и что размер их обоих не превышает размер длинного целого числа.

#include <iostream>

int main() {
    std::cout << "Size of int = " << sizeof(int) << std::endl;
    std::cout << "Size of unsigned int = " << sizeof(unsigned int) << std::endl;
    std::cout << "Size of long int = " << sizeof(long int) << std::endl;
    return 0;
}
