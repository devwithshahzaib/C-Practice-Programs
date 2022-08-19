#include<iostream>
using namespace std;
int main()

{
	int arr[5];
	cout<<"Address of Array "<<arr<<endl;
	
	for(int i=0; i<5; i++)
	{
		cout<<"Enter no."<<endl;
		cin>>arr[i];
	}
	cout<<"\nSimple Output of Array"<<endl;
	
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"  \t\t";
	}
	
	cout<<"\nAddress of Array "<<endl;
		for(int i=0; i<5; i++)
	{	
		cout<<&(arr[i])<<"     ";
	}
	cout<<"\nOutput using De-referencing Array"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<*(arr+i)<<"  \t\t";
	}
	
	
	
return 0;
}

