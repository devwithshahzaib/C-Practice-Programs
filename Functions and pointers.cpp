#include<iostream>
using namespace std;
int printInt(int* ptr)
{
	cout<<*ptr<<endl;
}

long printLong(long* ptr)
{
	cout<<*ptr<<endl;
}

char printChar(char* ptr)
{
	cout<<*ptr<<endl;
}

float printFloat(float* ptr)
{
	cout<<*ptr<<endl;
}

double printDouble(double* ptr)
{
	cout<<*ptr<<endl;
}
//Now Using Void function for pointers 

void printPtr(void* ptr, char type)
{
	switch(type)
	{
		case 'i':
			cout<<*((int*)ptr)<<endl;
			break;
		case 'c':
			cout<<*((char*)ptr)<<endl;
			break;
		case 'f':
			cout<<*((float*)ptr)<<endl;
			break;
		case 'd':
			cout<<*((double*)ptr)<<endl;
			break;
		case 'l':
			cout<<*((long*)ptr)<<endl;
			break;
			
	}
	
}


int main()


{
	int number;
	long number2;
	char letter;
	float points;
	double points2;
	
	number=4;
	number2=10;
	letter='s';
	points=9.8;
	points2=3.141789;
	
	//Creating Pointers
	
	int* numPtr=&number;
	long* numPtr2=&number2;
	char* letterPtr=&letter;
	double* points2Ptr=&points2;
	float* pointsPtr=&points;
	
	//Printing Address
	
	cout<<"The address of number int variable "<<number<<" is: "<<numPtr<<endl;
	cout<<"The address of number long variable "<<number2<<" is: "<<numPtr2<<endl;
	cout<<"The address of Char variable "<<letter<<" is: "<<letterPtr;
	cout<<"The address of float variable "<<points<<" is: "<<pointsPtr<<endl;
	cout<<"The address of double variable "<<points2<<" is: "<<points2Ptr<<endl;	
	
	//De-referencing Pointers Using Function
			
	cout<<"De-referencing pointers"<<endl;
	printInt(numPtr);
	printLong(numPtr2);
	printChar(letterPtr);
	printFloat(pointsPtr);
	printDouble(points2Ptr);
	cout<<"\nNOW Using Void function for void pointers"<<endl;
	printPtr(numPtr,'i');
	printPtr(numPtr2,'l');
	printPtr(letterPtr,'c');
	printPtr(pointsPtr,'f');
	printPtr(points2Ptr,'d');
	
return 0;
}

