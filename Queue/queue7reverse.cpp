#include <bits/stdc++.h>
using namespace std;

void reverse(deque<int> &arr, int n, vector<int> &ans)
{
    int count = 0;
    // base case
    if (count >= n)
    {
        return;
    }

    // recursive
    int p = arr.front();
    arr.pop_front();
    count++;
    reverse(arr, n - 1, ans);
    ans.push_back(p);
}

int main()
{

    deque<int> arr;
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(9);
    arr.pop_back();
    vector<int> ans;

    reverse(arr, arr.size(), ans);

    for (int i : ans)
    {
        cout << i << "  ";
    }
    return 0;
}