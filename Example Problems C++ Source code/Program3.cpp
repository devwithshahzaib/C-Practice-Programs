#include<iostream>
using namespace std;

int main()
{
	float base,height;
	
	cout<<"Enter base of triangle"<<endl;
	cin>>base;
	cout<<"Enter height of triangle"<<endl;
	cin>>height;
	
	float area= 0.5*base*height;
	
	cout<<"The Area of triangle is: "<<area<<endl;
	
	return 0;
}
