#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 5, 8, 7, 9};
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int brr[5];
    for (int i = 4; i >= 0; i--)
    {
        brr[i] = arr[i];
        cout << brr[i] << " ";
    }
    cout << endl;
}