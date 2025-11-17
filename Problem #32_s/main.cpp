#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float num, power;
    cout << "Enter the number : " << endl;
        cin >> num;
    cout << "Enter the power : " << endl;
        cin >> power;
     double result = pow(num, power);
    cout << num << "^" << power << " = " << result << endl;
    cout << "Rounding result = " << round(result) << endl;
    return 0;
}
