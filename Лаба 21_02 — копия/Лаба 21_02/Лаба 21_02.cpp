//без тестов 
#include <iostream>
#include <cstdlib> // содержит srand() и rand()

using namespace std;
// функция находит максимальное значение 

int main() {
	setlocale(LC_ALL, "Russian");

	int num;
	int gut;
	cout << "Введите количество значений в массиве " << endl;
	cin >> num;
	srand(time(NULL));

	int* arr = new int[num];
	for (int i = 0; i < num; i++) {
		// заполнение массива и вывод на экран 
		arr[i] = rand() % 11;
		cout << arr[i] << endl;
	}
	cout << "Введите значение которое хотите исследовать" << endl;
	cin >> gut;
	cout << "Максимальное значение в массиве: " << func_max(arr, num) << endl;
	cout << "Минимальное значение в массиве: " << func_min(arr, num) << endl;
	cout << "Кол. вхождений заданного элемента в массив равно: " << func_value(arr, num, gut) << endl;

	return 0;
}
