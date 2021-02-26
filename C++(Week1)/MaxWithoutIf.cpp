#include<iostream>
#include<math.h>
using namespace std;
int main () {
	int a, b, max;
	cin >> a >> b;
	max = ((a+b)+abs(a-b))/2;
	cout << "Max= " << max;
	return 0;
}
