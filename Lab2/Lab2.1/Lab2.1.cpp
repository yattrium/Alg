#include <iostream>
using namespace std;

int main()
{
	system("color F0");
	setlocale(LC_ALL, "Russian");
	int a, b, c, max, min;
	cout << "Введите первое число : ";
	cin >> a;
	cout << "Введите второе число : ";
	cin >> b;
	cout << "Введите третье число : ";
	cin >> c;
	max = a;
	min = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	cout << "max=" << max << endl;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	cout << "min=" << min << endl;

	system("pause");
	system("color 70");
	return 0;
}