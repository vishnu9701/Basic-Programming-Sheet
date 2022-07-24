#include <iostream>
using namespace std;

bool pal(int n)
{
    int m = n;
    int sum = 0;
    while (n > 0)
    {
        sum = sum * 10 + n % 10;
        n = n / 10;
    }
    return sum==m;
}
int main()
{
    int low=99,high=333;

    for(int i=low;i<high;i++)
    {
        if(pal(i)==1)
        cout<<i<<" ";
    }
}
