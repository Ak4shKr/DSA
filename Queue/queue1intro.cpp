#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d;
    d.push_front(121);
    d.push_back(145);

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_back();
    cout << "size:" << d.size() << endl;
    ;

    if (d.empty())
    {
        cout << "queue is empty!" << endl;
    }
    else
        cout << "Queue is not empty : " << endl;

    /*queue<int> q;
     q.push(11);
     cout << "front is: " << q.front() << endl;
     q.push(15);
     cout << "front is: " << q.front() << endl;

     q.push(13);
     cout << "front is: " << q.front() << endl;

     q.pop();
     q.pop();
     q.pop();

     cout << "size is: " << q.size() << endl;

     if (q.empty())
     {
         cout << "Queue is empty: " << endl;
     }
     else
         cout << "Queue is not empty: " << endl;
         */

    return 0;
}