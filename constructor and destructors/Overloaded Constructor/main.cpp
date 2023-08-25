#include <iostream>
using namespace std;

class complex
{
    float x,y;
public:
    complex()               //constructor with no argument
    {

    }

    complex(float a)            //constructor with one argument
    {
        x=y=a;
    }

    complex(float real, float imag)             //constructor with two arguments
    {
        x=real;
        y=imag;

    }

    friend complex sum(complex,complex);

    friend void show(complex);

};

complex sum(complex c1, complex c2)                 //friend
{
    complex c3;
    c3.x = c1.x + c2.x ;
    c3.y = c1.y + c2.y ;
    return (c3);
}

void show (complex c)                               //friend
{
    cout<< c.x <<"+j"<< c.y <<"\n";
}

int main()
{
    complex A(2.7 , 3.5);                   //define and initialize
    complex B(1.6);                         //define and initialize
    complex C;                              //define

    C=sum(A,B);                             //sum is a friend
    cout<<"A = "; show(A);                  //show is also a friend
    cout<<"B = "; show(B);
    cout<<"C = "; show(C);

    //Another way to give initial values (second method)
    complex P, Q, R;
    P = complex(2.7 , 3.9);
    Q = complex(1.6 , 2.5);
    R = sum(P,Q);

    cout<<"\n";
    cout<<"P = "; show(P);
    cout<<"Q = "; show(Q);
    cout<<"R = "; show(R);

return 0;

}
