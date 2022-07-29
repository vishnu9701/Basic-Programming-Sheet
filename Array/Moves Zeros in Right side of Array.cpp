#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[] = { 5, 6, 0, 4, 6, 0, 9, 0, 8 };
    int n = sizeof(A) / sizeof(A[0]);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] != 0) {
            swap(A[j], A[i]);
            j++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << A[i] << " "; 
    }
 
    return 0;
}
