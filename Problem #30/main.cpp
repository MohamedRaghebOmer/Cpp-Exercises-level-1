#include <iostream>

using namespace std;

void Proccedure()
{
    int B, factorial = 1;

    cout << "Please enter the number : ";
    cin >> B;

    for (int A = B; A >= 1; A--)
    {
        factorial *= A;
    }

    cout << "Factorial = " << factorial << endl;
}

int main()
{
    Proccedure();
    return 0;
}
