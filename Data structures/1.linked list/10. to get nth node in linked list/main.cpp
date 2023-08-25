//c++ program to find nth node in a linked list

#include <bits/stdc++.h>
using namespace std;

//linked list node
class Node
{
public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

//takes head pointer of linked list and index
//as a argument and return data at index
int GetNth(Node* head, int index)
{
    Node* current = head;

    //the index of node we  are currently looking at
    int count = 0;
    while (current != NULL)
    {
        if(count == index)
        {
            return current->data;
        }
        count++;
        current = current->next;
    }

    assert(0);      //for wrong input
}

//driver code
int main()
{
    //start with the empty list
    Node* head = NULL;

    push(&head, 23);
    push(&head, 24);
    push(&head, 25);
    push(&head, 26);
    push(&head, 28);
    push(&head, 27);
    push(&head, 29);

    cout<<"Element at index 3 is "<<GetNth(head, 3);

    return 0;
}
