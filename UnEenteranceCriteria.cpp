#include<iostream>
using namespace std;

int main()
{
	int interMarks=0,passingMarks=0;
	
	cout<<"Please enter inter marks Percentage: "<<endl;
	cin>>interMarks;
	cout<<"Please enter test marks(1-100): "<<endl;
	cin>>passingMarks;
	
	if(interMarks>45)
		{ if(passingMarks >= 50)			//if(!((interMarks>45) && (passingMarks >= 50))) Unary not operator
	{
		cout<<"Welcome to university! "<<endl;	
	}
	else
	cout<<"You are not allowed for addmission"<<endl;
}

return 0;
}


