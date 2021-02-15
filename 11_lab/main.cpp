// Напишите прогамму, которая экспериментально определяет максимальное и
// минимальное значения, которые можно записать в переменную типа int. 

#include <iostream>
int main() {
    // Решение тут
    int i;
    int j;
    i = 1;
    j = -1;
    while (i > 0)
        i = i+1;
    while (j < 0)
        j = j - 1;
    std::cout << i << std::endl;
    std::cout << j << std::endl;

    return(0);
}
