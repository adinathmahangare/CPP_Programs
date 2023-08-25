#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;

    cout<<"Enter the number of rows in 1st matrix :";
    cin>>a;
    cout<<"Enter the number of columns in 1st matrix :";
    cin>>b;
    int A[a][b];
    cout<<endl;

    cout<<"Enter the number of rows in 2nd matrix : ";
    cin>>c;
    cout<<"Enter the number of columns in 2nd matrix : ";
    cin>>d;
    int B[c][d];
    cout<<endl;

    for (int i=0;i<a;i++)
    {
        for (int j=0;j<b;j++)
        {
            cin>>A[i][j];
        }
        cout<<endl;
    }

    for (int i=0;i<a;i++)
    {
        cout<<"[ ";
        for (int j=0;j<b;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
    cout<<endl;


    for (int i=0;i<c;i++)
    {
        for (int j=0;j<d;j++)
        {
            cin>>B[i][j];
        }
        cout<<endl;
    }

    for (int i=0;i<c;i++)
    {
        cout<<"[ ";
        for (int j=0;j<d;j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<"]";
        cout<<endl;
    }
    cout<<endl;

    int ans[a][d];
    for (int i=0;i<a;i++)
    {
        for (int j=0;j<d;j++)
        {
            ans[i][j]=0;
        }

    }

    if (b==c)
    {
        cout<<"Multiplication of both matrices is : \n";
        int mult[a][d];
        for (int i=0;i<a;i++)
        {

            for (int j=0;j<d;j++)
            {

                for (int k=0;k<b;k++)
                {
                    ans[i][j]+=A[i][k]*B[k][j];

                }

            }

        }

        for (int i=0;i<a;i++)
        {
            cout<<"[ ";
            for (int j=0;j<d;j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<"]";
            cout<<endl;
        }

    }
    else
    {
        cout<<"Multiplication of this two matrices is not possible";
    }





    return 0;
}
