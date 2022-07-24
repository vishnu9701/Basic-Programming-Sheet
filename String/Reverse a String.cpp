#include <iostream>
using namespace std;

int main()
{
    string s="Hanuman";
    int n=s.length();
    int low=0,high=n-1;

    while(low<=high)
    {
        swap(s[low++],s[high--]);
    }
    cout<<s;
}
