#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	system("color F0");
	setlocale(LC_ALL, "Russian");
	int b, i, j, n, max, ima, jma;
	cout << "Введите размер массива\n";
	cin >> n;
	int** a = new int* [n];
	for (i = 0; i < n; i++) {
		a[i] = new int[n];
	}
	max = -99999;
	for (j = 0; j < n; j++) {
		for (i = 0; i < n; i++) {
			cin >> a[i][j];
			if (a[i][j] > max) { max = a[i][j]; ima = i; jma = j; }
		}
		b = a[j][j];
		a[j][j] = a[ima][jma];
		a[ima][jma] = b;
		max = -99999;
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