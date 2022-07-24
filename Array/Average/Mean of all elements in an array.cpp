#include <iostream>
using namespace std;

int main()
{
    int a[] = {3, 6, 9, 12, 15};
    int n = sizeof(a) / sizeof(a[0]);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"Average of Array Element is "<<sum/n;
}
