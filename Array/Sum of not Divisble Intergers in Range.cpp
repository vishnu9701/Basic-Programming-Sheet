/*
The function takes two integrals m and n as arguments.
You are required to obtain the total of all integers ranging between 1 to n (both inclusive)
which are not divisible by m. You must also return the distinction between
the sum of integers not divisible by m with the sum of integers divisible by m.
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 6;
    int n = 30;
    int sum = 0;

    for (int i = 1; i <= 30; i++)
    {
        if (i % a != 0)
            sum = sum + i;
    }
    cout << sum;
}
