#include<iostream>
using namespace std;

int main()
{
    int n=12321;
    int m=n;
    int sum=0;
    while(n>0)
    {
        sum=sum*10+n%10;
        n=n/10;
    }
    if(sum==m)
    cout<<"Yes,Number is Palindrom";
    else
    cout<<"No,Number is not Polindom";
}
