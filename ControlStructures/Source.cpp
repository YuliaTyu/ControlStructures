#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	int temperature;
	cout << "Введите температуру воздуха :";
	cin >> temperature;
	if (temperature > 70)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperature > 50)
	{
		cout << "Вы на экваторе" << endl;
	}
	else if (temperature > 32)
	{
		cout << "Жарень" << endl;
	}
	else if (temperature > 20)
	{
		cout << "Тепло" << endl;
	}
	else if (temperature > 0)
	{
		cout << "Прохладно" << endl;
	}
	else if (temperature > -10)
	{
		cout << "Холодно" << endl;
	}
	else if (temperature > -20)
	{
		cout << "Мороз" << endl;
	}
	else if (temperature > -40)
	{
		cout << "Капец" << endl;
	}
	
 

}