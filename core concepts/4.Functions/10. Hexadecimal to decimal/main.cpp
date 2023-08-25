#include <bit/stdc++.h>
using namespace std;

int HtoD(string n)
{
    int ans=0;
    int x=1;

    int s=n.size();
    fot (int i=s-1;i>=0;i--)
    {
        if(n[i>='0' && n[i]<='9')
        {
            ans=ans+x*(n[i]-'0');

        }
        else if (n[i>='A' && n[i]<='F')
        {
            ans=ans+x*(n[i]-'A'+10);
        }
        x*=16;

    }



    return ans;
}

int main()
{
    int n;
    cout<<"Enter a hexadecimal number : ";
    cin>>n;

    cout<<"Decimal coversion of the number is : "<<HtoD(n);
    return 0;
}
