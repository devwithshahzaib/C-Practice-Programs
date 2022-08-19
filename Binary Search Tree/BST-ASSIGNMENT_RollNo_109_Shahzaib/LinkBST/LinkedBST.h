//BST-ASSIGNMENT_RollNo_109_Shahzaib
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};
namespace link{
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

node *searchInBST(int key, node *root)
{
    node *check = searchBST(root, key);
    if (check != NULL)
    {
        cout << "\nElement " << check->data << " found in this BST..." << endl;
    }
    else
        cout << "\nElement Not Found..." << endl;
}

void insertInBST(node *root, int key)
{
    node *prevNode = NULL;

    while (root != NULL)
    {
        prevNode = root;
        if (key == root->data)
        {
            cout << "\nCan't Insert, the given Element '" << key << "' already exists in this BST!" << endl;
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
            root = root->right;
    }
    node *newNode = createNewNode(key);
    if (key < prevNode->data)
    {
        prevNode->left = newNode;
    }
    else
        prevNode->right = newNode;

    cout << "\nElement Added in BST successfuly...! " << endl;
}

node *inOrderPredecessor(node *root) //right Most child of left subtree
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
node *deleteNode(node *root, int value)
{
    node *iPre;
    if (root == NULL)
    {
        return NULL;
    }

    if (root->left == NULL && root->right == NULL)
    {
        delete root;
        return NULL;
    }

    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }
    else
    {
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }

    return root;
}
}