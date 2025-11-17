#include <iostream>

using namespace std;

int main()
{
     unsigned int NumberOfThemonth;

    cout << "Please enter the number of the month? \n";
    cin >> NumberOfThemonth;

    switch (NumberOfThemonth)
    {
    case 1:
        cout << "I'ts January!" << endl;
        break;

    case 2:
        cout << "I'ts February!" << endl;
        break;

    case 3:
        cout << "I'ts March!" << endl;
        break;

    case 4:
        cout << "I'ts April!" << endl;
        break;

    case 5:
        cout << "I'ts May!" << endl;
        break;


    case 6:
        cout << "I'ts Jun!" << endl;
        break;

    case 7:
        cout << "I'ts July!" << endl;
        break;

    case 8:
        cout << "I'ts August!" << endl;
        break;

    case 9:
        cout << "I'ts September!" << endl;
        break;

    case 10:
        cout << "I'ts October!" << endl;
        break;

    case 11:
        cout << "I'ts November!" << endl;
        break;

    case 12:
        cout << "I'ts December!" << endl;
        break;

    default :
        {
            cout << "Invalid Month!" << endl;
        }

    }
    return 0;
}
