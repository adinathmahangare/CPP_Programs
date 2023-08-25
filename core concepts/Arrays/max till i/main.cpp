#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Total number of elements in array : ";
    cin>>n;

    int array[n];
    int mx=-199999;
    for (int i=0;i<n;i++)
    {
        cin>>array[i];


    }
    cout<<endl;

    for (int i=0;i<n;i++)
    {
        mx=max(mx,array[i]);
        cout<<"max till i : "<<i<<endl;
        cout<<mx<<endl;
    }




    return 0;
}
