#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<endl;

    int i;
    for (i=1;i<=3;i++)
    {
        for (int j=1;j<=n;j++)
        {
            int k=i+j;
            if (k%4==0 || i==2 && j%4==0)
            {
                cout<<"*";
            }
            else{cout<<" ";}
        }
        cout<<endl;
    }
    return 0;
}
