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
		//cout << (int)key << "\t" << key << endl; // показывает коды клавиш
		if (key == 'w' || key == 'W' || key == UpArrow)cout << "Вперед" << endl; //|| или
		else if (key == 's' || key == 'S' || key == DownArrow)cout << "Назад" << endl;//|| или 
		else if (key == 'a' || key == 'A' || key == LeftArrow)cout << "Влево" << endl;//|| или
		else if (key == 'd' || key == 'D' || key == RightArrow)cout << "Вправо" << endl;//|| или
		else if (key == ' ')cout << "Прыжок" << endl;
		else if (key == Enter)cout << "Огонь" << endl; //13
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
		case UpArrow: cout << "Вперед" << endl; break;
		case 's':
		case 'S':
		case DownArrow: cout << "Назад" << endl; break;
		case 'a':
		case 'A':
		case LeftArrow: cout << "Влево" << endl; break;
		case 'd':
		case 'D':
		case RightArrow: cout << "Вправо" << endl; break;
		case ' ': cout << "Пырожок" << endl; break;
		case Enter: cout << "Огонь" << endl; break;
		case -32: break;
		case Escape:cout << "Выход" << endl; break;
		default: cout << "Error" << endl;
		}
	} while (key != Escape);
#endif

	//написать программу, которая вычисляет факториал числа, введенного с клавиатуры.
#ifdef FACT
	int i, n;
    long long fact = 1;    // данные выводимые в консоль - только числа, так как красивое оформление не стоит в задании. ВОПРОС - А НАДО ЛИ (как хорошй тон)?
	cin >> n;
	for (i = 1; i <= n; i++) //i = 1 так как умножение на 1 - это само число
	{                        // постфиск инкремент - так как необходимо вывести последующие числа на одну единицу и вывести произведение этих чисел.
		fact = fact * i;
	}
	cout << fact;            // много вопросов по итогу - 1) не все числа возможно вывести в переменную?  
#endif                       // 2) факториал например 45 - отрицательное число? 55 - положительное? 60отриц?  65 - отриц ?66 - 0!!! -5=1?
	                         
	                         
	                     

	//Написать программу, которая выводит на экран таблицу ASCII-символов по 16 в строке
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i;
	}
	
	
}