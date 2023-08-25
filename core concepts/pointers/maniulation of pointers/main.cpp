#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a=10;
    int *ptr;


    ptr = &a;
    cout<<"Value of a is : "<<*ptr;
    *ptr=*ptr+a;
    cout<<"\nThe revised value of a is "<<a;
    getch();
    return 0;

}
