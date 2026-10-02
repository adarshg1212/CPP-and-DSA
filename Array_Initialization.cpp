#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 4, 7, 6, 9};
    cout << arr[0] << " ";
    cout << arr[1] << " ";
    cout << arr[2] << " ";
    cout << arr[3] << " ";
    cout << arr[4] << " ";
    cout << endl;
    // multiplying with 2 in all element of an array
    cout << 2 * arr[0] << " ";
    cout << 2 * arr[1] << " ";
    cout << 2 * arr[2] << " ";
    cout << 2 * arr[3] << " ";
    cout << 2 * arr[4] << " ";
    cout << endl;
    // kisi bhi element ko change karna
    arr[0] = 5;
    cout << arr[0] << " ";
    cout << arr[1] << " ";
    cout << arr[2] << " ";
    cout << arr[3] << " ";
    cout << arr[4] << " ";
    cout << endl;
}