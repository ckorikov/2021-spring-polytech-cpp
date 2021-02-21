// Напишите прогамму, которая экспериментально определяет максимальное и
// минимальное значения, которые можно записать в переменную типа int.

#include <iostream>

int main() {
    int x=0, y=0;
    while(x>-1){
        x=x+1;
    }
    while(y<1){
        y=y-1;
    }
    std::cout<<"max number with plus="<<x-1<<std::endl;
    std::cout<<"max number with minus="<<y+1<<std::endl;
}