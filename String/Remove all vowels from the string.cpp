#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ="Vishnu";
    int n=s.length();

    for(int i=0;i<n;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            for(int j=i;j<n;j++)
            {
                s[j]=s[j+1];
            }
        }
    } 
    cout<<s;
}
