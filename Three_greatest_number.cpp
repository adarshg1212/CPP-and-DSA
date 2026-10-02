#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "The vlue of a " << endl;
    cin >> a;
    cout << "The vlue of b " << endl;
    cin >> b;
    cout << "The vlue of c " << endl;
    cin >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "a is greatest " << endl;
        }
        else
        {
            cout << "c is greatest " << endl;
        }
    }
    else
    {
        cout << "b is greatest " << endl;
    }
}