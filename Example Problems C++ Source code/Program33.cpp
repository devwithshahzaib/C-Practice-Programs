#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int s,e;
    cout<<"Enter starting no. :"<<endl;
    cin>>s;
    cout<<"Enter ending no. :"<<endl;
    cin>>e;
    
   
    if(s>e)
    cout<<"Starting no. can't be greater than ending"<<endl;
    else if(s%2==0)
            s++;
  do
    { 
        cout<<s<<endl;
        s+=2;
     }
    while(s<=e);
    
    getch();
}