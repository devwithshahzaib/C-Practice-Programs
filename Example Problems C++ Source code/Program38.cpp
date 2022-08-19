#include<iostream>
using namespace std;

int main()
{
    int prod=1;
    for(int i=1; i<=10; i=i+2)
    {
        prod=prod*i;
        cout<<"Product of odd no "<<i<< " is: "<<"\t"<<prod<<endl;
    }

    return 0;
}