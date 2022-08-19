#include<iostream>
#define pi 3.1416
using namespace std;
int main(){
	
	float r,aoc,coc;
	cout<<"Enter radius of the circle: "<<endl;
	cin>>r;
	aoc=pi*r*r;
	coc=2*pi*r;
	int x;
	cout<<" ->Press 1 for AOC\n ->Press 2 for COC"<<endl;
	cin>>x;
	if(x==1)
	cout<<"Area of circle is: "<<aoc<<endl;
	else if(x==2)
	cout<<"circumference of circle is: "<<coc<<endl;
	else
	cout<<"Error! Press Only 1 or 2 ";
	return 0;
}
