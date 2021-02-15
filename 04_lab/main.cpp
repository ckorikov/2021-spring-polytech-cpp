#include <iostream>

// Составить программу, которая будет считывать введённое с клавиатуры целое число.
// После чего, каждую цифру этого числа необходимо вывести в новой строке.

using namespace std;

unsigned int p(unsigned int b)
{
    if (b !=0)
    {
        p(b / 10);
        cout << b % 10 << "\n";
    }
    return 0;
}
int main()
{
    int a;
    cin >> a;
    p(a);
}
