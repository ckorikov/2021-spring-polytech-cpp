#include <iostream>

// Найдтие сумму чисел от 1 до N.
// N вводится с клавиатуры. Вывести сумму.

using namespace std;

int main()
{
    int sum, n, a;
    cout << "n=\n";
    cin >> n;
    for (a=1; a <= n; a++) {
        sum= sum + a;
    }
    cout << sum;
}