#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    string s2;

    s1="abc";
    s2="abc";

    //cout<<s2.compare(s1);
    //if (s2.compare(s1)==0)
    if (!s2.compare(s1))//since if outputs true value
    {
        cout<<"Both strings are equal"<<endl;
    }
    return 0;
}
