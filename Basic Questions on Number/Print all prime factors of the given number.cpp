#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n=100;
    for(int i=1;i<sqrt(n);i++)
    {
        if(n%i==0)
        cout<<i<<" ";
    }
}
