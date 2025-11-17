#include <iostream>

using namespace std;

void Proccedure()
{
    float B;

    cout << "Please inter the number: ";
    cin >> B;

    for (int counter = 1; counter <= B; counter++ )
    {
        cout << counter << endl;
    }
}

int main()
{
    Proccedure();

    return 0;
}
