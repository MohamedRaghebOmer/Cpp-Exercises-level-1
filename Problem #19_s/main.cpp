#include <iostream>
#include <cmath>

using namespace std;

float Function_To_Calculate_Circle_Area()
{
    const double pi = 3.14159;
    float d;

    cout << "Enter \"D\" value : ";
    cin >> d;

    return ( pi * pow(d, 2) ) /4;
}

int main()
{
    cout << "Area = " << Function_To_Calculate_Circle_Area() << endl;
    return 0;
}
