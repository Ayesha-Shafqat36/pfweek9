#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter name:";
    cin >> name;
    char letter;
    cout << "Enter any letter:";
    cin >> letter;
    int count=name.length();
    if (letter == name[count-1])
    {
        cout << "Same";
    }
    else
    {
        cout << "not same";
    }
}