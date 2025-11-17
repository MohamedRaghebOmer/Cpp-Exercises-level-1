#include <iostream>
#include <cmath>

using namespace std;

void procedure()
{
    int a;
    cout << "a : ";
    cin >> a;

    cout << "a^2 : " << pow(a, 2) << endl;
    cout << "a^3 : " << pow(a, 3) << endl;
    cout << "a^4 : " << pow(a, 4) << endl;

}

int main()
{
    procedure();
    return 0;
}
