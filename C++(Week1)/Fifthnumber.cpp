#include<iostream>
using namespace std;
    int main (){
    int f[5], tmp;
    for(int i=1;i<=5; i++)
    {
        cin >> f[i];
    }
    for(int i=1;i<=4;i++)
    {
        for(int j=i+1;j<=5;j++)
        {
            if(f[i] > f[j])
            {
                tmp = f[i];
                f[i] = f[j];
                f[j] =tmp;
            }
        }
    }
        cout << f[3];
    }

