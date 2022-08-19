#include<iostream>
using namespace std;

int main()
{
    int length, num;

    cout<<"Enter table no. "<<endl;
    cin>>num;
    cout<<"Enter table length "<<endl;
    cin>>length;

    for(int i=1; i<=length; i++)
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }


    return 0;
}