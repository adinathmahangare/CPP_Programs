#include <iostream>

using namespace std;

int OtoD(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;
        ans=ans+x*y;
        x=x*8;
        n=n/10;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter a octal number : ";
    cin>>n;

    cout<<"Decimal conversion is : "<<OtoD(n);

    return 0;
}
