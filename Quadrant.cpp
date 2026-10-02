#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the 1st number: ";
    cin >> x;
    cout << "Enter the 2nd number: ";
    cin >> y;
    if (x > 0 && y > 0)
    {
        cout << "The 1st quadrant" << endl
             << x << y;
    }
    if (x < 0 && y > 0)
    {
        cout << "The 2nd quadrant" << endl
             << x << y;
    }
    if (x < 0 && y < 0)
    {
        cout << "The 3rd quadrant" << endl
             << x << y;
    }
    if (x > 0 && y < 0)
    {
        cout << "The 4th quadrant" << endl
             << x << y;
    }
    return 0;
}