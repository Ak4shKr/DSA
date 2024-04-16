#include <bits/stdc++.h>
using namespace std;
int reverse(int s)
{
    // cout << s;
    int n = s.length();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        swap(s[low], s[high]);
    }
    return s;
}
int main()
{
    string s = "Akash";
    // string s1 = reverse(s);
    int p = 10002;
    int q = reverse(p);
    cout << q;
    // cout << s << endl;
    // cout << s1 << endl;
    return 0;
}