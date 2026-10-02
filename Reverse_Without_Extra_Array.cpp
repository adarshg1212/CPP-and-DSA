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
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[4 - i] << " ";
    }
    cout << endl;
}