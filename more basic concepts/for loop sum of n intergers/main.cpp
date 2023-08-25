#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter any integer : ";
    cin>>n;

    int sum=0;
    for (int i=0;i<n+1;i++)
    {

        sum=sum+i;
    }

    cout<<sum;
    return 0;
}
