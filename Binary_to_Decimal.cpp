#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    int res = 0;
    cout << "Enter the number: ";
    cin >> n;
    for (int i = 0; i < 10; i++)
    {
        int rem = n % 10;
        res = res + rem * pow(2, i);
        n = n / 10;
    }
    cout << "The binary conversion into decimal is: ";
    cout << res << endl;
    return 0;
}