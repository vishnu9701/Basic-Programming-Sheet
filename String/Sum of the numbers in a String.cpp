#include <iostream>
using namespace std;

int main()
{
    string s="Vedu333";
    int n=s.length();
    int sum=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            sum=sum+s[i]-48;
        }
    }
    cout<<"Sum of digit in String is "<<sum;
}
