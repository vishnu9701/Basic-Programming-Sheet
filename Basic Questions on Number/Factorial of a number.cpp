#include <iostream>
using namespace std;
int main()
{
    int n=5;
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Facrorial of "<<n<<" is "<<fact;
}
