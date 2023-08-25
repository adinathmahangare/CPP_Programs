#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    str="abc";

    str.clear();

    if (str.empty())
    {
        cout<<"String is empty"<<endl;
    }
    return 0;
}
