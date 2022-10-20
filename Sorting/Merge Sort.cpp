#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void Merge(int arr[], int low, int mid, int high)
{
    int temp[high -low+ 1];
    int i = low;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= high)
    {
        temp[k++] = arr[j++];
    }

   

    for(int i=0;i<high-low+1;i++)
    {
        arr[i+low] = temp[i];
    }
}
void MergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[] = {3,1,4,2,5};
    int n = sizeof(arr) / sizeof(int);
    cout << "Unsorted Array :";
    print(arr, n);
    MergeSort(arr, 0, n - 1);
    cout << "Sorted Array :";
    print(arr, n);
}
