#include <iostream>
using namespace std;

int main()
{
    int n = 25;
    int sq = n * n;

    while (n > 0)
    {
        if (n % 10 != sq % 10)
        {
            cout << "No";
            return 0;
        }
        else
        {
            n = n / 10;
            sq = sq / 10;
        }
    }
    cout << "YES";
}
