#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"Number of rows : ";
    cin>>m;
    cout<<"Number of columns : ";
    cin>>n;
    cout<<"\n\n";


    int array[m][n];

    //to take input as a 2D array
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>array[i][j];
        }
        cout<<"\n";
    }

    //to print a 2D array
    cout<<"YOUR 2D ARRAY : \n\n";
    for (int i=0;i<m;i++)
    {
        cout<<"[ ";
        for (int j=0;j<n;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<"]";
        cout<<"\n";
    }
    return 0;
}
