#include <iostream>
using namespace std;

int main()
{
    int a=3;
    int b=6;
    cout<<a<<" "<<b<<endl;

    b=a+b;
    a=b-a;
    b=b-a;

    cout<<a<<" "<<b;

}
