//a complete working C++ program to demonstrate all insertion methods on linked list

#include <bits/stdc++.h>
using namespace std;

//a linked list Node
class Node
{
public:
    int data;
    Node *next;
};

/*Given a reference (pointer to pointer)
to the head of the list and an int, inserts
a new node on the front of the list*/

void push(Node** head_ref, int new_data)
{
    //1.allocate node
    Node* new_node = new Node();

    //2.put in the data
    new_node->data = new_data;

    //3.Make next of the new node as head
    new_node->next = (*head_ref);

    //4.move the head pointer to the new node
    (*head_ref) = new_node;
}

/*Given a prev_node, insert the new node
after the given prev_node*/

void insertAfter(Node* prev_node, int new_data)
{
    //1.check if the given previous node is not empty
    if (prev_node == NULL)
    {
        cout<<"the given previous node cannot be NULL";
        return;
    }

    //2.allocate new node
    Node* new_node = new Node();

    //3.put in the data
    new_node->data = new_data;

    //4.Make next of new node as next of Prev_node
    new_node->next = prev_node->next;

    //5.Move the next of prev_node as next_node
    prev_node->next = new_node;
}

/*Given a reference (pointer to pointer) to head of the
list  and an int, append a new node at the end*/

void append(Node** head_ref, int new_data)
{
    //1. allocate node
    Node* new_node = new Node();

    Node *last = *head_ref;         //used in a step 5

    //2. put in the data
    new_node->data = new_data;

    //3. give new_node next as NULL since it's last node
    new_node->next = NULL;

    //4. if the linked list is empty, then make a new node as head
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    //5. else traverse till the last node
    while (last->next != NULL)
    {
        last = last->next;
    }

    //6. change the next of last node
    last->next = new_node;
    return;
}

//this function prints contents of linked list starting from head
void printList(Node *node)
{
    while (node != NULL)
    {
        cout<<" "<<node->data;
        node = node->next;
    }
}

//driver code
int main()
{
    Node *head =NULL;

    append(&head, 6);           // 6
    push(&head, 7);             // 7  6
    push(&head, 1);             // 1  7  6
    append(&head, 4);           // 1  7  6  4
    insertAfter(head->next,8);  // 1  7  8  6  4

    cout<<"Created linked list is: ";
    printList(head);

    return 0;





}
