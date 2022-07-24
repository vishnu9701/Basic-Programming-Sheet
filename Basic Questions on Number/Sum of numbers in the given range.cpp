#include <iostream>
using namespace std;

int main()
{
    int a=5,b=10,sum=0;

    for(int i=a;i<=b;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of Numbers between "<<a<<"-"<<b<<" is "<<sum;
}
