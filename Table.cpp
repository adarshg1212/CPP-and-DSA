#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any positive number: ";
    cin >> n;
    cout << "The table of" << " " << n << " " << "is: ";
    for (int i = 1; i <= 10; i++)
    {
        cout << n * i << " ";
    }
}