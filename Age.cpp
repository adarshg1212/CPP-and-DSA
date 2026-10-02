#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter age of person:\n";
    cin >> n;
    if (n >= 18)
    {
        cout << "The person can give vote\n";
    }
    else
    {
        cout << "The person cannot give vote\n";
    }
    return 0;
}
