#include<iostream>
using namespace std;

//#define FOR
//#define FIB_1
//#define FIB
//#define TABUMN
//#define TABUMN 1
//#define STEPEN
//#define PREDELNOE
//#define CHUDO
//#define DOM



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
	int n;
	cout << "Введите предел"; cin >> n;
	
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		cout << a << "\t";
	cout << endl;
#endif

	// Вывести на экран таблицу Пифагора
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

	//Вывести на экран таблицу умножения
#ifdef TABUMN 1
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i << "*" << j << "=" << i * j << endl;
		}
		cout << endl;
	}
#endif

	//Написать программу, которая возводит указанное число в указанную степень,			
	//основание и показатель степени вводятся с клавиатуры
#ifdef STEPEN
	double a; // N=a^n; a - основание степени , n - показатель степени, N - степень
	int n;
	cout << "Введите основание степени"; cin >> a;
	cout << "Введите показатель степени"; cin >> n;
	double N = 1;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << a << "^" << n << "=" << N << endl;
#endif

	// Вывести на экран ряд простых чисел до указанного предела.			
	//Простым называется число, которое делится без остатка только на себя и на единицу;
#ifdef PREDELNOE
	int n;
	cout << "Введите предельное число:"; cin >> n;
	for (int i = 1; i < n; i++)
	{
		bool simple = true; //предположим что число ростое но это нужно проверить
		for (int j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)

			{
				simple = false;
				break;
			}

		}
		if (simple) cout << i << "\t";
	}
	cout << endl;
#endif

#ifdef CHUDO
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int a = 0; a < n; a++) cout << "* ";
		cout << endl;
		for (int b = 0; b < n*5; b++) cout << "\\";
		cout << endl;
		for (int i = 0; i < n; i++) cout << "ffff";
		cout << endl;
		for (int j = 0; j < n; j++) cout << "aaaa";
		cout << endl;
		for (int j = 0; j < n; j++) cout << "!!!!!";
		cout << endl;
	}
	cout << endl;
#endif

#ifdef DOM

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i + j >= 9 && i >= j)
				cout << "|===|";
			else
				cout << "     ";
		}
		cout << endl;
	}

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "|###|";
		}
		cout << endl;
	}
	cout << endl;
#endif // DOM


}
