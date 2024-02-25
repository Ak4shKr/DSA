// count the frequency

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2, 2};

    map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]]++;
    }

    // cout << m.size() << endl;
    int ans = 0;
    int val;

    for (int i = 0; i < nums.size(); i++)
    {
        if (m[nums[i]] > ans)
        {
            val = nums[i];
        }
        ans = m[nums[i]];
    }

    cout << val;

    return 0;
}