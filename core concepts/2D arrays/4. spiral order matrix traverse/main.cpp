#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the number of rows : ";
    cin>>m;
    cout<<"Enter the number of columns : ";
    cin>>n;
    cout<<"\n";

    int array[m][n];
    cout<<"Enter the entries of matrix : \n";

    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>array[i][j];
        }
        cout<<endl;

    }

    int row_start=0,row_end=m-1,col_start=0,col_end=n-1;

    while (row_start<=row_end && col_start<=col_end)
    {
        //for starting row
        for (int col=col_start;col<=col_end;col++)
        {
            cout<<array[row_start][col]<<" ";
        }
        row_start=row_start+1;


        //for ending column
        for (int row=row_end;row<=row_end;row++)
        {
            cout<<array[row][col_end]<<" ";
        }
        col_end=col_end-1;


        //for ending row
        for (int col=col_end;col>=col_start;col--)
        {
            cout<<array[row_end][col]<<" ";
        }
        row_end=row_end-1;


        //for starting column
        for (int row=row_end;row>=row_start;row--)
        {
            cout<<array[row][col_start]<<" ";
        }
        col_start=col_start+1;

    }
    return 0;
}
