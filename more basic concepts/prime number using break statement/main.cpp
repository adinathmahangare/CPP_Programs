#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter any number : ";
    cin>>n;

    int i;
    for (i=2;i<n;i++)
    {
        if (n%i==0)
            break;
    }

    if (i==n)
    {
        cout<<"Given number is Prime";
    }
    else
    {
        cout<<"Given number is non-prime";
    }
    return 0;
}
