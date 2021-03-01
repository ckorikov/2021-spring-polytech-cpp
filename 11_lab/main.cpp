// Напишите прогамму, которая экспериментально определяет максимальное и
// минимальное значения, которые можно записать в переменную типа int. 

#include <iostream>

int main() {
    int max_int = 0;
    int i;
    for (i = 1; i > max_int; i++) {
        max_int += 1;
    }
    std::cout << "Value of the max int: " << max_int << std::endl;
    std::cout << "Value of the min int: " << max_int + 1 << std::endl;
}
