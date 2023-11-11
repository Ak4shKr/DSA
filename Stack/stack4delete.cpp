#include <bits/stdc++.h>
using namespace std;

void solve(stack<int> &s, int count, int x)
{
    // base condition
    if (count == x)
    {
        s.pop();
        return;
    }
    // recursive call
    int p = s.top();
    s.pop();
    count++;
    solve(s, count, x);

    // return time insertion
    s.push(p);
}

int main()
{

    stack<int> s;

    s.push(5);
    s.push(55);
    s.push(65);
    s.push(45);
    s.push(25);

    cout << "before deletion size: " << s.size() << endl;
    int count = 1;
    int target = 3;
    solve(s, count, target);

    cout << "after deletion size: " << s.size() << endl;
    cout << "top element: " << s.top() << endl;
    int n = s.size();

    cout << "whole stack here!" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << s.top() << "\n";
        s.pop();
    }

    return 0;
}