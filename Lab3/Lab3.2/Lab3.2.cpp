#include <iostream>
#include <locale>

using namespace std;

int main()
{
	system("color F0");
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	a = 0;
	cout << "Введите b:";
	cin >> b;
	c = 0;
	a = b;
	for (b = 1; b < a + 1; b++)
	{
		c = (c + b * b) / 2;
	}
	cout << "Среднее арифметическое чисел в квадрате = " << c << endl;
	system("pause");
	return 0;
}