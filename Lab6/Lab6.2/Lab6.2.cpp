using namespace std;
#include <iostream> 

int main()
{
	system("color F0");
	setlocale(LC_ALL, "Russian");
	int n, i, k, j;
	cout << "Введите N " << endl;
	cin >> n;
	int* a = new int[n];
	cout << "Введите массив " << endl;
	for (i = 0; i < n; i++)
		cin >> a[i];

	for (i = 0; i < (n - 1); i++)
		for (j = 0; j < (n - 1); j++)
			if (a[j] < a[j + 1]) {
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}

	for (i = 0; i < n; i++)
		cout << a[i] << "|";
	system("pause");
	return 0;
}