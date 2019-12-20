using namespace std;
#include <iostream> 

int main()
{
	system("color F0");
	setlocale(LC_ALL, "Russian");
	int n, i, min, k, j;
	cout << "Введите N " << endl;
	cin >> n;
	int* a = new int[n];
	cout << "Введите массив " << endl;
	for (i = 0; i < n; i++)
		cin >> a[i];

	for (i = 0; i < n - 1; i++) {
		min = a[i];
		k = i;
		for (j = i + 1; j < n; j++)
			if (a[j] < min) {
				min = a[j];
				k = j;
			}
		a[k] = a[i];
		a[i] = min;
	}
	for (i = 0; i < n; i++)
		cout << a[i] << "|";
	system("pause");
	return 0;
}