#include <iostream>
using namespace std;
#define n 100

class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {

        if (top == n - 1)
            cout << "Stack overflow" << endl;
        else
            top++;
            arr[top] = x;
    }

    void pop()
    {

        if (top == -1)
            cout << "No element to pop" << endl;
        else
            top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "No element in stack" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top == -1;
    }
};

int main()
{

    stack s;
    s.push(3);
    s.push(6);
    s.push(9);
    cout << s.Top() << endl;
    s.pop();
    cout << s.Top() << endl;
    s.pop();
    s.pop();
    s.pop();
    cout << s.empty() << endl;
    return 0;
}
