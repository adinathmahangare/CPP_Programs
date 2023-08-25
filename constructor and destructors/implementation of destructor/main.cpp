#include <iostream>
using namespace std;

int count=0;

class test
{
public:
    test()
    {
        count++;
        cout<<"\n\nConstructor Msg: Object Number "<<count<<" Created...";

    }
    ~test()
    {
        cout<<"\n\nDestructor MSg: Object Number "<<count<<" Destroyed...";
        count--;
    }
};

int main()
{
    cout<<"Inside the main block...";
    cout<<"\n\nCreating first object T1...";

    test T1;

    {
        //block 1
        cout<<"\n\nInside the block 1...";
        cout<<"\n\nConstructing two more objects T2, T3...";
        test T2, T3;
        cout<<"\n\n Leaving block 1...";

    }

    cout<<"\n\nBack inside the main block...";
return 0;
}
