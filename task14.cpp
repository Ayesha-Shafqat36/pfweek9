#include<iostream>
using namespace std;
main()

{
    string word;
    cout << "Enter a word : ";
    getline (cin,word);
    cout << "something" << " ";
   for (int idx=0; word[idx]!= '\0'; idx++)
    {
        cout << word[idx];
    }
}