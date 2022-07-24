#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=153;
    int sum=0;
    int m=n;
    while(n>0)
    {
        int rd=n%10;
        sum=sum+rd*rd*rd;
        n=n/10;
    }
    if(m==sum) cout<<"YES";
    else cout<<"No";
}
