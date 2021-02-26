#include<iostream>
#include<math.h>
using namespace std;
int main () {
	double w, h, BMI;
	cin >> w >> h;
	BMI = w / pow(h,2);
	cout << "BMI = " << BMI;
	return 0;
}
