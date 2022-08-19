#include <iostream>
using namespace std;

struct Node //User-defined data type first block store value the second one store address of another node
{
    int value;
    Node *next;
};
Node *creatNewNode(int value)
{
    Node *newNode = new Node();
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}
void printList(Node *n)
{

    while (n != NULL)
    {
        cout << n->value << " ";
        n = n->next;
    }
}

void insertAtFront(Node **head, int value)
{
    Node *newNode = creatNewNode(value);
    newNode->next = *head; //Node's next will be pointing to ex-head;
    *head = newNode;       //ex-head is now storing address of new inserted node
}

void insertAtEnd(Node **head, int value)
{
    // Node *newNode = new Node(); //created a new node
    // newNode->value = value;     //assigned value
    // newNode->next = NULL;       //Node's next will be pointing to NULL
    Node *newNode = creatNewNode(value);

    if (*head == NULL) //If node is not Created
    {
        *head = newNode;
        return;
    }
    Node *last = *head;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
}

void insertAfter(Node *previous, int value)
{
    if (previous == NULL)
    {
        cout << "Previous can not be NULL";
        return;
    }

    // Node *newNode = new Node();
    // newNode->value = value;
    Node *newNode = creatNewNode(value);
    newNode->next = previous->next;
    previous->next = newNode;
}

int main()
{
    Node *head = creatNewNode(1);
    Node *first = creatNewNode(2);
    Node *second = creatNewNode(3);
    Node *third = creatNewNode(4);
    Node *fourth = creatNewNode(5);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    // insertAtFront(&head, 0);
    // insertAtFront(&head, -1);
    // insertAtFront(&head, -2);

    // insertAtEnd(&head, 9);
    // insertAtEnd(&head, 10);
    // insertAfter(third,13);
    // insertAfter(second,8);
    // insertAtFront(&head,-3);
    printList(head); //Print the values stored in list
}