#include <iostream>
using namespace std;

class animal
{
public :
    void run()
    {
        cout<<"I can run!"<<endl;
    }
    void sleep()
    {
        cout<<"I can sleep!"<<endl;
    }
};

class dog : public animal                   //derived class
{
public:
    void bark()
    {
        cout<<"I can bark!"<<endl;
    }
};

int main()
{
    dog dog1;
    dog1.run();
    dog1.sleep();
    dog1.bark();

    return 0;

}
