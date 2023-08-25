//iterative method to find total number of nodes in a linked list
#include <bits/stdc++.h>
using namespace std;

//link list node
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

//function to get a count
int getCount(Node* node)
{
    int count = 0;
    Node* current = node;   //initialize current

    while(current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}

void printList(Node *node)
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
    Node *head = NULL;

    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    cout<<"Linked List : ";
    printList(head);
    cout<<"\nTotal numbers of nodes : "<<getCount(head);

    return 0;

}
