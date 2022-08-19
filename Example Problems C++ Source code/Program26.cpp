#include<iostream>
using namespace std;

int main()
{
    int n=1,sum=0;
    while (n<=5)
    {
        cout<<n<<endl;
        sum=sum+n;
        n++;
    }
    cout<<sum<<endl;

    return 0;
}