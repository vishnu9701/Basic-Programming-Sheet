#include <iostream>
using namespace std;

int main()
{
    int a[] = {3, 6, 9, 12, 15, 18};
    int n = sizeof(a) / sizeof(a[0]);

    int l=0,h=n-1;
    while(l<h)
    {
        int temp=a[l];
        a[l]=a[h];
        a[h]=temp;
        l++;
        h--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
