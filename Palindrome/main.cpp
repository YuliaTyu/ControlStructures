#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
		cout << "Palindrome" << endl;
	int number; //����� �������� � ����������
	int revers = 0; //����� ���������� � �������� �������
	cout << "������� �����:"; cin >> number;
	int buffer = number;// ����� ����� ���������� � ����������
	while (buffer)
	{
		revers *= 10;
		revers += buffer % 10; //�������� ������� ������ �����
		buffer /= 10;// ������� ������� ������
	}
	cout << number << endl;
	cout << revers << endl;
	if (revers == number)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "������� �����" << endl;
	}
}
