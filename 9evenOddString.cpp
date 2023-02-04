#include <iostream>
using namespace std;

main()
{
    string word;
    cout<<"Enter the word: ";
    cin>> word;
    int j = 0;
    for(int i = 0; word[i] != '\0'; i++)
    {
        j++;
    }
    if(j%2 == 1)
    {
        cout<<"word is odd.";
    }
    else
    {
        cout<<"word is even.";
    }

}