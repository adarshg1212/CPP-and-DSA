#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    int arr[n];
    cout << "The element of an array is: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The new array element is: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            cout << arr[i] + 10 << " ";
        else
            cout << 2 * arr[i] << " ";
    }
}