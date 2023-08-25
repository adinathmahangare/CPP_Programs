#include <iostream>
using namespace std;

//linked list node
struct Node
{
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct LinkedList
{
    Node* head;
    LinkedList()
    {
        head = NULL;
    }

    //function to reverse the linked list
    void reverse()
    {
        //initialize current, previous and next pointers;
        Node* current = head;
        Node *prev = NULL, *next = NULL;



        while (current!=NULL)
        {
            //store next
            next = current->next;

            //reverse current node's pointer
            current->next = prev;

            //move pointers one position ahead
            prev = current;
            current = next;
        }
        head = prev;
    }

    //function to print linked list
    void print()
    {
        struct Node* temp = head;
        while (temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};

int main()
{
    //start with the empty list
    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);

    cout<<"Given linked list : \n";
    ll.print();

    ll.reverse();
    cout<<"Reversed Linked List : \n";
    ll.print();

    return 0;

}



