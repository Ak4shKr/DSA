#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

class Stack
{
public:
    Node *head;
    int stacksize;

public:
    Stack()
    {
        head = NULL;
        stacksize = 0;
    }

    void push(int g)
    {
        Node *temp = new Node();
        temp->val = g;
        temp->next = head;
        head = temp;

        cout << "Element " << g << " pushed into the stack!" << endl;
        stacksize++;
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        cout << "Element Popped!" << endl;
        stacksize--;
    }

    int top()
    {
        if (head == NULL)
        {
            cout << "NO TOP ELEMENT" << endl;
            return -1;
        }
        cout << "Top element is " << head->val << endl;
        return head->val;
    }

    int size()
    {
        cout << "Size: " << stacksize << endl;
        return stacksize;
    }

    int empty()
    {
        if (head == NULL)
        {
            cout << "Stack is empty" << endl;
            return 1;
        }
        cout << "Stack is not empty" << endl;
        return 0;
    }
};

int main()
{
    Stack s;
    s.push(7);
    s.push(73);
    s.push(12);
    s.push(12314);

    s.empty();
    s.size();
    s.top();

    return 0;
}