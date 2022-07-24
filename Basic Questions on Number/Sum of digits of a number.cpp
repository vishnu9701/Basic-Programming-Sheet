#include <iostream>
using namespace std;

int main()
{
    int n = 369;
    int sum=0;

    while (n > 0)
    {
       sum=sum+n%10;
       n=n/10;
    }
    cout<<"Sum of digit of Numbers "<<sum; 
}
