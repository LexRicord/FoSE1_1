#include "stdafx.h"

using namespace std;

void thirdChoice() {
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char numbers[127];
	int difference[127];

	cout << "Введите строку цифр (<127) ";
	cin >> numbers;
	for (int i = 0; i < strlen(numbers); i++) {
		difference[i] = (int)(numbers[i]);
		if (difference[i] == 0) break;
		cout << "Код элемента [" << i << "] = ";
		cout << difference[i] << endl;
	}

	printf("\n");
}