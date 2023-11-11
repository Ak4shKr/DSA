#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int> m;
    int nums[] = {1, 2, 1, 1, 2, 3};
    int k = 2;
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        if (m.count(nums[i]) && i - m[nums[i]] <= k)
        {
            cout << "true" << endl;
            break;
        }
        m[nums[i]] = i;
    }

    cout << "false" << endl;
    return 0;
}