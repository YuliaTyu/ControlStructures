#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
		cout << "Palindrome" << endl;
	int number; //число вводимое с клавиатуры
	int revers = 0; //число записанное в обратном порядке
	cout << "Введите число:"; cin >> number;
	int buffer = number;// копия числа введенного с клавиатуры
	while (buffer)
	{
		revers *= 10;
		revers += buffer % 10; //получаем младший разряд числа
		buffer /= 10;// убираем младший разряд
	}
	cout << number << endl;
	cout << revers << endl;
	if (revers == number)
	{
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "Обычное число" << endl;
	}
}
