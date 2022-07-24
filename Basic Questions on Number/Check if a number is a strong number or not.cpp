#include <iostream>
#include <math.h>
using namespace std;

int facto(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n = 145;
    int m = n, sum = 0;
    while (n > 0)
    {
        sum =sum + facto(n % 10);
        n = n / 10;
    }
    if (sum == m)
        cout << "Yes";
    else
        cout << "No";
}
