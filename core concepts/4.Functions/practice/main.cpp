#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int array[3];

    array[0]=a;
    array[1]=b;
    array[2]=c;

    for (int i=0;i<2;i++)
    {
        for (int j=1;j<3;j++)
        {
            if (array[i]<array[j])
            {
                int temp;
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;

            }
        }
    }
    a=array[0];
    b=array[1];
    c=array[2];

    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
