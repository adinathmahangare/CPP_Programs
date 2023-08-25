#include <iostream>
using namespace std;

int LinearSearchName(string name[], int n, string SearchName)
{
    for (int i=0; i<n; i++)
    {
        if (SearchName==name[i])
        {
            cout<<"roll number of name searched : "<<i;
        }
    }
}

int main()
{
    int n;
    cout<<"Total number of students in a class : ";
    cin>>n;


    string name[n];
    for (int i=0; i<n; i++)
    {
        cin>>name[i];

    }

    string SearchName;
    cout<<"Name of the student whose roll number to be searched : ";
    cin>>SearchName;

    cout<<LinearSearchName(name, n, SearchName);

    return 0;
}
