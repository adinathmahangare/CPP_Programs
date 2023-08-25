#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;
public:
    void get_number(int a)
    {
        roll_number = a;
    }
    void put_number(void)
    {
        cout<<"Roll No. : "<<roll_number<<"\n";
    }
};

class test : public virtual student
{
protected:
    float part1 , part2;
public:
    void get_marks(float x, float y)
    {
        part1 = x;
        part2 = y;
    }
    void put_marks(void)
    {
        cout<<"Marks in part1 = "<<part1<<"\n";
        cout<<"Marks in part2 = "<<part2<<"\n";
    }
};

class sports : public virtual student
{
protected:
    float score;
public:
    void get_score(float b)
    {
        score = b;
    }
    void put_score(void)
    {
        cout<<"Sports score = "<<score<<"\n";
    }
};

class result : public test, public sports
{
    float total;
public:
    void display(void);
};

void result :: display()
{
    total = part1 + part2 + score;

    put_number();
    put_marks();
    put_score();

    cout<<"Total marks = "<<total<<"\n\n";
}

int main()
{
    result student_1;
    student_1.get_number(234);
    student_1.get_marks(34.50, 45.50);
    student_1.get_score(9.00);
    student_1.display();

return 0;
}
