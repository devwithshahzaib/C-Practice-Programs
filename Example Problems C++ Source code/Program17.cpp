#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter no. you want to check weather it is +ve or -ve"<<endl;
	cin>>n;
	if(n>1)
	cout<<"Number is Positive"<<endl;
	else if(n<0)
	cout<<"Number is Negative"<<endl;
	else
	cout<<"Number is Zero"<<endl;
	
	return 0;
}
