#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	system("color F0");
	setlocale(LC_ALL, "Russian" );
	int b, i, j, n, k, p, s;
	cout << "Введите порядок квадратной матрицы\n";
	cin >> n;
	int** a = new int* [n];
	for (i = 0; i < n; i++) {
		a[i] = new int[n];
	}
	cout << "Введите элементы массива\n";
	for (j = 0; j < n; j++) {
		for (i = 0; i < n; i++) {
			cin >> a[i][j];
		}
	}
	for (j = 0; j < n; j++) {
		for (i = 0; i < n; i++) {
			cout << a[i][j] << "|";
		}
		cout << endl;
	}

	for (j = 1, p = 1, k = 0; j < n; j++) {
		for (i = 0; i < j; i++) {
			k++;
			p *= a[i][j];
		}
	}
	cout << "Произведение и число элементов матрицы, находящихся под главной диагональю\n" << p << " " << k << endl;
	for (j = 0, s = 0, k = 0; j < n - 1; j++) {
		for (i = j + 1; i < n; i++) {
			k++;
			s += a[i][j];
		}
	}
	cout << "Сумму и число элементов матрицы, находящихся над главной диагональю\n" << s << " " << k << endl;
	for (j = 1, p = 1, k = 0; j < n; j++) {
		for (i = 0; i < j; i++) {
			if (a[i][j] > 0) {
				k++;
				p *= a[i][j];
			}
		}
	}
	cout << "Произведение и число положительных элементов матрицы, находящихся под главной диагональю \n" << p << " " << k << endl;
	for (j = 0, s = 0, k = 0; j < n - 1; j++) {
		for (i = j + 1; i < n; i++) {
			if (a[i][j] < 0) {
				k++;
				s += a[i][j];
			}
		}
	}
	cout << "Сумму и число отрицательных элементов матрицы, находящихся над главной диагональю\n" << s << " " << k << endl;
	system("pause");
	return 0;
}