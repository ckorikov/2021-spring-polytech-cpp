// Напишите программу, используя технику TDD. Реализуйте калькулятор,
// поддерживающий операции: +, -, *, /. Проверьте тестами свойства операций
// и законы элементарной алгебры.

#include <cassert>

enum Command {
    Add,
    Sub,
    Mul,
    Div
};

double calc(int operation, double x, double y) {
    double result;
    if (operation == 0) {
        result = x + y;
    } else if (operation == 1) {
        result = x - y;
    } else if (operation == 2) {
        result = x * y;
    } else if (operation == 3) {
        if (y != 0) {
            result = x / y;
        } else {
            result = -1;
        }
    } else {
        result = 0;
    }
    return result;
}

int main() {
    assert(calc(Command::Add, 0.0, 0.0) == 0.0);
    assert(calc(Command::Sub, 0.0, 0.0) == 0.0);
    assert(calc(Command::Mul, 0.0, 0.0) == 0.0);

    // Коммутативность сложения
    assert(calc(Command::Add, 2.0, 1.0) == 3.0);
    assert(calc(Command::Add, 1.0, 2.0) == 3.0);
    // Коммутативность умножения
    assert(calc(Command::Mul, 2.0, 8.0) == 16.0);
    assert(calc(Command::Mul, 8.0, 2.0) == 16.0);

    assert(calc(Command::Div, 3.0, 5.0) == 0.6);
    assert(calc(Command::Div, 4.0, 2.0) == 2.0);
    assert(calc(Command::Div, 0.0, 5.0) == 0.0);
    assert(calc(Command::Div, 5.0, 0.0) == -1);
    assert(calc(Command::Div, -2.41, 2) == -1.205);
    assert(calc(Command::Add, 5.0, -9.0) == -4.0);
    assert(calc(Command::Add, 1.0, 6.89) == 7.89);
    assert(calc(Command::Sub, 1.0, -9.0) == 10.0);
    assert(calc(Command::Sub, 1.0, 9.0) == -8.0);
    assert(calc(Command::Sub, 2.45, 9.0) == -6.55);
    assert(calc(Command::Mul, -1.5, -9.0) == 13.5);

    return 0;
}
