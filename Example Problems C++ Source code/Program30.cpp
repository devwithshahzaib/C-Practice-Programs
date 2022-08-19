#include<iostream>
using namespace std;

int main()
{
    int num,fact=1,i=1;
    cout<<"Enter the no. "<<endl;
    cin>>num;
    while (i<=num)
    {
        fact=fact*i;
        i++;
    }
    cout<<"Factorial of no. is: "<<fact;
    
    return 0;
}