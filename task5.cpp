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
    int smallest=numbers[0];
    for (int idx=0; idx < size; idx++)
    {
        if (numbers[idx]< smallest)
        {
            smallest=numbers[idx];
        }
        cout << "Smallest number is:" << smallest;
    }
}