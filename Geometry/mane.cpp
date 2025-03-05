#include<iostream>
using namespace std;
using std::cout;

//#define SQUARE
//#define TRIANGLE1
//#define TRIANGLE2
//#define TRIANGLE3
//#define TRIANGLE4
//#define ROMB
#define SUMMIN
//#define ZVEZDEZ

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите разер фигуры"; cin >> n;

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

#ifdef TRIANGLE1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif

#ifdef TRIANGLE2

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif

#ifdef TRIANGLE3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif 

#ifdef TRIANGLE4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << "  ";
		for (int j = 0; j <= i; j++) cout << "* ";
		cout << endl;
	}
	cout << endl;
#endif 

	//ромб!!!!бинго !!! каждая сторона ромба расписывается по отдельности !!!!!
	// ищем циклом пробелы и слеш и бекслеш выводим на границе конца пробелов.
	//на помощь пришла координатная плоскость!
#ifdef ROMB

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++) cout << " ";	cout << "/";
		for (int j = n; j < n + i * 2; j++) cout << " ";cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		cout << " ";
		for (int j = 0; j < i; j++) cout << " ";cout << "\\";
		for (int j = n * 2 - i - 2; j > i; j--) cout << " ";cout << "/";
		cout << endl;
	}

	cout << endl;

#endif

	// квадрат +-+-+-+- 
#ifdef SUMMIN

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2 == 0)cout << "+ ";else cout << "- ";
			//if (i % 2 == j % 2) cout << "+ ";else cout << "- ";
			//i % 2 == j % 2 ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
	cout << endl;
#endif

	// квадратики из звездочек - звездец

#ifdef ZVEZDEZ
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 2; j++) cout << "* ";
		for (int j = n; j <= (n * 2) - 2; j++) cout << "  ";
		cout << " ";
		for (int j = n * 3; j <= (n * 4) - 2; j++) cout << "* ";
		cout << "* ";
		for (int j = n * 4; j <= (n * 4) + 2; j++) cout << "  ";
		cout << "  ";
		for (int j = n * 5; j <= (n * 6) - 2; j++) cout << "* ";
		cout << "* ";
		cout << endl;
	}
	cout << endl;
#endif






}