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
    int product = 1;
    for (int i = 0; i < 5; i++)
    {
        product *= arr[i];
    }
    cout << product;
}