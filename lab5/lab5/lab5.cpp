#include <iostream>
#include <windows.h>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char a;
	const int latDiff = 32;
	char latChar, number;
	unsigned char cyrChar;
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
				cout << "Введите прописной латинский символ: ";
				cin >> latChar;
				cout << "Код:  " << (int)(latChar) << endl;
				cout << "Найдём строчный латинский символ, зная что разница между прописными и строчными символами: 32 " << endl;
				cout << "Код прописного символа:" << (int)(latChar)-latDiff << endl;
				latChar = latChar - (char)latDiff;
				cout << "Символ: " << latChar << endl;
				break;
			case '2':
				cout << "Введите прописной кириличесский символ: ";
				cin >> cyrChar;
				cout << "Код:  " << (int)(cyrChar) << endl;
				cout << "Найдём строчный кириллический символ, зная что разница между прописными и строчными символами: 32 " << endl;
				cout << "Код прописного символа:" << (int)(cyrChar)-latDiff << endl;
				cyrChar = cyrChar - (char)latDiff;
				cout << "Символ: " << cyrChar << endl;
				break;
			case '3':
				cout << "Введите цифру: ";
				cin >> number;
				cout << "Код: " << (int)(number) << endl;
				break;
			case '4':
				cout << "Ладно.\n\n";
				break;
			default:
				cout << "Введённые данные неподходят, введите цифру из предложенных вариантов" << endl;
				cout << "Введите цифру: ";
				cin >> a;
				break;
			}
	}
	return 0;
}