#include <iostream>
using namespace std;


main()
{
    string letter;
    cout<<"Enter word: ";
    cin>> letter;
    int length = 0;

    for(int i = 0; letter[i] != '\0'; i++)
    {
        length++;
    }
    for(int i = length; i >= 0;  i-- )
    {
        cout<<letter[i];
    }

}