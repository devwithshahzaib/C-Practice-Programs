#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int UnitPrice = 25;
    int NoOfUnits;
    int TotalBill;

    cout << "Enter No Of Units Consumed: ";
    cin >> NoOfUnits;

    TotalBill = (UnitPrice * NoOfUnits);

    if (NoOfUnits >= 500)
    {
        TotalBill = TotalBill + 2000;
    }
    else if (NoOfUnits >= 700)
    {
        TotalBill = TotalBill + 5000;
    }
    else if (NoOfUnits < 200)
    {
        TotalBill = TotalBill - 1000;
    }
    
    cout<<"\nYour Total Bill is = "<<TotalBill<<" Rupees"<<endl;
    return 0;
}
