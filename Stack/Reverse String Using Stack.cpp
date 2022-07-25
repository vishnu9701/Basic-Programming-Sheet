#include <iostream>
#include<stack>
using namespace std;

int main()
{
    string name="Vishnu";
    int n=name.length();
    stack<char> s;

    for(int i=0;i<n;i++)
    {
        s.push(name[i]);
    }
    for(int i=0;i<n;i++)
    {
        name[i]=s.top();
        s.pop();
    }
    cout<<name;
}
