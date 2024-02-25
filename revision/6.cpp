// Recursive call for printing number between 1 to 10

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    if (n > 0)
    {
        cout << n << " " << endl;
        n--;
    }
    else
    {
        return;
    }
    print(n);
}

int main()
{
    int num = 10;

    print(num);

    return 0;
}