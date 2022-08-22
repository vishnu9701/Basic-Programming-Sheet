#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            return i;
    }
    return -1;
}

int main()
{
    int a[] = {0, 0, 0, 1, 1};
    int n = sizeof(a) / sizeof(a[0]);
    cout << transitionPoint(a, n) << endl;
    return 0;
}
