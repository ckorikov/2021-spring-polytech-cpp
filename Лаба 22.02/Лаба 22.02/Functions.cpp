#include "functions.h"

bool Funct_num(int* arr, int n, int value) {

	for (int i = 0; i < n; ++i) {
		if (arr[i] == value) {
			cout << "������� ����� ������(�������) " << i << " � ������� " << endl;
			return true;
		}
	}

	cout << "����� � ����,����� ��������� ��� � �������!!" << endl;
	return false;
}
// ���������� ������� ���