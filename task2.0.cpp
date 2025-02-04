#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {7, 3, 2, 4, 5, 9, 1};
    int a = sizeof(arr) / sizeof((arr)[0]);
    sort(arr, arr + a);
    for (auto i : arr)
        cout << i << " ";

    return 0;
}