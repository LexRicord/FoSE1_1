#include <iostream>
#include <windows.h>
#include "guessNumber.h"
#include "snake.h"

using namespace std;
void main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "ru");
	char choice;
	do
	{
		system("cls");
		cout << "Выберите игру" << endl;
		cout << "1 - Змейка" << endl;
		cout << "2 - Угадать цифру" << endl;
		cout << "3 - Выход" << endl;
		cin >> choice;
		switch (choice)
		{
		case '1':
			SnakeMain();
			break;
		case '2':
			GuessNumMain();
			break;
		case '3':
			cout << "Thanks for coming!" << endl;
			break;
		}
	} while (choice != 3);
	system("pause");
}