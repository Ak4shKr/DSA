
#include <bits/stdc++.h>
using namespace std;

// Function to solve the problem using dynamic programming
int solveUtil(int ind, vector<int> &arr, vector<int> &dp)
{
    // if (ind < 0)
    //     return 0;
    // If the result for this index is already computed, return it
    // if (dp[ind] != -1)
    //     return dp[ind];

    // Base cases
    dp[0] = 2;
    for (int i = 1; i < ind)

        // Choose the current element or skip it, and take the maximum
        int pick = arr[ind] + solveUtil(ind - 2, arr, dp); // Choosing the current element
    int nonPick = 0 + solveUtil(ind - 1, arr, dp);         // Skipping the current element

    // Store the result in the DP table and return it
    return dp[ind] = max(pick, nonPick);
}

// Function to initiate the solving process

int main()
{
    vector<int> arr{2, 1, 4, 9};
    int n = arr.size();
    vector<int> dp(n, 0); // Initialize the DP table with -1
    int ans = solveUtil(n - 1, arr, dp);
    cout << ans;
    // for (auto it : dp)
    // {
    //     cout << it << "    ";
    // }

    // Call the solve function and print the result

    return 0;
}
