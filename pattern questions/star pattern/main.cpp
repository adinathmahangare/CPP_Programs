#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<endl;

    int i;
    for (i=1;i<=n;i++)
    {
        int j;
        for (j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        int k=i;
        for (;j<=n;j++)
        {
            cout<<"*"<<" ";
            k--;
        }
        for (j=2;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for (i=n;i>=1;i--)
    {
        int j;
        for (j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        int k=i;
        for (;j<=n;j++)
        {
            cout<<"*"<<" ";
            k--;
        }
        for (j=2;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
