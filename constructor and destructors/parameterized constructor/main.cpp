#include <iostream>
using namespace std;

class Point
{
    int x,y;
public:
    Point(int a, int b)         //inline parameterized constructor definition
    {
        x=a;
        y=b;
    }
    void display(void)
    {
        cout<<"("<<x<<","<<y<<")\n";
    }
};

int main()
{
    Point p1(1,1);                  //invokes parameterized constructor
    Point p2(5,10);

    cout<<"Point P1 = ";
    p1.display();

    cout<<"Point P2 = ";
    p2.display();

    return 0;
}
