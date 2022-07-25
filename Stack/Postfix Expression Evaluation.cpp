#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int main()
{
    string s = "45 +2/5*7+"; // 
    int n = s.length();
    stack<int> st;

    for (int i =0; i<n; i++)
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
