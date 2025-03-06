#include<iostream>
using namespace std;
//������� ������ (����������������)
       //�� ��� ��������   ��� ��������:
#define UPPER_LEFT_ANGLE  (char)218 //���� ���
#define UPPER_RIGHT_ANGLE (char)191 //���� ����
#define LOWER_LEFT_ANGLE  (char)192 //��� ���
#define LOWER_RIGHT_ANGLE (char)217 // ��� ���� 
#define HORIZONTAL_LINE   (char)196
#define VERTIKAL_LINE     (char)179
//#define WHITE_BOX         (char)219
#define WHITE_BOX         "\xDB\xDB" //escs-������������������ ����� 
#define BLACK_BOX         "  "       //�����
//#define BLACK_BOX         (char)32


//#define ASCII

void main()
{
#ifdef ASCII
	for (int i = 176; i < 224; i++) //���������� �������� ������ ������� ������� (0 - 255)
	{                               //���������� define �����
		//if (i % 16 == 0)cout << endl;      ����. i % 16 == 0 - i- ������ 16
		cout << i << "\t" << (char)i << endl;
	}
#endif

	setlocale(LC_ALL, "");//������������ ������� ���������
	int n;
	cout << "������� ������ �����:"; cin >> n;
	n++; //����������� ����� +1 
	setlocale(LC_ALL, "C");// ������������ ��������� �� ���������
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
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX); //���� �������� i � j ��������� ������� ����� : (� ��������� ������) ������� ������

		}
		cout << endl;
	}
}