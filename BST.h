#include<iostream>
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
        cout << "\nElement " << check->data << " Found in This BST"<<endl;
    }
    else
        cout << "\nElement Not Found"<<endl;;
}

void insertInBST(node *root, int key)
{
    node *prevNode = NULL;

    while (root != NULL)
    {
        prevNode = root;
        if (key == root->data)
        {
            cout<<"\nCan't Insert, the given key '"<<key<<"' already exists in BST!"<<endl;
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