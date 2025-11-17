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

    switch (Operation_Type)
    {
    case + :
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case - :
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case *;
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

        case /;
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;

    default:
            cout << "Not a week day!\n";
    }

    return 0;
}
