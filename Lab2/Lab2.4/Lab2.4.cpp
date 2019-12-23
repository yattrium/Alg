#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	system("color F0");
	setlocale(LC_ALL, "Russian");
	int a, b, c, x1, x2, d;
	cout << "Введите три вешественных числа\n";
	cin >> a >> b >> c;
	if (a != 0) {
		d = b * b - 4 * a * c;
		if (d >= 0) {
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			cout << "x1 = " << x1 << "\n x2 = " << x2;
		}
		else { cout << "Комплексные корни \n"; }
	}
	else {
		if (b != 0) {
			x1 = -c / b;
			cout << "x = " << x1;
		}
		else {
			if (c != 0) {
				cout << "Нет решения \n";
			}
			else { cout << "Мнимое решение \n"; }
		}
	}
	system("pause");
	return 0;
}