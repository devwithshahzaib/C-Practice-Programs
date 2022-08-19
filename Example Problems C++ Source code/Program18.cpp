#include<iostream>
using namespace std;

int main(){
	
	float grade;
	cout<<"Enter your Grade Score 1-100"<<endl;
	cin>>grade;
	if(grade>=90)
		cout<<"A Grade"<<endl;

	else if(grade>=80 && grade<=90)
		cout<<"B Grade"<<endl;

	else if(grade>=70 && grade<=79)
		cout<<"C Grade"<<endl;
	
	else if(grade>=60 && grade<=69)		
		cout<<"D Grade"<<endl;
	
	else if(grade>=50 && grade<=59)		
		cout<<"E Grade"<<endl;
	
	else if(grade<50)
		cout<<"F Grade"<<endl;
	return 0;
	
}
