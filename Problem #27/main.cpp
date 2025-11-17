#include <iostream>

using namespace std;

int main()
{
    int To, from = 1;

    cout << "Please inter your number: ";
    cin >> To;

    while (from <= To)
    {
        cout << from << endl;
        from++;
    }
    return 0;
}
