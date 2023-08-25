#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for (int i=0; i<n-1; i++){
        
        for (int j=i+1; j<n; j++){

            if (arr[i]>arr[j]){
                //swaping
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //output 
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }    
}

int main(){
    int array[5] = {23,32,12,56,20};
    selectionSort(array, 5);
}