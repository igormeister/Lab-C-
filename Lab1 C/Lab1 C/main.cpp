#include <iostream>
#include <cstring>
#include <string.h>
#include <iomanip>
#include <conio.h>
#include <Windows.h>

#pragma warning(disable: 4996)

using namespace std;



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "����� ����� �������" << endl;
	cout << "������ ��-82" << endl;
	cout << "������� 28" << endl;
	struct txt
	{
		char text[500];
	};
	txt file[10];
	char answer;
	int row = 0;
	do{
		cout << "������� �����" << endl;
		cin.getline(file[row].text, 500);
		cout << "������ ���������� ���� ������ y/n "<<endl;
		answer = getch();
		fflush(stdin);
		row++;
	} while (answer != 'n');
	/*FILE *f;
	f = fopen("Text.txt", "w");
	for (int i = 0; i < row; i++)
	{
		if (i % 2 == 0)
		{
			fputs(file[i].text, f);
			fputs("\n", f);
		}
	}
	fclose(f);*/
	system("pause");
}



