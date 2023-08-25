#include <iostream>
#include<string.h>
#include<ctype.h>
#include<conio.h>
using namespace std;

int main()
{
    int i=0;
    char *ptr[10]={"books","television","computer","sports"};
    char str[25];
    //clrscr();
    cout<<"\nEnter:";
    cin>>str;
    for(i=0;i<4;i++)
    {
        if(!strcmp(str,ptr[i]))
        {
            cout<<"found";
            break;
        }
    }
    if(i==4)
    cout<<"\nNot found";
    //endl;
    getch();
    return 0;

}
