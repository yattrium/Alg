#include <iostream>

using namespace std;

int main()
{
	system("color F0");
	setlocale(LC_ALL, "ru");
	int arr[]{ 3,4,6,7,10,5,8 };
	int b = 0;

	cout << "Введите b: ";
	cin >> b;
	for (int i = 0; i <= 8; i++)
	{
		if (i <= b)
			continue;

		cout << "Числа больше b: " << i << endl;
	}

	system("pause");
	return 0;
}