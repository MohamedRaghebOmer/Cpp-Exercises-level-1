#include <iostream>

using namespace std;

void Proccedure()
{
    int finsh, sum = 0;

    cout << "Please inter the number : ";
    cin >> finsh;

    for (int Beginning = 0; Beginning <= finsh; Beginning++)

        if (Beginning % 2 == 0)
    {
        sum += Beginning;
    }

    cout << "Sum of even numbers = " << sum << endl;
}

int main()
{
    Proccedure();
    return 0;
}
