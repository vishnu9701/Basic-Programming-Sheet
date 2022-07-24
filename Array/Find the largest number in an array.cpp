#include<iostream>
using namespace std;

int main()
{
    int a[]={3,6,9,1,2,15,18};
    int n=sizeof(a)/sizeof(a[0]);

    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    cout<<"Maxmum of these array is "<<max;
}
