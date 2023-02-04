#include <iostream>
using namespace std;

main()
{
    int length;
    cout << "Enter length of numbers: ";
    cin >> length;

    int num[length];
    int minimum = num[0];
    for (int i = 1; i <= length; i++)
    {
        cout << "Enter number: ";
        cin >> num[i];
    }
    for (int i = 1; i <= length; i++)
    {
        if (num[i] < minimum)
        {
            minimum = num[i];
        }
    }
    cout << "Minimum number is: " << minimum;
}