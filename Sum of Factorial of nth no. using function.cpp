#include<iostream>
using namespace std;
long getfact(int n)
{
	long fact=1;
	for(int i=n; n>=1; i--)
	{
		fact = fact*i;
		return fact;
	}
}
int main()
{
	int n;
long sum =0;
cout<<"Enter nthh no."<<endl;
cin>>n;
for(int i=1; i<=n; i++)
{
	sum = sum+ getfact(i);
	cout<<i<<"!+ ";
	
}
	cout<<"\b = "<<sum;
	return 0;	
}
