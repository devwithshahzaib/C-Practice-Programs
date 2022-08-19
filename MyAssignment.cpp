#include <iostream>
#include "BST.h"
using namespace std;

int main()
{
    node *p = createNewNode(9);
    node *p1 = createNewNode(3);
    node *p2 = createNewNode(11);
    p->left = p1;
    p->right = p2;
    
    while (true)
    {   
        int enter;
            cout << "\nFollowing Basic Operations are availabe in BST Data Structure:" << endl;
            cout << "1. Insert Element in BST" << endl;
            cout << "2. Find Element in BST" << endl;
            cout << "3. Remove Element in BST" << endl;
            cout << "4. Print BST" << endl;
            cout << "5. Exit from Main Menu" << endl;
            cin >> enter;
        switch (enter)
        {
        case 1:
            
            while (true)
            
            {

                int value;
                char check;
                cout << "Please enter element to insert in BST" << endl;
                cin >> value;
                insertInBST(p, value);
                cout << "Element Added in BST. Continue [Y/Any other key to exit]:";
                cin >> check;
                if (check == 'y' || check == 'Y')
                {
                    continue;
                }
                else
                 break;
                
            }
            break;

        case 2:
            int key;
            cout << "Enter key YOU Want to search: ";
            cin >> key;
            searchInBST(key, p);
            break;
        case 3:
            int del;
            cout << "Enter an element YOU Want to Delete: ";
            cin >> del;
            break;
        case 4:
                int print;
                cout << "In Which Order Do you Want to Print:" << endl;
                cout << "1. Pre-Order" << endl;
                cout << "2. Post-Order" << endl;
                cout << "3. In-Order" << endl;
                cout<<"4. Abort the Printing"<<endl;

                cin >> print;
                if (print == 1)
                {
                    cout << "Print Pre-Order: ";
                    preOrder(p);
                    cout<<endl;
                }
                else if (print == 2)
                {
                    cout << "Print Post-Order: ";
                    postOrder(p);
                    cout<<endl;

                }
                else if (print == 3)
                {
                    cout << "Print In-Order: ";
                    inOrder(p);
                    cout<<endl;

                }
                else if(print==4)
                    break;
                else
                    continue;
                    break;
        case 5:
            cout << "\nExiting Program..." << endl;
            return false;
            break;    
        default:
       
            break;
        }
    }

    return 0;
}
