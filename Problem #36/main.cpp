#include <iostream>

using namespace std;

int main()
{
    float num1, num2;
    string Operation_Type;

    cout << "What is the first number? \n";
    cin >> num1;

    cout << "What is the second number? \n";
    cin >> num2;

    cout << "What is the Operation Type? \n";
    cin >> Operation_Type;

    if (Operation_Type == "+" || Operation_Type == "Addition" || Operation_Type == "addition" )
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2;
    }

    else if (Operation_Type == "-" || Operation_Type == "Subtraction" || Operation_Type == "subtraction")
    {

        cout << num1 << " - " << num2 << " = " << num1 - num2;
    }

    else if (Operation_Type == "X" || Operation_Type == "x" || Operation_Type == "Multiplication" || Operation_Type == "multiplication")
    {
        cout << num1 << " x " << num2 << " = " << num1 * num2;
    }

    else if (Operation_Type == "÷" || Operation_Type == "Division" || Operation_Type == "division")
    {
        cout << num1 << " ÷ " << num2 << " = " << num1 / num2;
    }
    return 0;
}
