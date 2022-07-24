#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int a[] = {3, 6, 9, 12, 3, 9, 15, 18};
    int n = sizeof(a) / sizeof(a[0]);
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }

    for (auto x : mp)
    {
        cout << "frequency of " << x.first << " is " << x.second << endl;
    }
}
