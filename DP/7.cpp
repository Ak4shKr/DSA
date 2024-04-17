#include <bits/stdc++.h>
using namespace std;
void change(vector<int> &arr)
{
    arr[2] = 0;
    arr[3] = 11;
}
int main()
{
    // int arr[5] = {3, 2, 1, 4, 5};
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    cout << arr[2] << endl;

    change(arr);
    cout << arr[2] << endl;
    cout << arr[3];
    return 0;
}