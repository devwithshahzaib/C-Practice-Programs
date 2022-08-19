#include<iostream>
using namespace std;

int main()
{
	int AmirAge=0,AmaraAge=0;
	
	cout<<"Please Enter Amir's age: "<<endl;
	cin>>AmirAge;
	cout<<"Please Enter Amara's ae: "<<endl;
	cin>>AmaraAge;
	
/*	if(AmirAge > AmaraAge)
	{
		cout<<"Amir is older than Amara";
	}
*/	
	if(AmirAge < AmaraAge)
	
	{
		cout<<"Amara is older than Amir";	
	}
	else if(AmirAge == AmaraAge)
	{
		cout<<"Amir is of the same age as Amara";
	}
	else
	cout<<"Amir is older than Amara";

return 0;
}


