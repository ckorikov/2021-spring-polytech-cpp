#include <iostream>

//Напишите программу на С++, которая использует три определяемых пользователем функции, включая main(), и генерирует следующий вывод:
//Three blind mice
//Three blind mice
//See how they run
//See how they run
//
//Одна функция, вызываемая два раза, должна генерировать первые две строки, а другая, также вызываемая два раза - оставшиеся строки.

void one_line();
void another_line();

int main() {
    one_line();
    one_line();
    another_line();
    another_line();
    return 0;
}

void one_line() {
    std::cout << "Three blind mice" << std::endl;
}

void another_line() {
    std::cout << "See how they run" << std::endl;
}
