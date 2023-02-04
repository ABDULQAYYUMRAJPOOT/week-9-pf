#include <iostream>
using namespace std;

main()
{
    float array[4], amount, Pamount;
    cout<<"Enter amount of item: ";
    cin>> amount;
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter amount in pocket: ";
        cin >> array[i];
    }
    float quater = array[0], dime = array[1], nickel = array[2], penny = array[3];
    quater = quater * 25 / 100;
    dime = dime * 10 / 100;
    nickel = nickel * 5 / 100;
    penny = penny / 100;
    Pamount = quater + dime + nickel + penny;
    if(Pamount > amount)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

}