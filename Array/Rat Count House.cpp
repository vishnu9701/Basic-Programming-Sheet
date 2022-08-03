/*
Problem Description :

The function accepts two positive integers ‘r’ and ‘unit’ and a positive integer array ‘arr’ of size ‘n’ as its argument ‘r’ represents
the number of rats present in an area, ‘unit’ is
the amount of food each rat consumes and each ith element of array ‘arr’ represents the amount of food present in ‘i+1’ house number,
where 0 <= i

Note:

Return -1 if the array is null
Return 0 if the total amount of food from all houses is not sufficient for all the rats.
Computed values lie within the integer range.

*/

int ans(int r, int unit, int arr[], int n)
{
    if (n == 0)
    {
        return -1;
    }
    else
    {
        int total_food = r * unit;
        int sum = 0;
        int i = 0;

        for (i = 0; i < n; i++)
        {
            sum = sum + arr[i];
            if (sum >= total_food)
            {
                break;
            }
        }

        if (total_food > sum)
            return 0;
        else
            return i + 1;
    }
}
#include <iostream>
using namespace std;

int main()
{
    int r = 7;
    int unit = 2;
    int n = 8;
    int arr[] = {2, 8, 3, 5, 7, 1, 2};

    cout << ans(r, unit, arr, n);
}
