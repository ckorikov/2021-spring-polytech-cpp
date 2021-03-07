// Вывести представление целого десятичного числа N в системе счисления с основанием M. M и N вводятся пользователем с клавиатуры.
// Для примера посмотрите задачу 14

#include <iostream>

int main() {
    int N, M;
    std::cout << "Enter the number:";
    std::cin >> N;
    std::cout << "Enter the numeral system base (>0):";
    std::cin >> M;
    int size = sizeof(N) * 8;
    for (int i = 0; i < size; i++) {
        int bit = N % M;
        N = N / M;
        if (bit != 0) {
            if (bit < 10) {
                std::cout << bit;
            } else {
                std::cout << static_cast<char>(bit + 55);
            }
        }
    }
    return 0;
}
