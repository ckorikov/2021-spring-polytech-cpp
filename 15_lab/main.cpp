// Вывести представление целого десятичного числа N в системе счисления с основанием M. M и N вводятся пользователем с клавиатуры.
// Для примера посмотрите задачу 14

#include <iostream>

int main() {
    int N, M;
    std::cout << "Enter the number" << std::endl;
    std::cin >> N;
    std::cout << "Enter the numeral system base (>0)" << std::endl;
    std::cin >> M;
    if (M == 1) {
        for (int i = 0; i < N; i++) {
            std::cout << 1;
        }
        return 0;
    }
    std::cout << "Inverse number: ";
    while (N > 0) {
        int LastDigit = N % M;
        N /= M;
        if (LastDigit < 10) {
            std::cout << LastDigit;
        } else {
            std::cout << static_cast<char>(LastDigit + 'a' - 10);
        }
    }
    std::cout << std::endl;
    return 0;
}
