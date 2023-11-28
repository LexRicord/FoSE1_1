#include "stdafx.h" 

using namespace std;

char lf[] = "HermanAlexander2002";

/*HermanAlex2002*/

/*48 65 72 6d 61 6e 41 6c 65 78 61 6e 64 65 72 32 30 30 32 00*/
/*0034 0038 0020 0036 0035 0020 0037 0032 0020 0036 0064 0020 0036 0031 0020 0036 0065 0020 0034 0031 0020 0036 0063 0020 0036 0035 0020 0037 0038 
0020 0036 0031 0020 0036 0065 0020 0036 0034 0020 0036 0035 0020 0037 0032 0020 0033 0032 0020 0033 0030 0020 0033 0030 0020 0033 0032 */

char rf[] = "ГерманАлександр2002";

/*ГерманАлександр2002*/

/*c3 e5 f0 ec e0 ed c0 eb e5 ea f1 e0 ed e4 f0 32 30 30 32*/
/*0063 0033 0020 0065 0035 0020 0066 0030 0020 0065 0063 0020 0065 0030 0020 0065 0064 0020 0063 0030 0020 0065 0062 0020 0065 0035 0020 0065 0061 
0020 0066 0031 0020 0065 0030 0020 0065 0064 0020 0065 0034 0020 0066 0030 0020 0033 0032 0020 0033 0030 0020 0033 0030 0020 0033 0032*/


char lr[] = "Герман2002Alex";

/*Герман2002Alex*/

/*c3 e5 f0 ec e0 ed 32 30 30 32 41 6c 65 78 */
/*0063 0033 0020 0065 0035 0020 0066 0030 0020 0065 0063 0020 0065 0030 0020 0065 0064 0020 0033 0032 0020 0033 0030 0020 0033 0030 0020 0033 0032 
0020 0034 0031 0020 0036 0063 0020 0036 0035 0020 0037 0038*/

wchar_t Llp[] = L"HermanAlex2002";
wchar_t Lrf[] = L"ГерманАлександр2002";
wchar_t Llr[] = L"Герман2002Alex";

char* UpperW1251(char* source);

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	char source[] = "1sdfLSDFбБгГэЭ2345";
	char destination[20];
	strcpy_s(destination, source);
	UpperW1251(destination);

	cout << destination << endl;

	system("pause");
	return 0;
}

char* UpperW1251(char* destination)
{	
	const int length = strlen(destination);
	for (int i = 0; i < length; i++)
	{
		if (destination[i] >= 57 || destination[i] <= 48)
		{
			destination[i] = destination[i] - 32;
		}
	}
	return destination;
}