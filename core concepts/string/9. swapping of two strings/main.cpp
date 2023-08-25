#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string r="10";
    string m="20";

    cout<<"Value of r before : "<<r<<endl;
    cout<<"Value of m before : "<<m<<endl;

    r.swap(m);

    cout<<"Value of r after : "<<r<<endl;
    cout<<"Value of m after : "<<m<<endl;

    return 0;
}
