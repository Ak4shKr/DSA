// second largest element in the array is the

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return 0;
}