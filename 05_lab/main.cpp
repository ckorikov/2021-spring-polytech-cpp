#include <iostream>

// Найдтие сумму чисел от 1 до N.
// N вводится с клавиатуры. Вывести сумму.

int main() {
    std::cout << "Sum numbers:" << std::endl;
    int n, result = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        result += i;
    }
    std::cout << "Result: " << result;
    return 0;
}
