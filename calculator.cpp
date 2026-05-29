#include<iostream>
using namespace std;
float add(float a, float b)
{
    return a + b;
}
float subtract(float a, float b)
{
    return a - b;
}
float multiply(float a, float b)
{
    return a * b;
}
float divide(float a, float b)
{
    return a / b;
}

int main()
{
    float num1, num2;
    char op;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
                                                                                                                                                                                                                                                                                                              
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            cout << "Result = " << add(num1, num2);
            break;

        case '-':
            cout << "Result = " << subtract(num1, num2);
            break;

        case '*':
            cout << "Result = " << multiply(num1, num2);
            break;

        case '/':
            if(num2 != 0)
                cout << "Result = " << divide(num1, num2);
            else
                cout << "Division by zero is not allowed.";
            break;

        default:
            cout << "Invalid operator!";
    }

    return 0;
}
