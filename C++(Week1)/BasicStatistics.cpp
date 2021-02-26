#include<iostream>
#include<math.h>
using namespace std;
int main () {
	int n, arr[n], sum = 0, max = 0, min = 1000, tb;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		cin >> arr[i];
		sum = sum +arr[i];
		if(arr[i] > max)
		max = arr[i];
		if(arr[i] < min)
		min = arr[i];
	}
	tb = sum/n;
	cout << "Mean: " << tb << endl;
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
}
