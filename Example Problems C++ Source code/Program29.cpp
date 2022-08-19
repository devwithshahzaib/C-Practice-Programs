#include<iostream>
using namespace std;
int main()
{
	int i=1,no,fact=1;
	cout<<" Enter Any Number: "<<endl;
	cin>>no;

	while(i<=no){
        fact = fact*i;
		i++;
    }
	cout<<"\n Factorial of given Number is: "<<fact;
        return 0;
}