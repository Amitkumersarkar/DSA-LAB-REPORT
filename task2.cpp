#include <iostream>
#include <algorithm>
int main()
{
    int arr[] = {7, 2, 9, 4, 1, 6, 3, 8, 5};
    std::sort(arr, arr + 9);
    std::cout << "sorted array is : ";
    for (int a = 0; a < 9; a++)
    {
        std::cout << arr[a] << " ";
    }
    return 0;
}