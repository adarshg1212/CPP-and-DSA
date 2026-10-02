#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any positive number: ";
    cin >> n;
    int sum = 0;
    int rem;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    cout << "The sum of all the digits of the given number is: " << sum;
}