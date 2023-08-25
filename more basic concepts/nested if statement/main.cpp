#include <iostream>

using namespace std;

int main()
{
    int savings;
    cout<<"Enter your savings : ";
    cin>>savings;

    if (savings>5000)
    {
        if (savings>10000)
        {
            cout<<"Road trip with Neha";
        }
        else if (savings>5000)
        {
            cout<<"Shopping with Neha";
        }

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
