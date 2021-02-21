// Вывести бинарное представление целого числа

#include <iostream>

int main() {
    int x{87}; // 101 0111
    int binary{0};
    int mul{1};

    int size = sizeof(x)*8;

    for(int i=0; i<size; ++i)
    {
        int bit =  x % 2;
        x = x/2;

        binary = binary + bit*mul;
        mul = mul * 10;
    }

    std::cout << binary << std::endl;

    return 0;
}
