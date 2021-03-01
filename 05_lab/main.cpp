#include <iostream>

// Найдтие сумму чисел от 1 до N.
// N вводится с клавиатуры. Вывести сумму.

int main() {
    int N, sum = 0, i;
    std::cout << "Enter the number:";
    std::cin >> N;
    for (i = 1; i <= N; i++) {
        sum = sum + i;
    }
    std::cout << "Result: " << sum << std::endl;
    return 0;
}
