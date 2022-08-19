#include <iostream>
#include"ArrBST.h"
using namespace Arr;
using namespace std;

Node* sortedArrayToBST(int size){
    
    int* arr = new  int[size];

    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the Number : ";
        cin >> arr[i];
    }

    for (i = 0; i < size; ++i)
    {
        for (j = i + 1; j < size; ++j)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    Node* root =Arr::ArrToBST(arr,0,size-1);
    return root;
}


int main()
{
    int size;
    cout<<"Enter the Size of Array: ";
    cin>>size;
    Node* root = sortedArrayToBST(size);
    
    while (true)
    {
        cout << "\nFollowing Basic Operations are availabe in Array BST Data Structure:" << endl;
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


            break;
        case 2:
            int key;
            cout << "Enter key YOU Want to search: ";
            cin >> key;
            Arr::searchInBSTArr(key, root);
            break;
        case 3:
            
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
                Arr::preOrderArr(root);
                cout << endl;
            }
            else if (print == 2)
            {
                cout << "Print Post-Order: ";
                Arr::postOrderArr(root);
                cout << endl;
            }
            else if (print == 3)
            {
                cout << "Print In-Order: ";
                Arr::inOrderArr(root);
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