#include "functions.h"

bool Funct_num(int* arr, int n, int value) {

	for (int i = 0; i < n; ++i) {
		if (arr[i] == value) {
			cout << "Элемент имеет индекс(позицию) " << i << " в массиве " << endl;
			return true;
		}
	}

	cout << "ПОШЕЛ В ЖОПУ,таких элементов нет в массиве!!" << endl;
	return false;
}
// Реализации функций тут