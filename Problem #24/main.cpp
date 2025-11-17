#include <iostream>
#include <string>

using namespace std;

struct stAge
{
    int Age;
};

void ReadAge(stAge &age)
{
    cout << "How old are you? \n";
    cin >> age.Age;
}

void Check(stAge &age)
{
    if (age.Age >= 18 && age.Age <45)
    {
        cout << "Valid Age!" << endl;
    }
    else
    {
        cout << "Invalid Age." << endl;
    }
}

int main()
{
    stAge Age1;

    ReadAge(Age1);
    Check(Age1);

    return 0;
}
