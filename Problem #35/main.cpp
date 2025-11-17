#include <iostream>

using namespace std;

int main()
{
//                      (Problem #35)
float Penny,Nickel,Dime ,Quarter ,Dollar;
cout << "How much do you have from: \n";

    cout << "Penny: ";
        cin >> Penny;

    cout << "Nickel: ";
        cin >> Nickel;

    cout << "Dime: ";
        cin >> Dime;

    cout << "Quarter: ";
        cin >> Quarter;

    cout << "Dollar: ";
        cin >> Dollar;

cout << "\n___________________________________\n\n";

// print result
cout << "Total Pennys: " << Penny + Nickel*5 + Dime*10 + Quarter*25 + Dollar*100 << endl;
cout << "Total Nickels: " << Nickel + Dime*10 + Quarter*25 + Dollar*100 << endl;
cout << "Total Dimes: " << Dime + Quarter*25 + Dollar*100 << endl;
cout << "Total Quarters: " << Quarter + Dollar*100 << endl;
cout << "Total Dollars: " << Dollar << endl;





    return 0;
}
