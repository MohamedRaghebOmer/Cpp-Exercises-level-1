#include <iostream>
#include <cmath>

using namespace std;

float Function_To_Calucate_circle_area()
{
    const double pi = 3.14159;
    float a, b;

    cout << "Enter \"a\" value : ";
    cin >> a;

    cout << "Enter \"b\" value : ";
    cin >> b;

    return pi * pow(b, 2) /4 * (2*a-b) / (2*a+b);
}

int main()
{
    cout << round( Function_To_Calucate_circle_area() ) << endl;
    return 0;
}
