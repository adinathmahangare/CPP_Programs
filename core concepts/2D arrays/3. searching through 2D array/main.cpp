#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the number of rows of matrix : ";
    cin>>m;
    cout<<"Enter the number of columns : ";
    cin>>n;
    cout<<endl;

    int array[m][n];
    cout<<"Enter the elements of matrix : \n";

    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>array[i][j];
        }
        cout<<endl;
    }

    for (int i=0;i<m;i++)
    {
        cout<<"[ ";
        for (int j=0;j<n;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
    cout<<"\n";

    int x;
    cout<<"Enter the element to be searches : ";
    cin>>x;

    int counter=0;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (x==array[i][j])
            {
                cout<<"Element is found at : "<<i<<","<<j;
                counter=1;
                break;
            }

        }
    }
    if (counter==0)
    {
        cout<<"Element is not found in given array.";
    }
return 0;
}
