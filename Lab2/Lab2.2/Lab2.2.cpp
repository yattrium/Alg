﻿#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	system("color F0");
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите первое число : ";
	cin >> a;
	cout << "Введите второе число : ";
	cin >> b;
	cout << "Введите третье число : ";
	cin >> c;
	if (a <= 2 || a >= 5)
	{
		cout << "первое число : " << a << "\n";
		if (a == 2 || a == 5)
		{cout << "Число 1 на границе интервала\n";}
		if (a < 2 || a > 5)
		{cout << "Число 1 за пределами интервала\n";}
	}
	else {cout << "Первое число : " << a << endl;
		cout << "Число 1 внутри интервала\n";}
	if (b <= 2 || b >= 5)
	{
		cout << "второе число : " << b << "\n";

		if (b == 2 || b == 5)
		{cout << "Число 2 на границе интервала\n";}

		if (b < 2 || b > 5)
		{cout << "Число 2 за пределами интервала\n";}
	}
	else {cout << "Второе число : " << b << endl;
		 cout << " число 2 внутри интервала\n ";}
	if (c <= 2 || c >= 5)
	{
		cout << "Третье число : " << c << "\n";
		if (c == 2 || c == 5)
		{cout << "Число 3 на границе интервала\n";}
		if (c < 2 || c > 5)
		{cout << "Число 3 за пределами интервала\n";}
	}
	else
	{cout << "Третье число : " << c << endl;
	cout << "Число 3 внутри интервала\n";}
	system("pause");
	return 0;
}