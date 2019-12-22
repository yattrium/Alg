#include <iostream>
#include <string>
using namespace std;
int main()
{
	system("color F0");
	setlocale(LC_ALL, "Russian");
	string line;
	cout << "Введите строку: ";
	getline(cin, line);
	cout << "Длина строки = " << line.size()-1;
	system("pause");
	return 0;
}