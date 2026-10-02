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
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    cout << sum;
}