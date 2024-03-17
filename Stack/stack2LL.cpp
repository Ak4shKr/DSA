//implementation of stack using linkedList
#include <iostream>
using namespace std;

//creating a object for node
struct Node
{
    int val;
    Node *next;
};

//creating a class for stack
class Stack
{
public:
    Node *head;
    int stacksize;

public:
//constructor for stack
    Stack()
    {
        head = NULL;
        stacksize = 0;
    }
//add function into stack
    void push(int g)
    {
        Node *temp = new Node();
        temp->val = g;
        temp->next = head;
        head = temp;

        cout << "Element " << g << " pushed into the stack!" << endl;
        stacksize++;
    }

//removal operation
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

//finding top
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

//gettig size of stack
    int size()
    {
        cout << "Size: " << stacksize << endl;
        return stacksize;
    }

//checking empty or not
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

//jai shree raam, we did it!