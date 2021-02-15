// Допишите программу, которая печатает абсолютное значение числа, введённого 
// с клавиатуры пользователем.

#include <iostream>

int main() {
    std::cout << "Enter a number: ";
    int a;
    std::cin >> a;
    int absolute_value;

    if (a >= 0)
        absolute_value = a;
    else
        absolute_value = -a;

    std::cout << absolute_value << std::endl;
    return(0);
}
