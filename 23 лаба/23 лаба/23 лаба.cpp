// 23 лаба.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>

using namespace std;

void arr(int quantity) {

	srand(time(NULL));

	int* p_darr = new int[quantity];
	for (int i = 0; i < quantity; i++)
	{
		p_darr[i] = rand() % (quantity + 1);
		cout << p_darr[i] << endl;
	}
	delete[] p_darr;
 }
int main()
{
	setlocale(LC_ALL, "Russian");
	int quantity{0};
	cout << "Введите количество значений в массиве:" << endl;
	cin >> quantity;
	arr(quantity);

	return 0;
}
