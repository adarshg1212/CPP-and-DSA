#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {3, 5, 6, 2, 7, 4};
    int n;
    cout << "Enter any number: ";
    cin >> n;
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i; j < 6; j++)
        {
            if (arr[i] + arr[j] == n)
            {
                count++;
            }
        }
    }
    cout << count;
}