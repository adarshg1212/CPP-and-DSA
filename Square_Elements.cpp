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
    cout << "The square of all element of the given array is: ";
    int x[n];
    for (int i = 0; i < n; i++)
    {
        x[i] = arr[i] * arr[i];
        cout << x[i] << " ";
    }
}