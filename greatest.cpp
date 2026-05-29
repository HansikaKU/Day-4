#include <iostream>
using namespace std;

int greatest(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int num1, num2, result;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    result = greatest(num1, num2);

    cout << "Greatest number = " << result;

    return 0;
}