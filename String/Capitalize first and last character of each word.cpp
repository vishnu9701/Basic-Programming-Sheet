#include <iostream>
using namespace std;

int main()
{
    string s="vedanshi";
    int n=s.length();

    if((s[0]>='a' && s[0]<='z') || (s[n-1]>='a' && s[n-1]<='z')  )
    {
        s[0]=s[0]-32;
        s[n-1]=s[n-1]-32;
    }
    cout<<s;
}
