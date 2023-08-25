#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the number of rows of matrix : ";
    cin>>m;
    cout<<"Enter the number of columns of matrix : ";
    cin>>n;

    int A[m][n];
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
        cout<<endl;
    }

    int x;
    cout<<"Enter the number to search : ";
    cin>>x;

    bool found=false;
    int r=0,c=n-1;
    while (r<m && c>=0)
    {
        if (A[r][c]==x)
        {
            found =true;
        }
        if (A[r][c]>x)
        {
            c--;

        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout<<"Element found in matrix";
    }
    else
    {
        cout<<"Element not found in matrix";
    }


    return 0;
}
