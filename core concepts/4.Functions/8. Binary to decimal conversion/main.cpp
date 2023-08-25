#include <iostream>
using namespace std;

int BtoD(int bnry)
{
    int ans=0;
    int x=1;//basically x is 2^0, 2^1,...

    while (bnry>0)
    {
        int y=bnry%10;
        ans=ans+x*y;
        x=x*2;
        bnry=bnry/10;

    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter a binary number : ";
    cin>>n;

    cout<<"Decimal number is : "<<BtoD(n);


    return 0;
}
