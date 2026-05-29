#include <iostream>
using namespace std;

int main()
{
    int a[10];

    cout << "Enter 10 numbers:\n";

    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    // Center values for 10 numbers
    cout << "Center values = " << a[4] << " and " << a[5];

    return 0;
}