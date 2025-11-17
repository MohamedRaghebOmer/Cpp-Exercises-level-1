#include <iostream>

using namespace std;

void proccedure()
{
    int Finsh, sum = 0;

    cout << "Please enter the number: ";
    cin >> Finsh;

    for (int Beginning = 1; Beginning <= Finsh; Beginning ++)
    {

        if (Beginning % 2 != 0)
        {
            cout << Beginning << endl;
            sum += Beginning; // This a shortcut to : sum = sum + Beginning.
        }

    }

    cout << "Sum of odd numbers = " << sum;
}

int main()
{
    proccedure();
    return 0;
}
