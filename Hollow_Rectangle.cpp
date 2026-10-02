#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of row: ";
    cin >> n;
    int c;
    cout << "Enter number of column: ";
    cin >> c;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || j == 1 || i == n || j == c)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}