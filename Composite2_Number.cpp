#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter any positive number: ";
    cin >> n;
    if (n == 1)
    {
        cout << "Input number is neither prime nor composite";
    }
    bool flag = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << "Input number is prime number";
    }
    else
    {
        cout << "Input number is composite number";
    }
}