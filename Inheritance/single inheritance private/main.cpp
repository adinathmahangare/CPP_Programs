#include <iostream>
using namespace std;

class B
{
    int a;         //private; not inheritable
public:
    int b;
    void get_ab(void);
    int get_a(void);
    void show_a(void);
};

class D : private B             //privately inherited
{
    int c;
public:
    void mul(void);
    void display(void);

};

void B :: get_ab()
{
    cout<<"Enter values for a and b:";
    cin>>a>>b;

}

int B :: get_a()
{
    return a;
}

void B :: show_a()
{
    cout<<"a = "<<a<< "\n";
}

void D :: mul()
{
    get_ab();
    c = b * get_a();

}

void D :: display()
{
    cout<<"a = "<<get_a()<<"\n";
    cout<<"b = "<<b<<"\n";
    cout<<"c = "<<c<<"\n\n";
}

int main()
{
    D d;
    //d.get_ab();  WONT WORK
    d.mul();
    //d.show_a();  WONT WORK
    d.display();
    //d.b = 20;    WONT WORK
    d.mul();
    d.display();

    return 0;

}
