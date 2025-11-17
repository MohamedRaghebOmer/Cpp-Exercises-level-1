#include <iostream>
#include <cmath>
using namespace std;

float Function_To_Calculate_Circle_Area()
{
    const double pi = 3.14159;
    float a, b, c;

    cout << " a : ";
    cin >> a;

    cout << " b : ";
    cin >> b;

    cout << " c : ";
    cin >> c;

    float p = (a + b +c)/2;
    float squroot = sqrt( p * (p - a) * (p - b) * (p - c) );

    return pow( (a*b*c) / (4 * squroot ) ,2);

}

int main()
{
    cout << Function_To_Calculate_Circle_Area();
    return 0;
}

/*
program to calculate Circle area
that described around an arbitrary triangle,
then print it on the screen.
*/
