#include <iostream>
using namespace std;

int main()
{
    int a[10], sum = 0;
    float average;

    cout << "Enter 10 numbers:\n";

    for(int i = 0; i < 10; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }

    average = sum / 10.0;

    cout << "Average = " << average;

    return 0;
}