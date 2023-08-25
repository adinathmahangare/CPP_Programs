#include <iostream>
using namespace std;

void TakeInputs(int m,int n)
{
    cout<<"Number of rows : "<<m;
    cout<<"Number of columns : "<<n;

    int array[m][n];

    cout<<"Enter the Entries of 2D array : \n"
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<;j++)
        {
            cin>>array[i][j]<<" ";
        }
        cout<<"\n";
    }
    return;
}

void DisplayArray(int m, int n)
{
    int array[m][n];

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
}
int main()
{
    int a,b,c,d;

    cout<<"Enter the entries for first matrix : ";
    cin>>a>>b;
    TakeInputs(a,b);

    cout<<"Enter the entries for second matrix : ";
    cin>>c>>d;
    TakeInputs(c,d);

    cout<<"Our two matrices are : \n\n";
    DisplayArray(a,b);
    cout<<endl;
    DisplayArray(c,d);

    cout<<"Addition of given two matrices is : \n\n";

    for (int i=0;i<a;i++)
    {
        cout<<"[ ";
        for (int j=0;j<b;j++)
        {
            cout<<
        }
    }
    return 0;
}
