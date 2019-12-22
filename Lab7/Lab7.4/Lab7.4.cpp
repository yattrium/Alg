#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	system("color F0");
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251);
	int k, i, j, g;
	string s1, s2;
	cout << "Введите строку: ";
	getline(cin, s1);
	for (i = 0, k = 0; i < s1.size(); i++) {
		if (s1[i] == ' ') { k++; }
	}
	g = s1.size() - k;
	s2.resize(g, '0');
	for (i = 0, j = 0; i < s1.size(); i++) {
		if (s1[i] != ' ') {
			s2[j] = tolower(s1[i]);
			j++;
		}
	}
	for (i = 0, k = 0; i < s2.size() / 2; i++) {
		if (s2[i] != s2[s2.size() - i - 1]) { k++; }
	}
	if (k != 0) { cout << "Строка не является перевёртышем \n"; }
	else { cout << "Строка является перевёртышем \n"; }
	system("pause");
	return 0;
}