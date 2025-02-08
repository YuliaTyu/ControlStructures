#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE 1
//#define TRIANGLE 2
//#define TRIANGLE 3
//#define TRIANGLE 4

void main()
{
	setlocale(LC_ALL, "");
	cout << "Geometry" << endl;
	int n;
	cout << "¬ведите разер фигуры"; cin >> n;
#ifdef SQUARE 

	for (int i = 1; i <= n; i++)
	{
		for (int i = 1; i <= n; i++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
#endif 

#ifdef TRIANGLE 1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
#endif
#ifdef TRIANGLE 2

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
#endif
#ifdef TRIANGLE 3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif 	

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j > i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}

}