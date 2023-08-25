//a simple cpp program to introduce a linked list

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
};

//program to create a simple linked list with 3 nodes

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    //allocate 3 nodes in a heap

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 1;         //assign data in first node
    head->next = second;     //link first node with second node

    second->data = 2;       //assign data in second node
    second->next = third;    //link second node with third node

    third->data = 3;        //assign data to third node
    third->next = NULL;


    return 0;

}
