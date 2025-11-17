#include <iostream>

using namespace std;

int main()
{
    unsigned int TotalSales;

    cout << "Please enter Total Sales? \n";
    cin >> TotalSales;

    if (TotalSales >= 1000000)
    {
        cout << "Percentage= " << TotalSales * 0.01 << endl;
    }

    else if (TotalSales >= 500000 && TotalSales < 1000000)
    {
        cout << "Percentage= " << TotalSales * 0.02 << endl;
    }

    else if (TotalSales >= 100000 && TotalSales < 500000)
    {
     cout << "Percentage= " << TotalSales * 0.03<< endl;
    }

    else if (TotalSales >= 50000 && TotalSales < 100000)
    {
        cout << "Percentage= " << TotalSales * 0.05<< endl;
    }

    else
    {
     cout << "Percentage= " << TotalSales * 0 << endl;
    }
    return 0;
}
