#include <iostream>
using namespace std;
int main()
{
    int n=2029;
    int sum=0;
    while(n>0)
    {
        sum=sum*10+n%10;
        n=n/10;
    }
    cout<<sum;
}
