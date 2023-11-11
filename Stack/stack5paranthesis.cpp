#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<char> s1;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            s1.push(s[i]);
        }
        else
        {
            if (!s1.empty())
            {
                char top = s1.top();
                if ((s[i] == ')' && top == '(') ||
                    (s[i] == '}' && top == '{') ||
                    (s[i] == ']' && top == '['))
                {

                    s1.pop();
                }
                else
                    return 0;
            }
            else
                return 0;
        }
    }
    if (s1.empty())
    {
        return true;
    }
    return false;
}

int main()
{
    string s = "(])";
    bool res = isValid(s);
    cout << "result is:" << res << endl;
    return 0;
}