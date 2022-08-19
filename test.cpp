#include<iostream>
using namespace std;

int main()

{
    int enter;
    cout<<"Following Basic Operations are availabe in BST Data Structure:"<<endl;
    cout<<"1. Insert Element in BST"<<endl;
    cout<<"2. Find Element in BST"<<endl;
    cout<<"3. Remove Element in BST"<<endl;
    cout<<"4. Print BST"<<endl;
    cout<<"5. Exit from Main Menu"<<endl;
    cin>>enter;


    switch (enter)
    {
    case 1:

        
        while (true)
        {
        
            int value;
            char check;
            cout<<"Please enter element to insert in BST"<<endl;
            cin>>value;
            // insertinBST(p,value);
            cout<<"Element Added in BST. Continue [Y/Any other key to exit]:";
            cin>>check;
            if (check=='y' || check=='Y')   
            {
                continue;
            }
            else
            return false; 
        }

        break;
    
    default:
        break;
    }
    
    return 0;
}