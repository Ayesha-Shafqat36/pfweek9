#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the size of the array:";
    cin >> size;
    int numbers[size];
    for(int idx=0; idx < size; idx++)
    {
        cout << "Enter number:";
        cin >> numbers[idx];
    }
    for( int idx=size-1; idx >= 0; idx--)
    {
        cout << numbers[idx]<< " ";
    }
}
