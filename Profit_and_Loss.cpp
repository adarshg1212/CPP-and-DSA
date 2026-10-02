#include <iostream>
using namespace std;
int main()
{
    int cp, sp, profit, loss;
    cout << "Enter the cost prize: ";
    cin >> cp;
    cout << "enter the selling prize: ";
    cin >> sp;
    if (cp > sp)
    {
        cout << "The Loss is: ";
        loss = cp - sp;
        cout << loss;
    }
    else
    {
        cout << "The Profit is: ";
        profit = sp - cp;
        cout << profit;
    }
    return 0;
}