#include <iostream>

using namespace std;

int main()
{
    int button;
    cout<<"Enter your choice : ";
    cin>>button;
    int a=1, b=2, c=3, d=4, e=5;


    switch (button)
    {
        case 1:
            cout<<"Hello";
            break;

        case 2:
            cout<<"Namaskar";
            break;

        case 3:
            cout<<"Hola";
            break;

        case 4:
            cout<<"Namaste";
            break;

        case 5:
            cout<<"Ciao";
            break;


    }
    return 0;
}
