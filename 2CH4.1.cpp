#include<iostream>
using namespace std;

void input( int& hour, int& min);
void conversion(char& ampm,int& hour);//recording am/pm as type char 'A' 'P'
void output(char& ampm, int& hour, int& min);
void get_char();

int main() {
	int HOUR, MINUTE;
	char am_pm;
	char yn = 'y';
	while (yn == 'y') {
		input(HOUR, MINUTE);
		conversion(am_pm, HOUR);
		output(am_pm, HOUR, MINUTE);

		cout << "Would you like to enter a time again?[y/n]" << endl;
		cin >> yn;
		//get_char();
		//cout << "*" << endl;
	}
	cout << "==END==" << endl;
}

void input(int& hour, int& min) {
	cout << "Enter the time(two integers,eg:14:12 = 14 12):" << endl;
	cin >> hour >> min;
	
}

void conversion(char& ampm, int& hour)
{
	ampm = 'A';
	if (hour > 12) {
		hour = hour - 12 ;
		ampm = 'P';
	}
}

void output(char& ampm, int& hour, int& min)
{
	if (ampm == 'A') {
		cout << hour << ":" << min << "A.M" << endl;
	}
	else if (ampm == 'P'){
		cout << hour << ":" << min << "P.M" << endl;
	}
}

void get_char(void)
{
	char ch;
	do {
		cin >> ch;
	} while (ch!= '\n');
}