#include <iostream>
using namespace std;

int LinearSearch(int array[], int n, int key)
{

  for(int i=0;i<n;i++)
  {
      if (array[i]==key)
      {
          cout<<"Entered key number is at index = "<<array[i]<<endl;
      }

  }
  return -1;
}

int main()
{
    int n;
    int key;


    cout<<"Enter total number of entries in array : ";
    cin>>n;

    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"Enter number to be searched : ";
    cin>>key;

    cout<<LinearSearch(array, n, key)<<endl;

    return 0;
}
