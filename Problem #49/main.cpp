#include <iostream>
#include <string>

using namespace std;

struct stATM_PIN
{
    int ATM_PIN;
};

void ReadPin(stATM_PIN &ATM)
{
    cout << "Enter PIN: \n";
    cin >> ATM.ATM_PIN;
}

void Check(stATM_PIN &ATM)
{
    if (ATM.ATM_PIN == 1234)
    {
        cout << "LOGIN SUCESS!" << endl;
        cout << "Your balance is 7500" << endl;
    }
    else
    {
        cout << "Wrong PIN" << endl;
    }
}

int main()
{
    stATM_PIN User;

    ReadPin(User);
    Check(User);

    return 0;
}
