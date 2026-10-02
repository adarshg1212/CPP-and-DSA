#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any positive number: ";
    cin >> n;
    int sum = n;
    int rev = 0;
    int rem;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    sum += rev;
    cout << "The reverse number of the given number is: " << rev << endl;
    cout << "The sum of the given number and the reverse number is: " << sum;
}