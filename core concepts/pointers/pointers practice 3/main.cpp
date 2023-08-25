#include <iostream>
using namespace std;

int main()
{
    int p = 10;
    double q = 20.33;
    int *x = &p;
    double *y = &q;

    cout<<"value 1 : "<<p<<endl;
    cout<<"value 2 : "<<q<<endl;
    return 0;
}
