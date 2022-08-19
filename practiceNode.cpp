#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->value << " ";
        n = n->next;
    }
}
void insertAtFront(Node **head, int newValue)
{
    Node*newNode=new Node();
    newNode->value=newValue;
    newNode->next=*head;
    *head=newNode;

}

void insertAtEnd(Node **head, int newValue)
{
    Node*newNode= new Node();
    newNode->value=newValue;
    newNode->next=NULL;
    Node* last=*head;
    while (last->next!=NULL )
    {
        last=last->next;
    }
    last->next=newNode;

    
}
int main()
{
    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();

    head->value = 1;
    head->next = first;
    first->value = 2;
    first->next = second;
    second->value = 3;
    second->next = NULL;

    insertAtFront(&head, -1);
    insertAtEnd(&head,4);
    printList(head);

    return 0;
}