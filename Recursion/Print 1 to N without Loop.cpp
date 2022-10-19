#include<iostream>
using namespace std;

void display(int n)
{
    if(n==0)
    return ;
    display(n-1);
    cout<<n<<"\n";
}
int main()
{
    int n=10;
    display(n);
}
