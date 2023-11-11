#include <bits/stdc++.h>
using namespace std;

void sortedinsert(stack<int> &s, int num)
{
    // base case
    if (s.empty() || (!s.empty() && s.top() < num))
    {
        s.push(num);
        return;
    }

    int n = s.top();
    s.pop();

    // recursive call
    sortedinsert(s, num);

    s.push(n);
}

void sortstack(stack<int> &s)
{
    // base case
    if (s.empty())
    {
        return;
    }

    int num = s.top();
    s.pop();

    // recursive call
    sortstack(s);

    sortedinsert(s, num);
}

int main()
{
    stack<int> s;
    s.push(45);
    s.push(12);
    s.push(212);
    s.push(616);
    s.push(132);

    sortstack(s);

    cout << "after sorting:  ";
    for (int i = 0; i < 5; i++)
    {
        cout << s.top() << "   ";
        s.pop();
    }
    return 0;
}