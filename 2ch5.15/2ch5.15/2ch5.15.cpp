#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>

using namespace std;

int main(void) {
	int password[6] = { 1,1,3,4,5,6 };
	int random_number[10] = { 0 };
	int contract[6] = { 0 };
	int all = 0;
	int input;
	for (int i = 0; i < 10; i++) {
		random_number[i] = rand() % 9 + 1;

		//password[i] = random_number[i];
		//cout << random_number[i] ;
	}
	//random_number[password[i]]
	cout << "pin:0,1,2,3,4,5,6,7,8,9\n" << "num:";
	for (int j = 0; j < 10; j++) {
		cout << random_number[j] << ",";
	}

	for (int k = 0; k <= 5; k++) {
		contract[k] = random_number[password[k]];
		all += contract[k] * pow(10, (5 - k));
	}
	cout << "\n" << all << endl;
	cout << "\nplease enter the num:\n";
	cin >> input;
	if (input == all) {
		cout << "pass" << endl;
	}
	else {
		cout << "error" << endl;
	}

}