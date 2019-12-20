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

	for (j = 0; j < m; j++) {
		s = 0;
		p = 1;
		for (i = 0; i < n; i++) {
			p *= a[i][j];
			s += a[i][j];
		}
		cout << s << " " << p << endl;
	}
	system("pause");
	return 0;
}