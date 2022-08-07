#include <iostream>
using namespace std;

int largest(int arr[], int n) {
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main() {
  
  int arr[]={3,6,9}; 
  int n=3;
  cout<<largest(arr, n)); 
}

