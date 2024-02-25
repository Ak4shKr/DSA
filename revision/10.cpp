// fibonaciii series

#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n == 1 || n == 0)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return n * fact(n - 1);
}

int main()
{
    int n = 10;
    // cout << "fibonacii series for 5 numbers" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << fib(i) << " ";
    // }

    cout << "factorial of 5 is: " << fact(5) << endl;
    cout << "factorial of 6 is: " << fact(6) << endl;
    return 0;
}