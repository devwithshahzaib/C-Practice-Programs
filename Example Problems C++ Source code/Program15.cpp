#include<iostream>
using namespace std;

int main(){
	
	float salary,grade;
	cout<<"Enter your salary: "<<endl;
	cin>>salary;
	cout<<"Enter your Grades: "<<endl;
	cin>>grade;
	
	if(grade>15){
		cout<<"Your new salary is: "<<(.5*salary)+salary;
	}
	else if(grade<=15){
		cout<<"Your new salary is: "<<(.25*salary)+salary;
	}
	else
	 cout<<"Hello";
	return 0;
}
