// Напишите программу, используя технику TDD. Реализуйте калькулятор,
// поддерживающий операции: +, -, *, /. Проверьте тестами свойства операций
// и законы элементарной алгебры.

#include <cassert>

enum class Command {
    Add,
    Sub,
    Mul,
    Div
};

double calc(enum class Command operation, double x, double y) {
    double result;
    switch (operation) {
        case Command::Add:
            result = x + y;
            break;
        case Command::Sub:
            result = x - y;
            break;
        case Command::Mul:
            result = x * y;
            break;
        case Command::Div:
            if (y != 0) {
                result = x / y;
            }
            break;
        default:
            result = 0;
            break;
    }
    return result;
}

int main() {
    // Операции с нулями
    assert(calc(Command::Add, 0.0, 0.0) == 0.0);
    assert(calc(Command::Sub, 0.0, 0.0) == 0.0);
    assert(calc(Command::Mul, 0.0, 0.0) == 0.0);
    assert(calc(Command::Div, 0.0, 5.0) == 0.0);

    // Коммутативность сложения
    assert(calc(Command::Add, 2.0, 1.0) == calc(Command::Add, 1.0, 2.0));

    // Ассоциативность сложения
    assert(calc(Command::Add, calc(Command::Add, 2.0, 3.0), 5.0) ==
           calc(Command::Add, calc(Command::Add, 5.0, 3.0), 2.0));

    // Коммутативность умножения
    assert(calc(Command::Mul, 2.0, 8.0) == calc(Command::Mul, 8.0, 2.0));

    // Ассоциативность умножения
    assert(calc(Command::Mul, calc(Command::Mul, 3.0, 4.0), 2.0) ==
           calc(Command::Mul, calc(Command::Mul, 2.0, 4.0), 3.0));

    // Дистрибутивность умножения
    assert(calc(Command::Mul, calc(Command::Add, 3.0, 4.0), 5.0) ==
           calc(Command::Add, calc(Command::Mul, 3.0, 5.0), calc(Command::Mul, 4.0, 5.0)));

    // Операции с проверкой знаков
    // + +
    // - -
    // - +
    // + -
    // Сложение
    assert(calc(Command::Add, 3.0, 5.0) == 8.0);
    assert(calc(Command::Add, -3.0, -5.0) == -8.0);
    assert(calc(Command::Add, -3.0, 5.0) == 2.0);
    assert(calc(Command::Add, 3.0, -5.0) == -2.0);
    // Вычитание
    assert(calc(Command::Sub, 2.0, 1.0) == 1.0);
    assert(calc(Command::Sub, -2.0, -1.0) == -1.0);
    assert(calc(Command::Sub, 2.0, -1.0) == 3.0);
    assert(calc(Command::Sub, -2.0, 1.0) == -3.0);
    // Умножение
    assert(calc(Command::Mul, 5.0, 5.0) == 25.0);
    assert(calc(Command::Mul, -5.0, -5.0) == 25.0);
    assert(calc(Command::Mul, 5.0, -5.0) == -25.0);
    assert(calc(Command::Mul, -5.0, 5.0) == -25.0);
    // Деление
    assert(calc(Command::Div, 10.0, 5.0) == 2.0);
    assert(calc(Command::Div, -10.0, -5.0) == 2.0);
    assert(calc(Command::Div, 10.0, -5.0) == -2.0);
    assert(calc(Command::Div, -10.0, 5.0) == -2.0);

    return 0;
}
