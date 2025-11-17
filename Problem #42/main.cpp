#include <iostream>
using namespace std;

int main()
{
    double number_of_days, number_of_hours, number_of_minutes, number_of_seconds;

    cout << "How many days? \n";
    cin >> number_of_days;

    cout << "How many hours? \n";
    cin >> number_of_hours;

    cout << "How many minutes? \n";
    cin >> number_of_minutes;

    cout << "How many seconds? \n";
    cin >> number_of_seconds;

    cout << "\n__________________________________\n";

    // حساب المجموع بشكل تراكمي بوحدات مختلفة:
    double total_days = number_of_days + number_of_hours / 24 + number_of_minutes / 1440 + number_of_seconds / 86400;
    double total_hours = number_of_days * 24 + number_of_hours + number_of_minutes / 60 + number_of_seconds / 3600;
    double total_minutes = number_of_days * 1440 + number_of_hours * 60 + number_of_minutes + number_of_seconds / 60;
    double total_seconds = number_of_days * 86400 + number_of_hours * 3600 + number_of_minutes * 60 + number_of_seconds;

    // The result
    cout << "You spent: \n";
    cout << "Days: " << total_days << endl;
    cout << "Hours: " << total_hours << endl;
    cout << "Minutes: " << total_minutes << endl;
    cout << "Seconds: " << total_seconds << endl;

    return 0;
}
