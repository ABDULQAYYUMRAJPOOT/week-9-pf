#include <iostream>
using namespace std;

main()
{
    int n;
    cout<<"How many resistors are there: ";
    cin>> n;
    float resistor[n];
    float result = 0;
    for(int i = 0; i<n; i++)
    {
        cout<<"Enter resistance of resistor "<< i+1<< " : ";
        cin>>resistor[i];
    }
    for(int i = 0; i<n; i++)
    {
        result = result + resistor[i];
    }
    cout<<"Total resistance is: "<< result << " ohms";
}