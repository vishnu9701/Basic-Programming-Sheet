#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Glory to Hanuman";
    int n = s.length();
   int word = 1;
    for (int i = 0; i < n; i++)
    {
        if(s[i]==' '&& s[i-1]!=' ')
        word++;
    }
    cout<<"word are "<<word<<endl;
}
