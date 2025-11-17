#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double pi = 3.14159;
    int r;
    cout << "Enter \" r \" value : ";
    cin >> r;
    double area = pi * pow(r, 2);
    cout << "Area = " << area << endl; // The reslut
    cout << ceil(area); // The high value

    return 0;
}
