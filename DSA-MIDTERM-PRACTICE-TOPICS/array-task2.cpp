#include <iostream>
using namespace std;

// declare an array from user input
int main()
{
    int n, i;
    cin >> n;
    int array[n];
    // user input
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    // print output
    for (i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}