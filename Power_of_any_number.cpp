#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int base, exponent;
    cout << "Enter the value of base:";
    cin >> base;
    cout << "Enter the value of exponent:";
    cin >> exponent;
    cout << "Power= " << pow(base, exponent);
    return 0;
}