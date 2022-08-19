#include<iostream>
using namespace std;
int main()

{
	int size;
	cout<<"Size:";
	cin>>size;
	int* myArr= new int[size];
	for(int i=0; i<size; i++)
	{
		cin>>myArr[i];
	}
	for(int i=0; i<size; i++)
	{
	cout<<myArr[i]<<" ";
	}
	delete[]myArr;
	myArr=NULL;
	
	
return 0;
}

