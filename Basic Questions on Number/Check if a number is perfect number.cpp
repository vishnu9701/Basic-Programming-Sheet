#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=6;
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==n) 
    cout<<"Yes";
    else cout<<"No"; 
}
