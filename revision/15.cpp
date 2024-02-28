// rotate array left by k positions

#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end)
{
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void rotatearr(int arr[], int k, int n)
{

    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 3;
    int n = 10;

    rotatearr(arr, k, n);

    for (int i = 0; i < n; i++)
    {
        /* code */
        // werite here somethings
        cout << arr[i] << " ";
    }

    return 0;
}