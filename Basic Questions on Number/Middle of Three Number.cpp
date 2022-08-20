#include<iostream>
using namespace std;

int main()
{
    int a=143,b=333,c=543;

    if((a>b && b>c) || (a<b && b<c))
        {
            cout<<b;
        }
        else if((b>a && a>c) || (b<a && a<c))
        {
            cout<<a;
        }
        else
        {
            cout<<c;
        }

}
