#include<iostream>
#include<cstring>
#include<cstdint>
using namespace std;

int main(void) {
	int level[6] = { 0 };
	int a ;
	cout << "please enter the grade:" << endl;
	do {
		a = getchar();
		if (a >= '0' && a <= '9') {
			level[a - '0']++;
		}
		else if (a == ',') {

		}
	} while (a != '\n');

	for (int i = 0; i <= 5; i++) {
		cout << level[i] << "of grade" << i << endl;
	}
}