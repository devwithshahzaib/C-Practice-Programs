#include <iostream>
using namespace std;

int main()
{
  int x = 4, y = 5, temp;
  cout<<"Before exchanging\n x = "<<x<<" y = "<<y<<endl;
  x=temp;
  x=y;
  temp=y;
  cout<<"After exchanging\n x = "<<x<<" y = "<<y;
    return 0;
}
