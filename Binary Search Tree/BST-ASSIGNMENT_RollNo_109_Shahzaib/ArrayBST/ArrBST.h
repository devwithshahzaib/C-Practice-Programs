#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
    data = val;
    Node *left = NULL;
    Node *right = NULL;
    }
};

namespace Arr{
void postOrderArr(Node *root)
{
    if (root != NULL)
    {
        postOrderArr(root->left);
        postOrderArr(root->right);
        cout << root->data << " ";
    }
}


void sortArr(int size)
{
    int arr[size], i, j, temp;
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
}

Node *ArrToBST(int arr[], int start, int end)
{   

    if (start>end)
    {
        return NULL;
    }
    
    int mid = (start + end) / 2;
    Node *root = new Node(arr[mid]);
    root->left = ArrToBST(arr, start, mid - 1);
    root->right = ArrToBST(arr, mid + 1, end);
    return root;

}
void preOrderArr(Node* root)
{
    if (root==NULL)
    {
        return;
    }
    
    cout<<root->data<<" ";
    preOrderArr(root->left);
    preOrderArr(root->right);
}
Node *searchBSTArr(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (key == root->data)

        return root;

    else if (key < root->data)

        return searchBSTArr(root->left, key);

    else
        return searchBSTArr(root->right, key);
}
Node *searchInBSTArr(int key, Node *root)
{

    Node *check = searchBSTArr(root, key);
    if (check != NULL)
    {
        cout << "\nElement " << check->data << " found in this BST..." << endl;
    }
    else
        cout << "\nElement Not Found..." << endl;
}
Node *inOrderPredecessor(Node *root) //right Most child of left subtree
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
Node *deleteNode(Node *root, int value)
{
    Node *iPre;
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
void inOrderArr(Node *root)
{
    if (root == NULL)
    {
        return;
    }
        inOrderArr(root->left);
        cout << root->data << " ";
        inOrderArr(root->right);
    
}
}