// Допишите программу, которая вычисляет расстояние Хэмминга бинарных представлений двух целых положительных чисел. 

#include <iostream>
int hamming(int a, int b)
{
    int ham=0;
    while (a>0 || b>0)
    {
        if(a%2!=b%2)
            ham++;
        a=a/2;
        b=b/2;
    }
    return ham;
}
int main() {
    std::cout << hamming(7, 3) << std::endl;
    return 0;
}
