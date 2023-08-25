#include <iostream>
using namespace std;

class GST
{
    float price;
    float percent;
public:
    void input(float a, float b)
    {
        price = a;
        percent = b;
    }
    void print(void)
    {
        cout<<"Price : "<<price<<"\n";
        cout<<"Percent : "<<percent<<"\n";
    }

};

int main()
{
    GST p[3];

    int i;
    float s, t, f;
    for (i=0;i<3;i++)
    {
        cout<<"Provide the price and percent"<<"\n";
        cin>>s>>t;
        p->input(s,t);
        cout<<"you have entered"<<"\n";
        p->print();
        f = s * t;
        cout<<"Price after GST: "<<f<<"\n";

    }
    return 0;
}
