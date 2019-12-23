#include <iostream>
using namespace std;

int main()
{
	system("color F0");
	setlocale(LC_ALL, "Russian");
	int n, a;
	cout << "введите значение <=100" << endl;
	cin >> n;
	if ((11 <= n) & (n < 15))
		cout << n << " лет \n";
	else
	{
		a = n % 10;
		if (a == 1)
			cout << n << " год \n";
		else
			if ((1 < a) & (a < 5))
				cout << n << " года \n";
			else
				cout << n << " лет \n";
	}
	system("pause");
	return 0;

}