#include <iostream>

// Составить программу, которая будет считывать введённое с клавиатуры целое число.
// После чего, каждую цифру этого числа необходимо вывести в новой строке.

int main() {
    // Решение тут
     int n, a, b, c, d, e;
    std::cin >> n;
    a = (n/10000) - ((n%10000)/10000);
    n = n - a*10000;
    b = (n/1000) - ((n%1000)/1000);
    n = n - b*1000;
    c = (n/100) - ((n%100)/100);
    n = n - c*100;
    d = (n/10) - ((n%10)/10);
    e = n - d*10;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    std::cout << e << std::endl;
    return 0;
}
