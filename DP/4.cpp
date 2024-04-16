#include <bits/stdc++.h>
using namespace std;
string reverse(string s)
{
    cout << s;
    int n = s.size();
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
    string s1 = reverse(s);
    cout << s << endl;
    cout << s1 << endl;
    return 0;
}