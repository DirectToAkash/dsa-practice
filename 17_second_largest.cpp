/*
  #17  Second largest element

  Find the second largest WITHOUT sorting, in one pass.

  Test cases (all must pass before you push):
    1 5 3 9 7  ->  7
    10 10 5  ->  5 (not 10!)
    4 4 4  ->  no second largest
*/

#include <iostream>
using namespace std;

void secLar(int arr[], int n){
    int largest = arr[0];
    int second = -1;          // -1 means "not found yet"

    for (int i = 1; i < n; i++) {
        int x = arr[i];

        if (x > largest) {
          second = largest;
            largest = x;
            
            
        }
        else if (x < largest && x > second) {
            second = x;
        }
    }

    if (second == -1) cout << "No second largest" << endl;
    else cout << second << endl;
}

int main() {
  int n = 8;
  int arr[] = {1,2,63,2,2,4,56,11};
  secLar(arr , n );
   

    return 0;
}
