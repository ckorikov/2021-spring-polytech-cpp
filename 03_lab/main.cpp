#include <iostream>
#include <cmath>

//Вычислить значения функции z(a, x) = exp(x) sin(ax), для значений аргументов:
//x от -1.1 до 0.3 с шагом 0.2;
//a от 1 до 5 с шагом 1.

int main() {
    for (int a = 1; a <= 5; a = a + 1) {
        double x = -1.1;
        while (x <= 0.3) {
            double result = std::exp(x) * std::sin(a * x);
            std::cout << "a=" << a << ", x=" << x << ", result=" << result << std::endl;
            x = x + 0.2;
        }
    }
    return 0;
}
