#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a=3,b=9;
    int lcm,maxi=max(a,b);
    for(int i=maxi;i<a*b;i++)
    {
        if(maxi%a==0 && maxi%b==0)
        lcm=maxi;
    }
    cout<<"LCM = "<<lcm<<endl;
}
