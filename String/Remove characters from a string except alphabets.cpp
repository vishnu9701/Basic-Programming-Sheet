#include <iostream>
using namespace std;

int main()
{
    string s="Vishnupandey9426@gmail.com";
    int n=s.length();
    int m=0;

    for(int i=0;s[i]!='\0';i++)
    {
        if(!((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || s[i]=='\0'))
        {
            s[i]='\0';  
        } 
    }
    cout<<s;
}
