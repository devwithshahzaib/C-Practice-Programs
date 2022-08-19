#include<iostream>
using namespace std;
#include"BST.h"

int main()
{   node *p = createNewNode(9);
    node *p1 = createNewNode(3);
    node *p2 = createNewNode(11);
    p->left = p1;
    p->right = p2;

    bool terminate =true;
            while(terminate!=false)
            {
                
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
                    terminate=false;
                else
                    //cout << "Please Select:\n1. Pre-Order\n2. Post-Order\n3. In-Order ";
                continue;
             }
    return 0;
}
