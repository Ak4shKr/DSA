#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue()
    {
        size = 6;
        arr = new int[size];
        front = rear = 0;
    }

    void push(int data)
    {
        if (rear == size)
        {
            cout << "queue is full: " << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int frontElement()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
            return false;
    }

    int pop()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;

            if (front == rear)
            {
                front = 0;
                rear = 0;
            }

            return ans;
        }
    }
};

int main()
{
    Queue q;
    q.push(12);
    q.push(91);
    q.push(712);
    q.push(25);
    q.push(132);
    q.push(272);

    int ans = q.frontElement();
    cout << "Top element is: " << ans << endl;

    cout << q.isEmpty() << endl;
    cout << q.rear << endl;
    cout << q.size << endl;
    while (!q.isEmpty())
    {
    }
    return 0;
}