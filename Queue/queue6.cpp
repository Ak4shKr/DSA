// IMPLEMENT QUEUE USING STACK

#include <bits/stdc++.h>
using namespace std;

void PUSH(int data, queue<int> &q)
{
    q.push(data);
    int n = q.size();
    for (int i = 0; i < n - 1; i++)
    {
        q.push(q.front());
        q.pop();
    }
}

void POP(queue<int> &q)
{
    q.pop();
}

int TOP(queue<int> &q)
{
    return q.front();
}

int main()
{
    queue<int> q;
    PUSH(3, q);
    PUSH(2, q);
    PUSH(4, q);
    PUSH(1, q);

    cout << TOP(q) << endl;
    POP(q);

    cout << TOP(q) << endl;

    return 0;
}