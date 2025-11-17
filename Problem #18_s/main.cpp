#include <iostream>
#include <cmath>

using namespace std;

void Precedure_To_Calculate_Circle_Area()
{
    const double pi = 3.14159;

    cout << "Enter \" r \" value : ";
    int r;
    cin >> r;
    float area = pi * pow(r, 2);
    cout << "Area = " << area << endl;

    cout << "__________________________\n";
}

float Function_To_Calculate_Circle_Area()
{
    const double pi = 3.14159;

    cout << "Enter \" r \" value : ";
    int r;
    cin >> r;

    return pi * pow(r, 2);

}


int main()
{
    cout << "Void result : \n";
    Precedure_To_Calculate_Circle_Area();

    cout << "Function result : \n";
    cout << Function_To_Calculate_Circle_Area();
    return 0;
}
