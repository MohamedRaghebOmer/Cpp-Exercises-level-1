#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the Perimeter of the circle: ";
    float Perimeter;
    const float pi = 3.14159;
    cin >> Perimeter;
    cout << "Area = " << (Perimeter * Perimeter)/ (4 * pi);
    return 0;
}
