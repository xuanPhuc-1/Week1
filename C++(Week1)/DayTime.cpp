#include<iostream>
using namespace std;
int main () {
	int hour = 0;
	for (; hour <= 24 ;hour++) {

	  if (hour = 0)
	
	    cout << "12 midnight";
	
	   if (hour = 12)
	
	    cout << "12 noon";
	
	   if (hour < 12)
	
	    cout << hour << "am";
	
	   if (hour > 12)
	
	    cout << hour-12 << "pm";
	}
	return 0;
}
