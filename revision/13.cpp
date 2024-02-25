// bubble sort

#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n)
{
    cout << "array after sorting:" << endl;
    int temp;
    for (int i = n - 1; i >= 0; i--)
    {
        int didswap = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didswap = 1;
            }
        }
        if (didswap == 0)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "jai shree raam , all have been successfully executed by the grace of lord Rama" << endl;
}

int main()
{
    int arr[] = {12, 52, 6253, 23425, 346654, 654533, 13};

    cout << "array in unordered" << endl;
    for (auto value : arr)
    {
        cout << value << " " << endl;
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    bubblesort(arr, n);
    return 0;
}