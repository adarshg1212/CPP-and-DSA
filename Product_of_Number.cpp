#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any digit number: ";
    cin >> n;
    int product = 1;
    int rem;
    while (n != 0)
    {
        rem = n % 10;
        product *= rem;
        n = n / 10;
    }
    cout << "The product of all digit of the given number: " << product;
}