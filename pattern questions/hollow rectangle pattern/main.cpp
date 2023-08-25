#include <iostream>

using namespace std;

int main()
{
    int rows, cols;
    cin>>rows>>cols;
    cout<<endl;

    for (int i=1;i<=rows;i++)
    {
        for (int j=1;j<=cols;j++)
        {
            if (j==1 || j==cols || i==1 || i==rows)
            {
                cout<<"*";
            }
            else{cout<<" ";}
        }
        cout<<endl;
    }
    return 0;
}
