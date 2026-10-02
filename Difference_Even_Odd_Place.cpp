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
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum1 += arr[i];
        }
        else
        {
            sum2 += arr[i];
        }
    }
    cout << "sum1 is: " << sum1 << endl;
    cout << "sum2 is: " << sum2 << endl;
    int difference = sum1 - sum2;
    cout << "The difference is: " << difference;
}