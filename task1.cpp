#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {10, 7, 9, 2, 4, 5, 1};
    for (int n = 0; n < 7; n++)
    {
        cout << arr[n] << " ";
    }
    for (int n = 0; n < 7; n++)
    {
        if (n == 0)
            cin >> arr[n];
        if (n == 6)
            cin >> arr[n];
    }
    for (int n = 0; n < 7; n++)
    {
        cout << arr[n] << " ";
    }
    cout << endl;
    for (int n = 3; n < 7; n++)
    {
        arr[n] = arr[n + 1];
    }
    return 0;
}