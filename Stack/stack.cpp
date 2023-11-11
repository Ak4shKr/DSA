#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(123);
    s.push(1232);
    s.push(242);
    s.push(1536);
    s.push(13635);

    cout << s.size() << endl;
    s.pop();
    cout << s.size() << endl;

    cout << s.top() << endl;

    cout << s.empty() << endl;

    return 0;
}