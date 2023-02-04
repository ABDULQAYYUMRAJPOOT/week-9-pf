#include <iostream>
using namespace std;


main()
{
    string letter;
    char input;
    cout<<"Enter word: ";
    cin>> letter;
    cout<<"Enter letter to find: ";
    cin>> input;
    for(int i = 0; letter[i]  != '\0'; i++)
    {
        char alpha = letter[i];
        if(input == alpha)
        {
            i++;
            cout<<"Position of letter is:" << i ;
            break;
        }
    }
    

}