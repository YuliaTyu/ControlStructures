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

	//��������� �����
#ifdef FOR
	int n;
	cout << "������� ���������� ��������:"; cin >> n;
	long long f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "!=";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
#endif

	//������� �� ����� ��� ��������� �� ���������� �������. ������ ������ ������������ � ����������.
#ifdef FIB_1
	int fib = 0, fib_1 = 1, fib_2 = 1, n;
	cin >> n;
	cout << "��������� ���������:";
	for (int i = 1; i < n; i++)
	{
		fib = fib_1 + fib_2;
		fib_1 = fib_2;
		fib_2 = fib;
	}

	cout << "" << fib;
	cout << endl;
#endif
	
	//������� �� ����� �������� ���������� ����� �� ���� ��������� .���������� ����� ������ ������������ � ����������
#ifdef FIB	
	int n;
	cout << "������� ������"; cin >> n;
	
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
		cout << a << "\t";
	cout << endl;
#endif

	// ������� �� ����� ������� ��������
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

	//������� �� ����� ������� ���������
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

	//�������� ���������, ������� �������� ��������� ����� � ��������� �������,			
	//��������� � ���������� ������� �������� � ����������
#ifdef STEPEN
	double a; // N=a^n; a - ��������� ������� , n - ���������� �������, N - �������
	int n;
	cout << "������� ��������� �������"; cin >> a;
	cout << "������� ���������� �������"; cin >> n;
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

	// ������� �� ����� ��� ������� ����� �� ���������� �������.			
	//������� ���������� �����, ������� ������� ��� ������� ������ �� ���� � �� �������;
#ifdef PREDELNOE
	int n;
	cout << "������� ���������� �����:"; cin >> n;
	for (int i = 1; i < n; i++)
	{
		bool simple = true; //����������� ��� ����� ������ �� ��� ����� ���������
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
