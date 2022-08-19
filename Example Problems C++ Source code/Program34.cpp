#include<iostream>
using namespace std;

int main()
{
    int a,b,result=1;
    cout<<"Enter 1st no."<<endl;
    cin>>a;
    cout<<"Enter 2nd no."<<endl;
    cin>>b;
    int i=1;

    while (i<=b)
    {
        result=result*a;
        i++;
    }
    cout<<"The ans is: "<<result;
    

    return 0;
}