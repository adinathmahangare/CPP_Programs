#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char key[25], buffer[25];

    cout<<"this is the key"<<endl;
    cin.getline(key,25);

    cout<<"this is the buffer"<<endl;
    cin.getline(buffer,25);

    strcat(buffer,key);

    cout<<"key= "<<key<<endl;
    cout<<"buffer= "<<buffer<<endl;
    return 0;
}
