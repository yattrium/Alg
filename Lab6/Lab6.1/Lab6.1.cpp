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
	for (j = 0; j < n; j++) {
		for (i = 0; i < n; i++) {
			cin >> a[i][j];
		}
	}
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1; j++) {
			if (a[j][j] > a[j + 1][j + 1]) {
				b = a[j][j];
				a[j][j] = a[j + 1][j + 1];
				a[j + 1][j + 1] = b;
			}
		}
	}
	for (j = 0; j < n; j++) {
		for (i = 0; i < n; i++) {
			cout << a[i][j] << " | ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}