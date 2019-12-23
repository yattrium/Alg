using namespace std;
#include <iostream> 

int main()
{
	system("color F0");
	setlocale(LC_ALL, "Russian");
	cout << "задание 1 \n";
	int N, i, s;
	i = 2;
	s = 2;
	cout << "введите N \n";
	cin >> N;
	while (i <= N)
	{
		s = s * 2;
		i++;
	}
	cout << "2 в степени N = "  << s << "\n";
//-----------------------------------
	cout << "задание 2 \n";
	i = 1;
	s = 1;
	cout << "введите N \n" << endl;
	cin >> N;
	while (i <= N)
	{
		s = s * i;
		i++;
	}
	cout << "N = " << s << "\n";
	//-----------------------------------
	cout << "задание 3 \n";
	i = 2;
	s = 1;
	cout << "введите N \n" << endl;
	cin >> N;
	while (i <= N)
	{
		s = s * (1 + (1 / (i * i)));
		i++;
	}
	cout << "2 в степени N = " << s<<"\n";
	//-----------------------------------
	cout << "задание 4 \n";
	i = 1;
	s = 0;
	cout << "введите N " << endl;
	cin >> N;
	while (i <= N)
	{
		s = sqrt(2 + s);
		i++;
	}
	cout << "N корней из выражения = "<< s<<"\n";
	system("pause");
	return 0;
}