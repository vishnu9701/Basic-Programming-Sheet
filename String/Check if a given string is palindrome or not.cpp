#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "KAYAK";
    int n=s.length();

    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[n- i - 1])
        {
            cout << "Not a Pallidrome ";
            return 0;
        }
    }
    cout << "Yes It is Pallindrome";
}
