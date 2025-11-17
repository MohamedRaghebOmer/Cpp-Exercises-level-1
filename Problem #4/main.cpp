#include <iostream>

using namespace std;

struct stInfo
{
    unsigned short Age;
    string DriverLicinse;
    int AnswerAboutIf;
};

void ReadInfo(stInfo &Info)
{
    cout << "How old are you? \n";
    cin >> Info.Age;

    cout << "Do you have Driver License? (Answer by: 1= yes , 0= no) \n";
    cin >> Info.AnswerAboutIf;
}

void ChickStatmentes(stInfo &Info)
{
    if (Info.AnswerAboutIf == 1 && Info.Age > 21)
    {
        cout << "Enter your Driver License: \n";
        getline(cin, Info.DriverLicinse);
        cout << "Hired! \n";
    }

    else
    {
        cout << "Rejected.";
    }
}

int main()
{
    stInfo Test;

    ReadInfo(Test);
    ChickStatmentes(Test);

    return 0;
}
