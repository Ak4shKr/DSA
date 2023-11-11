#include <bits/stdc++.h>
using namespace std;
int solve(int A)
{
    int products = 1;

    while (A > 0)
    {
        int rem = A % 10;
        products *= rem;
        A = A / 10;
    }
    return products;
}

int main()
{
    int A = 61234;
    cout << solve(A);
    return 0;
}