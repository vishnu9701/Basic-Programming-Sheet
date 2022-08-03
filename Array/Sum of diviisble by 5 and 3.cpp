/*
int Calculate(int m, int n);

The function accepts 2 positive integer ‘m’ and ‘n’ as its arguments.You are required to calculate the sum of numbers divisible both by 3 and 5,
 between ‘m’ and ‘n’ both inclusive and return the same.
Note
0 < m <= n

Example

Input:

m : 12
n : 50

Output
90
*/

#include <iostream>
using namespace std;

int calculate(int m, int n)
{
    int sum = 0;
    for (int i = m; i <= n; i++)
    {
        if (i % 15 == 0)
            sum = sum + i;
    }
    return sum;
}

int main()
{
    int m = 12;
    int n = 50;

    cout << calculate(m, n);
}
