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
    int mx = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (mx < arr[i])
        {
            mx = arr[i];
        }
    }
    cout << mx;
    cout << endl;
    // second method //
    for (int i = 1; i < 5; i++)
    {
        if (mx < arr[i])
        {
            mx = max(mx, arr[i]);
        }
    }
    cout << mx;
}