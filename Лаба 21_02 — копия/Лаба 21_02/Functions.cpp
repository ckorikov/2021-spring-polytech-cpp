#include "functions.h"
// функция находит максимальное значение 
int func_max(int* arr, int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}

	}
	return max;
}
// Функция находит минимальное значение в массиве 

int func_min(int* arr, int n) {

	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}
// подсчитывает кол. вхождений заданного элемента в массив
int func_value(int* arr, int n, int gut) {
	int sum{ 0 };
	for (int i = 0; i < n; i++) {
		if (arr[i] == gut) {
			sum = sum + 1;
		}
	}
	return sum;
}