#include "stdafx.h"

using namespace std;

int main()
{
		setlocale(LC_ALL, "Rus");

		char a;
		while (true) {
			cout << "Доступные варианты:\n";
			cout << "[1] : определение разницы значений кодов в Windows - 1251 буквы латинского алфавита в прописном и строчном написании;\n";
			cout << "[2] : определение разницы значений кодов в Windows - 1251 буквы русского алфавита в прописном и строчном написании;\n";
			cout << "[3] : вывод в консоль кода символа, соответствующего введенной цифре;\n";
			cout << "[4] : выход из программы.\n";
			cout << "Введите цифру: ";
			cin >> a;
			switch (a) {
			case '1':
				firstChoice();
				break;
			case '2':
				secondChoice();
				break;
			case '3':
				thirdChoice();
				break;
			case '4':
				cout << "До свидания, пользователь!.\n";
				return 0;
			default:
				cout << "Неправильно введёная цифра\n";
				break;
			}
		}
}