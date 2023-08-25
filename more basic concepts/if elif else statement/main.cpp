#include <iostream>

using namespace std;

int main()
{
    int savings;
    cout<<"Enter today's savings : ";
    cin>>savings;

    if (savings>5000)
    {
        cout<<"Neha";
    }
    else if (savings>3000)
    {
        cout<<"Rashmi";
    }
    else
    {
        cout<<"Friends";
    }

    return 0;
}
