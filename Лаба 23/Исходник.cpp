
#include <iostream>
#include <cstdlib>

using namespace std;

void Foo(int arr[], int size, int num) {

	srand(time(NULL));

	for (int i = 0; i < size; i++)
	{
		arr[i] = 0 + rand() % (num + 1);
		cout << arr[i] << endl;
	}

}
int main()
{
	setlocale(LC_ALL, "Russian");
	int n{ 0 }; //верхн€€ граница 
	cout << "¬ведите диапазон значени€ : " << endl;
	cin >> n;

	int num{ 0 };
	cout << "¬ведите количество €чеек в массиве :" << endl;
	cin >> num;

	int* arr = new int[num];
	
	Foo( arr, num, n);

	delete[] arr; // очистка пам€ти 
	return 0;
}
