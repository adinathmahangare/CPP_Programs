#include <iostream>
using namespace std;

class xyz;          //forward declaration

class abc
{
    int data;
public:
    void setvalue(int value)
    {
        data=value;
    }

    friend void add(xyz,abc);           //friend function declaration
};

class xyz
{
    int data;
public:
    void setvalue(int value)
    {
        data=value;
    }

    friend void add(xyz,abc);                 //friend function declaration
};

void add(xyz obj1,abc obj2)                 //friend function definition
{
    cout<<"Addition of two numbers is :"<<obj1.data + obj2.data;
}

int main()
{
    abc A;
    xyz X;
    A.setvalue(5);
    X.setvalue(50);
    add(X,A);                   //calling friend function

return 0;
}
