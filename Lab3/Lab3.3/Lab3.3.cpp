using namespace std;
#include <iostream> 

int main()
{
	setlocale(LC_ALL, "Russian");
	float n, a, x, i;
	cout << "Введите N " << endl;
	cin >> n;
	for (x = 1; x <= n; x++) {
		for (i = 1; i <= n; i++)
		{
			a = x * i;
			if (a < 10)
				cout << a << " ";
			else
				cout << a << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}