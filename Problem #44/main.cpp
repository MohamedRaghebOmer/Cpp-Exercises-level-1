#include <iostream>

using namespace std;

int main()
{
    unsigned int NumberOfTheDay;

    cout << "Please enter the number of the day? \n";
    cin >> NumberOfTheDay;

    if (NumberOfTheDay <1 || NumberOfTheDay >7)
    {
        cout << "Invalid day." << endl;
    }

    else
    {
        if (NumberOfTheDay ==1)
        {
            cout << "I'ts Saturday!" << endl;
        }

        else if (NumberOfTheDay ==2)
        {
            cout << "I'ts Sunday!" << endl;
        }

        else if (NumberOfTheDay ==3)
        {
            cout << "I'ts Monday!" << endl;
        }

        else if (NumberOfTheDay ==4)
        {
            cout << "I'ts Tuesday!" << endl;
        }

        else if (NumberOfTheDay ==5)
        {
            cout << "I'ts Wednesday!" << endl;
        }

        else if (NumberOfTheDay ==6)
        {
            cout << "I'ts Thursday!" << endl;
        }

        else if (NumberOfTheDay ==7)
        {
            cout << "I'ts Friday!" << endl;
        }

    }

    return 0;
}
