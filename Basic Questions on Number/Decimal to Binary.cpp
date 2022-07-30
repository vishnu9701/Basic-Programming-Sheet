#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 8;
    int ans = 0;
    int remainder, i = 1;

    while (n != 0)
    {
        remainder = n % 2;
        ans = ans + remainder * i;
        i = i * 10;
        n = n / 2;
    }
    cout << ans;
}
