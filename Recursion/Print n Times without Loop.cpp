#include<iostream>
using namespace std;

void display(int n)
{
    if(n==0)
    return ;
    cout<<"Vishnu Pandey\n";
    return display(n-1);
}
int main()
{
    int n=6;
    display(n);
}
