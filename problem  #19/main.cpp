#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double pi = 3.14159;
    int d;
    cout << " Enter the value of the \" d \": ";
    cin >> d;
    double area = pi * pow(d, 2) /4;
    cout << "Area = " << area << endl;
    cout << "Result with ceil = " << ceil(area);
    return 0;
}
