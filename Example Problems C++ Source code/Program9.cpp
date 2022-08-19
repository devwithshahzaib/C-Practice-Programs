#include<iostream>
#define pi 3.1416
using namespace std;
int main(){
	
	float r,aoc,coc;
	//getting input of radius
	cout<<"Enter radius of the Cube: "<<endl;
	cin>>r;
	//Formula
	aoc=4*pi*r*r;
	coc=4/3*pi*r*r*r;
	// printing on screen
	cout<<"\nArea of Cube is: "<<aoc<<endl;
	cout<<"\ncircumference of Cube is: "<<coc<<endl;

	return 0;
}
