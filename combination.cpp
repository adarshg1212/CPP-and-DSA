#include <iostream>
using namespace std;
int comb(int n, int r)
{
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        a *= i;
    }
    int d = 1;
    for (int i = 1; i <= r; i++)
    {
        d *= i;
    }
    int b = 1;
    for (int i = 1; i <= (n - r); i++)
    {
        b *= i;
    }
    return a / (b * d);
}
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    int r;
    cout << "Enter the value of r:";
    cin >> r;
    comb(n, r);
    cout << "The combination is=" << comb(n, r);
}