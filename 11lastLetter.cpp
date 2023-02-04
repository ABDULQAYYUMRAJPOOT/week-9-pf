#include <iostream>
using namespace std;


main()
{
    string letter;
    char alpha;
    cout<<"Enter word: ";
    cin>> letter;
    cout<<"Enter character: ";
    cin>> alpha;
    int length = 0;

    for(int i = 0; letter[i] != '\0'; i++)
    {
        length++;

    }
    length--;
    if(letter[length] == alpha)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}