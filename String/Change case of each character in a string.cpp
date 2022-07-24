#include<iostream>
using namespace std;

int main()
{
    string s="VEdu";
    
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]=s[i]+32;  //ascii value A+32=a
        }
        else if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=s[i]-32;  //ascii value a-32=A
        }
    }

    cout<<"my string after converstion is "<<s<<endl;
}
