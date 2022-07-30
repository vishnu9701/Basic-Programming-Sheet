#include <iostream>
using namespace std;
int main()
{
    int n = 20826;
    int min = 9, max = 0;
    while (n > 0)
    {
        int rd = n % 10;
        if (rd > max)
            max = rd;
        if (rd < min)
            min = rd;

        n = n / 10;
    }
    cout << "Minimum Digit is "<<min<<endl;
    cout<<"Maximum Digit is "<<max<<endl;
}
