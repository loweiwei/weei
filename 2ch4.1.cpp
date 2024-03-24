#include<iostream>
using namespace std;

void input(int& hour,int& min);
void conversion(int& hour, int& min, char& ampm);
void output(int& hour, int& min, char& ampm);

int main(void) {
	int hour = 0, min = 0;
	char ampm;
	char yn='y';
	while (yn == 'y') {
		input(hour, min);
		conversion(hour, min, ampm);
		output(hour, min, ampm);

		cout << "Would you like to enter a time again?[y/n]" << endl;
		cin >> yn;
	}
}

void input(int& hour, int& min)
{
	cout << "enter the time as 24hour type(ex:14:50 as 14 50):";
	cin >> hour >> min;
}

void conversion(int& hour, int& min,char& ampm)
{
	ampm = 'A';
	if (hour > 12) {
		hour = hour - 12;
		ampm = 'P';
	}
}

void output(int& hour, int& min, char& ampm)
{
	if (ampm == 'A') {
		cout << "the time is" << hour <<":" << min << "A.M" << endl;
	}
	else if (ampm == 'P') {
		cout << "the time is" << hour<<":" << min << "P.M" << endl;
	}
}