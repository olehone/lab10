#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int ProcessTXT(char* fname, int& ipos, int& jpos) // обчислення загальної кількості символів + - =
{
	ifstream fin(fname); // відкрили файл для зчитування
	string s; // прочитаний рядок
	int k = 0;
	while (getline(fin, s)) // поки можна прочитати рядок
	{ // скануємо його і обчислюємо кількість + - =
		ipos++;
		for (unsigned j = 0; j < s.length(); j++)
		{
			if (s[j] == ',')
			k++;
			if (k == 3)
			{
				jpos = j;
				break;
			}
		}
		if (k == 3)
			break;
	}
	return k;
}
int main()
{
	// text files
	char fname[100]; // ім'я першого файлу
	char fname2[11] = "text1";
	cout << "enter file name: "; cin >> fname;
	int jpos = 0;
	int ipos = 0;
	ProcessTXT(fname2, ipos, jpos);
	cout << "I : "<< ipos << endl<< "J: " << jpos+1 << endl;
	return 0;
}

 



/*
int main()
{
	string filename = "t.txt";
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "Index of the third comm: " << Find3(str) << endl;
	cout << "Modified string: " << str << endl;
	return 0;
}
*/