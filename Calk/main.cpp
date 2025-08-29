#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "");
	double a, b; // числа вводимые пользователем
	char s; // знак операции
	cout << "Введите простое ариф выражение:";
	cin >> a;
	do
	{
		cin >> s >> b;
		switch (s)
		{
		case '+': a += b;  break;
		case '-': a -= b; break;
		case '*': a *= b; break;
		case '/': a /= b; break;
		default: cout << "Error: No operation" << endl;
		}
		//cout << a << s  << b << " = " << a  << endl;
		cout << "=";
		cout << a;
	} while (true);

}