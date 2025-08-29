#include<iostream>
using namespace std;
using std::cout;

//#define SQUARE
//#define TRIANGLE1
//#define TRIANGLE2
//#define TRIANGLE3
//#define TRIANGLE4
//#define ROMB
//#define SUMMIN
//#define HARDCHESS
//#define ROMB2
//#define ROMB3




void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите разер фигуры"; cin >> n;

#ifdef SQUARE 

	for (int i = 0; i < n; i++) // вывод строки (количество n) 
	{
		for (int i = 0; i < n; i++) // вывод строки!! (количество n)
		{
			cout << "* ";
		}
		cout << endl;// перенос строки n раз!!!! 
	}
	cout << endl;
#endif 

#ifdef TRIANGLE1
	for (int i = 0; i < n; i++)// вывод строки 
	{
		for (int j = 0; j <= i; j++) // вывод столба
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif

#ifdef TRIANGLE2

	for (int i = 0; i < n; i++)//2 пункт - повторяет вывод строки
	{
		for (int j = i; j < n; j++) //1 пункт - формирует строку из*
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
		for (int j = n; j < n + i * 2; j++) cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		cout << " ";
		for (int j = 0; j < i; j++) cout << " "; cout << "\\";
		for (int j = n * 2 - i - 2; j > i; j--) cout << " "; cout << "/";
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
			if (i % 2 == j % 2) cout << "+ ";else cout << "- ";
			//if (i % 2 == j % 2 ? cout << "+ " : cout << "- ";
			//cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
	cout << endl;
#endif

	// квадратики из звездочек - звездец

#ifdef HARDCHESS
	for (int i = 1; i <= n; i++)
	{
		for (int i = 0; i <= n; i++)
		{
			for (int i = 1; i <= 1; i++)  cout << "* * * * *";
			
			for (int j = 1; j <= 1; j++)  cout << "h h h h h";
		}
		cout << endl;
	}
	cout << endl;
#endif


	//РОМБ2
#ifdef ROMB2
	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			//cout << "* ";
			if (i == (j + n) || j == (i + n)) cout << "\\";
			//else if (i == (n * 2 - j - 1)) cout << "/";
			else if (i == (n - j - 1) || (i - n == (n * 2 - j - 1))) cout << "/";
			else cout << " ";
		}
		cout << endl;
}
#endif

#ifdef ROMB 3

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0 - 1; j < i; j++) cout << " "; cout << "\\";
		for (int j = i + 1; j < n; j++) cout << "  "; cout << "/";
		cout << endl;
	}
	cout << endl;
#endif // ROMB 3







}