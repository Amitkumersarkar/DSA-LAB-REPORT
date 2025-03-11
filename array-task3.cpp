#include <bits/stdc++.h>
#include <climits>
using namespace std;

// find  maximum and minium number size of array input from user
int main()
{
    int n;        // user variable declaration
    cin >> n;     // user input
    int array[n]; // datatypes and arrayName and size

    for (int i = 0; i < n; i++) // for loops
    {
        cin >> array[i]; // taking user input
    }

    int maxNum = INT_MIN;
    int minNum = INT_MAX; // initialize variable

    for (int i = 0; i < n; i++)
    {
        if (array[i] > maxNum) // checking max or not
        {
            maxNum = array[i]; // update the array
        }

        else if (array[i] < minNum)
        {
            minNum = array[i]; // update minNumber of array
        }
    }

    return 0;
}