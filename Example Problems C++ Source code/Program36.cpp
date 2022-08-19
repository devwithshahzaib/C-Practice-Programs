#include<iostream>
using namespace std;

int main()
{
    int fact=1,num,i=1;
    cout<<"Enter no."<<endl;
    cin>>num;

    do
    {
        fact=fact*i;
        i++;
    }
    while(i<=num);
    cout<<"Facorial is: "<<fact<<endl;

     return 0;
}