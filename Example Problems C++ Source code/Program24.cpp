#include<iostream>
using namespace std;
int main(){
	float n1,n2;
	cout<<"Enter two numbers: "<<endl;
	cin>>n1>>n2;
	char op;
	cout<<"Which operation do you want to apply(+/*-)"<<endl;
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<"Sum is "<<n1+n2;
			break;
		case '-':
			cout<<"Sub is "<<n1-n2;
			break;
		case'*':
			cout<<"Multiplication is "<<n1*n2;
			break;
		case '/':
			cout<<"Div is "<<n1/n2;
			break;
		default:
		cout<<"Wrong operator"<<endl;
	}
	
	
}
