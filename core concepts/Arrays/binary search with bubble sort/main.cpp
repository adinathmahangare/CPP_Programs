#include <iostream>
using namespace std;

int BinarySearch(int Rollno[], int n, int key)
{
    int s=0;
    int e=n;

    int mid=(s+e)/2;

    while (s<e)
    {
        for (int i=s;i<e;i++)
        {
            if (Rollno[mid]==key)
            {
                cout<<"searched roll number was present\n\n";
            }

            else if (key>Rollno[mid])
            {
                s=mid+1;
            }

            else
            {
                e=mid-1;
            }
        }

    }
    return -1;

}

int main()
{
    int n;
    cout<<"enter total number of students in a class : ";
    cin>>n;
    cout<<endl;

    int Rollno[n];
    cout<<"enter the roll numbers of students present for today's lecture : "<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>Rollno[i];
    }

    int counter=1;

    while (counter<n)

    {for (int i=0;i<(n-counter);i++)
    {
        for (int j=0;j<n;j++)
        {
            if (Rollno[j+1]<Rollno[j])
            {
                int temp;
                temp=Rollno[j];
                Rollno[j]=Rollno[j+1];
                Rollno[j+1]=temp;
            }
        }
        counter++;
    }
    }


    cout<<"Roll numbers in sorted form : "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<Rollno[i];
        cout<<" ";
    }

    int key;
    cout<<"Enter roll number of student to be searched : ";
    cin>>key;
    cout<<endl;


    cout<<BinarySearch(Rollno, n, key);

    return 0;
}
