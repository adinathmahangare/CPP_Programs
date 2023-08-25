#include <iostream>
using namespace std;

int main()
{
    int matrix[5][5],transpose_matrix[5][5];
    int i,j,rows,cols;
    //taking inputs in array

    cout<<"Enter the number of ROWS : ";
    cin>>rows;

    cout<<"Enter the number of COLS : ";
    cin>>cols;

    for (i=0;i<rows;i++)
    {
        for (j=0;j<cols;j++)
        {
            cin>>matrix[i][j];

        }
        cout<<endl<<endl;
    }

    cout<<"Your entered matrix is : \n";
    for (i=0;i<rows;i++)
    {
        for (j=0;j<cols;j++)
        {
            cout<<matrix[i][j]<<" ";

        }
        cout<<endl<<endl;
    }

    //calculating transpose of a matrix
    cout<<"Transpose of Entered matrix : \n";
    for (i=0;i<rows;i++)
    {
        for (j=0;j<cols;j++)
        {
            transpose_matrix[j][i]=matrix[i][j];
        }
        cout<<endl;
    }

    //displaying final resultant array
    for (i=0;i<cols;i++)
    {
        for (j=0;j<rows;j++)
        {
            cout<<transpose_matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
