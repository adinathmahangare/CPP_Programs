#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    string s2;
    s1="fam";
    s2="ily";
    string str;

    //concatanating both strings in s1
    s1.append(s2);
    cout<<s1<<endl;

    //directly concatnating both strings
    str=s1+s2;
    cout<<str<<endl;
    return 0;
}
