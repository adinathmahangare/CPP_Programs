#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;
public:
    void get_number(int);
    void put_number(void);
};

void student :: get_number(int a)
{
    roll_number = a;

}

void student :: put_number()
{
    cout<<"roll number : "<<roll_number<<"\n";
}

class test : public student         //first level inheritance
{
protected:
    float sub1;
    float sub2;
public:
    void get_marks(float , float);
    void put_marks(void);
};

void test :: get_marks(float x, float y)
{
    sub1 = x;
    sub2 = y;
}

void test :: put_marks(void)
{
    cout<<"Marks in subject one = "<<sub1<<"\n";
    cout<<"Marks in subject two = "<<sub2<<"\n";

}

class result : public test          //second level inheritance
{
    float total;
public:
    void display(void);
};

void result :: display()
{
    total = sub1 + sub2;
    put_number();
    put_marks();
    cout<<"Total = "<<total<<"\n";

}

int main()
{
    result student1;            //student created
    student1.get_number(111);
    student1.get_marks(75.0 , 59.5);
    student1.display();

    return 0;
}
