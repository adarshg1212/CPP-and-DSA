#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any number:" << endl;
    cin >> n;
    if (n > 99 && n < 1000)
    {
        cout << "The number is three digit" << endl;
    }
    else
    {
        cout << "The number is not three digit";
    }
}