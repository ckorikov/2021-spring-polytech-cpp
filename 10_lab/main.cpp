// Допишите программу, которая печатает абсолютное значение числа, введённого 
// с клавиатуры пользователем.

#include <iostream>
int absolute_value(x){
    if (x < 0) 
        x = -x;
    return x;
}    
int main() {
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << absolute_value(x) << std::endl;
    
}
