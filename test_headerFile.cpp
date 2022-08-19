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
    int print;

    // int enter;
    // cout << "Following Basic Operations are availabe in BST Data Structure:" << endl;
    // cout << "1. Insert Element in BST" << endl;
    // cout << "2. Find Element in BST" << endl;
    // cout << "3. Remove Element in BST" << endl;
    // cout << "4. Print BST" << endl;
    // cout << "5. Exit from Main Menu" << endl;
    // cin >> enter;

    while (true)
    {   
        int enter;
        cout << "Following Basic Operations are availabe in BST Data Structure:" << endl;
        cout << "1. Insert Element in BST" << endl;
        cout << "2. Find Element in BST" << endl;
        cout << "3. Remove Element in BST" << endl;
        cout << "4. Print BST" << endl;
        cout << "5. Exit from Main Menu" << endl;

        cin >> enter;
        switch (enter)
        {
        case 1:
            bool istrue;
            while (istrue!=false)
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
                    return istrue=false;
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

            // bool terminate; 
            // while(terminate!=false)
            // {
                
                cout << "In Which Order Do you Want to Print:" << endl;
                cout << "1. Pre-Order" << endl;
                cout << "2. Post-Order" << endl;
                cout << "3. In-Order" << endl;
                cout<<"4. Abort the Printing"<<endl;
                int print;
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
                    //cout << "Please Select:\n1. Pre-Order\n2. Post-Order\n3. In-Order ";
                continue;
            //  }

        case 5:
            cout << "Exiting Program" << endl;
            return false;
        default:
            cout << "Please Select the Following:" << endl;
            cout << "1. Insert Element in BST" << endl;
            cout << "2. Find Element in BST" << endl;
            cout << "3. Remove Element in BST" << endl;
            cout << "4. Print BST" << endl;
            cout << "5. Exit from Main Menu" << endl;
            break;
        }
    }

    return 0;
}