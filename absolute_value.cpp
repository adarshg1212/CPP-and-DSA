#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number:" << endl;
    cin >> n;
    if (n >= 0)
    {
        cout << "The absolute value of n is ";
        cout << n;
    }

    else
    {
        cout << "The absolute value of n is ";
        cout << -n;
    }
}