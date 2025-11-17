#include <iostream>

using namespace std;

int main()
{
     unsigned int NumberOfTheDay;

    cout << "Please enter the number of the day? \n";
    cin >> NumberOfTheDay;

    switch (NumberOfTheDay)
    {
    case 1:
        cout << "I'ts Saturday!" << endl;
        break;
    case 2:
            cout << "I'ts Sunday!" << endl
        break;

    case 3:
            cout << "I'ts Monday!" << endl;
        break;

    case 4:
            cout << "I'ts Tuesday!" << endl;
        break;

    case 5:
            cout << "I'ts Wednesday!" << endl;
        break;

    case 6:
            cout << "I'ts Thursday!" << endl;
        break;

    case 7:
            cout << "I'ts Thursday!" << endl;
        break;

    default:
            cout << "Invalid day" << endl;
    }

    return 0;
}
