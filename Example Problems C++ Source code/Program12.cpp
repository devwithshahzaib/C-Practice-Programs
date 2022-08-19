#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
	double a,b,c,s,area;
	
		cout<<"Enter three sides of triangle: "<<endl;
		cin>>a;
		cin>>b;
		cin>>c;
	s= (a+b+c)/2;
	area= sqrt (s*(s-a)*(s-b)*(s-c));
		cout<<"Area of triangle is: "<<area;
	return 0;
}
