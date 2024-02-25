#include <bits/stdc++.h>
using namespace std;

void printName(int n)
{
    if (n > 0)
    {
        cout << "Akash->" << n << endl;
        n--;
    }
    else
        return;

    printName(n);
}

int main()
{
    int num = 10;
    printName(num);
    return 0;
}