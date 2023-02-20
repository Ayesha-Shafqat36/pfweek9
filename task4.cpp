#include <iostream>
using namespace std;
main()
{
    int size;
    int num;
    cout << "Enter size of the array:";
    cin >> size;
    int numbers[size];
    for(int idx=0;idx< size;idx++)
    {
        cout << "Enter number:";
        cin >> numbers[idx];
    }
    cout << "Enter number to multiply:";
    cin >> num;
    for (int x=size-1; x>=0 ;x--)
    {
        int result=numbers[x]*num;
        cout << result << endl;
    }
}