#include <iostream>
#include <cmath>

using namespace std;

int main()
{
// Get the number from the user
    float num;
    cout << "Enter a number : ";
    cin >> num;

// Declare the resluts
    double reslut_1 = pow(num, 2);
    double reslut_2 = pow(num, 3);
    double reslut_3 = pow(num, 4);

// Show the result
    cout << num << "^2 = " << reslut_1 << endl;
    cout << num << "^3 = " << reslut_2 << endl;
    cout << num << "^4 = " << reslut_3 << endl;


    return 0;
}
