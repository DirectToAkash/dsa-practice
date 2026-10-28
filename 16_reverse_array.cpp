/*
  #16  Reverse an array in place

  Reverse the array without using a second array (two pointers: swap first and last, move inward).

  Also submit on LeetCode: Reverse String #344

  Test cases (all must pass before you push):
    1 2 3 4 5  ->  5 4 3 2 1
    1 2  ->  2 1
    7  ->  7
*/

#include <iostream>
using namespace std;

void reverseArr(int arr[], int n){
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main() {
  int n = 6;
  int arr[] = {0,2,3,5,3,1};
  reverseArr(arr,n);

  for(int i=0 ; i<n ; i++){
    cout<<arr[i]<<" ";
  }
    

    return 0;
}
