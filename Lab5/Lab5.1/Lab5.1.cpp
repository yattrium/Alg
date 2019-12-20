#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	system("color F0");
	setlocale(LC_ALL, "Russian");
	int b, i, j, n, min, max, imi, jmi, ima, jma;
	cout << "Введите размер массива\n";
	cin >> n;
	int** a = new int* [n];
	for (i = 0; i < n; i++) {
		a[i] = new int[n];
	}
	max = -99999;
	min = 99999;
	for (j = 0; j < n; j++) {
		for (i = 0; i < n; i++) {
			cin >> a[i][j];
			if (a[i][j] > max) { max = a[i][j]; ima = i; jma = j; }
			if (a[i][j] < min) { min = a[i][j]; imi = i; jmi = j; }
		}
	}
	for (j = 0; j < n; j++) {
		for (i = 0; i < n; i++) {
			cout << a[i][j] << " | ";
		}
		cout << endl;
	}
	cout << "Минимайный элементы = " << min << " Индекс элемента = " << "[" << imi + 1 << "]" << "[" << jmi + 1 << "]" << "\nМаксимальный элемент = " << max << " Индекс элемента = " << "[" << ima + 1 << "]" << "[" << jma + 1 << "]";
	system("pause");
	return 0;
}