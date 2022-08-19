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

node *searchBST(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (key == root->data)

        return root;

    else if (key < root->data)

        return searchBST(root->left, key);

    else
        return searchBST(root->right, key);
}

node *itterativeSearchBST(node *root, int key)
{
    while (root != NULL)
    {
        if (key == root->data)

            return root;

        else if (key < root->data)

            root = root->left;

        else
            root = root->right;
    }
    return NULL;
}

node *searchInBST(int key, node *root)
{

    node *check = searchBST(root, key);
    if (check != NULL)
    {
        cout << "Element " << check->data << " Found";
    }
    else
        cout << "Not Found";
}

void insertInBST(node *root, int key)
{
    node *prevNode = NULL;

    while (root != NULL)
    {
        prevNode = root;
        if (key == root->data)
        {
            cout<<"Can't Insert, the given key '"<<key<<"' already exists in BST!"<<endl;
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
            root = root->right;
    }
    node* newNode=createNewNode(key);
    if (key<prevNode->data)
    {
        prevNode->left=newNode;
    }
    else
        prevNode->right=newNode;

}
int main()
{
    node *p, *p1, *p2, *p3, *p4;
    p = createNewNode(12);
    p1 = createNewNode(6);
    p2 = createNewNode(14);
    p3 = createNewNode(5);
    p4 = createNewNode(7);

    p->left = p1;
    p->right = p2;
    p1->left = p;
    p1->right = p4;
    p1->left = p3;

    // cout << "PreOrder: ";
    // preOrder(p);
    // cout << endl;
    // cout << "PostOrder: ";
    // postOrder(p);
    // cout << endl;
    // cout << "InOrder: ";
    // inOrder(p);
    // cout << endl;
    // searchBST(p, 7);




    insertInBST(p,18);
    insertInBST(p,18);
    inOrder(p);
    cout<<endl;

    searchInBST(18, p);

    
    return 0;
}