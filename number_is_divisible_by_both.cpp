#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number:" << endl;
    cin >> n;
    if (n % 5 == 0 && n % 3 == 0)
    {
        cout << "The number is divisible by 3 and 5" << endl;
    }
    else
    {
        cout << "The number is not divisible by 3 and 5" << endl;
    }
}
