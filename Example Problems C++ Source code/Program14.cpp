#include<iostream>
using namespace std;

int main(){
	int x;
	cout<<"Enter no. to check: "<<endl;
	cin>>x;
	if(x % 2==0){
		cout<<"The no. "<<x<<" is EVEN"<<endl;
	}
	else
	cout<<"The no. "<<x<<" is Odd";
	
	return 0;
}
