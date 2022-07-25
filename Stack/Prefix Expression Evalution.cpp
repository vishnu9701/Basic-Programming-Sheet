#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int main()
{
    string s = "-+7*45+20"; // 
    int n = s.length();
    stack<int> st;

    for (int i = n-1; i>=0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(a + b);
                break;
            case '-':
                st.push(a - b);
                break;
            case '*':
                st.push(a * b);
                break;
            case '/':
                st.push(a / b);
                break;
            case '^':
                st.push(pow(a, b));
                break;
            }
        }
    }
    cout << st.top();
}
