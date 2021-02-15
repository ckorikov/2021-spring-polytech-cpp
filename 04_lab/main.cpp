#include <iostream>

int main() {
    int in;
    int b = 1;
    std::cin >> in;



    while(in > 10)
    {
        b = in % 10;
        in = in / 10;
        std::cout << b << std::endl;
    }
    std::cout << in << std::endl;


}