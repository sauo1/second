#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
using namespace std;

void writeTxtFile(string text)
{
	ofstream fout("text.txt");
	if (fout.is_open()) {
		fout << text;
		fout.close();
	}
}

void readTxtFile()
{
	string buff;
	ifstream fin("text.txt");

	if (fin.is_open()) {
		while (getline(fin, buff)) {
			cout << buff << endl;
		}
		fin.close();
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	string text;
	cout << "read or write?" << endl;
	cin >> text;
	if (text == "read") {
	readTxtFile();
	}
	if (text == "write") {
	string txt;
	cin >> txt;
	writeTxtFile(txt);
	}
	float k = 4.0;
	cout << sizeof(k);
	_getch();
	return 0;
}