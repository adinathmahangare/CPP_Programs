#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter total number of entries in array : ";
    cin>>n;

    int array[n];
    cout<<"Enter all entries of array : ";
    for (int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    int counter=1;
    while (counter<n)
    {
        for (int i=0;i<n-counter;i++)//in mth iteration we have to do swaping process for n-m times.
        {
            if (array[i]>array[i+1])
            {
                int temp;
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
        counter++;
    }

    for (int i=0;i<n;i++)
        cout<<array[i]<<" ";


    return 0;
}
