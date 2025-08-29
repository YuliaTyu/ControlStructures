#include<iostream>
using namespace std;
//создаем МАКРОС (макроопределение)
       //НА ЧТО ЗАМЕНИТЬ   ЧТО ЗАМЕНИТЬ:
#define UPPER_LEFT_ANGLE  (char)218 //верх лев
#define UPPER_RIGHT_ANGLE (char)191 //верх прав
#define LOWER_LEFT_ANGLE  (char)192 //низ лев
#define LOWER_RIGHT_ANGLE (char)217 // низ прав 
#define HORIZONTAL_LINE   (char)196
#define VERTIKAL_LINE     (char)179
//#define WHITE_BOX         (char)219
#define WHITE_BOX         "\xDB\xDB" //escs-последовательность дубль 
#define BLACK_BOX         "  "       //дубль
//#define BLACK_BOX         (char)32


//#define ASCII

void main()
{
#ifdef ASCII
	for (int i = 176; i < 224; i++) //установлен диапозон нужных сиволов таблицы (0 - 255)
	{                               //выписываем define кодов
		//if (i % 16 == 0)cout << endl;      прим. i % 16 == 0 - i- кратно 16
		cout << i << "\t" << (char)i << endl;
	}
#endif

	setlocale(LC_ALL, "");//УСТАНАВЛВАЕТ РУССКУЮ КОДИРОВКУ
	int n;
	cout << "Введите размер доски:"; cin >> n;
	n++; //компенсация рамки +1 
	setlocale(LC_ALL, "C");// УСТАНАВЛВАЕТ КОДИРОВКУ ПО УМОЛЧАНИЮ
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n) cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n) cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (j == 0 || j == n) cout << VERTIKAL_LINE;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX); //если четность i и j совпадают выводим белый : (в протвноим случае) выводим черный

		}
		cout << endl;
	}
}