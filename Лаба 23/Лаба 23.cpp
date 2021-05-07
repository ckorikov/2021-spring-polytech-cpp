// Лаба 23.cpp: определяет точку входа для приложения.
//
#include <iostream>
#include <cstdlib>

using namespace std;

void Foo(int arr[], int size, int num) {

	srand(time(NULL));

	for (int i = 0; i < size; i++)
	{
		arr[i] = 0 + rand() % (num + 1);
		
	}

}
int main()
{
	setlocale(LC_ALL, "Russian");
	int n{ 0 };
	
	cin >> n;

	int num{ 0 };
	
		cin >> num;

	int* arr = new int[num];

	Foo(arr, num, n);

	delete[] arr; 

	return 0;
}