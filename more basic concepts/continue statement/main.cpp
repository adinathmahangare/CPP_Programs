#include <iostream>

using namespace std;
//progam to not to print numbers divisible by 3

int main()
{
    for (int i=0;i<=100;i++)
    {
        if (i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
