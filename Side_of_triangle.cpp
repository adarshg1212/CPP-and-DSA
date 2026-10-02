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
    if (a < b + c & b < a + c & c < a + b)
    {
        cout << "Given number are side of a trianlge" << endl;
    }
    else
    {
        cout << "Given number are not side of a trianlge" << endl;
    }
}