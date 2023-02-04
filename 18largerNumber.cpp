#include <iostream>
using namespace std;


main()
{
    int length;
    cout<<"Enter length of numbers: ";
    cin>> length;
    int largest = 0;
    int num[length];
    for(int i = 1; i <= length; i++)
    {
        cout<<"Enter number: ";
        cin>> num[i];
    }
    for(int i = 1; i <= length; i++)
    {
        if(num[i]> largest)
        {
            largest = num[i];
        }
    }
    cout<<"largest number is: "<< largest;
}