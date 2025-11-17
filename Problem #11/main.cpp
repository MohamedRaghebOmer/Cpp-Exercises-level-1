#include <iostream>
#include <string>

using namespace std;

struct stMarks
{
    float Mark1;
    float Mark2;
    float Mark3;
    float Average;
};

void ReadMarks(stMarks &Mark)
{
    cout << "Please enter Mark1? \n";
    cin >> Mark.Mark1;

    cout << "Please enter Mark2? \n";
    cin >> Mark.Mark2;

    cout << "Please enter Mark3? \n";
    cin >> Mark.Mark3;
}

float CalculateAverage(stMarks &Mark)
{
    cout << "============Print Average============\n";

    Mark.Average = (Mark.Mark1 + Mark.Mark2 + Mark.Mark3) /3;
    cout << "Average= ";

    return Mark.Average;
}

void PassOrNot(stMarks &Mark)
{
    if (Mark.Average >=50)
    {
        cout << "\nPASS!" << endl;
    }
    else
    {
        cout << "FAIL";
    }
}

int main()
{
    stMarks student;

    ReadMarks(student);
    cout << CalculateAverage(student);
    PassOrNot(student);

    return 0;
}
