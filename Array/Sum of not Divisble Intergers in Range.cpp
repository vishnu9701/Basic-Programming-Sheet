#include<iostream>
using namespace std;

int main()
{
    int a=6;
    int n=30;
    int sum=0;

    for(int i=1;i<=30;i++)
    {
        if(i%a!=0)
        sum=sum+i;
    }
    cout<<sum;
}
