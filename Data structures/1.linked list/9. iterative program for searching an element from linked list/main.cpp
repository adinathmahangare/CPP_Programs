//iterative program to search an element in linked list
#include <bits/stdc++.h>
using namespace std;

//linked list node
class Node
{
public:
    int key;
    Node* next;
};

//given a reference (pointer to pointer) to the head of the list and
//an int, push a new node  of the list
void push(Node** head_ref, int new_data)
{
    //allocate node
    Node* new_node = new Node();

    //put in the key
    new_node->key = new_data;

    //link the old list off the new node
    new_node->next = (*head_ref);

    //move the head to the point to the new node
    (*head_ref) = new_node;
}

//check whether value of x is present in linked list
bool search(Node *head, int x)
{
    Node* current = head;
    while(current != NULL)
    {
        if (current->key == x)
        {
            return true;
        }
        current = current->next;
    }
    return false;
}

//driver code
int main()
{
    //start the program with empty list
    Node* head = NULL;
    int x = 21;

    push(&head, 10);
    push(&head, 11);
    push(&head, 21);
    push(&head, 22);
    push(&head, 25);
    push(&head, 127);
    push(&head, 17);

    search(head, 21)?cout<<"yes" : cout<<"No";
    return 0;
}
