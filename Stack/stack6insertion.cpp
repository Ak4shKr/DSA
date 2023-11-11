#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int n, int x)
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
    insertAtBottom(s, n, x);

    // return case
    s.push(x);
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
    int x = 1;
    cout << "size before insertion: " << s.size() << endl;
    insertAtBottom(s, n, x);

    cout << "size after insertion: " << s.size() << endl;
    cout << "new stack: " << endl;

    return 0;
}