#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double pi = 3.14159;
    double a;
    cout << "Enter \" A \" value : ";
    cin >> a;
    double area = (pi * pow(a, 2))/4;
    cout << "Area = " << area;
    return 0;
}
