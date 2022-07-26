#include <iostream>
#include <stack>
using namespace std;

stack<char> st;
int main()
{
    string name = "({})";
    int n = name.length();

    for (int i = 0; i < n; i++)
    {
        if (st.empty())
        {
            st.push(name[i]);
        }
        else if (st.top() == '(' && name[i] == ')' || st.top() == '{' && name[i] == '}' || st.top() == '[' && name[i] == ']')
        {
            st.pop();
        }
        else
        {
            st.push(name[i]);
        }
    }

    if (st.empty())
        cout << "Balanced";
    else
        cout << "Not Blanaced";
}
