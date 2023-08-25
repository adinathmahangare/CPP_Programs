#include <iostream>
using namespace std;

class node
{
    bool bit;
    node *next, *prev;
    friend class dll;
};//class node

class ddl
{
    node *head1, *head2, *head3;
public:
    void readnumbers();
    node *create(node *t);
    void printnumbers();
    void print(node *t);
    void complement();
    void comp1(node *t);
    node* comp2(node *t);
    void add();
    node *addnumbers(node *t1, node *t2);

    dll()
    {
        head1 = head2 = head3 = NULL;
    }
};

void dll::readnumbers()
{
    cout<<"\Enter the first binary number";
    head1=create(head1);
    cout<<"\Enter the second binary number";
    head2=create(head2);
}

node* dll::create(node *t)
{
    int n;
    node *p, *last;
    cout<<"\Enter total bits in number";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        p = new node;
        cout<<"\Enter bit value";
        cin>>p->bit;
        p->prev=NULL;
        p->next=NULL;

        if(t==NULL)
        {
            t=p;
            last=p;
        }
        else
        {
            last->next=p;
            p->prev=last;
            last=p;
        }
    }
return (t);
}

void dll::printnumbers()
{
    cout<<"\nFirst binary number : ";
    print(head1);
    cout<<"\nSecond binary number : ";
    print(head2);
}

void dll::print(node *t)
{
    cout<<" are shown below"<<endl;
    if (t==NULL);
        cout<<"\nEMPTY";
    else
        do
        {
            cout<<t->bit<<" ";
            t=t->next;
        }
        while(t!=NULL)
        cout<<"\n";
}

void dll::add()
{
    cout<<"\nAddition of two numbers ";
    head3=addnumber(head1,head2);
    print(head3);
}

node* dll::addnumbers(node *t1,node *t2)
{
    int c,sum,bit1,bit2;
    node *p;
    if(t1!=NULL && t2==NULL)
        head3=t1;
    else if(t1==NULL && t2!=NULL)
        head3=t2;
    else
    {
        c=0;
        sum=0;
        while(t1->next!=NULL)
        {
            t1=t1->next;
        }
        while(t2->next!=NULL)
        {
            t2=t2->next;
        }

        while(t1!=NULL || t2!=NULL)
        {
            if(t1!=NULL)
            {
                bit1=t1->bit;
            }
            else
            {
                bit1=0;
            }

            if(t2!=NULL)
            {
                bit2=t2->bit;
            }
            else
            {
                bit2=0;
            }

            sum = bit1 + bit2 + c;
            c = sum/2;
            sum = sum%2;

            p = new node;
            p->bit=sum;
            p->next=p->prev=NULL;

            if(head3==NULL)
            {
                head3 = p;
            }
            else
            {
                p->next=head3;
                head3->prev=p;
                head3=p;
            }

            if(t1!=NULL)
                t1=t1->prev;
            if(t2!=NULL)
                t2=t2->prev;
        }
        if(c=1)
        {
            p = new node;
            p->bit=c;
            p->next=p->prev=NULL;
            p->next=head3;
            head3->prev=p;
            head3=p;
        }
    }
    return head3;
}

