#include<iostream>
using namespace std;

int main()
{
    int i, sum=0,n;
    cout<<"Enter no. "<<endl;
    cin>>n;
    for(i=0; i<=n; i++){
        sum=sum+(i*i);
    }
    cout<<"The sum of Square of integers is: "<<sum;

    return 0;
}