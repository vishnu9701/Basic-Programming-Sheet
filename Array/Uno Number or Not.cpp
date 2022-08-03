#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n=369;
    int sum=0;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }  
    if(sum==n)
    cout<<"Uno Number";
    else
    cout<<"Not Uno Number";
} 
