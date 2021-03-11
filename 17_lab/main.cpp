// Напишите программу, используя технику TDD. Реализуйте функцию,
// которая подсчитывает количество вхождений заданной цифры в число.

#include <cassert>

int count_numbers(int number, unsigned int digit) {
    if (digit > 9) return -1;
    if (number == 0 && digit == 0) return 1;
    if (number < 0) number *= -1;

    int counter = 0;
    while (number) {
        auto value = number % 10;
        if (value == digit) {
            ++counter;
        }
        number /= 10;
    }

    return counter;
}

int main() {
    assert(count_numbers(0, 0) == 1);
    assert(count_numbers(0, 3) == 0);
    assert(count_numbers(12345, 3) == 1);
    assert(count_numbers(1245, 3) == 0);
    assert(count_numbers(1243, 3) == 1);
    assert(count_numbers(3245, 3) == 1);
    assert(count_numbers(3333, 3) == 4);
    assert(count_numbers(12305, 0) == 1);
    assert(count_numbers(12315, 0) == 0);
    assert(count_numbers(1233, 15) == -1);
    assert(count_numbers(-12345, 3) == 1);
    return 0;
}
