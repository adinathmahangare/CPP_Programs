#include <iostream>
using namespace std;

int sum(int n)
{
    int add=0;
    for (int i=1;i<=n;i++)
    {
        add=add+i;
    }
    return add;
}

int main()
{
    int num;
    cin>>num;

    cout<<sum(num);
    return 0;
}
