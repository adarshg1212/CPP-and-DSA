#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any positive integer: ";
    cin >> n;
    (n % 2 == 0) ? cout << "The input number is even number" : cout << "The input number is odd number";
}