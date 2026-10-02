#include <iostream>
using namespace std;
int permu(int n, int r)
{
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        a *= i;
    }
    int b = 1;
    for (int i = 1; i <= (n - r); i++)
    {
        b *= i;
    }
    return a / b;
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int r;
    cout << "Enter the value of r: ";
    cin >> r;
    permu(n, r);
    cout << "The permutation is= " << permu(n, r);
}