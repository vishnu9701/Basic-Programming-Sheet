#include<iostream>
using namespace std;

void display(int n)
{
    if(n==0)
    return ;
    cout<<n<<"\n";
    display(n-1);
}
int main()
{
    int n=10;
    display(n);
}
