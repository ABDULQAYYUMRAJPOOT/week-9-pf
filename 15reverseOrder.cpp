#include <iostream>
using namespace std;

main()
{
    
    int length;
    cout<<"Enter length: ";
    cin>> length;
    int num[length];
    for(int i = 1; i <= length; i++)
    {
        cout<<"ENter number: ";
        cin>> num[i];
        cout<<endl;
    }
    for(int i = length; i >= 1; i--)
    {
        cout<<num[i]<<endl;
    }
}