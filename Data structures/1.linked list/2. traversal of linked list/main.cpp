//a simple program for traversal of a linked list

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

//this function will print contents of linked list
//starting from the given Node

void printList(Node* n)
{
    while(n!=NULL)
    {
        cout<< n->data<<" ";
        n = n->next;
    }
}

//driver code
int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    //allocates three nodes in a heap
    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;     //assign data in first node
    head->next = second;     //link first node with second node

    second->data = 2;     //assign data in second Node
    second->next = third;   //link second node with third node

    third->data = 3;    //assign data in third node
    third->next = NULL;

    printList(head);

    return 0;

}
