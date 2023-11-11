#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            temp[i] = arr[i] * arr[i + 1];
        }
        else if (i == n - 1)
        {
            temp[i] = arr[i - 1] * arr[i];
        }
        else
        {
            temp[i] = arr[i - 1] * arr[i + 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    solve(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
