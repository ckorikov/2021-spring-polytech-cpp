#include <iostream>

//Запрограммировать следующее выражение: (а + b — f / а) + f * a * a — (a + b)
//Числа а, b, f вводятся с клавиатуры.
//Организовать пользовательский интерфейс, таким образом, чтобы было понятно, в каком порядке должны вводиться числа.

int main() {
    int a, b, f;
    std::cout << "a=";
    std::cin >> a;
    std::cout << "b=";
    std::cin >> b;
    std::cout << "f=";
    std::cin >> f;
    int result = (a + b - f / a) + f * a * a - (a + b);
    std::cout << result << std::endl;
    return 0;
}
