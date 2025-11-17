#include <iostream>

using namespace std;

struct stMark
{
    float StudentMark;
};

void ReadMark(stMark &Mark)
{
    cout << "Please enter your mark? \n";
    cin >> Mark.StudentMark;
}

void PrintResult(stMark &Mark)
{
    if (Mark.StudentMark >= 50)
    {
        cout << "PASS! \n";
    }
    else
    {
        cout << "Fail." << endl;
    }
}

int main()
{
    stMark student;

    ReadMark(student);
    PrintResult(student);
    return 0;
}
