#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    float x=1.0,y=2.0;

    while (y<=100)
    {
        x=x+1.0/y;
        y=y+2;
    }
    cout<<"The sum of series is: "<<x<<endl;

    return 0;
}