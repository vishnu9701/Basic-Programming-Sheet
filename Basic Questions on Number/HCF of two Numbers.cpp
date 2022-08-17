#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a=35,b=1200;
    int hcf;
    for(int i=1;i<abs(a-b);i++)
    {
        if(a%i==0 && b%i==0)
        hcf=i;
    }
    cout<<"HCF = "<<hcf<<endl;
}
