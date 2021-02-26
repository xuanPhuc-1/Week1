#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main (){
    double a, b, c;
    cin >> a >> b >> c;
    if(a + b <= c || a+c <= b || b+c <= a)
    {
        cout << "This is not a Triangle";
    }
    else
    {
      double s = (a+b+c)/2;
      double area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << "TriangleArea = " << area;
    }
}
