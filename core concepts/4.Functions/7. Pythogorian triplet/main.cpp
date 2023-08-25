#include <iostream>
#include <math.h>
using namespace std;


int square(int num)
{
    int sqr= num*num;
    return sqr;
}

bool check(int x, int y, int z)
{
    int a,b,c;
    a=max(x,max(y,z));

    if (a==x)
    {
        b=y;
        c=z;
    }
    else if (a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }

    if (square(a)==square(b)+square(c))
    {
        return true;
    }
    return false;
}

int main()
{
    int a,b,c;
    cout<<"Enter the numbers in descending order"<<endl;
    cin>>a>>b>>c;





    if (check(a,b,c))
    {
        cout<<"Given numbers are pythagorian triplet.";
    }


    return 0;
}
