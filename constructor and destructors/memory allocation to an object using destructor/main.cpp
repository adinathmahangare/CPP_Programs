#include <iostream>
#include <conio.h>
using namespace std;

class test
{
    int *a;
public:
    test(int size)
    {
        a=new int[size];
        cout<<"\n\nConstructor Msg : Integer array size "<<size<<" Created...";
    }
    ~test()
    {
        delete a;
        cout<<"\n\nDestructor Msg : Freed up the memory allocation for integer array";
    }
};

int main()
{
    int s;
    cout<<"Enter the size of array";
    cin>>s;
    cout<<"\n\nCreating object of test class...";
    test T(s);
    cout<<"\n\nPress any key to end the program...";
    getch();


return 0;
}
