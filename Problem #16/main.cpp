#include <iostream>
#include <cmath>

using namespace std;

void Procedure_To_Calculate_Rectangle_Area(float a, float d)
{
    float area = a * sqrt( pow(d, 2) - pow(a, 2) );
    cout << "Area = " << area;
}

int main()
{
    Procedure_To_Calculate_Rectangle_Area(5, 40);
    return 0;
}
