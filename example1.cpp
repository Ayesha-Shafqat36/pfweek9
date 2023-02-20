#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the size of array:";
    cin >> size;
    int numbers[size];
    int sum=0;
    for(int idx=0;idx<size;idx++)
    {
        cout << "Enter numbers:";
        cin >> numbers[idx];
        sum=sum+numbers[idx];
    }
    {
        cout << "Sum:"<< sum<< endl;
        float average=sum/size;
        cout << "Average:"<< average ;

    }
}