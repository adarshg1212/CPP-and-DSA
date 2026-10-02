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
    int x;
    cin >> x;
    cout << "Number of elements is greater than x is: ";
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
            count++;
    }
    cout << count;
}