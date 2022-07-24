#include <iostream>
using namespace std;

int main()
{
    int a[] = {3, 6, 9, 10, 12, 15};
    int n = sizeof(a) / sizeof(a[0]);
    if (n % 2 != 0)
    {
        cout << a[n / 2];
    }
    else
    {
        float ans=(a[n / 2] + a[(n / 2) - 1]) / 2;
        cout<<ans;
    }
}
