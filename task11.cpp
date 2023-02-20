#include <iostream>
using namespace std;
main()
{
    bool flag(false);
    string name;
    cout << "Enter name:";
    cin >> name;
    char letter;
    cout << "Enter any letter:";
    cin >> letter;
    int count=name.length();
    if (letter == name[count])
    {
        flag = true;
        break;
    }
    if (flag == true)
    {
        cout << "found";
    }
}