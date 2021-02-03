#include <iostream>

// Найдтие сумму чисел от 1 до N.
// N вводится с клавиатуры. Вывести сумму.

int main() {
    int num=0,sum=0;
    std::cout<<"Enter number:";
    std::cin>>num;
    for(int i=1; i<num; i++)
    {
        sum+=i;
    }
    std::cout<<sum;
    return 0;
}
