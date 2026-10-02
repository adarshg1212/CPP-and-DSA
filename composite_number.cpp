#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the value of n:";
    cin >> n;
    bool flag = true;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false;
        }
    }
    if (n == 1)
    {
        cout << "The input number is neither prime nor composite";
    }
    else if (flag == false)
    {
        cout << "The input number is composite number";
    }
    else
    {
        cout << "The input number is prime number";
    }
}