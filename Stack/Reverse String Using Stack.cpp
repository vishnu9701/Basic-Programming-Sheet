#include <iostream>
#include <stack>
using namespace std; 

int main()
{
    stack<char> st;
    string s = "Vishnu";

    for (int i = 0; i < s.length(); i++)
    {
        st.push(s[i]);
    }
    for(int j=0;j<s.length();j++)
    {
        cout<<st.top();
        st.pop();
    }
}
