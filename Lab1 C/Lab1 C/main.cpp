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
	cout << "Автор Игорь Шерстюк" << endl;
	cout << "Группа ИС-82" << endl;
	cout << "Вариант 28" << endl;
	struct txt
	{
		char text[500];
	};
	txt file[10];
	char answer;
	int row = 0;
	do{
		cout << "Введите текст" << endl;
		gets(file[row].text);
		cout << "Хотите продолжить ввод текста y/n "<<endl;
		answer = getch();
		fflush(stdin);
		row++;
	} while (answer != 'n');
	for (int i = 0; i < row; i++)
	{
		char* ptr = strtok(file[i].text, " .,!?");
		char* max = ptr;
		char* word;

		do {
			if (strlen(max) < strlen(ptr))
			{
				max = ptr;
			}
		} while (ptr = strtok(NULL, " .,!?"));

		cout << max << endl;
	}
	/*FILE *f;
	f = fopen("Text.txt", "w");
	for (int i = 0; i < row; i++)
	{
		if (i % 2 == 1)
		{
			fputs(maxidx, f);
			fputs("\n", f);
		
		}
	}
	fclose(f);*/
	system("pause");
}



