#include <iostream>
using namespace std;

int main()
{
    int a[] = {3, 6, 9, 12, 15};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 2;

    for (int i = 0; i < k; i++)
    {
        int temp = a[0];
        for (int j = 0; j < n; j++)
        {
            a[j] = a[j + 1];
        }
        a[n - 1] = temp;
    }

    for (auto i : a)
    {
        cout << i << " ";
    }
}

// Second Method and Fast

#include<iostream>
using namespace std;

void reverse(int a[],int start,int end)
{
    while(start<=end)
    {
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}
int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int k=2;

    reverse(a,0,k-1);
    reverse(a,k,n-1);
    reverse(a,0,n-1);
                                                              
    for(auto i:a)
    {
        cout<<i<<" "<<endl;
    }
}
