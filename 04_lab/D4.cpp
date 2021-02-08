#include<iostream>
using namespace std;
int main()
{
	int b, c;
	cin >> b;
	while (b != 0)
	{
		c = b % 10;
		b = b / 10;
		cout << c << endl;
//или для оптимизации cout << b % 10 << endl;
	}
	return 0;
}
