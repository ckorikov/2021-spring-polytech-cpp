#include "functions.h"
// ������� ������� ������������ �������� 
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
// ������� ������� ����������� �������� � ������� 

int func_min(int* arr, int n) {

	int min = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}
// ������������ ���. ��������� ��������� �������� � ������
int func_value(int* arr, int n, int gut) {
	int sum{ 0 };
	for (int i = 0; i < n; i++) {
		if (arr[i] == gut) {
			sum = sum + 1;
		}
	}
	return sum;
}