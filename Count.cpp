#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any positive number: ";
    cin >> n;
    int count = 1;
    int rem;
    for (int i = 1; i < n; i++)
    {
        rem = n % 10;
        n = n / 10;
        count++;
    }
    cout << "The digits are in the given number is: " << count;
}