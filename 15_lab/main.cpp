// Вывести представление целого десятичного числа N в системе счисления с основанием M. M и N вводятся пользователем с клавиатуры.
// Для примера посмотрите задачу 14

#include <iostream>

int main() {
    int N, M, number=0, mul=1;

    std::cin>>N>>M;
    if(M==1)
    {
        for(int i=0; i<N; i++)
        {
            std::cout<<1;
        }
        return 0;
    }
    while(N>0) {
        int system = N % M;
        N = N / M;
        number = number + system * mul;
        mul = mul * 10;
    }
    std::cout << number << std::endl;
    return 0;
}
