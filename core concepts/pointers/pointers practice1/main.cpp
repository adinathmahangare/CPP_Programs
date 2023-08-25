#include <iostream>
using namespace std;

int main()
{
    int arr[6]={22,5,23,43,54,65};
    int *p, i;
    p=arr;
    i=*p++ - *p--;
    cout<<i;

    return 0;
}
