using namespace std;
#include <iostream> 

int main()
{
	system("color F0");
	setlocale(LC_ALL, "Russian");
	int n, i, min, x;
	cout << "Введите N " << endl;
	cin >> n;
	min = 9999;
	int* a = new int[n];
	cout << "Введите массив " << endl;
	for (i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < min) 
		{
			min = a[i];
			x = i;
		}
	}
	for (i = 0; i < x; i++) 
	{
		min = a[x];
		a[x] = a[i];
		a[i] = min;
		x--;
	}
	for (i = 0; i < n; i++)
		cout << a[i] << "|";
	system("pause");
	return 0;
}