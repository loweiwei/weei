#include<iostream>
using namespace std;

double converttomph(int min, int sec);
double converttomph(double kph);

int main(void) {
	int min;
	int sec;
	double kph;
	int inp;

	while (1) {
		cout << "input a number to decide what you want to do.\n";
		cout << "1.input min and sec per mile to get mph.\n";
		cout << "2.input kph to get nph.\n";
		cout << "3.end the program.\n";
		cin >> inp;

		switch (inp) {
		case 1:
			cout << "input the min:";
			cin >> min;
			cout << "input the sec:";
			cin >> sec;
			cout << "mph is" << converttomph(min, sec) << "\n\n";
			break;
		case 2:
			cout << "input your kph:" << endl;
			cin >> kph;
			cout << "mph is" << converttomph(kph) << endl;
			break;
		case 3:
			return 0;
		default:
			cout << "please input again\n";
			break;

		}

	}
}


double converttomph(int min, int sec)
{
	double time = min * 60 + sec;
	return 3600 / time;
}

double converttomph(double kph)
{
	return kph / (double)1.61;
}