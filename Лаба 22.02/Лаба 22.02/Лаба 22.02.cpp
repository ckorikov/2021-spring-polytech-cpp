#include <iostream>
#include <cstdlib> 
#include "Functions.h"
using namespace std;

// функция находит число в массиве и возвращает его индекс 

int main()
{
	setlocale(LC_ALL, "Russian");
	int num;

	int value;
	cout << "Введите размер массива" << endl;
	cin >> num;

	srand(time(NULL));

	int* arr = new int[num];
	for (int i = 0; i < num; i++) {
		arr[i] = rand() % 11;
		cout << arr[i] << endl;
	}
	cout << "Введите значение индекс которого хотите получить: " << endl;
	cin >> value;
	Funct_num(arr, num, value);
	return 0;
}


