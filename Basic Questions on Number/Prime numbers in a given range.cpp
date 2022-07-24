#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int low=5,high=100;
    for (int j = low; j <= high; j++)
    {
        int m = 0;
        for (int i = 2; i <= sqrt(j); i++)
        {
            if (j % i == 0)
                m++;
        }
        if (m == 0)
            cout << j << " ";
    }
}
