#include<iostream>
using namespace std;

int addDigits(int num)
        {
            int sum = 0;
            while (num)
            {
                sum += num % 10;
                num /= 10;
            }
            if (sum < 10)
                return sum;
            else
                return addDigits(sum);        
        }
int main()
{
    int n=363;
   cout<< addDigits(n);
}

