#include <iostream>
using namespace std;

main()
{
    int a1[2];
    int n;
    for(int i = 0; i<2; i++)
    {
        cout<<"Enter first array number: ";
        cin>> a1[i];
    }
    cout << "how many numbers do you want in second array: ";
    cin >> n;
    
    int a2[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> a2[i];
    }
    cout << "[ " << a1[0];
    for (int i = 0; i<n; i++)
    {
        cout<<", " << a2[i];
    }
    cout<<", "<<a1[1]<<"]";
}