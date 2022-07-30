#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 1111;
    int ans = 0, i = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        ans = ans + rem * pow(2, i);
        ++i;
    }
    cout << ans;
}
