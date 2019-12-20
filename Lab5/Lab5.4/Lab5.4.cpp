#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	system("color F0");
	setlocale(LC_ALL, "Russian");
	int b, i, j, n, m, p, s;
	cout << "Введите количество строк\n";
	cin >> m;
	cout << "Введите количество столбцов\n";
	cin >> n;
	int** a = new int* [n];
	for (i = 0; i < n; i++) {
		a[i] = new int[m];
	}
	cout << "Введите элементы массива\n";
	for (j = 0; j < m; j++) {
		for (i = 0; i < n; i++) {
			cin >> a[i][j];
		}
	}

	for (i = 0; i < n; i++) {
		s = 0;
		for (j = 0; j < m; j++) {
			if (a[i][j] > 0) {
				s += a[i][j];
			}
		}
		cout << s << " ";
	}
	cout << endl;
	for (i = 0; i < n; i++) {
		s = 0;
		for (j = 0; j < m; j++) {
			if (a[i][j] > 0) {
				s++;
			}
		}
		cout << s << " ";
	}
	system("pause");
	return 0;
}