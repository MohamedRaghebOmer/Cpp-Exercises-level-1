 #include <iostream>

using namespace std;

void ProcedureToPrintMyName()
{
    string name;
    cout << "Write your name : ";
    getline(cin, name);
    cout << "My name is : " << name;
}

int main()
{
    ProcedureToPrintMyName();
    return 0;
}
