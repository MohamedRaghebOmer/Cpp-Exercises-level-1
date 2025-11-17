#include <iostream>
using namespace std;

void procedure ()
{
    int seconds;
    cout << "Enter seconds: ";
    cin >> seconds;

    int days    = seconds / 86400;
    seconds     = seconds % 86400;

    int hours   = seconds / 3600;
    seconds     = seconds % 3600;

    int minutes = seconds / 60;
    seconds     = seconds % 60;

    cout << "Days: "    << days    << endl;
    cout << "Hours: "   << hours   << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;
}
int main()
{
    procedure();
    return 0;
}
