//BST-ASSIGNMENT_RollNo_109_Shahzaib
#include <iostream>
#include "LinkedBST.h"
using namespace link;
using namespace std;

int main()
{
    node *p = link::createNewNode(9);
    node *p1 = link::createNewNode(3);
    node *p2 = link::createNewNode(11);
    p->left = p1;
    p->right = p2;

    while (true)
    {
        cout << "\nFollowing Basic Operations are availabe in BST Data Structure:" << endl;
        cout << "1. Insert Element in BST" << endl;
        cout << "2. Find Element in BST" << endl;
        cout << "3. Remove Element in BST" << endl;
        cout << "4. Print BST" << endl;
        cout << "5. Exit from Main Menu" << endl;
        
        int enter;
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
                link::insertInBST(p, value);
                cout << "Continue [Y/Any other key to exit]: ";
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
            link::searchInBST(key, p);
            break;
        case 3:
            int del;
            cout << "Enter an element YOU Want to Delete: ";
            cin >> del;
            node *test;
            test = link::searchBST(p,del);
            if (test!=NULL)
            {
                link::deleteNode(p, del);
                cout << "Element deleted Sucessfully..." << endl;
            }
            else
                cout << "This Element doesn't Exists in BST..." << endl;
                
            break;
        case 4:
            int print;
            cout << "In Which Order Do you Want to Print:" << endl;
            cout << "1. Pre-Order" << endl;
            cout << "2. Post-Order" << endl;
            cout << "3. In-Order" << endl;
            cout << "4. Abort the Printing" << endl;

            cin >> print;
            if (print == 1)
            {
                cout << "Print Pre-Order: ";
                link::preOrder(p);
                cout << endl;
            }
            else if (print == 2)
            {
                cout << "Print Post-Order: ";
                link::postOrder(p);
                cout << endl;
            }
            else if (print == 3)
            {
                cout << "Print In-Order: ";
                link::inOrder(p);
                cout << endl;
            }
            else if (print == 4)
                break;
            else
                continue;
            break;
        case 5:
            cout << "\nExiting Program..." << endl;
            return false;
            break;
        default:
            cout<<"Choose b/w 1 to 5..."<<endl;
            break;
        }
    }
    return 0;
}
