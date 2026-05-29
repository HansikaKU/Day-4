#include <iostream>
using namespace std;

int main()
{
    int a[10], count = 0, num;

    cout << "Enter 10 numbers:\n";

    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    cout << "Enter number to find frequency: ";
    cin >> num;

    for(int i = 0; i < 10; i++)
    {
        if(a[i] == num)
            count++;
    }

    cout << "Frequency of " << num << " = " << count;

    return 0;
}