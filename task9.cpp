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
    for(int x=idx-1;x >=0;x-- )
    {
        cout << name[x];
    }
}