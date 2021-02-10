#include <iostream>

//Напишите программу, которая предлагает пользователю ввести свой возраст. Затем программа должна отобразить возраст в месяцах:
//Enter your age: 29
//Your age in months is 348.

int main() {
    int age, age_in_months;
    std::cout << "Enter your age: ";
    std::cin >> age;
    age_in_months = age*12;
    std::cout << "Your age in months is " << age_in_months << std::endl;
    return 0;
}
