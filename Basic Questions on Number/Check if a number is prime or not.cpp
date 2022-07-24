#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=43;
    int m=0;

    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        m++;
    }
    if(m==0)
    cout<<"Yes,Number is Prime";
    else
    cout<<"No,Number is not prime";
}
