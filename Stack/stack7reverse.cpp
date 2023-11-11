#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int x)
{
    // base case
    if (s.empty())
    {
        s.push(x);
        return;
    }
    // recursive call
    int p = s.top();
    s.pop();
    insertAtBottom(s, x);

    // return case
    s.push(p);
}

void reverse(stack<int> &s)
{
    // base case
    if (s.empty())
    {
        return;
    }

    // recursive call
    int x = s.top();
    s.pop();
    reverse(s);

    // return statement
    insertAtBottom(s, x);
}

int main()
{
    stack<int> s;
    s.push(12);
    s.push(45);
    s.push(616);
    s.push(212);
    s.push(132);

    int n = s.size();

    reverse(s);

    for (int i = 0; i < 5; i++)
    {
        cout << s.top() << "   ";
        s.pop();
    }

    return 0;
}