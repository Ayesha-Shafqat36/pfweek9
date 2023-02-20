#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "enter name:";
    getline(cin,name);
    int idx=0;
    while(name[idx] != '\0')
    {
        idx++;
    }
    cout << "Character " << idx << endl;
    if(idx%2==0)
    {
        cout << "Even";
    }
    if(idx%2!=0)
    {
        cout << "Odd";
    }
}