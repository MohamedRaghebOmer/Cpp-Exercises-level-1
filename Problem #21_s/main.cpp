#include <iostream>
#include <cmath>

using namespace std;

int main()
{
     const double pi = 3.14159;
     float l;
     cout << "Entet \"L\" valueb : ";
     cin >> l;
     double area = ( pow(l, 2) ) / (4 * pi);
     cout << "Area = " << area;
    return 0;
}
