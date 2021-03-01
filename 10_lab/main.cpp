// Допишите программу, которая печатает абсолютное значение числа, введённого 
// с клавиатуры пользователем.

#include <iostream>

int absolute_value(int x) {
    if (x < 0) {
        x = x * (-1);
    }
    return x;
}

int main() {
    int x;
    std::cout << "Enter the value:";
    std::cin >> x;
    std::cout << "Absolute value of the number: ";
    std::cout << absolute_value(x) << std::endl;
}
