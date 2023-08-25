//program to demonstrate deleting a node in a linked list with class

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

//Given a reference (pointer to pointer) to the head of the linked list and an int,
//insert a new node in the front of the list

void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

//Given a reference (pointer to pointer) to the head of the list and a key,
//deletes the first occurrence of the key in list

void deleteNode(Node** head_ref, int key)
{
    //store head node
    Node* temp = *head_ref;
    Node* prev = NULL;

    //if head node itself holds key to be deleted
    if(temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        delete temp;
        return;
    }

    //else search for the key to be deleted
    //keep track of the previous node as we need to
    //change 'prev->next'

    else
    {
        while(temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }

        //if key is not present in linked list
        if(temp==NULL)
        {
            return;
        }

        //unlink the node from linked list
        prev->next = temp->next;

        //free memory
        delete temp;
    }
}

//this function prints contents of linked starting from the given node
void printList(Node* node)
{
    while (node != NULL)
    {
        cout<<node->data <<" ";
        node = node->next;
    }
}

//driver code
int main()
{
    //start with the empty list
    Node* head = NULL;

    //Add elements in linked list
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    puts("Created Linked List: ");
    printList(head);

    deleteNode(&head, 1);
    puts("\nLinked List after deletion of 1: ");

    printList(head);

    return 0;

}

