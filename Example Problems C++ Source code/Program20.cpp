#include<iostream>
using namespace std;

int main(){
	float c;
	cout<<"Enter Temprature in celsius"<<endl;
	cin>>c;
	if (c > 35 )
	cout<<"Today is a Hot Day"<<endl;
	else if(c>=25)
	cout<<"Today is a Pleasent day"<<endl;
	else if (c<25)
	cout<<"Today is a Cool day :)";
	else
	cout<<"Hello"<<endl;
	
	return 0;
}
