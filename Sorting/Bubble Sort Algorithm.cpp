#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={3,6,9,12,15,18,3,3,6,9};
    int n=sizeof(a)/sizeof(a[0]);
    
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=1;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
            flag++;
        }
        if(flag==0)
        break;
    }

    for(auto i:a)
    {
        cout<<i<<" ";
    }
}
