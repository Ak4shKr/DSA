#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> ans;
    string s = "akasha";
    for (auto i : s)
    {
        ans.push(i);
    }

    // cout << ans.size();
    for (auto i = ans.size(); i > 0; i--)
    {
        cout << ans.top() << "  ";
        ans.pop();
    }

    return 0;
}