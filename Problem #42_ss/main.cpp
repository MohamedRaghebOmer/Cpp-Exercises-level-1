#include <iostream>
#include <cmath>
using namespace std;

void procedure ()
{
    float seconds, minutes, hours, days;

    cout << "How many seconds : ";
    cin >> seconds;

    cout << "How many minutes : ";
    cin >> minutes;

    cout << "How many hours : ";
    cin >> hours;

    cout << "How many days : ";
    cin >> days;

    cout << "You spent " << days*86400 + hours*3600 + minutes*60 + seconds << " seconds" << endl;


}

int main()
{
    procedure();
    return 0;
}

/*
    Write a program to calculate the task duration in Seconds and print it on Screen
Given the time duration Of a task in the number Of days, hours, minutes, and seconds.
*/
