#include <iostream>
using namespace std;

class ITEMS
{
    int itemCode[50];
    float itemPrice[50];
    int count;
public:
    void CNT(void){count=0;}        //intializes count 0
    void getitem(void);
    void displaySum(void);
    void remove(void);
    void displayItems(void);

};

void ITEMS :: getitem(void)         //assigns value to data members of function
{
    cout<<"Enter item code :";
    cin>>itemCode[count];
    cout<<"Enter item cost :";
    cin>>itemPrice[count];
    count++;

}

void ITEMS :: displaySum(void)          //display total value of all items
{
    float sum=0;
    for (int i=0; i<count; i++)
    {
        sum=sum+itemPrice[i];
    }
    cout<<"\n Toatal value :"<<sum<<endl;

}

void ITEMS :: remove(void)              //delete a specified ITEMS
{
    int a;
    cout<<"Enter a code :";
    cin>>a;

    for (int i=0; i<count; i++)
    {
        if (itemCode[i]==a)
        {
            itemPrice[i]=0;
        }
    }
}

void ITEMS :: displayItems(void)            //displaying ITEMS
{
    cout<<"\n Code Price\n";
    for (int i=0; i<count; i++)
    {
        cout<<"\n"<<itemCode[i];
        cout<<" "<<itemPrice[i];
    }
    cout<<"\n";

}

int main()
{
    ITEMS order;
    order.CNT();
    int x;
    do
    {
        cout<<"\n You can do the following :"<<"Enter appropriate number \n";
        cout<<"\n1 : Add an item";
        cout<<"\n2 : Display total value";
        cout<<"\n3 : Delete an item";
        cout<<"\n4 : Display all items";
        cout<<"\n5 : Quit";
        cout<<"\n\n What is your option?";

        cin>>x;

        switch(x)
        {
            case 1 : order.getitem(); break;
            case 2 : order.displaySum(); break;
            case 3 : order.remove(); break;
            case 4 : order.displayItems(); break;
            case 5 : break;
            default : cout<<"Error in input; try again\n";

        }
    }while(x!=5);

return 0;
}
