
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
	int n{ 0 }; //������� ������� 
	cout << "������� �������� �������� : " << endl;
	cin >> n;

	int num{ 0 };
	cout << "������� ���������� ����� � ������� :" << endl;
	cin >> num;

	int* arr = new int[num];
	
	Foo( arr, num, n);

	delete[] arr; // ������� ������ 
	return 0;
}
