#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter the first number:  "<<endl;
    cin>>n1;
    cout<<"Enter the second number: "<<endl;
    cin>>n2;
    cout<<"Enter the third number: "<<endl;
    cin>>n3;
     if(n1<n2)
	{			
            if(n1<n3)
			{	
         cout<<"\nSmallest number is:" <<n1;
            }
            else{
                cout<<"\nSmallest number is:"<<n3;
            }
    }
    else{
        if(n2<n3)
		{		
            cout<<"\nSmallest number is:"<<n2;
        }
        else{
            cout<<"\nSmallest number is:"<<n3;
        }
    }
    return 0;
 }
   

   
   
