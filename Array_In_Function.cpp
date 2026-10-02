#include <iostream>
using namespace std;
int change(int arr[])
{
    arr[0] = 5;
}
int main()
{
    int arr[5] = {2, 5, 8, 7, 9};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    change(arr);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}