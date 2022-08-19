#include<iostream>
using namespace std;


int main()
{
	int n;
	n=5;
	
	cout<<"The value at n is: "<<n<<endl;
	cout<<"The Address at n is: "<<&n<<endl;
	
	//Now using pointers
	
	int* ptr=&n;
	cout<<"The Address at n Using Pointer ptr is: "<<ptr<<endl;
	cout<<"The value at ponter ptr is : "<<*ptr<<endl;
	
	//Assigning New Value to n using Pointer by accessing Address
	 
	*ptr=7;
	cout<<"The NEW value at ponter ptr is : "<<*ptr<<endl;
	cout<<"The NEW Address at ponter ptr is : "<<ptr<<endl;
	cout<<"The value at n is: "<<n<<endl;


	
	
return 0;
}

