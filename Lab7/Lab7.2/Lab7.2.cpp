#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() 
{
	system("color F0");
	setlocale(LC_ALL, "Russian");
	int k;
	string s;
	cout << "Введите строку: ";
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		s[i] = tolower(s[i]);
	}
	cout << "Преобразованная строка: " << s << "\n";
	system("pause");
	return 0;
}