#include <iostream>
using namespace std;

int main()
{
    int n=4,sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of first "<<n<<" Number is "<<sum;
}


// Easy Soluion

#include <iostream>
using namespace std;

int main()
{
    int n=4,sum=0;
    cout<<"Sum of first "<<n<<" Number is "<<n*(n+1)*0.5;
}
