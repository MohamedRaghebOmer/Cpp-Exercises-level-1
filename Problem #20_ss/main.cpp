#include <iostream>
#include <cmath>

using namespace std;

float Function_To_Calculate_Circle_Area()
{
    const double pi = 3.14159;
    float a;

    cout << "Enter \"a\" value : ";
    cin >> a;

    return ( pi * pow(a, 2) ) /4;
}

int main()
{
    cout << Function_To_Calculate_Circle_Area();
    return 0;
}
