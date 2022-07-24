#include<iostream>
using namespace std;

int main()
{
    int a[]={3,6,9,3,6};
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            cout<<a[j]<<" ";
        }
    }
}


// Second Method 


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={3,3,3,6,6,9,3};
    int n=sizeof(a)/sizeof(a[0]);
    int m;

    for(int i=0;i<n-1;i++)
    {
        m=1;
        if(a[i]!=-1)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    m++;
                    a[j]=-1;
                }
            }
            if(m>1)
            cout<<a[i]<<" "<<m<<endl;
        }
    }

}
