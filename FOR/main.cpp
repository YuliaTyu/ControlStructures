#include<iostream>
using namespace std;

//#define FOR
//#define FIB_1
//#define FIB
//#define TABUMN

void main()
{
	setlocale(LC_ALL, "");
	//факториал числа
#ifdef FOR
	int n;
	cout << "Введите количество итераций:"; cin >> n;
	long long f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "!=";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif

	//Вывести на экран ряд Фибоначчи до указанного предела. Предел вводит пользователь с клавиатуры.
#ifdef FIB_1
	int fib = 0, fib_1 = 1, fib_2 = 1, n;
	cin >> n;
	cout << "результат фибоначчи:";
	for (int i = 1; i < n; i++)
	{
		fib = fib_1 + fib_2;
		fib_1 = fib_2;
		fib_2 = fib;
	}

	cout << "" << fib;
	cout << endl;
#endif
	
	//Вывести на экран заданное количество чисел из ряда Фибоначчи .Количество чисел задает пользователь с клавиатуры
#ifdef FIB	
	int fib = 0, fib_1 = 1, fib_2 = 1, n;
	cin >> n;
	cout << "0";
	for (int i = 1; i < n; i++)
	{
		if (i == 0 || i == 1)
		fib = 1;
		else
		{
			fib = fib_1 + fib_2;
			fib_1 = fib_2;
			fib_2 = fib;
		}
		cout << "" << fib;
	}
	cout << endl;
#endif

	// Вывести на экран таблицу умножения
#ifdef TABUMN

	int i, j;
	for (int i = 0; i <= 9; i++)
		cout << i << '\t';
	cout << endl;
	for (int i = 1; i <= 9; i++)
	{
		cout << i << '\t';
		for (int j = 1; j <= 9; j++)
			cout << i * j << '\t';
		cout << endl;

	}
#endif


}
