#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    n=9;

    int a=0,b=1,c;

    if(n==0)
    {
        cout<<a<<endl;
    }
    else
    {
        for(int i=2;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        cout<<n<<" nth Term is "<<b<<endl;
    }
}
