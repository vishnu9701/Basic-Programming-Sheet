#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {3, 6, 9, 12, 15, 19};
    int n = sizeof(a) / sizeof(a[0]);
    int key = 12;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << "key is found at " << i + 1 << endl;
            return 0;
        }
    }
    cout << "Sorry Key Not Found" << endl;
}
