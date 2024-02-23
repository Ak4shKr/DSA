// reverse the number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 7668758;
    int reverse = 0;

    while (num != 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    cout << reverse << endl;

    return 0;
}