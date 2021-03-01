#include <iostream>

// Составить программу, которая будет считывать введённое с клавиатуры целое число.
// После чего, каждую цифру этого числа необходимо вывести в новой строке.

int main() {
    int n, x;
    std::cout << "Enter the number:";
    std::cin >> n;
    while (n > 0) {
        x = n % 10;
        n = n / 10;
        std::cout << x << std::endl;
    }
    return 0;
}
