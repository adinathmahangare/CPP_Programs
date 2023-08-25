#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a, *ptr1, **ptr2;


    ptr1 = &a;
    ptr2 = &ptr1;

    cout<<"address of a : "<<ptr1<<"\n";
    cout<<"address of ptr1 : "<<ptr2;
    cout<<"\n\n";

    cout<<"after incrementing the address values:\n\n";
    ptr1+=2;
    cout<<"adress of a : "<<ptr1<<"\n";
    ptr2+=2;
    cout<<"address of ptr1 : "<<ptr2<<"\n";

    return 0;
}
