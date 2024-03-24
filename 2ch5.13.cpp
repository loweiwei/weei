#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(void) {
	int review[4][6] = {
		{3,1,5,2,1,5},
		{4,2,1,4,2,4},
		{3,1,2,4,4,1},
		{5,1,4,2,4,2},
	};
	int inputerror = -1;
	int rating[2][3];
	double distance;
	double mindistance = 7;
	int index = 0;
	do {
		cout << "Enter three movie you would like to rating:(ex:102 5 100 2 101 3)" << endl;
		cin >> rating[0][0] >> rating[1][0] >> rating[0][1] >> rating[1][1] >> rating[0][2] >> rating[1][2];

		for (int j = 0; j < 3; j++) {
			if (rating[0][j] > 105 || rating[0][j] < 100) {
				cout << "error movie enter,please enter again" << endl;
				inputerror = 1;

			}
			else if (rating[1][j] > 5 || rating[1][j] < 1) {
				cout << "error rating enter, please enter again" << endl;
				inputerror = 1;
			}
		}
		cout << inputerror;
	} while (!inputerror);


	for (int i = 0; i < 4; i++) {
		distance = sqrt(pow(abs(rating[1][0] - review[i][rating[0][0] - 100]), 2) + pow(abs(rating[1][1] - review[i][rating[0][1] - 100]), 2) + pow(abs(rating[1][2] - review[i][rating[0][2] - 100]), 2));
		if (distance < mindistance) {
			mindistance = distance;
			index = i;
		}
	}
	cout << "Reviewer " << index << "'s ratings most closely match your ratings.\n";

	for (int i = 0; i < 6; i++) {
		if (i != (rating[0][0] - 100) && i != (rating[0][1] - 100) && i != (rating[0][2] - 100)) {
			cout << "I guess you want to rate " << review[index][i] << " for movie " << i + 100 << ".\n";
		}
	}

}