// Напишите программу, используя технику TDD. Реализуйте калькулятор,
// поддерживающий операции: +, -, *, /. Проверьте тестами свойства операций
// и законы элементарной алгебры.

#include <cassert>

enum class Command {
    Add, Sub, Mul, Dev
};

double calc(Command operation, double x, double y) {
    if (y == 0.0 && operation == Command::Dev) {
        return -1;
    } else {
        switch (operation) {
            case Command::Add:
                return x + y;
            case Command::Sub:
                return x - y;
            case Command::Mul:
                return x * y;
            case Command::Dev:
                return x / y;
            default:
                return -1;
        }
    }
}

int main() {
    assert(calc(Command::Add, 0.0, 0.0) == 0.0);
    assert(calc(Command::Sub, 0.0, 0.0) == 0.0);
    assert(calc(Command::Mul, 0.0, 0.0) == 0.0);
    assert(calc(Command::Dev, 0.0, 1.0) == 0.0);
    // Коммутативность сложения
    assert(calc(Command::Add, 2.0, 1.0) == 3.0);
    assert(calc(Command::Add, 1.0, 2.0) == 3.0);
    // Коммутативность вычитания
    assert(calc(Command::Sub, 3.0, 2.0) == 1.0);
    assert(calc(Command::Sub, 2.0, 3.0) == -1.0);
    // Коммутативность умножения
    assert(calc(Command::Mul, 2.0, 3.0) == 6.0);
    assert(calc(Command::Mul, 3.0, 2.0) == 6.0);
    // Нестандартные ситуации
    assert(calc(Command::Add, 2.0, -3.0) == -1.0);
    assert(calc(Command::Sub, 2.0, -3.0) == 5.0);
    assert(calc(Command::Mul, 2.0, -3.0) == -6.0);
    assert(calc(Command::Mul, -2.0, -3.0) == 6.0);
    assert(calc(Command::Dev, 6.0, -2.0) == -3.0);
    assert(calc(Command::Dev, -6.0, -2.0) == 3.0);
    assert(calc(Command::Dev, 5.0, 0) == -1);

    return 0;
}
