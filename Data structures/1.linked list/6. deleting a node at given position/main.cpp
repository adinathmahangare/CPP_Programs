//program to delete a node at a given position

#include <iostream>
using namespace std;

//a linked list node
class Node
{
public:
    int data;
    Node* next;
};

//Given a reference to a (pointer to pointer)
//head of the linked list, int inserts the new node at the front of the list

void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    *head_ref = new_node;
}

//Given a reference (pointer to pointer) to the head of the list and
// the position of the to be deleted

void deleteNode(Node** head_ref, int position)
{
    //if the list is empty
    if(*head_ref==NULL)
        return;

    //store head node
    Node* temp = *head_ref;

    //if head needs to be removed
    if (position==0)
    {
        //change head
        *head_ref = temp->next;

        //free old head
        free(temp);
        return;
    }

    //find the previous node of the node to be deleted
    for(int i=0; temp != NULL && i<position - 1 ; i++)
    {
        temp = temp->next;
    }

    //if position is more than the number of nodes
    if(temp==NULL || temp->next == NULL)
    {
            return;
    }

    //node temp->next is the node to be deleted
    //store pointer to the next node
    Node* next = temp->next->next;

    //unlink the node from the linked list
    free(temp->next);   //free memory

    //unlink the deleted node from list
    temp->next = next;
}

//this function prints the content of the linked list
//list starting from a given node

void printList(Node* node)
{
    while (node != NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
}

//driver code
int main()
{
    //start with the empty list
    Node* head = NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
    push(&head, 8);

    cout<<"Created Linked List : ";
    printList(head);
    cout<<endl;

    deleteNode(&head, 3);
    cout<<"Linked list after deletion of node: ";
    printList(head);

    return 0;

}
