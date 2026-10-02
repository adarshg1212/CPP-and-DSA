#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 5, 8, 7, 9};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // first method //
    int mn = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (mn > arr[i])
        {
            mn = arr[i];
        }
    }
    cout << mn;
    cout << endl;
    // second method //
    for (int i = 1; i < 5; i++)
    {
        if (mn < arr[i])
        {
            mn = min(mn, arr[i]);
        }
    }
    cout << mn;
}