#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1634;
    int count = 0;
    int temp = n;

    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }

    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum = sum + pow(digit, count);
        n = n / 10;
    }

    cout << sum << endl;
    return 0;
}