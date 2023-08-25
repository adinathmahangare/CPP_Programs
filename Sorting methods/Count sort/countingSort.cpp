#include <iostream>
using namespace std;

void countingSort(int arr[], int n){
    int zeros= 0, ones= 0;
    for (int i=0; i<n; i++){
        if(arr[i]==0){
            zeros++;
        }
        else if(arr[i]==1){
            ones++;
        }
    }

    cout<<"Sorted array : ";
    for(int j=0; j<zeros; j++){
        cout << 0 << " ";
    }
    for(int k=0; k<ones; k++){
        cout<<1<<" ";
    }
}

int main()
{
    int array[17]={1,0,1,0,1,0,1,0,1,1,0,1,0,1,1,0,1};
    countingSort(array,17);
}