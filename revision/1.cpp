#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 235;
    int count = 0;

    // while (n != 0)
    // {
    //     n = n / 10;
    //     count++;
    // }

    // cout << "number of digits: " << count << endl;

    string str = to_string(n);
    int p = str.length();
    cout << p;

    return 0;
}