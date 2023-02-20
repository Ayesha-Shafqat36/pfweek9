#include<iostream>
using namespace std;
main()

{
    string word;
    cout << "Enter a word : ";
    getline (cin,word);
    int idx=0;
    int count=0; 
    while (word[idx]!= '\0')
    {

    if (word[idx] == 'a')
    {
       word[idx] = 'b';
    }
    else if (word[idx ] == 'b')
    {
        word[idx] = 'c';
    }
    else if (word[idx ] == 'c')
    {
        word[idx] = 'd';
    }else if (word[idx ] == 'd')
    {
        word[idx] = 'e';
    }else if (word[idx ] == 'e')
    {
        word[idx] = 'f';
    }else if (word[idx ] == 'f')
    {
        word[idx] = 'g';
    }else if (word[idx ] == 'g')
    {
        word[idx] = 'h';
    }else if (word[idx ] == 'h')
    {
        word[idx] = 'i';
    }else if (word[idx ] == 'i')
    {
        word[idx] = 'j';
    }else if (word[idx ] == 'j')
    {
        word[idx] = 'k';
    }else if (word[idx ] == 'k')
    {
        word[idx] = 'l';
    }else if (word[idx ] == 'l')
    {
        word[idx] = 'm';
    }else if (word[idx ] == 'm')
    {
        word[idx] = 'n';
    }else if (word[idx ] == 'n')
    {
        word[idx] = 'o';
    }else if (word[idx ] == 'o')
    {
        word[idx] = 'p';
    }else if (word[idx ] == 'p')
    {
        word[idx] = 'q';
    }else if (word[idx ] == 'q')
    {
        word[idx] = 'r';
    }else if (word[idx ] == 'r')
    {
        word[idx] = 's';
    }else if (word[idx ] == 's')
    {
        word[idx] = 't';
    }else if (word[idx ] == 't')
    {
        word[idx] = 'u';
    }else if (word[idx ] == 'u')
    {
        word[idx] = 'v';
    }else if (word[idx ] == 'v')
    {
        word[idx] = 'w';
    }else if (word[idx ] == 'w')
    {
        word[idx] = 'x';
    }else if (word[idx ] == 'x')
    {
        word[idx] = 'y';
    }else if (word[idx ] == 'y')
    {
        word[idx] = 'z';
    }else if (word[idx ] == 'z')
    {
        word[idx] = 'a';
    }

   
    cout<<word[idx];
      idx++; 
}
}