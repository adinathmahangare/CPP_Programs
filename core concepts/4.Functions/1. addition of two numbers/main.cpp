#include <iostream>
using namespace std;

void print(int num)
{
    cout<<num;
    return;
}

int add(int num1,int num2)
{
    cout<<"Two numbers are :";
    print(num1);
    cout<<", ";
    print(num2);
    cout<<endl;
    int sum=num1+num2;
    cout<<num1<<" + "<<num2<<" = ";

    return sum;
}

int main()
{
    int a,b;
    cout<<"Enter first number :";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;
    cout<<add(a,b);

    return 0;
}
