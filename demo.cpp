#include <iostream>
using namespace std;

struct Node //User-defined data type first block store value the second one store address of another node
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

void insertAtFront(Node **head, int value)
{
    Node *newNode = new Node();
    newNode->value = value;
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(Node **head, int value)
{
    Node *newNode = new Node(); //created a new node
    newNode->value = value;     //assigned value
    newNode->next = NULL;       //Node's next will be pointing to NULL

    if (*head == NULL) //If node is node Created
    {
        *head = newNode;
        return;
    }
    Node *last = *head;
    while (last != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
}
int main()
{
    Node *head = new Node();
    Node *first = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head->value = 1;
    head->next = second;
    second->value = 2;
    second->next = third;
    third->value = 3;
    third->next = fourth;
    fourth->value = 4;
    fourth->next = NULL;
    insertAtFront(&head, 0);
    insertAtFront(&head, -1);
    insertAtFront(&head, -2);
    insertAtEnd(&head, 9);

    printList(head); //Print the values stored in list
}
