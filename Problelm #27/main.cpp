#include <iostream>

using namespace std;

void Proccedure()
{
    int N;

    cout << "Please inter the number: ";
    cin >> N;

    for (int counter = N ; counter >=1; counter--)
    {
        cout << counter << endl;
    }
}

int main()
{
    Proccedure();
    return 0;
}
