#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n";
    cin >> n;
    cout << "The higest factor of n is: ";
    int f = 1;
    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            break;
        }
    }
}