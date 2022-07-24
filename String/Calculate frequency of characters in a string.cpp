#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="vedanshi";
    int n=s.length();

    unordered_map<char,int> mp;
    for(char i: s)
    {
        mp[i]++;
    }
    for(char i:s)
    {
        if(mp[i]!=0)
        cout<<i<<mp[i]<<" ";
        mp[i]=0;
    }
}
