#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    char c;

    cout<<"Input Text\n";

    cin.get(c);

    while(c !='\n')
    {
        cout.put(c);
        count++;
        cin.get(c);
    }
    cout<<"\nNumber of characters = "<<count<<"\n";

    return 0;
}
