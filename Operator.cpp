#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3, n4;
    cout << "Enter the 1st number: ";
    cin >> n1;
    char op;
    cin >> op;
    cout << "Enter the 2nd number: ";
    cin >> n2;
    cout << "The result is: ";
    if (op == '+')
        cout << n1 + n2;
    if (op == '-')
        cout << n1 - n2;
    if (op == '*')
        cout << n1 * n2;
    if (op == '/')
        cout << n1 / n2;
}