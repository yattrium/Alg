#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, a;
	cout << "введите значение <=100" << endl;
	cin >> n;
	if ((11 <= n) & (n < 15))
		cout << n << " лет";
	else
	{
		a = n % 10;
		if (a == 1)
			cout << n << " год";
		else
			if ((1 < a) & (a < 5))
				cout << n << " года";
			else
				cout << n << " лет";
	}
	system("pause");
	return 0;

}