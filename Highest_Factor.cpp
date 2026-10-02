#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any positive integer: ";
    cin >> n;
    cout << "The highest factor is: ";
    for (int i = n / 2; i > 1; i--)
    {
        if (n % i == 0)
        {
            cout << i;
            break;
        }
    }
}