#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a , d ;
    cout << "Enter a : ";
    cin >> a;

    cout << "Enter d : ";
    cin >> d;

    double Area;
    Area = a * sqrt(pow(d, 2) - pow(a, 2));
    cout << "Area = " << Area;


    return 0;
}
