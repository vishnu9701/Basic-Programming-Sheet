#include<iostream>
using namespace std;

int main()
{
    int a[]={3,6,9,12};
    int n=sizeof(a)/sizeof(a[0]);
    int low=0,high=n-1,key=9;

    while(low<=high)
    {
         int mid=(low+high)/2;
         if(a[mid]==key)
         {
             cout<<"key is found "<<mid+1<<endl;
             return 0;
         }
         else if(key<a[mid])
         {
             high=mid-1;
         }
         else
         {
            low=mid+1;
         }
    }   
}
