// sum of firsr n natural number using recursion

#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return sum(n - 1) + n;
}

int main()
{
    int n = 10;
    cout << "sum o first natural number is:" << sum(n) << endl;

    return 0;
}
