#include <iostream>

using namespace std;

int main()
{
    unsigned int NumberOfThemonth;

    cout << "Please enter the number of the month? \n";
    cin >> NumberOfThemonth;

    if (NumberOfThemonth <1 || NumberOfThemonth >12)
    {
        cout << "Invalid month." << endl;
    }

    else
    {
        if (NumberOfThemonth ==1)
        {
            cout << "I'ts January!" << endl;
        }

        else if (NumberOfThemonth ==2)
        {
            cout << "I'ts February!" << endl;
        }

        else if (NumberOfThemonth ==3)
        {
            cout << "I'ts March!" << endl;
        }

        else if (NumberOfThemonth ==4)
        {
            cout << "I'ts April!" << endl;
        }

        else if (NumberOfThemonth ==5)
        {
            cout << "I'ts May!" << endl;
        }

        else if (NumberOfThemonth ==6)
        {
            cout << "I'ts June!" << endl;
        }

        else if (NumberOfThemonth ==7)
        {
            cout << "I'ts July!" << endl;
        }

        else if (NumberOfThemonth ==8)
        {
            cout << "I'ts August!" << endl;
        }

        else if (NumberOfThemonth ==9)
        {
            cout << "I'ts September!" << endl;
        }

        else if (NumberOfThemonth ==10)
        {
            cout << "I'ts October!" << endl;
        }

        else if (NumberOfThemonth ==11)
        {
            cout << "I'ts November!" << endl;
        }

        else if (NumberOfThemonth ==12)
        {
            cout << "I'ts December!" << endl;
        }

    }
    return 0;
}
