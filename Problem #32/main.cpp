#include <iostream>
#include <cmath>

using namespace std;

float Function()
{
    float num, Power;

    cout << "Enter the number : ";
    cin >> num;

    cout << "Enter the power : ";
    cin >> Power;

    return pow(num, Power);


}

int main()
{
     cout << Function();
    return 0;
}
