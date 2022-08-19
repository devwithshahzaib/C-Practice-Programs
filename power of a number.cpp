 #include<iostream>
using namespace std;

double raiseToPow(double num, int power)

{
    double result = 1.0;

    for(int i = 1; i <= power; i++)

    {

        result *= num;

    }

    return (result);
}

int main()

{ 

    double num,answer;
    int power,select;

    cout<<"Enter the number of which you want the power"<<endl;
    cin>>num;
    cout<<"Press 1 for +ve power\nPress 2 for -ve power"<<endl;
    cin>>select;
    cout<<"Enter the power"<<endl;
    cin>>power;
    if (select == 1)
    {
    	answer=raiseToPow(num,power);
    	cout<<"The "<<num<<" raise to power "<<power<<" is = "<<answer<<endl;
	}
	else if(select == 2)
		cout<<"The "<<num<<" raise to power -"<<power<<" is = "<<(1/raiseToPow(num,power))<<endl;
    

    return 0;

}
