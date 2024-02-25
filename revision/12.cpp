// selection sort

#include <bits/stdc++.h>
using namespace std;

void selsort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {2, 5, 2, 9, 3, 8, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    selsort(arr, n);

    return 0;
}