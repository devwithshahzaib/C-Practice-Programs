#include<iostream>
#define pi 3.1416
using namespace std;
int main(){
	
	float r,aoc,coc;
	int x;
	cout<<"Enter radius of the circle: "<<endl;
	cin>>r;
	
	aoc=pi*r*r;
	coc=2*pi*r;
	
	cout<<" ->Press 1 for AOC\n ->Press 2 for COC"<<endl;
	cin>>x;
	
	//if user enters 1 it calculates AOC... if 2, COC
	if(x==1)
		cout<<"Area of circle is: "<<aoc<<endl;
	else if(x==2)
		cout<<"circumference of circle is: "<<coc<<endl;
	else
		cout<<"Please enter 1 OR 2 for AOC Or COC respectively";
		
	return 0;
}
