#include<iostream>
using namespace std;

int main()
{
    string s="vprpr";
    int n=s.length();
    int m=1;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i]==s[j])
            cout<<s[i]<<" ";          
        }
    }
}
