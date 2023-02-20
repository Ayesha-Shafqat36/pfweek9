#include<iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter a word : ";
    getline (cin,word);
    for (int idx=0;word[idx]!= '\0';idx++)
    {
        if (word[idx]  == 'a'|| word[idx] == 'e' || word [idx] == 'i' || word [idx] == 'o' || word [idx] == 'u') 
            {
            continue;
            }
        else 
        {cout << word[idx] ; 
        }
    }    
}