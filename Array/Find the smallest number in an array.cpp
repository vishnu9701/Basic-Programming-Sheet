#include<iostream>
using namespace std;

int main()
{
    int a[]={3,6,9,1,2,15,18};
    int n=sizeof(a)/sizeof(a[0]);

    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    cout<<"Minimum of these array is "<<min;
}
