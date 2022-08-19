#include<iostream>
using namespace std;

int main(){
	int salary;
	cout<<"Enter your salary: "<<endl;
	cin>>salary;
	if(salary>=20000){
		cout<<"7% of your salary will be deducted "<<endl;
		cout<<"And your new Net-Salary is "<<salary-(.07*salary);
	}
	else if(salary>=10000 && salary<20000){
		cout<<"1000 will be deducted from your salary"<<endl;
		cout<<"And your new Net-Salary is = "<<salary-1000;
	}
	else if (salary<10000){
		cout<<"Nothing is deducted from your salary :)"<<endl<<"Your net salary is = "<<salary;
	}
	else 
	 cout<<"Welcome sir!";
	
	return 0;
}
