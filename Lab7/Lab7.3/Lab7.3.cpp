//#include "pch.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	system("color F0");
	setlocale(LC_ALL, "Russian");
	string str1, str2;
	cout << "Введите первую строку: ";
	getline(cin, str1);
	cout << "Введите вторую строку: ";
	getline(cin, str2);

	if (str1.length() == str2.length())
	{
		for (int i = 0; i < str1.length(); i++)
		{
			if (tolower(str1[i]) != tolower(str2[i]))
			{
				cout << endl << "no"<<"\n";
				return 0;
			}
		}
		cout << endl << "yes" << "\n";
	}
	else cout << endl << "no" << "\n";
	system("pause");
	return 0;
}