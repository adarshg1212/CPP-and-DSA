#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter all the element of an array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    int mx = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (mx < arr[i])
        {
            mx = max(mx, arr[i]);
        }
    }
    cout << "The largest number is: " << mx << endl;
    int smx = INT_MIN;
    for (int i = 2; i < n; i++)
    {
        if (arr[i] != mx)
        {
            smx = max(smx, arr[i]);
        }
    }
    cout << "The second largest number is: " << smx;
}