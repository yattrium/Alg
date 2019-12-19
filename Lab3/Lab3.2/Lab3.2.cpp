using namespace std;
#include <iostream> 

int main()
{
	int b, i;
	float s;
	i = 100;
	s = 0;
	cout << "введите b=>100 " << endl;
	cin >> b;
	for (i; i <= b; i++)
		s = pow(i, 2) + s;
	s = s / ((b + 1) - 100);
	cout <<"среднее арифметическое = \n"<< s;
	system("pause");
	return 0;
}