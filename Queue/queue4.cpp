// IMPLEMENT QUEUE USING STACK

#include <bits/stdc++.h>
using namespace std;

void PUSH(int data, stack<int> &ip)
{
    ip.push(data);
}

void POP(stack<int> &ip, stack<int> &op)
{
    if (!op.empty())
    {
        op.pop();
    }
    else
    {
        for (int i = 0; i < ip.size(); i++)
        {
            op.push(ip.top());
            ip.pop();
        }
        op.pop();
    }
}

int TOP(stack<int> &ip, stack<int> &op)
{
    if (!op.empty())
    {
        return op.top();
    }
    else
    {
        int n = ip.size();
        for (int i = 0; i < n; i++)
        {
            op.push(ip.top());
            ip.pop();
        }
        return op.top();
    }
}

int main()
{
    stack<int> ip;
    stack<int> op;

    PUSH(2, ip);
    PUSH(5, ip);
    PUSH(3, ip);

    cout << TOP(ip, op) << endl;
    POP(ip, op);

    PUSH(6, ip);

    POP(ip, op);
    POP(ip, op);

    cout << TOP(ip, op) << endl;

    return 0;
}