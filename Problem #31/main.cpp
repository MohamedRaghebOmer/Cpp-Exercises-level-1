#include <iostream>

using namespace std;

int main()
{
//                      (Problem #31)
    cout <<"Enter a number \n";
    float num;
    cin >> num;
     float a = num * num;
     float b = num * num * num;
     float c = num * num * num * num;
     cout << num << " x " << num << "= " << a << endl;
     cout << num << " x " << num << " x " << num << "= " <<  b << endl;
     cout << num << " x " << num << " x " << num << " x " << num << "= " << c << endl;
    return 0;
}

