#include <iostream>
#include <string>
using namespace std;

//base class
class animal
{
private:
    string color;

protected:
    string type;

public:
    void eat()
    {
        cout<<"I can eat!";
    }
    void sleep()
    {
        cout<<"I can sleep!";
    }
    void setColor(string clr)
    {
        color=clr;
    }
    string getColor()
    {
        return color;
    }
};

//derived class
class Dog : public animal
{
public:
    void setType(string tp)
    {
        type=tp;
    }

    void displayInfo(string c)
    {
        cout<<"I am a "<<type<<endl;
        cout<<"My color is "<<c<<endl;
    }

    void bark()
    {
        cout<<"I can bark! Woof Woof!!"<<endl;
    }
};

int main()
{
    Dog dog1;

    //calling member function of base class
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    //calling member function of the derived class
    dog1.bark();
    dog1.setType("mamma1");

    //Using getColor() data of dog1 as argument
    //getColor() returns string data
    dog1.displayInfo(dog1.getColor());

    return 0;
}
