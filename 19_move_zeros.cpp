/*
  #19  Move zeros to end

  Move all 0s to the end, keeping the order of the other elements. Do it in place.

  Also submit on LeetCode: Move Zeroes #283

  Test cases (all must pass before you push):
    0 1 0 3 12  ->  1 3 12 0 0
    0 0 1  ->  1 0 0
    1 2 3  ->  1 2 3
*/

#include <iostream>
using namespace std;

void zerEnd(int arr[], int n){
    int pos = 0;
    int temp;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
          temp = arr[pos];
            arr[pos]=arr[i];
            arr[i] = temp;

            pos++;
        }
    }
}

int main() {
    int arr[] = {0,8,6,4,2,2,7,8};
    int n = 8;
    zerEnd(arr,n);
    cout<<arr[7];

    return 0;
}
