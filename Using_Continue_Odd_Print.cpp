#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any positive integer: ";
    cin >> n;
    cout << "The odd numbers are: ";
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << " ";
    }
}
