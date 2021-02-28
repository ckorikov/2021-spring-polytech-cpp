// Напишите программу для вычисления площади и периметра круга,
// радиус которого вводится пользователем. Разбейте программу на функции.

// Формулы:
// S = pi*r*r
// P = 2*pi*r

#include <iostream>

const double pi = 3.14;

double get_s(double r);

double get_p(double r);

int main() {
    double r;
    std::cout << "Enter r: ";
    std::cin >> r;

    std::cout << "S = " << get_s(r) << std::endl;
    std::cout << "P = " << get_p(r) << std::endl;
    return 0;
}


double get_s(double r) {
    return pi * r * r;
}

double get_p(double r) {
    return 2 * pi * r;
}