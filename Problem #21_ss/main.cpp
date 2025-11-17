#include <iostream>
#include <cmath>

using namespace std;

float Function_To_Calucate_circle_area()
{
    const double pi = 3.14159;
    float l;

    cout << "Enter \"l\" value : ";
    cin >> l;

    return pow(l, 2) / ( 4 * pi );
}

int main()
{
    cout << Function_To_circle_area();
    return 0;
}
