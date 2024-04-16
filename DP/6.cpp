#include <bits/stdc++.h>
using namespace std;
int main()
{
    int maxi = INT_MIN;
    vector<int> Arr = {7, 3, 5, 2, 6, 9};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            int profit = Arr[j] - Arr[i];
            maxi = max(maxi, profit);
        }
    }

    cout << maxi;
    return 0;
}