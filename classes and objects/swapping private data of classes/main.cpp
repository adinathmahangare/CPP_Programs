#include <iostream>
using namespace std;

class class_2;

class class_1
{
    int value1;
public:
    void setvalue(int a)
    {
        value1=a;
    }

    void putvalue(void)
    {
        cout<<value1<<"\n";
    }

    friend void exchange(class_1 &,class_2 &);

};

class class_2
{
    int value2;
public:
    void setvalue(int a)
    {
        value2=a;
    }
    void putvalue(void)
    {
        cout<<value2<<"\n";
    }

    friend void exchange(class_1 &, class_2 &);

};

void exchange(class_1 &x, class_2 &y)
{
    int temp=x.value1;
    x.value1=y.value2;
    y.value2=temp;
}

int main()
{
    class_1 c1;
    class_2 c2;

    c1.setvalue(200);
    c2.setvalue(100);

    cout<<"Values before exchange :\n";

    c1.putvalue();
    c2.putvalue();

    exchange(c1,c2);

    cout<<"\n\n Values after exchange :\n";

    c1.putvalue();
    c2.putvalue();

return 0;
}
