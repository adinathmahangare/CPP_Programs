#include <iostream>
using namespace std;

class space
{
    int x;
    int y;
    int z;
public:
    void getdata(int a, int b, int c);
    void putdata(void);
    void operator-();                      //overload unary minus
};
void space :: getdata(int a, int b, int c)
{
    x=a;
    y=b;
    z=c;
}

void space :: putdata(void)
{
    cout<<"x = "<<x<<" ";
    cout<<"y = "<<y<<" ";
    cout<<"z = "<<z<<"\n";
}

void space :: operator-()
{
    x = -x;
    y = -y;
    z = -z;

}

int main()
{
    space S;
    S.getdata(10, -20, -30);
    cout<<"S : ";
    S.putdata();

    -S;                             //activates operator -() function
    cout<<"-S : ";
    S.putdata();

    return 0;
}
