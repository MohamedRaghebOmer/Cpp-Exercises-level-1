#include <iostream>

using namespace std;

int main()
{
//              (problem #40)
    cout << "Bill value= ";
        double Bill_value;
            cin >> Bill_value;

    const float service_fee= 1.1;
    const float sales_tax= 1.16;
    double total_bill= Bill_value * service_fee * sales_tax;

cout << "Total bill value= " << total_bill;
    return 0;
}
