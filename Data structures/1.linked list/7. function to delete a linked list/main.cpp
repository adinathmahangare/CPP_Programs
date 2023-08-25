//Program to delete a linked list
#include <bits/stdc++.h>
using namespace std;

//linked list node
class Node
{
public:
    int data;
    Node* next;
};

//function to delete a linked list
void deleteList(Node** head_ref)
{
    //deref head_ref to get the real real head

    Node* current = *head_ref;
    Node* next = NULL;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }

    //deref the head_ref to affect the real head back in the caller

    *head_ref = NULL;
}

void push(Node** head_ref, int new_data)
{
    //allocate node
    Node* new_node = new Node();

    //put in the data
    new_node->data = new_data;

    //link the old list off the new node
    new_node->next = (*head_ref);

    //move the head pointer to the new node
    (*head_ref) = new_node;
}

void printList(Node* node)
{
    while(node != NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
}

//driver code
int main()
{
    Node* head = NULL;

    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);

    cout<<"linked list before deleting : ";
    printList(head);
    cout<<endl;
    deleteList(&head);
    cout<<"Linked list after deleting : ";
    printList(head);

    return 0;
}


