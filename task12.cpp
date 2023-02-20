#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "enter name:";
    getline(cin,name);
    int idx=0;
    int y=0;
    while(name[idx] != '\0')
    {
        if (name[idx] == 'a'|| name[idx] == 'e'|| name[idx] == 'i'|| name[idx] == 'o'|| name[idx] == 'u')
        {
            y++;
        }
        idx++;
    }
     cout << "Total vowels are:" << y;
}