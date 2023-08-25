#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str3;
    getline(cin,str3);//to get output with spaces
    cout<<str3<<endl;

    string str;
    cin>>str;
    cout<<str<<endl;

    string str1(5,'n');
    cout<<str1<<endl;

    string str2="apni Kaksha";
    cout<<str2<<endl;

    char ch[]={'c','b','a'};
    string str4=string(ch);
    cout<<str4;


    return 0;
}
