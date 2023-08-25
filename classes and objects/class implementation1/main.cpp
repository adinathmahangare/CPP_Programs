#include <iostream>

using namespace std;

class item
{
    int number; //private by default
    float cost; //private by default
public:
    void getdata(int a,int b); //prototype declaration
                                //to be defined

    //function defined inside class
    void putdata(void)
    {
        cout<<"Number : "<<number<<"\n";
        cout<<"COst : "<<cost<<"\n";
    }


};

void item::getdata(int a, int b) //use membership label
{
    number =a;          //private variables
    cost=b;             //directly used

}

int main()
{                       //create object x
    item x;
    cout<<"\nObject x"<<"\n";

    x.getdata(100,299.95);
    x.putdata();

    item y;
    cout<<"\nObject y"<<"\n";

    y.getdata(200,175.50);
    y.putdata();


    return 0;
}
