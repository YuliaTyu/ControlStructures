#include<iostream>
#include <conio.h>
using namespace std;
#define Enter 13
#define Escape 27

#define UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77

//#define IF_ELSE
//#define SWITCH
//#define FACT


void main()
{
	setlocale(LC_ALL, "");

#ifdef IF_ELSE
	cout << "Shooter" << endl;
	char key;

	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl; // ���������� ���� ������
		if (key == 'w' || key == 'W' || key == UpArrow)cout << "������" << endl; //|| ���
		else if (key == 's' || key == 'S' || key == DownArrow)cout << "�����" << endl;//|| ��� 
		else if (key == 'a' || key == 'A' || key == LeftArrow)cout << "�����" << endl;//|| ���
		else if (key == 'd' || key == 'D' || key == RightArrow)cout << "������" << endl;//|| ���
		else if (key == ' ')cout << "������" << endl;
		else if (key == Enter)cout << "�����" << endl; //13
		else if (key != -32 && key != Escape) cout << "Error" << endl;

	} while (key != Escape);//27
#endif

#ifdef SWITCH
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case 'w':
		case 'W':
		case UpArrow: cout << "������" << endl; break;
		case 's':
		case 'S':
		case DownArrow: cout << "�����" << endl; break;
		case 'a':
		case 'A':
		case LeftArrow: cout << "�����" << endl; break;
		case 'd':
		case 'D':
		case RightArrow: cout << "������" << endl; break;
		case ' ': cout << "�������" << endl; break;
		case Enter: cout << "�����" << endl; break;
		case -32: break;
		case Escape:cout << "�����" << endl; break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
#endif

	//�������� ���������, ������� ��������� ��������� �����, ���������� � ����������.
#ifdef FACT
	int i, n;
    long long fact = 1;    // ������ ��������� � ������� - ������ �����, ��� ��� �������� ���������� �� ����� � �������. ������ - � ���� �� (��� ������ ���)?
	cin >> n;
	for (i = 1; i <= n; i++) //i = 1 ��� ��� ��������� �� 1 - ��� ���� �����
	{                        // �������� ��������� - ��� ��� ���������� ������� ����������� ����� �� ���� ������� � ������� ������������ ���� �����.
		fact = fact * i;
	}
	cout << fact;            // ����� �������� �� ����� - 1) �� ��� ����� �������� ������� � ����������?  
#endif                       // 2) ��������� �������� 45 - ������������� �����? 55 - �������������? 60�����?  65 - ����� ?66 - 0!!! -5=1?
	                         
	                         
	                     

	//�������� ���������, ������� ������� �� ����� ������� ASCII-�������� �� 16 � ������
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i;
	}
	
	
}