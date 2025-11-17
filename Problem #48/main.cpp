#include <iostream>

using namespace std;

int main()
{
//              (Problem #48)
    float Loon_Amount,month ;
    cout << "Loon Amount: ";
    cin >> Loon_Amount;
    cout << "How many months do you want: ";
    cin >> month;
    double amount_of_monny = Loon_Amount / month;
    cout << "You need to pay " << amount_of_monny << " every month" ;
    return 0;
}
