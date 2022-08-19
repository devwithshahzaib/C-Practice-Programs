#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};

node *createNewNode(int value)
{
    struct node *newNode = new node;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void preOrder(node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(node *root)
{
    if (root != NULL)
    {
        preOrder(root->left);
        preOrder(root->right);
        cout << root->data << " ";
    }
}
void inOrder(node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

int main()
{
    // {   //Created a Node
    //     struct node *p = new node;
    //     p->data = 1;

    //Created a Node using function

    struct node *p,*p1,*p2,*p3,*p4;
    // p = createNewNode(1);
    // struct node *p1;
    // p1 = createNewNode(2);
    // struct node *p2;
    // p2 = createNewNode(3);
    p=createNewNode(1);
    p1=createNewNode(2);
    p2=createNewNode(3);
    p3=createNewNode(4);
    p4=createNewNode(5);



    //Linking Nodes
    /*
            p                                   Taversal Method
           / \                                 PreOrder: #Root > Left > Right                            
        p1     p2                              postOrder: Left > Right > #Root 
       / \      / \                            inOrder: Left > #Root > Right
    NULL NULL NULL NULL 

            
 */

    p->left = p1;
    p->right = p2;
    p2->left=p3;
    p2->right=p4;
    
    // p->right=NULL;
    // p1->left=NULL;
    // p2->right=NULL;
    // p2->left=NULL;
    preOrder(p);
    cout << endl;
    postOrder(p);
    cout << endl;
    inOrder(p);

    return 0;
}