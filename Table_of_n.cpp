#include <iostream>
using namespace std;
int main()
{
    int n, M;
    cout << "Enter the value of n:";
    cin >> n;
    cout << "The table of n is: ";
    for (int i = 1; i <= 10; i++)
    {
        M = n * i;
        cout << M << " ";
    }
}