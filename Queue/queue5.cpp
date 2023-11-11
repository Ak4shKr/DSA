// IMPLEMENT QUEUE USING STACK

#include <bits/stdc++.h>
using namespace std;

void PUSH(int data, queue<int> &q1, queue<int> &q2)
{
    q2.push(data);

    while (!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }

    swap(q1, q2);
}

void POP(queue<int> &q1)
{
    q1.pop();
}

int TOP(queue<int> &q1)
{
    return q1.front();
}

int main()
{
    queue<int> q1;
    queue<int> q2;

    PUSH(3, q1, q2);
    PUSH(4, q1, q2);
    PUSH(2, q1, q2);
    PUSH(1, q1, q2);

    cout << TOP(q1) << endl;
    POP(q1);

    cout << TOP(q1) << endl;

    return 0;
}