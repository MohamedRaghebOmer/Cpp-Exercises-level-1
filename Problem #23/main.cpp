#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double pi = 3.14159;
    double a, b, c;
    cout << "Enter a, b, c values: \n ";
    cin >> a >> b >> c;

    double s = (a + b + c) / 2;
    double denominator = 4 * sqrt(s * (s - a) * (s - b) * (s - c));
    double numerator = a * b * c;

    double area = pi * (numerator / denominator);

    cout << "Area = " << area;
    return 0;
}
