#include <iostream>
using namespace std;

int BinarySearch(int array[], int n, int key)
{
    int s=0;
    int e=n;

    while (s<=e)
    {
        int middle=(s+e)/2;
        if (array[middle]==key)
        {
            cout<<"Entered number is found at index :"<<middle<<endl;
            break;
        }
        else if (array[middle]>key)
        {
            e=middle-1;
        }
        else
        {
            s=middle+1;
        }
    }
return -1;
}

int main()
{
    int n;
    cout<<"Enter total number of entries : ";
    cin>>n;
    cout<<endl;

    int array[n];
    cout<<"Enter entries in increasing order : "<<endl;
    for (int i=0;i<n;i++)
    {

        cin>>array[i];

    }

    int key;
    cout<<"Enter no. to be searched : ";
    cin>>key;
    cout<<endl;

    cout<<BinarySearch(array, n, key);


    return 0;
}
