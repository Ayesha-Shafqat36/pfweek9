#include <iostream>
using namespace std;
main()
{
    bool isFound(false);
    int size;
    int num;
    cout << "Enter size of array:";
    cin >> size;
    int numbers[size];
     for(int idx=0;idx<size;idx++)
     {
        cout << "Enter number:";
        cin >> numbers[idx];
     }
    cout << "Enter other number:";
    cin >> num;
    for(int idx=0;idx<size;idx++)
    {
        if (num == numbers[idx])
        {
            isFound=true;
            break;
        }
        if (isFound == true)
        {
            cout << "Number found";
        }
    }
}