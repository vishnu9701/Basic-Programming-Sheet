#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Glory to Hanuman";
    int n = s.length();
    int vowel = 0, cons = 0, space = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            vowel++;
        }
        else
        {
            cons++;
        }
    }
    cout<<"Vowels are "<<vowel<<endl;
    cout<<"Const are "<<cons<<endl;
}
