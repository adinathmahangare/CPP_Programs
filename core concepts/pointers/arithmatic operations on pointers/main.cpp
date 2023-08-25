#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num[] = {56, 75, 22, 18, 90};
    int *ptr;
    int i;
    cout<<"The array values are: \n";
    for(i=0;i<5;i++)
    {
        cout<< num[i]<<"\n";
    }

    //allocating the base address of number to pointer
    ptr=num;

    //printing the value in the array
    cout<<"\nValue of ptr : "<<*ptr;
    cout<< "\n";

    ptr++;
    cout<<"\nValue of ptr++ : "<<*ptr;
    cout<<"\n";

    ptr--;
    cout<<"\nValue of ptr-- : "<<*ptr;
    cout<<"\n";

    ptr = ptr + 2;
    cout<<"\nValue of ptr + 2 : "<<*ptr;
    cout<<"\n";

    ptr = ptr - 1;
    cout<<"\nValue of ptr - 1 : "<<*ptr;
    cout<<"\n";

    ptr = ptr + 3;
    cout<<"\nValue of ptr +3 : "<<*ptr;
    cout<<"\n";

    ptr -= 2;
    cout<<"\nValues of ptr - 2 : "<<*ptr;
    cout<<"\n";

    getch();

    return 0;
}
