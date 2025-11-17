#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double pi = 3.14159;
    float a,b;
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    float area = pi * ((pow (b, 2))/4) * ( 2*a - b) / ( 2*a + b);
    cout << "Area = " << area;    return 0;
}
