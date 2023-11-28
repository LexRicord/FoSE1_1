#include "stdafx.h"

using namespace std;

void secondChoice() {
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char upperText[127];
	const int diffNumber = 32;
	int difference[127];

	cout << "Введите строчные кириллические символы: ";
	cin >> upperText;
	printf("\n");
	for (int i = 0; i < strlen(upperText); i++) {
		difference[i] = upperText[i] - diffNumber;
		if (difference[i] == 'a') break;
		cout << "Зная разность кодов элемента - 32 - получим: [" << i << "] = ";
		cout << (char)difference[i] << endl;
	}
	printf("\n");
}