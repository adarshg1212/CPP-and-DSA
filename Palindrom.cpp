#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter all the element of an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0;
    int j = n - 1;
    bool flag = false;
    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            flag = true;
        }
        i++;
        j--;
    }
    if (flag == true)
    {
        cout << "The array is palindrom";
    }
    else
    {
        cout << "The array is not palindrom";
    }
}